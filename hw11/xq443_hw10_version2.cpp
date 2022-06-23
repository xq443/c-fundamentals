#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void openInputFile(ifstream& inFile, string &filename);

class Employee{
public:
    Employee();
    Employee(string empName, int empID, double empHourlyPayRate);
    Employee(string empName, int empID, double empHourlyPayRate, int empHoursWorked);

    string getName() const;
    int getID() const;
    double getHourlyPayRate() const;
    int getHoursWorked() const;

    void setName(string empName);
    void setID(int empID);
    void setHourlyPayRate(double empHourlyPayRate);
    void setHoursWorked(int empHoursWorked);
    double calcPayroll() const;
    int compare(const Employee& other) const;

private:
    string name;
    int id;
    double hourlyPayRate;
    int hoursWorked;
};

Employee::Employee(){
    name = "";
    id = 0;
    hourlyPayRate = 0.0;
    hoursWorked = 0;
}

Employee::Employee(string empName, int empID, double empHourlyPayRate){
    name = empName;
    id = empID;
    hourlyPayRate = empHourlyPayRate;
    hoursWorked = 0;
}

Employee::Employee(string empName, int empID, double empHourlyPayRate, int empHoursWorked){
    name = empName;
    id = empID;
    hourlyPayRate = empHourlyPayRate;
    hoursWorked = empHoursWorked;
}

string Employee::getName() const{ return name; }
int Employee::getID() const{ return id; }
double Employee::getHourlyPayRate() const{ return hourlyPayRate; }
int Employee::getHoursWorked() const{ return hoursWorked;}

void Employee::setName(string empName){ name = empName;}
void Employee::setID(int empID){ id = empID;}
void Employee::setHourlyPayRate(double empHourlyPayRate) {hourlyPayRate = empHourlyPayRate;}
void Employee::setHoursWorked(int empHoursWorked){ hoursWorked = empHoursWorked;}
double Employee::calcPayroll() const { return hourlyPayRate * hoursWorked;}

int Employee::compare(const Employee& other) const{ 
    double thisPayroll = calcPayroll();
    double otherPayroll = other.calcPayroll();
    if (thisPayroll < otherPayroll)
    return -1;
    else if (thisPayroll == otherPayroll)
    return 0;
    else //thisPayroll > otherPayroll
    return 1;
}
//double linked list
struct DoublyNode {
    Employee data;
    DoublyNode* next;
    DoublyNode* prev;
};

class DoublyLinkedList{
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void insert(const Employee& element);
    int size() const;
    void addHours(int empID, int empHoursWorked);
    void sort();
    void print() const;
    void printReverse() const;

private:
    void split(DoublyNode* node, DoublyNode** node2);
    DoublyNode* merge(DoublyNode* node1, DoublyNode* node2);
    void mergeSort(DoublyNode** node);

    DoublyNode* head;
    DoublyNode* tail;
};
DoublyLinkedList::DoublyLinkedList(){
    head = NULL;
    tail = NULL;
}

DoublyLinkedList::~DoublyLinkedList(){
    DoublyNode* currNode;

    while (head != NULL){
        currNode = head;
        head = head->next;
        delete currNode;
    }
    tail = NULL;
}

void DoublyLinkedList::insert(const Employee& element){
    DoublyNode* newNode = new DoublyNode;
    newNode->data = element;

    if (head == NULL){
        head = newNode;
        tail = head;
        head->prev = NULL;
        head->next = NULL;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = NULL;
        tail = newNode;
    }
}

int DoublyLinkedList::size() const{
    int count = 0;
    DoublyNode* current = head;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

void DoublyLinkedList::addHours(int empID, int empHoursWorked){
    DoublyNode* current = head;
    while (current != NULL){
        if (current->data.getID() == empID){
            current->data.setHoursWorked(current->data.getHoursWorked() + empHoursWorked);
        }
        current = current->next;
    }
}

void DoublyLinkedList::sort(){
    mergeSort(&head);
    DoublyNode* current = head;
    while (current != NULL && current->next != NULL){
        current = current->next;
    }
        tail = current;
}

void DoublyLinkedList::print() const{
    DoublyNode* current = head;

    while (current != NULL){
        cout << current->data.getName() << ", $" << current->data.calcPayroll() << endl;
        current = current->next;
    }
}

void DoublyLinkedList::printReverse() const{
    DoublyNode* current = tail;

    while (current != NULL){
        cout << current->data.getName() << ", $" << current->data.calcPayroll() << endl;
        current = current->prev;
    }
}

void DoublyLinkedList::split(DoublyNode * node, DoublyNode * *node2){
    DoublyNode* first = node;
    DoublyNode* second = node->next;

    while (second != NULL){
        second = second->next;
        if (second != NULL){
            first = first->next;
            second = second->next;
        }
    }

    *node2 = first->next;
    first->next = NULL;
}

DoublyNode* DoublyLinkedList::merge(DoublyNode * node1, DoublyNode * node2){
    if (node1 == NULL) return node2;
    if (node2 == NULL) return node1;
    
    if (node1->data.compare(node2->data) > 0){
        node1->next = merge(node1->next, node2);
        node1->next->prev = node1;
        node1->prev = NULL;
        return node1;
    }else {
        node2->next = merge(node1, node2->next);
        node2->next->prev = node2;
        node2->prev = NULL;
        return node2;
    }
}

void DoublyLinkedList::mergeSort(DoublyNode * *node){
    if (*node == NULL || (*node)->next == NULL) return;
    DoublyNode* node1 = *node;
    DoublyNode* node2 = NULL;
    split(*node, &node2);

    mergeSort(&node1);
    mergeSort(&node2);

    *node = merge(node1, node2);
}

int main(){
    DoublyLinkedList list;

    ifstream payratesFile;
    ifstream hoursFile;

    string filename1;
    string filename2;
    
    Employee emp;
    int empID;
    double empHourlyPayRate;
    string empName;
    int empHoursWorked;

    cout << "Please Input Employee Payrate file name: ";
    openInputFile(payratesFile, filename1);
    cout << "Please Input Employee Hour file name: ";
    openInputFile(hoursFile, filename2);

    payratesFile >> empID;
    while (payratesFile){
        payratesFile >> empHourlyPayRate;
        payratesFile.ignore(9999, ' ');
        getline(payratesFile, empName);
        Employee emp(empName, empID, empHourlyPayRate);
        list.insert(emp);

        payratesFile >> empID;
    }

    hoursFile >> empID;
    while (hoursFile){
        hoursFile >> empHoursWorked;
        list.addHours(empID, empHoursWorked);

        hoursFile >> empID;
    }

    list.sort(); 
    cout << endl << "*********Payroll Information********" << endl;
    list.print();
    cout << "*********End payroll**************" << endl;
    return 0;
}

void openInputFile(ifstream& inFile, string &filename){
    cin >> filename;
    inFile.open(filename);
    while(!inFile) {
        cout<<"FILE FAILED TO OPEN!"<<endl;
        cout<<"What filename? ";
        cin>>filename;
        inFile.clear();
        inFile.open(filename); 
    }
}

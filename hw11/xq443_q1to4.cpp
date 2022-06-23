/*Name: Xujia Qin  NetId: xq443
1. 
P(n) is the propositation that for every positive integer n,
(4^ (n+1)+ 5^(2n-1)) is divisible by 21.

Basis case: when n = 1, P(1) = (4^ (1+1)+ 5^(2-1)) = (4^2+ 5^1) = 21, which is divisible by 21.
            Hence, P(1) is true.

Inductive hypothesis: We assume that P(k) is true for any arbitraty positive integer, 
                        that (4^ (k+1)+ 5^(2k-1)) is divisible by 21.

Inductive step: Now, we have to prove that P(k+1) is true.

According to the inductive hypothesis, we have a positive integer m, that 4^ (k+1)+ 5^(2k-1) = 21m

P(k+1) = 4^(k+2)+ 5^(2k+1)
       = 4 * 4^(k+1) + 25* 5 ^(2k-1)
       = 4(21m - 5^(2k-1)) + 25* 5 ^(2k-1)
       = 21 * 4m - 4 *5^(2k-1) +25* 5 ^(2k-1)
       = 21 * 4m + 21* 5 ^(2k-1)
       = 21 *(4m +  5 ^(2k-1))
       Since (4m +  5 ^(2k-1)) is an positive integer
       21*(4m +  5 ^(2k-1)) is divisible by 21
       P(k+ 1) is also true.

Therefore, P(n) is true that, for every positive integer n,
(4^ (n+1)+ 5^(2n-1)) is divisible by 21.

2. 
a) C(20,5) - C(11,5) = 15,042

C(20,5) is the total selection ways, and C(11,5) is the case that there is no women in the selected committee
The case that at least one woman must be on the committee is the substration of the above ones.

b) C(20,5) - C(11,5) - C(9,5) = 14916

Similarly, the case that at least one woman and at least one man must be on the
committee should be (the total ways) - (no women selected) - (no men selected)

3. 
a) What is the probability that we roll the die n times?
P(a) = (5/6)^(n - 1) * (1/6)

The last time should be 4 (probability is 1/6)
The previous (n - 1) times should be any numbers expect 4: (5/6)^(n - 1) 

b) What is the expected number of times we roll the die?
E(x) = 1 * (1/6)^1 + 2 * (5/6)^1 * (1/6)^1 + 3 * (5/6)^2 *(1/6)^1 +... + n * (5/6)^(n-1) * (1/6)^1
    = 6///deduction

The probability that the first time we roll 4 is  (5/6)^0 * (1/6)^1
The probability that the second time we roll 4 is  (5/6)^1 * (1/6)^1
Similarly, the n time we roll 4 to end up the game is n * (5/6)^(n-1) * (1/6)^1

4. 
function 1: theta(n^2)

The runtime for the first nested loop is n*log3(n)
The runtime for the second nested loop is n^2
We drop the n*log3(n) because n^2 is more contributive to the growth rate of this function

function 2: theta(log2(n) ^2)
It's a nested loop, 
the runtime for i is theta(log2(n)), and the runtime for j is also theta(log2(n)).
We should multiply them.

*/
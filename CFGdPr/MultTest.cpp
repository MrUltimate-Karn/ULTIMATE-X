/*
D. Multiple Testcases
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
So you decided to hold a contest on Codeforces. You prepared the problems: statements, solutions, checkers, validators, tests... Suddenly, your coordinator asks you to change all your tests to multiple testcases in the easiest problem!

Initially, each test in that problem is just an array. The maximum size of an array is k. For simplicity, the contents of arrays don't matter. You have n tests — the i-th test is an array of size mi (1≤mi≤k).

Your coordinator asks you to distribute all of your arrays into multiple testcases. Each testcase can include multiple arrays. However, each testcase should include no more than c1 arrays of size greater than or equal to 1 (≥1), no more than c2 arrays of size greater than or equal to 2, …, no more than ck arrays of size greater than or equal to k. Also, c1≥c2≥⋯≥ck.

So now your goal is to create the new testcases in such a way that:

each of the initial arrays appears in exactly one testcase;
for each testcase the given conditions hold;
the number of testcases is minimum possible.
Print the minimum possible number of testcases you can achieve and the sizes of arrays included in each testcase.

Input
The first line contains two integers n and k (1≤n,k≤2⋅105) — the number of initial tests and the limit for the size of each array.

The second line contains n integers m1,m2,…,mn (1≤mi≤k) — the sizes of the arrays in the original tests.

The third line contains k integers c1,c2,…,ck (n≥c1≥c2≥⋯≥ck≥1); ci is the maximum number of arrays of size greater than or equal to i you can have in a single testcase.

Output
In the first line print a single integer ans (1≤ans≤n) — the minimum number of testcases you can achieve.

Each of the next ans lines should contain the description of a testcase in the following format:

t a1 a2 … at (1≤t≤n) — the testcase includes t arrays, ai is the size of the i-th array in that testcase.

Each of the initial arrays should appear in exactly one testcase. In particular, it implies that the sum of t over all ans testcases should be equal to n.

Note that the answer always exists due to ck≥1 (and therefore c1≥1).

If there are multiple answers, you can output any one of them.

Examples
inputCopy
4 3
1 2 2 3
4 1 1
outputCopy
3
1 2
2 1 3
1 2
inputCopy
6 10
5 8 1 10 8 7
6 6 4 4 3 2 2 2 1 1
outputCopy
2
3 8 5 7
3 10 8 1
inputCopy
5 1
1 1 1 1 1
5
outputCopy
1
5 1 1 1 1 1
inputCopy
5 1
1 1 1 1 1
1
outputCopy
5
1 1
1 1
1 1
1 1
1 1
Note
In the first example there is no way to distribute the tests into less than 3 testcases. The given answer satisfies the conditions: each of the testcases includes no more than 4 arrays of size greater than or equal to 1 and no more than 1 array of sizes greater than or equal to 2 and 3.

Note that there are multiple valid answers for this test. For example, testcases with sizes [[2],[1,2],[3]] would also be correct.

However, testcases with sizes [[1,2],[2,3]] would be incorrect because there are 2 arrays of size greater than or equal to 2 in the second testcase.

Note the difference between the third and the fourth examples. You can include up to 5 arrays of size greater than or equal to 1 in the third example, so you can put all arrays into a single testcase. And you can have only up to 1 array in the fourth example. Thus, every array should be included in a separate testcase.

*/
/*
G. Gift Set
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp has x of red and y of blue candies. Using them, he wants to make gift sets. Each gift set contains either a red candies and b blue candies, or a blue candies and b red candies. Any candy can belong to at most one gift set.

Help Polycarp to find the largest number of gift sets he can create.

For example, if x=10, y=12, a=5, and b=2, then Polycarp can make three gift sets:

In the first set there will be 5 red candies and 2 blue candies;
In the second set there will be 5 blue candies and 2 red candies;
In the third set will be 5 blue candies and 2 red candies.
Note that in this example there is one red candy that Polycarp does not use in any gift set.

Input
The first line contains an integer t (1≤t≤104). Then t test cases follow.

Each test case consists of a single string containing four integers x, y, a, and b (1≤x,y,a,b≤109).

Output
For each test case, output one number — the maximum number of gift sets that Polycarp can make.

Example
inputCopy
9
10 12 2 5
1 1 2 2
52 311 13 27
1000000000 1000000000 1 1
1000000000 1 1 1000000000
1 1000000000 1000000000 1
1 2 1 1
7 8 1 2
4 1 2 3
outputCopy
3
0
4
1000000000
1
1
1
5
0

*/

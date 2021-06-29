/*
B. Nearest Point Function
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Your friend has created a nearest point function. For a given array of integer points x (sorted in ascending order, without any duplicates) and a point y it can find the nearest point from x to the point y. In other words, it will find such a point xi that |y−xi| is the minimum possible, where |a| is the absolute value of a.

For example, if x=[1,2,5,7,9,11], the answer for y=3 will be 2, the answer for y=5 will be 5 and the answer for y=100 will be 11.

This function is a bit buggy, though. If there are several nearest points to the given one, the function crashes. For example, if x=[1,2,5,7,9,11] (as above) and y=6, the function will crash, since points 5 and 7 are both the nearest points for 6.

Your task is, for a given array of integer points x (sorted in ascending order, without any duplicates), determine if it is possible to cause the function to crash by choosing some integer point y.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤104) — the number of test cases.

The first line of the test case contains one integer n (2≤n≤2⋅105) — the number of points in the array x.

The second line of the test case contains n integers x1,x2,…,xn (1≤xi≤109), where xi is the i-th point in the array x.

All points in the array x are distinct, and the array x is sorted in ascending order (in other words, x1<x2<…<xn).

The sum of n over the test cases in the input does not exceed 2⋅105 (∑n≤2⋅105).

Output
For each test case, print YES if it is possible to find some integer point y that will crash the function and NO otherwise.

Example
inputCopy
7
2
1 3
2
1 100
3
1 50 101
2
1 1000000000
2
1 999999999
6
1 2 5 7 9 11
6
1 2 5 8 9 12
outputCopy
YES
NO
NO
NO
YES
YES
NO
Note
In the first test case of the example, the function crashes if y=2 is chosen.

In the fifth test case of the example, the function crashes if y=500000000 is chosen.

In the sixth test case of the example, the function crashes if y=10 is chosen.
*/
import java.lang.AssertionError
//typedef
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
private fun myAssert(x: Boolean) {
    if (!x) {
        throw AssertionError()
    }
}

fun main(args: Array<String>) {
    var tc = readInt()
    for (q in 0 until tc) {
        var x = readInt()
        var cnt=0
        var a = readInts()
        var at = IntArray(x)
        for (i in 0 until x){
        at[i]=a[i]
        }
        at.sort()
        for(i in 0 until x-1){
        if((at[i+1]-at[i])%2==0)
        cnt++
        }
        if(cnt>0)
        println("Yes")
        if(cnt==0)
        println("No")
    }
}

For a string S, we define f(S) as the number of distinct palindromic substrings of S.
For example, f(abaa)=4 because we can find the palindrome substrings a,b,aa and aba.

Call a string S good if f(S)≤5, i.e. it has at most 5 distinct palindrome substrings.

You are given an integer N. Construct any good string of length N using only lowercase Latin characters. It can be proven that at least one good string exists. You are allowed to print any good string.

Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of input contains a single integer N.

Output Format:
For each test case, output a string S of length N, using only lowercase Latin characters, with  f(S)≤5.

Constraints:
1≤T≤100
1≤N≤100


INPUT
2
2
4

OUTPUT
aa
abaa
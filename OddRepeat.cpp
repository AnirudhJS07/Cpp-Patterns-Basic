/*Chef has an array consisting of N+K−1 integers. The array contains only the first N positive odd numbers. Each number appears exactly once, except for one number which appears exactly K times. The sum of integers in Chef's array is equal to S.

For example, for N=3, K=2, the possible arrays could be [1,1,3,5], [3,1,3,5], [5,3,5,1]. For N=1, K=3, there is only one possible array: [1,1,1].

Chef gives you three integers N, K and S and asks you to find the only element which appears K times in his array.

It is guaranteed that for the given input, there exists a valid array consisting of N+K−1 elements with a sum exactly equal to S.

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers N,K,S.
Output Format
For each test case, print a single line containing the integer which appeared K times in Chef's array.

Constraints
1≤T≤1000
1≤N≤104
1≤S≤109
2≤K≤104
Sample Input 1 
3
3 2 14
5 4 28
2 3 10
Sample Output 1 
5
1
3
Explanation
Test case 1: Chef's array could be [5,3,5,1].

Test case 3: Chef's array could be [3,1,3,3].
*/


#include <iostream>
using namespace std;

int oddsum(int n)
{
	long sum=0;
	int i=1;
	while(n--)
	{
		sum+=i;
		i+=2;
	}
	return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		long s;
		cin>>n>>k>>s;
		s-=oddsum(n);
		s=s/(k-1);;
		cout<<s<<"\n";
	}
}
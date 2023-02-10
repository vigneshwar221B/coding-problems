#include <iostream>
using namespace std;

void printN(int n)
{
	if (n < 0)
		return;
	printN(n - 1);
	cout << n << endl;
}

// int sumToN(int n)
// {
// 	if (n <= 0)
// 		return 0;

// 	int prevSum = sumToN(n - 2);

// 	return n + prevSum;
// }

// int sumToN(int n, int s=0)
// {
// 	if (n <= 0)
// 		return s;
	
// 	int prevSum = sumToN(n - 1, s+n);

// 	return prevSum;
// }

// int sumToN(int n, int i = 0, int s=0)
// {
// 	if (i > n)
// 		return s;

// 	int prevSum = sumToN(n, i+1, s + i);
// 	cout<<i<<": "<<s+i<<endl;

// 	return prevSum;
// }

int sumToN(int n)
{
	if (n==0) return 0;
	return n + sumToN(n-1);
}

// int sumToN(int n, int i=0)
// {
// 	if (i == n)
// 		return i;

// 	int sum = sumToN(n, i+1);

// 	return i + sum;
// }

int main()
{
	// print from 1 to n
	// int n = 10;
	// printN(n);

	// sum to N
	cout << sumToN(5);
}
#include <iostream>
using namespace std;

unsigned long long int factorial(int n)
{
	if(n==1) return 1;
	return n*factorial(n-1);
}

int main()
{
	int n;
	cin >> n;
	cout << factorial(n) << endl;
}

// 28.Write a function prototype for a function that calculates the factorial of a number.
#include <iostream>
using namespace std;
int fact(int n);
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n);
}
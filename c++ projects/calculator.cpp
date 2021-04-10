//This code is a simple calculator for console
#include <iostream>
#include <cmath> //library for power and square root
#include <typeinfo>
using namespace std;
sqroot(double number)
{
    cout << "square root of " << number << " = " << endl;
    cout << sqrt(number) << endl;
    return 0;
}
int main()
{
    double num1, num2, result;
    char operatorr;
    cout << "allowed operators are: + , -  , / , *  , s (square root) , p (power) " << endl;
    cout << "insert the number" << endl;
    cin >> num1;
    cout << "insert the operator" << endl;
    cin >> operatorr;
    if (operatorr == 's')
    {
        sqroot(num1);
    }
    cout << "insert the next number " << endl;
    cin >> num2;
    if (operatorr == '+')
    {
        cout << "Addition of two numbers" << endl;
        result = num1 + num2;
    }
    else if (operatorr == '-')
    {
        cout << "subtraction of two numbers" << endl;
        result = num1 - num2;
    }
    else if (operatorr == '*')
    {
        cout << "multiplication of two numbers" << endl;
        result = num1 * num2;
    }
    else if (operatorr == '/')
    {
        cout << "division of two number" << endl;
        result = num1 / num2;
    }
    else if (operatorr == 'p')
    {
        cout << num1 << "to the power of" << num2 << endl;
        result = pow(num1, num2);
    }
    else
    {
        cout << "Input is incorrect";
    }
    cout << result << endl;
    main();
}

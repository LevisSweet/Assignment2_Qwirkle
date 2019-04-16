#include <iostream>
#include <cmath>
#include "Lesson1.h"

using namespace std;

Lesson1::calc()
{
    double n1, n2;
    char op;
    double result;
    bool r = true;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;


    while(r)
    {
        cout << "Enter operator: ";
        cin >> op;

        switch(op)
        {
        case '+':
            result = n1 + n2;
            break;

        case '-':
            result = n1 - n2;
            break;

        case '/':
            result = n1/n2;
            break;

        case '*':
            result = n1 * n2;
            break;

        default:
            cout << "Invalid operator pick again\n" << endl;
        }



    }
}



   /* (op == '+')
    {
       result = n1 + n2;
    }
    else if(op == '-')
    {
        result = n1 - n2;
    }
    else if(op == '*')
    {
        result = n1 * n2;
    }
    else if(op == '/')
    {
        result = n1/n2;
    }
    else
    {
        cout << "Invalid operator chose again" << endl;
    }*/


Lesson1::Lesson1()
{
    //ctor
}

Lesson1::~Lesson1()
{
    //dtor
}
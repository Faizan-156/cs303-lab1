#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "Sum = " << a + b << endl;
    return 0;
}


/*
------ Compiler Output (error) ------
error2_undeclared_variable.cpp: In function 'int main()':
error2_undeclared_variable.cpp:7:29: error: 'b' was not declared in this scope
    7 |     cout << "Sum = " << a + b << endl;
      |                             ^
*/

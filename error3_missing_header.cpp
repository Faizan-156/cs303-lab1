using namespace std;

int main()
{
    cout << "Hello" << endl;
    return 0;
}


/*
------ Compiler Output (error) ------
error3_missing_header.cpp: In function 'int main()':
error3_missing_header.cpp:5:5: error: 'cout' was not declared in this scope
    5 |     cout << "Hello" << endl;
      |     ^~~~
error3_missing_header.cpp:1:1: note: 'std::cout' is defined in header '<iostream>'; did you forget to '#include <iostream>'?
  +++ |+#include <iostream>
    1 | using namespace std;
error3_missing_header.cpp:5:24: error: 'endl' was not declared in this scope
    5 |     cout << "Hello" << endl;
      |                        ^~~~
error3_missing_header.cpp:1:1: note: 'std::endl' is defined in header '<ostream>'; did you forget to '#include <ostream>'?
  +++ |+#include <ostream>
    1 | using namespace std;
*/

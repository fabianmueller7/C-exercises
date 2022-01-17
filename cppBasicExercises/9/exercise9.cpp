#include <iostream>
#include <limits>
#include <cstddef>
using namespace std;
 
int main() 
{
    cout << "Display the operation of pre and post increment and decrement :" << endl;
    cout << "-------------------------------------------------" << endl;
    int number = 57;
    cout << "The number is: " << number << endl; 
    cout << "After post increment by 1 the number is: " << number++ << endl;
    cout << "After pre increment by 1 the number is: " << ++number << endl;
    cout << "After increasing by 1 the number is: " << number + 1 << endl;
    cout << "After post decrement by 1 the number is: " << number-- << endl;
    cout << "After pre decrement by 1 the number is: " << --number << endl;
    cout << "After pre decrement by 1 the number is: " << number - 1 << endl;
    cout << "At the end the number is: " << number << endl;
    return 0;
}
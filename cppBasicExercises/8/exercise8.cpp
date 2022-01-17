#include <iostream>
#include <limits>
#include <cstddef>
using namespace std;
 
int main() 
{
    cout << "Range of int is [" << std::numeric_limits<int>::min() << "," << std::numeric_limits<int>::max() << "]" << endl;
    cout << "-------------------------------------------------" << endl;
    int min = std::numeric_limits<int>::min();
    int max = std::numeric_limits<int>::max();
    cout <<" Overflow the integer range and set in minimum range : " << max + 1 << endl; 
    cout <<" Increasing from its minimum range : " << max + 2 << endl; 
    cout <<" Product is :" << max * max << endl; 
 
    cout <<" Underflow the range and set in maximum range : " << min - 1 << endl; 
    cout <<" Decreasing from its maximum range : " << min - 2 << endl; 
    cout <<" Product is : " << min * min << endl; 
    cout << endl;

    return 0;
}
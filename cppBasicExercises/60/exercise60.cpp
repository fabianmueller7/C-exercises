#include <iostream>
#include <limits>
#include <cstddef>
using namespace std;
 
int main() 
{
    int bn1;
    int bn2;
    int i=0, r=0;
	int sum[20]; 

    cout << "Input the first number: ";
    cin >> bn1;
    cout << "input the second number; ";
    cin >> bn2;

    //1010
    //0011
    //----
    //1101
    
    while (bn1 != 0 || bn2 != 0) 
    {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
        }
        if (r != 0) {
        sum[i++] = r;
    }
    --i;
    cout<<" The sum of two binary numbers is: ";
    while (i >= 0) {
        cout<<(sum[i--]);
    }

    return 0;
}
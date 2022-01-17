#include <iostream>
using namespace std;
 
int main() 
{
    int five = 5;
    double eight = 8.0;
    float threepointseven = 3.7;
    int seven = 7;

    cout << " 5 + 7 = " << five+seven << endl;
    cout << " 3.7 + 8.0 = " << eight+threepointseven << endl;
    cout << " 5 + 8.0 = " << five+eight << endl;
    cout << " 5 - 7 = " << five-seven << endl;   
    cout << " 3.7 - 8.0 = " << threepointseven-eight << endl;   
    cout << " 5 - 8.0 = " << five-eight << endl;
    cout << " 5 * 7 = " << five*seven << endl;
    cout << " 3.7 * 8.0 = " << threepointseven*eight << endl;
    cout << " 3.7 * 5 = " << threepointseven*five << endl;
    cout << " 7 / 5 = " << seven/five << endl;
    cout << " 8.0 / 3.7 = " << eight/threepointseven << endl;
    cout << " 7 / 3.7 = " << seven/threepointseven << endl;
    return 0;
}
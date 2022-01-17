#include <iostream>
using namespace std;


int main() {


    void userMainmenu() {

        int *arraypointer;

        while(true) {
            int selection;
            cout << "What do you want to do?" << endl;
            cout << "-----------------------------------" << endl;
            cout << "1 => For generating a random list?" << endl;
            cout << "2 => For sorting the list" << endl;
            cout << "3 => For outputing the list" << endl;
            cout << "4 => For deleting the list" << endl;
            cin >> selection;

            switch(selection) {
                case 1 :
                        arraypointer = generateNumbers(10000)
                        break;     
                case 2 : cout << '2'
                        break;
                case 3 : cout << '2'
                        break;
                case 4 : cout << '2'
                        break;
                default : selection = 0
                        break;
            }
        }
    }

    int* generateNumbers(int countOfNumbers) {
        int *arraypointer;
        int numbers[] =  {};
        for(int i = 0; i < countOfNumbers; i++) {
            numbers[i] = rand() % 100000 + 1;
        }
        arraypointer = numbers;
        return arraypointer;
    }

    void outputArray(int *arraypointer) {
        while(*arraypointer != '\0') {
            cout << *arraypointer;
            arraypointer++;
        }
    }

    //start application
    userMainmenu()
}




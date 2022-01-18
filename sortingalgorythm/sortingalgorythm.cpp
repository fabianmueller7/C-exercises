#include <iostream>
using namespace std;

int *generateNumbers()
{
    int countOfNumbers;
    cout << "What do you want to do?" << endl;
    cout << "-----------------------------------" << endl;
    cin >> countOfNumbers;
    int *arraypointer;
    int numbers[10000] = {};
    for (int i = 0; i < countOfNumbers; i++)
    {
        numbers[i] = rand() % 100000 + 1;
    }
    arraypointer = &numbers[0];
    cout << "Array generated!" << endl;
    return arraypointer;
}

void outputArray(int *arraypointer)
{
    while (*arraypointer != '\0')
    {
        cout << *arraypointer << endl;
        arraypointer++;
    }
}

void deleteArray(int *arraypointer)
{
    while (*arraypointer != '\0')
    {
        cout << *arraypointer << endl;
        arraypointer++;
    }
}

void bubblesort(int *arraypointer)
{
    bool finishedsorting = false;
    int *startarraypointer = arraypointer;

    while (finishedsorting == false)
    {
        finishedsorting = true;
        while (*arraypointer != '\0')
        {
            if (*arraypointer > *(arraypointer + 1))
            {
                int temp = *(arraypointer + 1);
                *(arraypointer + 1) = *arraypointer;
                *arraypointer = temp;
                finishedsorting = false;
            }
            arraypointer++;
        }
        arraypointer = startarraypointer;
    }
}

void userMainmenu()
{

    int *arraypointer;

    while (true)
    {
        int selection;
        cout << "What do you want to do?" << endl;
        cout << "-----------------------------------" << endl;
        cout << "1 => For generating a random list?" << endl;
        cout << "2 => For sorting the list" << endl;
        cout << "3 => For outputing the list" << endl;
        cin >> selection;

        switch (selection)
        {
        case 1:
            arraypointer = generateNumbers();
            break;
        case 2:
            bubblesort(arraypointer);
            break;
        case 3:
            outputArray(arraypointer);
            break;
            ;
        default:
            selection = 0;
            break;
        }
    }
}

int main()
{
    //start application
    userMainmenu();
    return 0;
}

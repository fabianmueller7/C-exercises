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
    if (!arraypointer)
    {
        cout << "array ist emtpy! " << endl;
        return;
    }

    while (*arraypointer != '\0')
    {
        cout << *arraypointer << endl;
        arraypointer++;
    }
}

void swap(int *firstswapelement, int *secondswapelement)
{
    int temp = *firstswapelement;
    *firstswapelement = *secondswapelement;
    *secondswapelement = temp;
}

int countOfElements(int *arraypointer)
{
    int count = 0;
    while (*arraypointer != '\0')
    {
        count++;
        arraypointer++;
    }
    return count;
}

void bubblesort(int *arraypointer)
{
    if (!arraypointer)
    {
        cout << "array ist emtpy! " << endl;
        return;
    }

    int n = countOfElements(arraypointer);
    cout << "number of elements " << n << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arraypointer + j) > *(arraypointer + j + 1))
            {
                swap((arraypointer + j), (arraypointer + j + 1));
            }
        }
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

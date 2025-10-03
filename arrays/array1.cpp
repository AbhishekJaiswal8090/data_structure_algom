#include <iostream>
using namespace std;

// array are the collection of the same type of data stored in contigous memory
// contigous memory => it means that the data will be stored at same location sequentially with differnce in their type of data in the address

void Array()
{
    int arr[10] = {2, 4, 6, 8, 10};

    //    calculating length of the arrays
    int length;
    length = sizeof(arr) / sizeof(int);
    cout << length << endl;

    //    ITERATING Over array and printing value and output of array
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }

    // input of array thorugh for loop
    cout << "Enter rest of the values of array" << endl;
    for (int i = 5; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "Here is the total arrays values from index 0 to 9" << endl;
    for (int j = 0; j < length; j++)
    {
        cout << arr[j] << endl;
    }
}

int main()
{

    Array();
}
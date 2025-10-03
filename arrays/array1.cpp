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

int LargestinArray(int arr[], int length)
{

    int max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// implementing linear search
void LinearSearch(int arr[], int key, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is found into the array" << endl;
            break;
        }
    }
}

int main()
{
    int arr[5] = {45, 700, 43, 24, 10};
    int length;
    length = sizeof(arr) / sizeof(int);
    int key = 90;

    // cout << LargestinArray(arr, length) << endl;
    // Array();

    // array are  passe by refernce
    //     int arr [2]= {2,4};
    //     cout<<*(arr+1)<<endl;
    //    int* var;
    //    var = arr;
    //    cout<<var<<endl;

    //    LinearSearch(arr,key,length);

    
    //    reversal of array
    int temp;
    for(int i=0; i<length/2; i++){
        temp = arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i]=temp;
    }

    for(int i=0;  i<length; i++){
        cout<<arr[i]<<endl;
    }
}
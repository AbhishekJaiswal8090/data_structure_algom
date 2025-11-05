#include <iostream>
using namespace std;

// recursion
// when a function repeatedly call itself

// a function with no base case
// void func()
// {
//     cout << "function call works";
//     func();
// }

// void printArr(int arr[], int n, int i)
// {

//     cout << arr[i] << ",";
//     return printArr(arr, 5, i++);
// }

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n* factorial(n-1);
}

// it is a method of solving computational problems where the solution 
// depends on solution to smaller instances of the same problems 

// => Base Case is the most important in order to know wehen to stop the loop



int main()
{

    // // func();
    // int i = 0;
    // int arr[5] = {2, 4, 6, 8, 10};
    // int n = 5;
    // printArr(arr, 5, i);
    int ans = factorial(5);
    cout<<ans<<endl;
 


    return 0;
}
// Today we are going to study the greedy approach
// Mkaing greedy choices at each step
// chose the local optimum and hope for global optimum
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // lets solve a proble of finding the larget val in an array
    // so initially we initialise the first as the largest value
    // and then each step by comparisnon we can find out the gloablly maximum element
    // this is exactly how greeedy works
    int a;
    cin >> a;
    vector<int> arr(a);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int largest = a[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i] > largest)
        {
            largest = a[i];
        }
    }
}

// The problem which follows optmal sub structure property can be solved using greedy approach
// A problem is said to have an optimal sub structure if it can be
// divided into sub structure if it can be divided into sub probl;ems whose
// optimal solutions are part of overall optimal solution
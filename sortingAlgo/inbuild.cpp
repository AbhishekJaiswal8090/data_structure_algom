#include<iostream>
#include<algorithm>
using namespace std;

// IN-BUILD SORTING METHOD TECHNIQUES

// Ascending order
// sort(start ,end);

// Descending order
// sort(start ,end,greater<int>())

int main(){

    int arr[9]={4,0,2,0,1,76,56,67,9};
    sort(arr,arr+9);

    for(int i=0; i<9; i++){
        cout<<arr[i]<<",";
    }

    cout<<endl;

    sort(arr,arr+9 ,greater<int>());
     for(int i=0; i<9; i++){
        cout<<arr[i]<<",";
    }



}
#include<iostream>
#include<climits>
using namespace std ;

// implemetning counting sorting 

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}




void Countsort(int arr[] , int n){
    int freq[100000];
    int minVal=INT_MAX;
    int maxVal =INT_MIN;
    for(int i=0; i<n; i++){
      minVal =min(minVal,arr[i]);
      maxVal =max(maxVal,arr[i]);
    }

    // !st step

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    // 2nd step
    for(int i=minVal ,j=0; i<=maxVal; i++){
        while(freq[i] >0){
            arr[j++]=i;
            freq[i]--;
        }
    }

    printArr(arr,n);
}


int main(){

    
    int arr[]= {3,6,1,2,9};
    int n=sizeof(arr)/sizeof(int);
    Countsort(arr,n);

}
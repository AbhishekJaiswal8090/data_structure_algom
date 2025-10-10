#include<iostream>
using namespace std;


// implemetning bubble sort


void PrintSorted(int* arr ,int n){
      for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
      }
}

void BubbleSort(int *arr,int n){
     for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] >arr[j+1]){
                swap(arr[j] ,arr[j+1]);
            }
        }
     }

     PrintSorted(arr,n);
}


int main(){
  
    int arr[5] ={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);

    BubbleSort(arr ,n);
   

}
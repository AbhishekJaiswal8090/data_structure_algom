#include<iostream>
using namespace std;

void PrefixSum(int *arr,int n){
    int ans[10]={0};
    int sum=0;
    for(int i=0; i<n; i++) {
      sum=sum+arr[i];
      ans[i]=sum;
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<",";
    }


}
int main(){

    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    PrefixSum(arr,10);
}
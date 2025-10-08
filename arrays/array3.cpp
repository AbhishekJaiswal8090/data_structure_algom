#include<iostream>
#include<climits>
using namespace std;

void trapWater(int *height,int n){
    
    int leftmax[20000];

    // initialsing first val to minus of negative
    leftmax[0]=INT_MIN;

    // calculating leftmax vals
    for(int i=1; i<(n-1); i++){
        leftmax[i]=max(height[i-1],leftmax[i-1]);
        cout<<leftmax[i]<<",";
    }



}



int main(){
int height[7]={4,2,0,6,3,2,5};
int n =sizeof(height)/sizeof(int);
trapWater(height ,n);
}
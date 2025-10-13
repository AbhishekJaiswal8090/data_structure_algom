#include<iostream>
using namespace std;

// 2D ARRAYS 


int main(){
    cout<<"<==2D ARRAY-S==>"<<endl; 
    float student [2][5]={{5.9,5.5,6,5.9,5.11},
                          {55,67,75,68,56}};

    for(int i=0; i<2; i++){
        for(int j =0; j<5; j++){
            cout <<student[i][j]<<",";
        }
    }



}
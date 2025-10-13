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

    // I/O 2d array;
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
    
   cout<<endl;
    // modifying and printing
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<",";
        }
        cout<<endl;
    }    

    // 2d arrays in memory still are stored as linearly just like 
    // 1d arrays 


}
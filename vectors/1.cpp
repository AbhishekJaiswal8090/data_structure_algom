#include<iostream>
using namespace std;

int main(){
    // static array alloaction
    // int arr[10]={3,4,5,6,7,8,9};

    // while vectors are widely used for dynamic memory and elements alloaction
    // even space can be shrink and maximize based on the elements we pushed thhrough it

    int sixe;
    cin>>sixe;

    int *arr = new int[sixe];
    int x=1;
    // arr[0]= *(arr+0);
    // arr[1]= *(arr+1);
    // arr[2]= *(arr+2);
    // arr[3]= *(arr+3);

    for(int i=0; i<sixe; i++){
        arr[sixe]=x;
        cout<<arr[i]<<" ";
        x++;
    }

    cout<<endl;
    



    return 0;
}
#include<iostream>
using namespace std;

// diagonal sum problem
int diagonalSum(int mat[3][3] ,int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
        sum +=mat[i][n-i-1];
    }
    if(n%2==1){
        sum -= mat[n/2][n/2];
    }
    return sum;
}
int main(){

}
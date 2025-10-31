#include<iostream>
using namespace std;

// PRACTICE QUESTIONS 

int main(){

    // PREDICT THE OUTPUT FOR ~4
    
    // BIN FOR -> 00000100 NEAGTING IT BECOMES 11111011 AND THEN
    // 1'S COMP BECOMES 0000100 +1  == 0000101 AND THE MSB DETREMINES NUM IS NEGATIVE
    // SO THE ANSWER WILL BE -5 
    cout<<(~4)<<endl;

    // PREDICT THE OUTPUT FOR 8 >> 1
    // 00001000 >> `1 BECOMES => 00000100 
    cout<<(8>>1)<<endl;


    return 0;
}
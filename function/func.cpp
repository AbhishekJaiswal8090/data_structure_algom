#include <iostream>
using namespace std;

// a function is a block of code which runs when it's called


//simple function
void PrintName()
{
   cout << "Hello Bro \n";
}
void Assistant()
{
   PrintName();
   cout << "work finsihed :)\n";
}


//function with parameter

int sum(int a , int b=1){
   cout<<(a +b)<<"\n";
   return true;
}

// Default parameters 
// are the values in which case if the user doesn't pass the argument to that 
// parameter so this parameter is being used  

int diff(int a ,int b){
   cout<<(a-b)<<"\n";
   return true;
}

int Product(int a , int b){
   cout<<(-a *b)<<"\n";
   return true;
}

int OddoRven(int n){
   if (n % 2 ==0){
      cout<<"Num. is even"<<"\n";
   }else{
      cout<<"Num. is odd"<<"\n";
   }
   return 0;
}

// Calcualting FACTORIAL
int Factorial(int n){
   int fact =1;
   for (int i=1; i<=n; i++){
     fact = fact *i;
   }
   cout<<(fact)<<"\n";
   return fact;
}


//checking PrimeNumber 

int PrimeNumber(int n){
   // 1 => Non Prime
   bool isPrime=true;
   for(int i=2; i<=(n-1); i++){
      if(n % i == 0){
         isPrime =false;
         break;
      }
   }
   if(isPrime == true){
      cout<<"Num is prime \n";
   }else{
      cout<<"Num is non prime number\n";
   }
}

// Binomial Coefficient 
int BinCoeff(int n , int r){
   int val1 = Factorial(n);
   int val2 =Factorial(r);
   int val3=Factorial(n-r);

   int bin = val1 / (val2 * val3);
   cout<<(bin)<<"\n";
   
   return bin;
}

// === Scope ===
// scope is the area where an variable can be used and accesed

int main()
{
   Assistant();
   sum(2,4);
   diff(5,4);
   Product(3,5);
   OddoRven(5);
   Factorial(6);
   PrimeNumber(23);
   BinCoeff(3 , 2);
   return 0;
}

//so basically functions are defined before main function 
// but in case if we wants to defined below the main function
//then we have to tell the compiler that the particular function exists
// somewhere into the code and to do so we have to mention the function name before the main dunction like this 
// void functionname();
// and then we can define function below the main 

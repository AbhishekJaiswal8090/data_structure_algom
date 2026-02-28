#include <iostream>
using namespace std;

// a function is a block of code which runs when it's called

// simple function
void PrintName()
{
   cout << "Hello Bro \n";
}
void Assistant()
{
   PrintName();
   cout << "work finsihed :)\n";
}

// function with parameter

int sum(int a, int b = 1)
{
   cout << (a + b) << "\n";
   return true;
}

// Default parameters
// are the values in which case if the user doesn't pass the argument to that called function
//  so this parameter is being used

int diff(int a, int b)
{
   cout << (a - b) << "\n";
   return true;
}

int Product(int a, int b)
{
   cout << (-a * b) << "\n";
   return true;
}

int OddoRven(int n)
{
   if (n % 2 == 0)
   {
      cout << "Num. is even" << "\n";
   }
   else
   {
      cout << "Num. is odd" << "\n";
   }
   return 0;
}

// Calcualting FACTORIAL
int Factorial(int n)
{
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
      fact = fact * i;
   }
   cout << (fact) << "\n";
   return fact;
}

// checking PrimeNumber

int PrimeNumber(int n)
{
   // 1 => Non Prime
   bool isPrime = true;
   for (int i = 2; i <= (n - 1); i++)
   {
      if (n % i == 0)
      {
         isPrime = false;
         break;
      }
   }
   if (isPrime == true)
   {
      // cout << "Num is prime \n";
      return isPrime;
   }
   else
   {
      // cout << "Num is non prime number\n";
      return isPrime;
   }
}

// Binomial Coefficient
int BinCoeff(int n, int r)
{
   int val1 = Factorial(n);
   int val2 = Factorial(r);
   int val3 = Factorial(n - r);

   int bin = val1 / (val2 * val3);
   cout << (bin) << "\n";

   return bin;
}

// function overloading
// when we have the function with same name but with different type of parameter
// this is called function overloading

int sum(double a, double b)
{
   cout << (a + b) << "\n";
   return true;
}

int sum(int a, int b, int c)
{
   return (a + b + c);
}

// print all the primes in a range from 2 to n

void allPrime(int n)
{
   for (int j = 2; j <= n; j++)
   {
      bool isPrime = PrimeNumber(j);
      if (isPrime == true)
      {
         cout << j << "\n";
      }
   }
}

// checking if a num is Palindrome or not
void Palindrome(int n)
{
   int original = n;
   int reversed_num = 0;
   while (n > 0)
   {
      int last_digit = n % 10;
      int reversed_num = reversed_num * 10 + last_digit;
      n = n / 10;
   }
   if (original == reversed_num)
   {
      cout << "Num is Palindrome \n";
   }
   else
   {
      cout << "Num is not Palindrome \n";
   }
}
// === Scope ===
// scope is the area where an variable can be used and accesed

int main()
{
   // Assistant();
   // sum(2, 4);
   // diff(5, 4);
   // Product(3, 5);
   // OddoRven(5);
   // Factorial(6);
   // PrimeNumber(23);
   // BinCoeff(3, 2);
   // sum(45.6, 768.0);
   allPrime(20);
   Palindrome(121);
   Palindrome(231);
   return 0;
}

// so basically functions are defined before main function
//  but in case if we wants to defined below the main function
// then we have to tell the compiler that the particular function exists
//  somewhere into the code and to do so we have to mention the function name before the main dunction like this
//  void functionname();
//  and then we can define function below the main

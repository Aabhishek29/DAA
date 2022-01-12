/*
Q.3 Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle. Following are the first 6 rows of Pascal’s Triangle.
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1
*/

#include<iostream>
#include<iomanip>

using namespace std;


long fact(long n){
   int i, fact = 1;
   for(i = n; i>1; i--)
      fact *= i;
   return fact;
}


long nCr(long n, long r){
   long nume = 1, i;
   for(i = n; i>r; i--)
      nume *= i;
   return long(nume/fact(n-r));
}


int main(){
    int n = 5;
    for(int i = 0; i<n; i++){
      for(int j = 0; j<(n-i-1); j++)
         cout <<setw(3)<< " ";
      for(int j = 0; j<(i+1); j++)
         cout <<setw(3)<< nCr(i, j) <<setw(3)<< " ";
      cout << endl;
   }
}
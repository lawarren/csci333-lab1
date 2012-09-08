#include <iostream>
#include <math.h>

//Euler problem 7. Credit to en.wikipedia.org/wiki/Primality_test for math
//information. Uses nested loops to run several tests on a number (n) to determi//ine if its prime. When 10001st prime is reached its printed out.
//Author: Luke Warren 2012

int main() {
 int x = 1; //acts as a counter increasing when prime test is met. Starts at 1 /            //so that 1st test fail is not counted (divisible by 2)
 int n = 1; //number on which prime tests are performed
 int wp = 0; //"wasnt prime" number was divisble by a factor other than itself 
  while (x < 10001){
   n+=2;
   for(int m=2; m<=(n/2); ++m){
      if(n%m==0){
        wp++;
        }
     }
    if(wp==0){
       x++;
       }
    else{
     wp=0;
   
      }

 }

std::cout << "The 10001st prime number is " << n << std::endl;
} 

#include <iostream>

int main(){

  int x = 0;

  for(int i = 0; i<1000; ++i) {
    if (i%3==0 || i%5==0){
      x = x+i;
      }
   }
 std::cout << "Sum of multiples of 3 or 5 below 1000 is " << x << std::endl;
}

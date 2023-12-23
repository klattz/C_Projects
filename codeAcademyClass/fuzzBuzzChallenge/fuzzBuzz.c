#include <stdio.h>

int i;
int check3, check5;

int main () {
  
  for (i = 1; i <= 100; i++) {
    check3 = i % 3;
    //printf("Check3: %d\t", check3);
    check5 = i % 5;
    //printf("Check5: %d\n", check5);

    if (check3 == 0 && check5 == 0) {
      printf("FizzBuzz\n");

    } else if (check5 == 0) {
      printf("Buzz\n");

    } else if (check3 == 0) {
      printf("Fizz\n");
      
    } else {
      printf("%d\n", i);
    }
  } 
}

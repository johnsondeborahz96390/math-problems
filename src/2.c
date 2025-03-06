#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  srand(time(NULL)); // initialize random seed

  int num = rand() % 100; // generate a random number between 0 and 99

  double result = sqrt(num); // calculate square root of num

  printf("The square root of %d is: %f\n", num, result);

  return 0;
}

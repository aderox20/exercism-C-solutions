#include "difference_of_squares.h"
/////////////////
// Start D.O.S //
/////////////////
unsigned int sum_of_squares(unsigned int number) {
  unsigned int total_num = 0;
  for(unsigned int i = 0; i <= number; i++) {
   total_num += i * i;
  }
    return total_num; 
}
unsigned int square_of_sum(unsigned int number) {
 unsigned int sum = 0;
  for(unsigned int i = 1; i <= number; i++) {
   sum += i;
  }
    return sum * sum;
}
unsigned int difference_of_squares(unsigned int number) {
  return square_of_sum(number) - sum_of_squares(number);
}

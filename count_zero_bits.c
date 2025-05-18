#include <stdio.h>
/*helping function to count the zeros in binary */
int count_zero_bits(unsigned int num);
/*the function gets a decimal numbur and count how many zeros in the binary version for the same number */
int main() {
  int number;
  int ch;
/*gets the number from the user*/
  printf("please enter a decimal number:  ");
  scanf("%d", &number);
/*display the count*/
  printf("You enterd the number  %d \nThe total zeros in the binary for number "
         "%d is %d .\n",
         number, number, count_zero_bits(number));
while ((ch = getchar()) != '\n' && ch != EOF);
printf("Press Enter to exit...");
getchar(); 

  return 0;
}
int count_zero_bits(unsigned int num) {
  int count = 0, i;
/*for loop to count the zeros in the binary*/
  for (i = 0; i < sizeof(num) * 8; i++) {
    if ((num >> i) % 2 == 0) {
      count += 1;
    }
  }
  return count;
}

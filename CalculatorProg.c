#include <stdio.h>

int main() {

  int n;
  double first, second;
   printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);
   printf("Select 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
   printf("\nWhich operation do you want to do: ");
   scanf("%d",&n);
  switch (n) {
    case 1:
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    
  return 0;
}
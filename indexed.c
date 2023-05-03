// difference between even and odd indexed elements

#include <stdio.h>

int main() {
   int size, i, diff, sumEven = 0, sumOdd = 0;
   
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   
   int arr[size];

   printf("Enter the elements of the array:\n");
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   diff = 0;
   for (i = 0; i < size; i++) {
      if (i % 2 == 0) {
         diff += arr[i];
      } else {
         diff -= arr[i];
      }
   }

   for (i = 0; i < size; i++) {
      if (i % 2 == 0) {
         sumEven += arr[i];
      } else {
         sumOdd += arr[i];
      }
   }

   printf("Difference between even and odd indexed elements: %d\n", diff);
   printf("Sum of all even indexed numbers: %d\n", sumEven);
   printf("Sum of all odd indexed numbers: %d\n", sumOdd);

   return 0;
}


// conversion from decimal to binary decimal to octal decimal to hexa

#include <stdio.h>

void decToBin(int num) {
   int i = 0, bin[32];
   while (num > 0) {
      bin[i] = num % 2;
      num /= 2;
      i++;
   }
   printf("Binary: ");
   for (int j = i - 1; j >= 0; j--) {
      printf("%d", bin[j]);
   }
   printf("\n");
}

void decToOct(int num) {
   int i = 0, oct[32];
   while (num > 0) {
      oct[i] = num % 8;
      num /= 8;
      i++;
   }
   printf("Octal: ");
   for (int j = i - 1; j >= 0; j--) {
      printf("%d", oct[j]);
   }
   printf("\n");
}

void decToHex(int num) {
   int i = 0, hex[32];
   while (num > 0) {
      hex[i] = num % 16;
      num /= 16;
      i++;
   }
   printf("Hexadecimal: ");
   for (int j = i - 1; j >= 0; j--) {
      if (hex[j] < 10) {
         printf("%d", hex[j]);
      } else {
         printf("%c", hex[j] + 55);
      }
   }
   printf("\n");
}

int main() {
   int num;
   printf("Enter a decimal number: ");
   scanf("%d", &num);
   decToBin(num);
   decToOct(num);
   decToHex(num);
   return 0;
}

// binary to decimal octal to decimal and hexa to decimal conversion

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary[]) {
    int decimal = 0, power = 0;
    for (int i = 7; i >= 0; i--) {
        decimal += binary[i] * pow(2, power);
        power++;
    }
    return decimal;
}

int octalToDecimal(int octal[]) {
    int decimal = 0, power = 0;
    for (int i = 7; i >= 0; i--) {
        decimal += octal[i] * pow(8, power);
        power++;
    }
    return decimal;
}

int hexaToDecimal(char hexa[]) {
    int decimal = 0, power = 0;
    for (int i = 0; hexa[i] != '\0'; i++) {
        if (hexa[i] >= '0' && hexa[i] <= '9') {
            decimal += (hexa[i] - '0') * pow(16, power);
        } else if (hexa[i] >= 'a' && hexa[i] <= 'f') {
            decimal += (hexa[i] - 'a' + 10) * pow(16, power);
        } else if (hexa[i] >= 'A' && hexa[i] <= 'F') {
            decimal += (hexa[i] - 'A' + 10) * pow(16, power);
        }
        power++;
    }
    return decimal;
}

int main() {
    int binary[8], octal[8];
    char hexa[5];
    
    printf("Enter a binary number (8 digits): ");
    for (int i = 7; i >= 0; i--) {
        scanf("%1d", &binary[i]);
    }
    
    printf("Enter an octal number (8 digits): ");
    for (int i = 7; i >= 0; i--) {
        scanf("%1d", &octal[i]);
    }
    
    printf("Enter a hexadecimal number (up to 4 digits): ");
    scanf("%s", hexa);
    
    printf("Binary to Decimal: %d\n", binaryToDecimal(binary));
    printf("Octal to Decimal: %d\n", octalToDecimal(octal));
    printf("Hexadecimal to Decimal: %d\n", hexaToDecimal(hexa));
    
    return 0;
}


// #include <stdio.h>
// #include <math.h>

// int binaryToDecimal(int binary[]) {
//     int decimal = 0, power = 0;
//     for (int i = 7; i >= 0; i--) {
//         decimal += binary[i] * pow(2, power);
//         power++;
//     }
//     return decimal;
// }

// int octalToDecimal(int octal[]) {
//     int decimal = 0, power = 0;
//     for (int i = 7; i >= 0; i--) {
//         decimal += octal[i] * pow(8, power);
//         power++;
//     }
//     return decimal;
// }

// int hexaToDecimal(char hexa[]) {
//     int decimal = 0, power = 0;
//     for (int i = 0; hexa[i] != '\0'; i++) {
//         if (hexa[i] >= '0' && hexa[i] <= '9') {
//             decimal += (hexa[i] - '0') * pow(16, power);
//         } else if (hexa[i] >= 'a' && hexa[i] <= 'f') {
//             decimal += (hexa[i] - 'a' + 10) * pow(16, power);
//         } else if (hexa[i] >= 'A' && hexa[i] <= 'F') {
//             decimal += (hexa[i] - 'A' + 10) * pow(16, power);
//         }
//         power++;
//     }
//     return decimal;
// }

// int main() {
//     int binary[8] = {1, 0, 1, 0, 1, 1, 0, 0};
//     int octal[8] = {5, 7, 2, 1, 4, 6, 3, 0};
//     char hexa[] = "4B3F";
    
//     printf("Binary to Decimal: %d\n", binaryToDecimal(binary));
//     printf("Octal to Decimal: %d\n", octalToDecimal(octal));
//     printf("Hexadecimal to Decimal: %d\n", hexaToDecimal(hexa));
    
//     return 0;
// }

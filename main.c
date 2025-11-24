#include <stdio.h>
#include "encrypt.h"

int main() {
    int choice, key;
    char input[100], output[100];

    printf("--- File Encryption Tool ---\n");
    printf("1. Encrypt file\n2. Decrypt file\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline

    printf("Enter input filename: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    printf("Enter output filename: ");
    fgets(output, sizeof(output), stdin);
    output[strcspn(output, "\n")] = 0;
    printf("Enter key (integer): ");
    scanf("%d", &key);

    if(choice == 1) encrypt_file(input, output, key);
    else if(choice == 2) decrypt_file(input, output, key);
    else printf("Invalid choice\n");

    printf("Operation completed.\n");
    return 0;
}


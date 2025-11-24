#include <stdio.h>
#include "encrypt.h"

void encrypt_file(const char *input, const char *output, int key) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");
    if(!in || !out) { printf("File error\n"); return; }
    char ch;
    while((ch = fgetc(in)) != EOF) fputc(ch + key, out);
    fclose(in); fclose(out);
}

void decrypt_file(const char *input, const char *output, int key) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");
    if(!in || !out) { printf("File error\n"); return; }
    char ch;
    while((ch = fgetc(in)) != EOF) fputc(ch - key, out);
    fclose(in); fclose(out);
}

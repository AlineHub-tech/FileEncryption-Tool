#ifndef ENCRYPT_H
#define ENCRYPT_H

void encrypt_file(const char *input, const char *output, int key);
void decrypt_file(const char *input, const char *output, int key);

#endif

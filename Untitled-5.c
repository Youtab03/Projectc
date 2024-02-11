#include <stdio.h>

int main() {
    const char *word = "Sahel Danesh";

    
    printf(" \"%s\":\n", word);
    for (int i = 0; word[i] != '\0'; i++) {
        printf("%02X ", word[i]);
    }
    
    return 0;
}

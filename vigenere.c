#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//accepts a keyword instead of number.

int main (int argc, string argv[]) {
    //check the whole thing for any non alphabetic characters
    if (argc == 2) {
        
        string k = argv[1];
        
        int keyL = strlen(k);

        bool alphabet = true;

        for (int b = 0, d = strlen(k); b < d; b++) {
            if (!isalpha(k[b])) {
            alphabet = false;
            }
            else {
                if (isupper(k[b]))
                    k[b] = k[b] - 'A';
                else
                    k[b] = k[b] - 'a';
            }
    
        }
        
        if (alphabet) {
        
        string message = GetString();
        int j = 0;
        int result;
            for (int i = 0, n = strlen(message); i < n; i++) {
                if (isalpha(message[i]) && islower(message[i])) {
                    if (k[j % keyL] != 0) {
                        result = (message[i] + k[j % keyL] - 97) % 26;
                        message[i] = result + 97;
                    }
                    j++;
                }
                 else if (isalpha(message[i]) && isupper(message[i])) {
                     if (k[j % keyL] != 0) {
                        result = (message[i] + k[j % keyL] - 65) % 26;
                        message[i] = result + 65;
                     }
                    j++;
                } 
                printf("%c", message[i]);
            }
                printf("\n");
                return 0;
                
        }
        else {
    printf("Make sure your key contains an all alphabet string\n");
        return 1;
        }
    }
    else {
        printf("Please provide one argument! (Or two technically)\n");
        return 1;
    }
    
}
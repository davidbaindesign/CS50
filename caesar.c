#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main (int argc, string argv[]) {
    
    if (argc == 2) {
        
        int k = atoi(argv[1]);
        
        string message = GetString();
        
        for (int i = 0, n = strlen(message); i < n; i++) {
            
                if (isalpha(message[i]) && islower(message[i])) {
                    int result = (message[i] + k - 97) % 26;
                    message[i] = result + 97;
                }
                 else if (isalpha(message[i]) && isupper(message[i])) {
                    int result = (message[i] + k - 65) % 26;
                    message[i] = result + 65;
                } 
                
                printf("%c", message[i]);
        }
                printf("\n");
                return 0;
    }
    else {
        //wrong!!! Yelling!!! Loud Noises!!
        printf("Please provide one argument! (Or two technically)\n");
        return 1;
    }
    
    
}
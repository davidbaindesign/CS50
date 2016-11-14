#include <stdio.h>
#include <cs50.h>

int main (void) {
    
    int x;
    
    do {
        printf("height: ");
        x = GetInt();
    }
    while (x > 23 || x < 0);
    
    int spaces;
    int hash;
    
    for (int i = 0; i < x; i++) {
        //spaces hashes end line
        spaces = x - 1 - i;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        hash = 2 + i;
        for (int j = 0; j < hash; j++) {
            printf("#");
        }
        
        printf("\n");
    }
}
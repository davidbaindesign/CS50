#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void) {
    
    string name = GetString();
    
   for (int i = 0, n = strlen(name); i < n; i++) {
       // if i = 0 or i-1 = space
       if (i == 0 || name[i-1] == ' ') {
            if (name[i] >= 'a' && name[i] <= 'z') {
                //see if this works
                name[i] = name[i] - 32;
            }
        printf("%c", name[i]);
       }
   }
   printf("\n");
}
#include <stdio.h>
#include <cs50.h>

int main (void) {
    printf("minutes: ");
    int m = GetInt() * 12;
    printf("bottles: %i\n", m);
}
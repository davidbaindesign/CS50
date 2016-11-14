#include <stdio.h>
#include <cs50.h>
#include <math.h>

int coin = 0;

int divide (int number, int change) {
        //divide the number by coin, add that number to coins, return remainder for rest of change. (not nessasarry for nickles)
        //round down
        int add = change / number;
        coin = coin + add;
        return change % number;
    }

int main (void) {
    
    float change = -1;
    printf("Oh hai! ");
    while (change < 0) {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    
    int cents = (int) roundf((change * 100));
    
    while (cents > 0) {
        
        if (cents >= 25) {
            cents = divide(25,cents);
        }
        else if (cents >= 10) {
            cents = divide(10,cents);
        }
        else if (cents >= 5) {
            cents = cents - 5; //dont really need the function here, because at max you are giving 1 nickle.
            coin ++;
        }
        else {
            cents = divide(1,cents);
        }
    }
    printf("%i\n",coin);
    
}
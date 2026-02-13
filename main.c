#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    int rolls[100];
    int countDice[6] = {0};
    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
        // plus 1 to get rid of 0 since how modulo works
        int diceThrow = (rand() % 6) + 1;
        rolls[i] = diceThrow;
        countDice[diceThrow - 1]++;

        sum+=diceThrow;
    }

    // Write the total for each number 1-6
    for (int i = 0; i < 6; i++)
    {
        printf("%d: %d\n", i+1, countDice[i]);
    }

    return 0;
}

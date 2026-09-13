#include <stdio.h>
#include <stdlib.h> // To import 'rand()' and 'srand()' function
#include <time.h>   // To import 'time()' function

int main()
{
    /*
        // To seed random number generator (With current time)
        // To use the current time as the seed, we use time(0) in srand()
        srand(time(0));

        // To generate random number
        // If srand() is not available then rand() generates same number every time
        printf("Random number are %d\n", rand());

        // To generate random number in a range
        int min = 1, max = 100;
        int num = rand();
        int number_in_range = (num % (max - min + 1)) + min;
        // Here 'length = (max - min + 1)', Used to find the total length of range
        // Here 'remainder = (num % length)', Used to find remainder because the output always in the range between 0 and (max - min)
        // Add (remainder + min), Used to shift the starting point from 0 to your desired range

    */


    srand(time(0));

    int i, userinput, attempt = 0;
    int min = 1, max = 100, random_number = rand();
    int num = (random_number % (max - min + 1)) + min;

    for (i = 0; i >= 0; i++)
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &userinput);
        attempt++;

        if (userinput == num)
        {
            printf("\nYou got it!\nYou guessed the number %d in %d attempt\n", num, attempt);
            break;
        }
        else if (userinput < num)
        {
            printf("Higher number please!\n");
        }
        else if (userinput > num)
        {
            printf("Lower number please!\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// Returns a single random number in [nMin, nMax]
int RandomNumberGenerator(const int nMin, const int nMax)
{
    int nRandomNumber = rand() % (nMax - nMin + 1) + nMin;
    return nRandomNumber;
}

int main() {
    // Seed the random number generator once at the start
    srand(time(NULL));
    while (1) {
        
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("rock - 1, sizers - 2, paper - 3\n");
        int PlayerChoice;
        printf("enter your choice: ");
        scanf("%d", &PlayerChoice);

        int randomer = RandomNumberGenerator(1, 3);

        printf("computer choice: %d\n", randomer);

        if (PlayerChoice == randomer) {
            printf("draw!\n");
        }
        else if ((PlayerChoice == 1 && randomer == 2) || 
                (PlayerChoice == 2 && randomer == 3) || 
                (PlayerChoice == 3 && randomer == 1)) {
            printf("you win!\n");
        } 
        else if ((PlayerChoice == 1 && randomer == 3) || 
                (PlayerChoice == 2 && randomer == 1) || 
                (PlayerChoice == 3 && randomer == 2)) {
            printf("you lose!\n");
        } 
        else {
            printf("invalid input\n");
        }

        printf("\n\n\n");
        printf("press enter to continue\n");
        printf("press B to exit\n");

        // Fix: Use a char array to safely read input
        char inputChar[10];
        // Clear input buffer before reading
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        fgets(inputChar, sizeof(inputChar), stdin);

        if (inputChar[0] == 'B' || inputChar[0] == 'b') {
            break;
        }
        
    }
    return 0;
}
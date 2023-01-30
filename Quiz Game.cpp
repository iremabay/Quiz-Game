#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void Information()
{
    char name[25];
    printf("--------------WELCOME TO THE QUIZ GAME!--------------\n\n");
    printf("Please enter your name:");
    gets_s(name);
    printf("\n");
    printf("Hello %s. There are 5 questions and if you answer correctly you will earn 10 points for each.\nYou can get a maximum of 50 points.\n", name);
    printf("Good luck!\n\n");
}

int main()
{
    int score = 0;
    char answer, choice, start;

    Information();

    printf("If you're ready, please press s to start:\n");
    scanf("%c", &start);

    if (start == 's')
    {
        while (1)
        {
            printf("Question 1\nWhat is the capital of Turkey?\n");
            printf("a)Istanbul   b)Edirne   c)Ankara   d)Bursa\n");
            scanf("%s", &answer);
            if (answer == 'c')
            {
                printf("Correct answer!\n");
                score += 10;
            }
            else
            {
                printf("Incorrect answer.\n");
            }

            printf("\nQuestion 2\nWhich year did Berlin wall fall?\n");
            printf("a)1989  b)1985   c)1991  d)1987\n");
            scanf("%s", &answer);
            if (answer == 'a')
            {
                printf("Correct answer!\n");
                score += 10;
            }
            else
            {
                printf("Incorrect answer.\n");
            }

            printf("\nQuestion 3\nWho discovered the existence of gravity?\n");
            printf("a)Edison  b)Newton   c)Galileo  d)Einstein\n");
            scanf("%s", &answer);
            if (answer == 'b')
            {
                printf("Correct answer!\n");
                score += 10;
            }
            else
            {
                printf("Incorrect answer.\n");
            }

            printf("\nQuestion 4\nWhat language is mostly spoken in the Netherlands?\n");
            printf("a)German  b)Dutch  c)English d)French\n");
            scanf("%s", &answer);
            if (answer == 'b')
            {
                printf("Correct answer!\n");
                score += 10;
            }
            else
            {
                printf("Incorrect answer.\n");
            }

            printf("\nQuestion 5\nWho is the youngest F1 world champion?\n");
            printf("a)M.Verstappen  b)J.Button  c)M.Schumacher  d)S.Vettel\n");
            scanf("%s", &answer);
            if (answer == 'd')
            {
                printf("Correct answer!\n");
                score += 10;
            }
            else
            {
                printf("Incorrect answer.\n");
            }

            printf("Your score: %d\n", score);
            printf("Would you like to play again?\Please type y for yes, n for no:\n");
            scanf("%s", &choice);

            if (choice == 'y')
            {
                score = 0;
                continue;
            }
            else
            {
                break;
            }

        }
        printf("Thank you for playing.");
    }
    else
    {
        printf("Invalid transaction!");
    }

    
    return 0;

}

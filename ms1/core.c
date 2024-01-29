/*
*****************************************************************************
                        Assignment 1 - Milestone 1
Full Name  : Sevinj Feyziyeva
Student ID#: 154057194
Email      : sfeyziyeva@myseneca.ca
Section    : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include<stdio.h>

// User-Defined Libraries
#include "core.h"

void MyFunc();



// As demonstrated in the course notes:
// https://intro2c.sdds.ca/D-Modularity/input-functions#clearing-the-buffer
// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}
// Wait for user to input the "enter" key to continue
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}



int inputInt() {
    int num, newLine = 0;
    char ch;
    
    do {
        scanf("%d%c", &num, &ch);
        if (ch != '\n')
        {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }
        else {
            newLine = 1;
        }
        
    } while (!newLine);
    return num;

}

int inputIntPositive() {
    int num;
    do {
        num = inputInt();
        if (num < 1) {
            printf("ERROR! Value must be > 0: ");
        }

    } while (num < 1);
   return num;
}


int inputIntRange(int lower, int upper)
{
    int num;
    
    do {
        num = inputInt();
        
        if ((num < lower) || (num > upper))

        {
            printf("ERROR! Value must be between %d and %d inclusive: ", lower, upper);
        }
         
    } while (!((num >= lower) && (num <= upper)));
    return num;

}

char inputCharOption(const char array[])

{
    int i;
    int  newLine = 0;
    char ch;

    while (!newLine)
    {
        i = 0;
        scanf("%c", &ch);
        clearInputBuffer();

        while (array[i] != '\0') {

            if (ch == array[i])
            {
                newLine = 1;
            }
            i++;
        }

        if (!newLine)
        {
            printf("ERROR: Character must be one of [%s]: ", array);
        }
    }
    return ch;
}
    
   

void inputCString(char* str, int minchar, int maxchar)
{
    int i, size = 0;
    int stringValid = 0;
    char inputstr[60] = { '\0' };

    while (!stringValid) {
        i = 0;
        size = 0;
        scanf("%[^\n]", inputstr);
        
        while (inputstr[i] != '\0') {
            i++;
            size++;
        }
        if ((size >= minchar) && (size <= maxchar))
        {
            stringValid = 1;
        }
        if ((!stringValid))
        {
            if (minchar == maxchar)
            {
                
                printf("ERROR: String length must be exactly %d chars: ", maxchar);
            }
            else {
                if (size < minchar) {
                    printf("ERROR: String length must be between %d and %d chars: ", minchar, maxchar);
                }
                else if (size > maxchar)
                {
                    printf("ERROR: String length must be no more than %d chars: ", maxchar);
                }
            }
        }
        clearInputBuffer();
    }
    for (i = 0; inputstr[i] != '\0'; i++)
    {
        str[i] = inputstr[i];
    }
}

    void displayFormattedPhone(const char* pnum)
    {
    
        int i, size = 0;
        int stringvalid = 1; // boolean
       
        
        if (pnum != NULL)
        {
            for (i = 0; pnum[i] != '\0'; i++)
            {
                size++;
                if (pnum[i] <= '0' || pnum[i] >= '9')
                {
                    stringvalid = 0;
                    }
            }

        } 
        else
        {
            stringvalid = 0;
        }
        if (size != 10)
        {
            stringvalid = 0;
        }

        // output
        if (stringvalid == 0)
        {
            printf("(___)___-____");
        }
        else {
            printf("(%c%c%c)%c%c%c-%c%c%c%c",
                pnum[0],
                pnum[1],
                pnum[2],
                pnum[3],
                pnum[4],
                pnum[5],
                pnum[6],
                pnum[7],
                pnum[8],
                pnum[9]);
                
                
                
        }
    }



 
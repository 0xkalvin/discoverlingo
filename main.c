/*
    KALVIN VASCONCELLOS 
    ROGER ROJAS      

*/

#include "core.c"

int main()
{

    char text[MAX_LEN];

    while (true)
    {
        printf("\n================     DISCOVERLINGO    ==============\n\n");
        printf("         This program guesses what language you write in.   \n\n");
        printf("   [ It only understand english, german and portuguese though! ] :)\n\n");
        printf("Write a sentence (at least 30 characters) :\n");
        if (fgets(text, sizeof(text), stdin))
        {
            if (is_valid(text)){
                 find_language(text);
                 break;
            }
            else{ 
                system("clear");
                printf("\nERROR: Invalid text size!\n       It should be between 30 and 10000.\n       Try again.  \n");
            }
        }
    }

    return 0;
}
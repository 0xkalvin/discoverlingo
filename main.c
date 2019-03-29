#include "logic.c"


int main()
{

    char text[MAX_LEN];

    while (true)
    {
        
        printf("\n ********   This program guesses what language you write in.  ********* \n\n");
        printf("Write a sentence (at least 5 and less than 280 characters:\n");
        if (fgets(text, sizeof(text), stdin))
        {
            if (is_valid(text)){
                 find_language(text);
                 break;
            }
            else{ 
                system("clear");
                printf("\nERROR: Invalid text size!\n       It should be between 5 and 280.\n       Try again.  \n");
            }
        }
        else{
            system("clear");
            printf("\nERROR: Invalid text size!\n       It cannot pass 280 characters.\n       Try again.  \n");
        }
    }

    return 0;
}
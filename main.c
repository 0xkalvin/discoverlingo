#include "logic.c"

int main(){

    char text[MAX_LEN];

    printf("Write a message :\n");
    if(fgets(text, sizeof(text), stdin)){
        if(is_valid(text))find_language(text);
        else printf("\nInvalid text size\n");
    }

    return 0;
}
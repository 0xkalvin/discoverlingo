#include "functions.c"


void find_language(char text[MAX_LEN]){

    char result[MAX_LEN] = "The language is ";
    //strcat(result, text);
    //printf("%s", result);

    Letter *letters_frequency = all_letters_frequency(text);
    print_frequency(letters_frequency);
}

int main(){

    char text[MAX_LEN];

    printf("Write some message\n");
    if(fgets(text, sizeof(text), stdin)){
        find_language(text);
    }

    return 0;
}
#include "helpers.c"

void find_language(char text[MAX_LEN]){

    char result[MAX_LEN] = "The language is ";
    //strcat(result, text);
    //printf("%s", result);

    Letter *letters_frequency = all_letters_frequency(text);
    print_letter_array(letters_frequency);
}

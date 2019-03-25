#include "helpers.c"

void find_language(char text[MAX_LEN]){

    char result[MAX_LEN] = "\n The language is ";
    

    Letter *letters_frequency = all_letters_frequency(text);
    print_letter_array(letters_frequency);

    int size = strlen(text);
    int num_of_chars = number_of_valid_char(text);
    printf("\n the number of valid chars is %d \n", num_of_chars);

    // double *percentual = letter_percentual(letters_frequency, num_of_chars);
    // for(int i = 0; i < num_of_chars; i++) printf(" %0.2f ", percentual[i] );
    // printf("\n");
    // for(int i = 0; i < num_of_chars; i++) printf(" %4c ", letters_frequency[i].l );
    // printf("\nKKKKKKK %c", portuguese_letters[1]);


    if(letters_frequency[0].l == 'a'){
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else{
        strcat(result, "english!");
        printf("%s \n\n", result);
    }

}

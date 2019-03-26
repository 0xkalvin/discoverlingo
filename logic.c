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

    double p = 0;
    double e = 0;
    double g = 0;


    // EACH LETTER WILL HAVE A COEFICIENT MEANING ITS FREQUENCY FOR A SPECIFIED LANGUAGE
    // LANGUAGE  
    for(int i = 0; i < 26; i++){
        if(letters_frequency[i].l == 'a'){
            p += 14.63;
            e += 8.167;
        }
        else if(letters_frequency[i].l == 'b'){
            p += 1.04;
            e += 1.492;
        }
        else if(letters_frequency[i].l == 'c'){
            p += 3.88;
            e += 2.782;
        }
        else if(letters_frequency[i].l == 'd'){
            p += 4.99;
            e += 4.253;
        }
        else if(letters_frequency[i].l == 'e'){
            p += 12.57;
            e += 12.702;
        }
        else if(letters_frequency[i].l == 'f'){
            p += 1.02;
            e += 2.228;
        }
        else if(letters_frequency[i].l == 'g'){
            p += 1.30;
            e += 2.015;
        }
        else if(letters_frequency[i].l == 'h'){
            p += 6.094;
            e += 1.28;
        }
        else if(letters_frequency[i].l == 'i'){
            p += 6.18;
            e += 6.966;
        }
        else if(letters_frequency[i].l == 'j'){
            p += 0.4;
            e += 0.153;
        }
        else if(letters_frequency[i].l == 'k'){
            p += 0.02;
            e += 0.772;
        }
        else if(letters_frequency[i].l == 'l'){
            p += 2.78;
            e += 4.025;
        }
        else if(letters_frequency[i].l == 'm'){
            p += 4.74;
            e += 2.406;
        }
        else if(letters_frequency[i].l == 'n'){
            p += 1.04;
            e += 6.749;
        }
    }
    if(p > e){
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else{
        strcat(result, "english!");
        printf("%s \n\n", result);
    }

}

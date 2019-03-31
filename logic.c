#include "helpers.c"

void find_language(char text[MAX_LEN])
{

    char result[MAX_LEN] = "\n The language is ";

    Letter *letters_frequency = all_letters_frequency(text);

    int num_of_chars = number_of_valid_char(text);
    printf("\n the number of valid chars is %d \n", num_of_chars);

    double p = 0;
    double e = 0;
    double g = 0;
    
    for (int i = 0; i < 26; i++)
    {
        if (letters_frequency[i].letter == 'a' || letters_frequency[i].letter == 'A')
        {
            p += 14.63 * letters_frequency[i].quantity;
            e += 8.167 * letters_frequency[i].quantity;
            g += 6.516 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'b' || letters_frequency[i].letter == 'B')
        {
            p += 1.04 * letters_frequency[i].quantity;
            e += 1.492 * letters_frequency[i].quantity;
            g += 1.886 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'c' || letters_frequency[i].letter == 'C')
        {
            p += 3.88 * letters_frequency[i].quantity;
            e += 2.782 * letters_frequency[i].quantity;
            g += 2.732 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'd' || letters_frequency[i].letter == 'D')
        {
            p += 4.99 * letters_frequency[i].quantity;
            e += 4.253 * letters_frequency[i].quantity;
            g += 5.076 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'e' || letters_frequency[i].letter == 'E')
        {
            p += 12.57 * letters_frequency[i].quantity;
            e += 12.702 * letters_frequency[i].quantity;
            g += 16.396 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'f' || letters_frequency[i].letter == 'F')
        {
            p += 1.02 * letters_frequency[i].quantity;
            e += 2.228 * letters_frequency[i].quantity;
            g += 1.656 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'g' || letters_frequency[i].letter == 'G')
        {
            p += 1.30 * letters_frequency[i].quantity;
            e += 2.015 * letters_frequency[i].quantity;
            g += 3.009 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'h' || letters_frequency[i].letter == 'H')
        {
            p += 0.781 * letters_frequency[i].quantity;
            e += 6.094 * letters_frequency[i].quantity;
            g += 4.577 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'i' || letters_frequency[i].letter == 'I')
        {
            p += 6.18 * letters_frequency[i].quantity;
            e += 6.966 * letters_frequency[i].quantity;
            g += 6.55 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'j' || letters_frequency[i].letter == 'J')
        {
            p += 0.397 * letters_frequency[i].quantity;
            e += 0.153 * letters_frequency[i].quantity;
            g += 0.268 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'k' ||  letters_frequency[i].letter == 'K')
        {
            p += 0.015 * letters_frequency[i].quantity;
            e += 0.772 * letters_frequency[i].quantity;
            g += 1.417 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'l' || letters_frequency[i].letter == 'L' )
        {
            p += 2.779 * letters_frequency[i].quantity;
            e += 4.025 * letters_frequency[i].quantity;
            g += 3.437 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'm' || letters_frequency[i].letter == 'M')
        {
            p += 4.738 * letters_frequency[i].quantity;
            e += 2.406 * letters_frequency[i].quantity;
            g += 2.534 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'n' || letters_frequency[i].letter == 'N')
        {
            p += 4.446 * letters_frequency[i].quantity;
            e += 6.749 * letters_frequency[i].quantity;
            g += 9.776 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'o' || letters_frequency[i].letter == 'O')
        {
            p += 9.735 * letters_frequency[i].quantity;
            e += 7.507 * letters_frequency[i].quantity;
            g += 2.594 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'p' || letters_frequency[i].letter == 'P')
        {
            p += 2.523 * letters_frequency[i].quantity;
            e += 1.929 * letters_frequency[i].quantity;
            g += 0.670 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'q' || letters_frequency[i].letter == 'Q')
        {
            p += 1.204 * letters_frequency[i].quantity;
            e += 0.095 * letters_frequency[i].quantity;
            g += 0.018 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'r' || letters_frequency[i].letter == 'R')
        {
            p += 6.53 * letters_frequency[i].quantity;
            e += 5.987 * letters_frequency[i].quantity;
            g += 7.003 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 's' || letters_frequency[i].letter == 'S')
        {
            p += 6.805 * letters_frequency[i].quantity;
            e += 6.327 * letters_frequency[i].quantity;
            g += 7.270 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 't' || letters_frequency[i].letter == 'T')
        {
            p += 4.336 * letters_frequency[i].quantity;
            e += 9.056 * letters_frequency[i].quantity;
            g += 6.154 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'u' || letters_frequency[i].letter == 'U')
        {
            p += 3.639 * letters_frequency[i].quantity;
            e += 2.758 * letters_frequency[i].quantity;
            g += 4.166 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'v' || letters_frequency[i].letter == 'V')
        {
            p += 1.575 * letters_frequency[i].quantity;
            e += 0.978 * letters_frequency[i].quantity;
            g += 0.846 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'w' || letters_frequency[i].letter == 'W')
        {
            p += 0.037 * letters_frequency[i].quantity;
            e += 2.360 * letters_frequency[i].quantity;
            g += 1.921 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'x' || letters_frequency[i].letter == 'X')
        {
            p += 0.253 * letters_frequency[i].quantity;
            e += 0.150 * letters_frequency[i].quantity;
            g += 0.034 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'y' || letters_frequency[i].letter == 'Y')
        {
            p += 0.006 * letters_frequency[i].quantity;
            e += 1.974 * letters_frequency[i].quantity;
            g += 0.039 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'z' || letters_frequency[i].letter == 'Z')
        {
            p += 0.47 * letters_frequency[i].quantity;
            e += 0.074 * letters_frequency[i].quantity;
            g += 1.134 * letters_frequency[i].quantity;
        }
    }

    sort_letter_array(letters_frequency, 26);
    print_letter_array(letters_frequency);

    if ((p > e && p > g) && (letters_frequency[0].letter == 'a' || letters_frequency[1].letter == 'a' || letters_frequency[2].letter == 'a'))
    {
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else if ((letters_frequency[0].letter == 't' || letters_frequency[1].letter == 't' || letters_frequency[2].letter == 't') && (e > p && e > g))
    {
        strcat(result, "english!");
        printf("%s \n\n", result);
    }
    else
    {
        strcat(result, "german!");
        printf("%s \n\n", result);
    }

    // //SMALL TEXT
    // else{
    //     double eng_counter = 0;
    //     double por_counter = 0;
    //     double ger_counter = 0;
    //     sort_letter_array(letters_frequency, 26);
    //     print_letter_array(letters_frequency);

    //     for(int i = 0; i < 5;  i++){
    //         if(letters_frequency[i].l == 'a' || letters_frequency[i].l == 'e' || letters_frequency[i].l == 's') por_counter+=letters_frequency[i].quantity;
    //         else if(letters_frequency[i].l == 'e' || letters_frequency[i].l == 't' || letters_frequency[i].l == 'i') eng_counter+=letters_frequency[i].quantity;
    //         else if(letters_frequency[i].l == 'e' || letters_frequency[i].l == 'n' || letters_frequency[i].l == 'r') ger_counter+=letters_frequency[i].quantity;
    //     }
    //     if((letters_frequency[0].l == 'a' || letters_frequency[1].l == 'a') && (por_counter > eng_counter && por_counter > ger_counter)){
    //         strcat(result, "portuguese!");
    //         printf("%s \n\n", result);
    //     }
    //     else if((letters_frequency[0].l == 'n' || letters_frequency[1].l == 'n') && (ger_counter > eng_counter && ger_counter > por_counter)){
    //         strcat(result, "german!");
    //         printf("%s \n\n", result);
    //     }
    //      else{
    //         strcat(result, "english!");
    //         printf("%s \n\n", result);
    //     }

    // }
}

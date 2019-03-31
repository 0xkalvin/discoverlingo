#include "helpers.c"


// função core
// para cada letra do alfabeto, 
// multiplicamos a probabilidiade de ocorrência dela em cada idioma por sua quantidade de ocorrencias no texto inserido
// dessa forma temos uma variável para cada idioma
// com a soma das probabilidades de ocorrencia de cada letra do texto inserido
// usaremos a soma das probabilidades e as letras mais frequentes de cada idioma para a tomada de decisão
void find_language(char text[MAX_LEN])
{
    Letter *letters_frequency = all_letters_frequency(text);
    double portuguese = 0;
    double english = 0;
    double german = 0;

    for (int i = 0; i < 26; i++)
    {
        if (letters_frequency[i].letter == 'a' || letters_frequency[i].letter == 'A')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i] * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'b' || letters_frequency[i].letter == 'B')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'c' || letters_frequency[i].letter == 'C')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'd' || letters_frequency[i].letter == 'D')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'e' || letters_frequency[i].letter == 'E')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'f' || letters_frequency[i].letter == 'F')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'g' || letters_frequency[i].letter == 'G')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'h' || letters_frequency[i].letter == 'H')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'i' || letters_frequency[i].letter == 'I')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'j' || letters_frequency[i].letter == 'J')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'k' ||  letters_frequency[i].letter == 'K')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'l' || letters_frequency[i].letter == 'L' )
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'm' || letters_frequency[i].letter == 'M')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'n' || letters_frequency[i].letter == 'N')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'o' || letters_frequency[i].letter == 'O')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'p' || letters_frequency[i].letter == 'P')
        {
            portuguese += portuguese_letters[i]* letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'q' || letters_frequency[i].letter == 'Q')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'r' || letters_frequency[i].letter == 'R')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 's' || letters_frequency[i].letter == 'S')
        {
            portuguese += portuguese_letters[i]* letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 't' || letters_frequency[i].letter == 'T')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'u' || letters_frequency[i].letter == 'U')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'v' || letters_frequency[i].letter == 'V')
        {
            portuguese += portuguese_letters[i]* letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i]* letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'w' || letters_frequency[i].letter == 'W')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'x' || letters_frequency[i].letter == 'X')
        {
            portuguese += portuguese_letters[i]* letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'y' || letters_frequency[i].letter == 'Y')
        {
            portuguese += portuguese_letters[i] * letters_frequency[i].quantity;
            english += english_letters[i] * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'z' || letters_frequency[i].letter == 'Z')
        {
            portuguese += portuguese_letters[i]* letters_frequency[i].quantity;
            english += english_letters[i]  * letters_frequency[i].quantity;
            german += german_letters[i] * letters_frequency[i].quantity;
        }
    }
    sort_letter_array(letters_frequency, 26);
    print_letter_array(letters_frequency);


    char result[MAX_LEN] = "\n The language is ";
    
    if((german > portuguese && german > english) && ((letters_frequency[0].letter == 'e') &&(letters_frequency[0].letter == 'n' || letters_frequency[1].letter == 'n' || letters_frequency[2].letter == 'n'))){
        strcat(result, "german!");
        printf("%s \n\n", result); 
    }
    else if ((english > portuguese && english > german) || ((letters_frequency[0].letter == 't' || letters_frequency[1].letter == 't' || letters_frequency[2].letter == 't' || letters_frequency[3].letter == 't') && (letters_frequency[0].letter == 'e' || letters_frequency[1].letter == 'e' || letters_frequency[2].letter == 'e')))
    {
        strcat(result, "english!");
        printf("%s \n\n", result);
    }
    else if ((portuguese > english && portuguese > german) || ((letters_frequency[0].letter == 'a' || letters_frequency[1].letter == 'a') && (letters_frequency[1].letter == 'o' || letters_frequency[2].letter == 'o' || letters_frequency[3].letter == 'o' )))
    {
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else{
        strcat(result, "german!");
        printf("%s \n\n", result); 
    }
}

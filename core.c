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
            portuguese += 14.63 * letters_frequency[i].quantity;
            english += 8.167 * letters_frequency[i].quantity;
            german += 6.516 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'b' || letters_frequency[i].letter == 'B')
        {
            portuguese += 1.04 * letters_frequency[i].quantity;
            english += 1.492 * letters_frequency[i].quantity;
            german += 1.886 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'c' || letters_frequency[i].letter == 'C')
        {
            portuguese += 3.88 * letters_frequency[i].quantity;
            english += 2.782 * letters_frequency[i].quantity;
            german += 2.732 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'd' || letters_frequency[i].letter == 'D')
        {
            portuguese += 4.99 * letters_frequency[i].quantity;
            english += 4.253 * letters_frequency[i].quantity;
            german += 5.076 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'e' || letters_frequency[i].letter == 'E')
        {
            portuguese += 12.57 * letters_frequency[i].quantity;
            english += 12.702 * letters_frequency[i].quantity;
            german += 16.396 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'f' || letters_frequency[i].letter == 'F')
        {
            portuguese += 1.02 * letters_frequency[i].quantity;
            english += 2.228 * letters_frequency[i].quantity;
            german += 1.656 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'g' || letters_frequency[i].letter == 'G')
        {
            portuguese += 1.30 * letters_frequency[i].quantity;
            english += 2.015 * letters_frequency[i].quantity;
            german += 3.009 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'h' || letters_frequency[i].letter == 'H')
        {
            portuguese += 0.781 * letters_frequency[i].quantity;
            english += 6.094 * letters_frequency[i].quantity;
            german += 4.577 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'i' || letters_frequency[i].letter == 'I')
        {
            portuguese += 6.18 * letters_frequency[i].quantity;
            english += 6.966 * letters_frequency[i].quantity;
            german += 6.55 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'j' || letters_frequency[i].letter == 'J')
        {
            portuguese += 0.397 * letters_frequency[i].quantity;
            english += 0.153 * letters_frequency[i].quantity;
            german += 0.268 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'k' ||  letters_frequency[i].letter == 'K')
        {
            portuguese += 0.015 * letters_frequency[i].quantity;
            english += 0.772 * letters_frequency[i].quantity;
            german += 1.417 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'l' || letters_frequency[i].letter == 'L' )
        {
            portuguese += 2.779 * letters_frequency[i].quantity;
            english += 4.025 * letters_frequency[i].quantity;
            german += 3.437 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'm' || letters_frequency[i].letter == 'M')
        {
            portuguese += 4.738 * letters_frequency[i].quantity;
            english += 2.406 * letters_frequency[i].quantity;
            german += 2.534 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'n' || letters_frequency[i].letter == 'N')
        {
            portuguese += 4.446 * letters_frequency[i].quantity;
            english += 6.749 * letters_frequency[i].quantity;
            german += 9.776 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'o' || letters_frequency[i].letter == 'O')
        {
            portuguese += 9.735 * letters_frequency[i].quantity;
            english += 7.507 * letters_frequency[i].quantity;
            german += 2.594 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'p' || letters_frequency[i].letter == 'P')
        {
            portuguese += 2.523 * letters_frequency[i].quantity;
            english += 1.929 * letters_frequency[i].quantity;
            german += 0.670 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'q' || letters_frequency[i].letter == 'Q')
        {
            portuguese += 1.204 * letters_frequency[i].quantity;
            english += 0.095 * letters_frequency[i].quantity;
            german += 0.018 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'r' || letters_frequency[i].letter == 'R')
        {
            portuguese += 6.53 * letters_frequency[i].quantity;
            english += 5.987 * letters_frequency[i].quantity;
            german += 7.003 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 's' || letters_frequency[i].letter == 'S')
        {
            portuguese += 6.805 * letters_frequency[i].quantity;
            english += 6.327 * letters_frequency[i].quantity;
            german += 7.270 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 't' || letters_frequency[i].letter == 'T')
        {
            portuguese += 4.336 * letters_frequency[i].quantity;
            english += 9.056 * letters_frequency[i].quantity;
            german += 6.154 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'u' || letters_frequency[i].letter == 'U')
        {
            portuguese += 3.639 * letters_frequency[i].quantity;
            english += 2.758 * letters_frequency[i].quantity;
            german += 4.166 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'v' || letters_frequency[i].letter == 'V')
        {
            portuguese += 1.575 * letters_frequency[i].quantity;
            english += 0.978 * letters_frequency[i].quantity;
            german += 0.846 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'w' || letters_frequency[i].letter == 'W')
        {
            portuguese += 0.037 * letters_frequency[i].quantity;
            english += 2.360 * letters_frequency[i].quantity;
            german += 1.921 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'x' || letters_frequency[i].letter == 'X')
        {
            portuguese += 0.253 * letters_frequency[i].quantity;
            english += 0.150 * letters_frequency[i].quantity;
            german += 0.034 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'y' || letters_frequency[i].letter == 'Y')
        {
            portuguese += 0.006 * letters_frequency[i].quantity;
            english += 1.974 * letters_frequency[i].quantity;
            german += 0.039 * letters_frequency[i].quantity;
        }
        else if (letters_frequency[i].letter == 'z' || letters_frequency[i].letter == 'Z')
        {
            portuguese += 0.47 * letters_frequency[i].quantity;
            english += 0.074 * letters_frequency[i].quantity;
            german += 1.134 * letters_frequency[i].quantity;
        }
    }

    sort_letter_array(letters_frequency, 26);

    char result[MAX_LEN] = "\n The language is ";
    if ((portuguese > english && portuguese > german) || ((letters_frequency[0].letter == 'a' || letters_frequency[1].letter == 'a' || letters_frequency[2].letter == 'a') && (letters_frequency[1].letter == 'o' || letters_frequency[2].letter == 'o' || letters_frequency[3].letter == 'o' )))
    {
        strcat(result, "portuguese!");
        printf("%s \n\n", result);
    }
    else if ((english > portuguese && english > german) || ((letters_frequency[0].letter == 't' || letters_frequency[1].letter == 't' || letters_frequency[2].letter == 't') && (letters_frequency[0].letter == 'e' || letters_frequency[1].letter == 'e' || letters_frequency[2].letter == 'e')))
    {
        strcat(result, "english!");
        printf("%s \n\n", result);
    }
    else
    {
        strcat(result, "german!");
        printf("%s \n\n", result);
    }
}

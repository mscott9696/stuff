#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentances(string text);

int main(void)
{
    // Get text from the user
    string text = get_string("Text: ");

    // Calculate the grade of the text
     float L =  count_letters(text) / count_words(text) * 100;
     float S =  count_words(text) / count_sentances(text) * 100;

    int grade = 0.0588 * L - 0.296 * S - 15.8;

    // Return the grade
    printf("Grade %d\n", grade );

    // Trying to debug
    printf("Letters %d\n", count_letters(text) );
    printf("Words %d\n", count_words(text) );
    printf("Sentances %d\n", count_sentances(text) );

}

int count_letters(string text)
{
    //Keep variable to track length
    int letters = 0;

    //Count number of letters

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
return letters;
}

int count_words(string text)
{
    //Keep variable to track word count
    int words = 0;

    //Count number of words

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
return words;
}

int count_sentances(string text)
{
    //Keep variable to track sentance count
    int sent = 0;

    //Count number of sentances

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] = '.', text[i] = '?', text[i] = '!')
        {
            sent++;
        }
    }
return sent;
}

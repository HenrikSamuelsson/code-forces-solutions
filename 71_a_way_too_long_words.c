/**
 * \file 71_a_way_too_long_words.c
 *
 * \brief Abbreviates long words.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 /* Max length of word plus one extra space for a null character. */
#define MAX_LENGTH      (100U + 1U)

/* Length Limit deciding if a word is to be abbrevitated. */
#define LENGTH_LIMIT    10U

int main(void)
{
     /* Get the number of words to be handled. */
    int number_of_words;
    scanf("%d", &number_of_words);

    /* Create a buffer large enough for one word. */
    char word_buffer[MAX_LENGTH];

    while (number_of_words--)
    {
        /* Get next word. */
        scanf("%s", &word_buffer);

        /* Check how long the word is. */
        int word_length = strlen(word_buffer);

        /* Either print the word or an abbreviated version.*/
        if (word_length <= LENGTH_LIMIT)
        {
            printf("%s\n", word_buffer);
        }
        else
        {
            printf("%c%d%c\n",
                   word_buffer[0],
                   word_length - 2,
                   word_buffer[word_length - 1]);
        }
    }

    return EXIT_SUCCESS;
}

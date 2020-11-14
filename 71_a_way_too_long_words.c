/**
 * \file 71_a_way_too_long_words.c
 *
 * \brief Abbreviates long words.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 /* Max length of word plus one extra space for a null character. */
#define MAX_LENGTH      (100U + 2U)

/* Length Limit deciding if a word is to be abbrevitated. */
#define LENGTH_LIMIT    10U

int main(void)
{
    /* Create storage large enough for one word. */
    char word_buffer[MAX_LENGTH] = {0};

    /* Get first line holding number of words to be abbreviated. */
    fgets(word_buffer, MAX_LENGTH, stdin);

    /* Get the number of words. */
    int number_of_words;
    sscanf(word_buffer, "%d", &number_of_words);

    /* Allocate a buffer filled with 0, large enough to hold all words.*/
    char *all_words_buffer = calloc(number_of_words * MAX_LENGTH, sizeof(char));

    /* Get word by word and add them to the larger buffer. */
    for (int word_count = 0; word_count < number_of_words; word_count++)
    {
        fgets(all_words_buffer + word_count * MAX_LENGTH, MAX_LENGTH, stdin);
    }

    /* Check word by word in the larger buffer and abbreviate the longer words before print out.*/
    for (int word_count = 0; word_count < number_of_words; word_count++)
    {
        snprintf(word_buffer, MAX_LENGTH, "%s", all_words_buffer + word_count * MAX_LENGTH);
        int word_length = strlen(word_buffer);
        if (word_length <= LENGTH_LIMIT + 1)
        {
            printf("%s", word_buffer);
        }
        else
        {
            printf("%c%d%c\n", word_buffer[0], word_length - 3, word_buffer[word_length - 2]);
        }
    }

    return EXIT_SUCCESS;
}

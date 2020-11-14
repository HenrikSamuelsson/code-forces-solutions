/**
 * \file 4_a_watermelon.c
 *
 * \brief Checks if a watermelon can be divided into two pieces, where each
 *        piece weighs an even number of kilos.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Weight of the smallest watermelon that passes the weight criteria.
 */
#define MIN_WEIGHT    4

/**
 * \brief The melon will be cut into two pieces.
 */
#define NUMBER_OF_PIECES    2

int main(void)
{
    int watermelon_weight;

    scanf("%d", &watermelon_weight);

    if (watermelon_weight < MIN_WEIGHT)
    {
        /* Melon is too small. */
        printf("NO\n");
    }
    else if (watermelon_weight % NUMBER_OF_PIECES != 0)
    {
        /* The melon does not divide evenly if the remainder is not 0. */
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return EXIT_SUCCESS;
}

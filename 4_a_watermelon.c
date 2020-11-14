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
 * \brief The watermelon will be cut into two pieces.
 */
#define NUMBER_OF_PIECES    2

int main(void)
{
    int watermelon_weight;

    scanf("%d", &watermelon_weight);

    if (watermelon_weight < MIN_WEIGHT)
    {
        /* Too small watermelon since each piece must weigh at least 2 kg. */
        printf("NO\n");
    }
    else if (watermelon_weight % NUMBER_OF_PIECES != 0)
    {
        /* If not divisible so cannot the weight of both pieces be even. */
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return EXIT_SUCCESS;
}

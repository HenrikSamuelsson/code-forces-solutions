#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_of_prob;    /* Number of problems. */
    scanf("%d", &num_of_prob);

    int num_of_solvable_problems = 0;

    for (int prob_count = 0; prob_count < num_of_prob; prob_count++)
    {
        const int num_of_needed_votes = 2;
        int total, vote_0, vote_1, vote_2;
        scanf("%d %d %d", &vote_0, &vote_1, &vote_2);
        total = vote_0 + vote_1 + vote_2;
        if (total >= num_of_needed_votes)
        {
            num_of_solvable_problems++;
        }
    }

    printf("%d\n", num_of_solvable_problems);

    return EXIT_SUCCESS;
}

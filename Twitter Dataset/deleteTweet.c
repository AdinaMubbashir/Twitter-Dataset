#include "headerA3.h"
#include "helper.h"

void deleteTweet(tweet **tweetList)
{
    int count = 0;
    int choice = 0;
    tweet *temp;
    temp = *tweetList;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if (count != 0)
    {
        printf("Currently there are %d tweets.\n\nWhich tweet do you wish to delete - enter a value between 1 and %d: ", count, count);
        scanf("%d", &choice);
        getchar();
        if (choice == 0)
        {
            printf("The choice that was entered was not present as a tweet\n");
            return; // Returns to menu
        }
    }
    else
    {
        printf("Currently there are %d tweets\n", count);
    }

    tweet *temp2 = *tweetList;
    tweet *before;

    // If head node is entered
    if (temp2 != NULL && choice == 1)
    {
        *tweetList = temp2->next; // Changed head
        int num = temp2->id;
        printf("Tweet %d deleted. There are now %d tweets left.\n", num, count - 1);
        free(temp2); // free old head
        return;
    }

    // Search for the choice to be deleted and keep track
    for (int i = 0; temp2 != NULL && i != choice; i++)
    {
        before = temp2;
        temp2 = temp2->next;
    }

    // If choice entered is not in linked list
    if (temp2 == NULL)
    {
        printf("The choice that was entered was not present as a tweet\n");
        return; // Returns to menu
    }
    int num = before->id;
    printf("Tweet %d deleted. There are now %d tweets left.\n", num, count - 1);

    // free the node from linked list
    before->next = temp2->next;
    free(temp2);
}

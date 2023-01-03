#include "headerA3.h"
#include "helper.h"

int searchTweetsByKeyword(tweet *tweetList)
{
    char wordSearch[141];
    int val = 0;
    char temp[141];
    printf("Enter a choiceword to search: ");
    scanf("%s", wordSearch); //Enter search word
    getchar();
    for (int i = 0; i < strlen(wordSearch); i++)
    {
        wordSearch[i] = tolower(wordSearch[i]); // Make everything lowercase
    }

    while (tweetList != NULL)
    {
        strcpy(temp, tweetList->text); //Make temporary string

        for (int i = 0; i < strlen(temp); i++)
        {
            temp[i] = tolower(temp[i]); // Make everything lowercase
        }

        char *found = strstr(temp, wordSearch);

        if (found != NULL) //Strstr returns word if found or else NULL
        {
            printf("Match found for '%s': %s wrote: “%s”\n", wordSearch, tweetList->user, tweetList->text); //Print match
            tweetList = tweetList->next;
            val = 1;
        }
        else
        {
            tweetList = tweetList->next;
        }
    }
    printf("\n");

    return val; //Return 1 if match found or else 1
}

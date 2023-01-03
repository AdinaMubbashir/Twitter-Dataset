#include "headerA3.h"
#include "helper.h"

void displayTweets(tweet *tweetList)
{
    
    while (tweetList != NULL )
    {
        printf("<Id>: %d: Created by <%s> : <%s>\n", tweetList->id, tweetList->user, tweetList->text); //Display tweets
        tweetList = tweetList->next;

    }
}
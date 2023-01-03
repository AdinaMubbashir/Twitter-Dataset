#include "headerA3.h"
#include "helper.h"

void addNodeToList(tweet **tweetList, tweet *node)
{

    tweet *temp;
    temp = *tweetList;
    
    if (*tweetList == NULL)
    {
        *tweetList = node; //Make head
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next; //Store at the end of the list
        }
        temp->next = node;
    }
}
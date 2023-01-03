#include "headerA3.h"
#include "helper.h"

void sortID(tweet **head)
{

    tweet *temp = *head, *after = NULL;
    int val;

    if (head == NULL)
    {
        printf("List is empty\n"); //List is empty
        return;
    }
    else
    {
        while (temp != NULL)
        {
            after = temp->next;
            while (after != NULL)
            {
                if (temp->id > after->id) //If temp is greater
                {
                    val = temp->id;
                    temp->id = after->id; //temp is moved to next 
                    after->id = val; //after is in place of where temp was
                }
                after = after->next;
            }
            temp = temp->next; 
        }
    }
}
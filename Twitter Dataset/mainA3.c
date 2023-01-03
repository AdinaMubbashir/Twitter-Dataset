#include "headerA3.h"
#include "helper.h"

int main()
{
    //Declare variables
    char value[20];
    int choice;
    tweet *node1 = NULL;
    int num;


    do
    {
        //menu
        printf("1.Create a new tweet\n");
        printf("2.Display tweets\n");
        printf("3.Search a tweet (by choiceword)\n");
        printf("4.Find how many words are “stop words” (stop words are explained in a later section)\n");
        printf("5.Delete the nth tweet\n");
        printf("6.Save tweets to a file\n");
        printf("7.Load tweets from a file\n");
        printf("8.Sort the given linked list on userid\n");
        printf("9.Exit\n");

        printf("Chose a menu option: ");
        fgets(value, 20, stdin);
        choice = atoi(value);
        

        switch (choice)
        {
        case 1:

            addNodeToList(&node1, createTweet(node1)); //Calling function 1 within addNodeToList

            break;
        case 2:

            displayTweets(node1); //Calling function 1

            break;
        case 3:

            num = searchTweetsByKeyword(node1); //Calling function 3

            if (num == 1) 
            {
            }

            break;

        case 4:

            countStopWords(node1); //Calling function 4

            break;

        case 5:

            deleteTweet(&node1); //Calling function 5

            break;

        case 6:

            saveTweetsToFile(node1); //Calling function 6
            break;

        case 7:

            loadTweetsFromFile(&node1); //Calling function 7

            break;

        case 8:

            sortID(&node1); //Calling function 8

            break;

        default:
            break;
            printf("That is an invalid choice\n"); //If user enter an integer that is not 1,9 or betweeb 1 and 9
        }

        

    } while (choice != 9);

    tweet *temp;

       while (node1 != NULL)
    {
        temp = node1;
        node1 = temp->next;
        free(temp); // free memory
    }


    return 0;
}

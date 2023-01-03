#include "headerA3.h"
#include "helper.h"

tweet *createTweet(tweet *tweetList)
{

    char userTweet[200];
    char name[100];
    tweet *newNode = NULL;
    newNode = (tweet *)malloc(sizeof(tweet)); //malloc node

    if (!newNode)
        return (NULL); //check if node allocated

    printf("Enter a username: ");
    getchar();
    fgets(name, 100, stdin); 
    name[strlen(name) - 1] = '\0';

    while (strlen(name) > 51 || strlen(name) == 0) 
    {
        printf("Enter a username: "); // ERROR CHECK: make sure its less than 51 chars
        fgets(name, 100, stdin);
        name[strlen(name) - 1] = '\0';
        continue;
    }

    strcpy(newNode->user, name); //copy into node

    printf("Enter the user's tweet: ");
    fgets(userTweet, 200, stdin); 
    userTweet[strlen(userTweet) - 1] = '\0';

    while (strlen(userTweet) > 140 || strlen(userTweet) == 0) 
    {
        printf("Enter the user's tweet: "); // ERROR CHECK: make sure its more than 141 chars
        fgets(userTweet, 200, stdin);
        userTweet[strlen(userTweet) - 1] = '\0';
        continue;
    }


    strcpy(newNode->text, userTweet); //copy into node

    printf("\n");

    int lengthTweet = strlen(newNode->text);
    int lengthId = strlen(newNode->user);

    for (int i = 0; i < lengthId; i++)
    {
        newNode->id = newNode->id + newNode->user[i]; //ascii value
    }

    newNode->id += lengthTweet; //adding tweet length

    while (tweetList != NULL)
    {
        if (newNode->id == tweetList->id)
        {
            int num = rand() % 999 + 1;
            newNode->id = newNode->id + num; //adding randon number between 1 and 999
        }
        tweetList = tweetList->next;
    }

    printf("Your computer-generated userid is: %d\n", newNode->id);

    printf("\n");

    newNode->next = NULL;

    return newNode;
}
#include "headerA3.h"
#include "helper.h"

void loadTweetsFromFile(tweet **tweetList)
{
    char fileName[100];
    char inText[500];
    FILE *inFile = NULL;
    tweet *newNode = NULL;
    char *token = NULL;

    printf("Enter a filename to load from: ");
    // getchar();
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName) - 1] = '\0';

    inFile = fopen(fileName, "r"); //Read file

    if (inFile == NULL)
    {
        printf("Could not open file %s\n", fileName);
        return; //Returns to menu
    }


    while (!feof(inFile))
    {
        newNode = malloc(sizeof(tweet));
        if (fgets(inText, 500, inFile) == NULL)
        {
            break; //Exits while loop
        }
        inText[strlen(inText) - 1] = '\0'; //Converts last character to null
        token = strtok(inText, ",");
        newNode->id = atoi(token); //Store id
        token = strtok(NULL, ",");
        strcpy(newNode->user, token); //Store username
        token = strtok(NULL, "\0");
        strcpy(newNode->text, token); //Store tweet

        addNodeToList(tweetList, newNode); //Calling addNodeToList
    }

      fclose(inFile);  // Done with file, so close it
      printf("Tweets Imported!\n");

    
}

#include "headerA3.h"
#include "helper.h"

void saveTweetsToFile(tweet *tweetList)
{

    char fileName[100];
    FILE *inFile = NULL;

    printf("Enter the filename where you would like to store your tweets: "); //User input file name
    scanf("%s", fileName);
    getchar();

    inFile = fopen(fileName, "w"); //Write to file

    if (inFile == NULL)
    {
        printf("Could not open file %s\n", fileName);
        return; // Returns to menu
    }
    else
    {
        while (tweetList != NULL)
        {
            fprintf(inFile, "%d,%s,%s", tweetList->id, tweetList->user, tweetList->text);
            fprintf(inFile,"\n");
            tweetList = tweetList->next;
        }

   
        printf("Output successful!\n");
    }

    // Done with file, so close it
    fclose(inFile);

}
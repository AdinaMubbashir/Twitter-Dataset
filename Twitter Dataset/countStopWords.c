#include "headerA3.h"
#include "helper.h"

void countStopWords(tweet *tweetList)
{
  char stop[25][5] = {"a", "an", "and", "are", "as", "at", "be", "by", "for", "from", "has", "he", "in", "is", "it", "its",
                      "of", "on", "that", "the", "to", "was", "were", "will", "with"}; //2d array of stop words


  char *token = NULL;

  int numTweets = 0;
  int countWords = 0;
  char temp[141];


  while (tweetList != NULL)
  {
    strcpy(temp, tweetList->text); //Make temporary string

    for (int i = 0; i < strlen(temp); i++)
    {
      temp[i] = tolower(temp[i]); // Make everything lowercase
    }

    token = strtok(temp, "\t ");

    for (int i = 0; token != NULL; i++)
    {
      for (int j = 0; j < 25; j++)
      {
        if (strcmp(stop[j], token) == 0) //Check if word is same
        {
          countWords++; //increment if stop word found 
        }
      }
      token = strtok(NULL, "\t ");
    }
    tweetList = tweetList->next;
    numTweets++; //Increment tweet count
  }

  printf("Across %d tweets, %d stop words were found.\n", numTweets, countWords);
}
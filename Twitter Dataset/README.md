
Compile and Run Program: 

Compile: make

Run:./A3

Run with valgrind:valgrind ./A3

Completed components:

mainA3.c: The main will take any user input that is not 1, 9, or between 1 and 9 as invalid. The user will
be asked to enter a valid input. Entering a string will be considered invalid and the user will be prompted to 
enter a valid input. If number 1,9, or between 1 and 9 are entered, user will be taken to that option.

createTweets.c: The user cannot enter a useranme greater than 51 and a tweet greater than 140(after removing new line).
The user can enter a username and a tweet and a id will be generated, and if the id already exists, a number between 1 and 999 
will be added.

displayTweets.c: A while loop will display all tweets until a null is reached. If no tweets exist, nothing is displayed.

searchTweetsByKeyBoard.c: User will be asked to enter a word that they are searching for and it will display the tweets containing
that word. If no tweets containing that word exist, nothing is displayed.

CountStopWords.c: If any tweets contain stop words, it will display the number of stop words found in all tweets that exist.
If no tweets exist and stop words exist, it will display zero.

deleteTweet.c: The user will be asked to delete a tweet based on how many exist. If number entered exists, the tweet will be deleted. If number entered does not exist, the user will be told it does not exist and returned to menu.

SaveTweetsToFile.c: If user enters file name, all tweets that exist will be imported into that file. If no tweets exist, the file 
will contaon nothing. If user exits and option 6 is not picked, all is lost(freed).

LoadTweetsFromFile.c: User will enter a file name and all tweets, ids, and usernames that exist in that file will be imported
into list only if they are in the correct format.

sortID.c: Linked list will be sorted in ascending order, can be checked by picking option 2 on menu.

addNodeToList.c: Will move new tweets to the end of list.


All error checks were done:
- User cannot enter a greater userName than 51
- User cannot enter a tweet greater than 140(after removing new line)
- In main, if user enters string, char, or a number than is not 1,9, or between 1 and 9, they are prompted to enter again
- User cannot input enter as an input in username or tweet, they will be prompted to enter a value








#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

// Two constants defined for determinging whether hands are flushes or straights.

#define FALSE 0
#define TRUE 1

// Function prototyping

void printGreeting();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);




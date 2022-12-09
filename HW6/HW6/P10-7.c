#include<stdio.h>

struct card
{
	char *face;
	char *suit;
};

int m1(void) 
{
	struct card aCard;
	struct card *cardptr;

	aCard.face = "ACE";
	aCard.suit = "Spades";

	cardptr = &aCard;
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		                         cardptr->face, " of ", cardptr->suit,
		                        (*cardptr).face, " of ", (*cardptr).suit);

	system("pause");
	return 0;
}
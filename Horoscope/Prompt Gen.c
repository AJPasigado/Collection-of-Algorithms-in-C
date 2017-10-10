#include <stdio.h>
#include <time.h>

int get_noun (FILE*);

int main () {
	FILE*noun = fopen("91Knouns.txt","r");
	FILE*adj = fopen("28Kadjectives","r");
	
	printf ("%s", get_noun(noun));
}

int get_noun (FILE* noun){
	int i=0;
	char msg[1000];
	int randt;
	
	srand (time(NULL));
	randt = rand() % 91000;
	
	while (i<randt){
		fgets (msg, 1000, noun);
	}
	return msg;
}

#include <stdio.h>
#include <time.h>
#include <string.h>

struct character {
	char name[20];
	int hp;
	int atk;	
};

int d6(void);

int main() {
	srand(time(NULL));
	
	struct character p1, monster;
	int r;
	
	printf("What is the name of your hero? ");
	scanf("%s", p1.name);
	
	p1.hp = d6() + d6() + d6();
	p1.atk = d6() + 3;
	
	strcpy(monster.name, "Giant rat");
	monster.hp = 6;
	monster.atk = 7;
	
	while(p1.hp > 0 && monster.hp > 0) {
	// fight one round
		if(p1.atk + d6() >= monster.atk + d6()) {
			printf("%s hits %s...\n", p1.name, monster.name);
			monster.hp--;
		} else {
			printf("%s bites %s...\n", monster.name, p1.name);
			p1.hp--;
		}
			printf("--------------\n");
			printf("%s HP: %d\n", p1.name, p1.hp);
			printf("%s HP: %d\n", monster.name, monster.hp);
			printf("--------------\n");
	}
		

}

int d6() {
	int d;
	d = rand() % 6 + 1;
	return d;
}

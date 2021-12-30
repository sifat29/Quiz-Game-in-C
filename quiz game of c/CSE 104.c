#include <stdio.h>
#include <string.h>
#include<time.h>
#include<stdlib.h>

void gk();
void sports();
void geo();
void physics();
int play();
int i ,score = 0,choice;

void menu() {
	int a;
	printf("\n\n1. General Knowledge\n2. Sports\n3. Geography\n4. Physics");
	printf("\n\nSelect your choice from the aforementioned categories: ");
	scanf("%d", &a);
	if (a == 1) {
		printf("\nYou have chosen general knowledge. Best of luck!\n\n");
		gk();
		play();
	}
	else if (a == 2) {
		printf("\nYou have chosen sports. Best of luck!\n\n");
		sports();
		play();
	}
	else if (a == 3) {
		printf("\nYou have chosen geography. Best of luck!\n\n");
		geo();
		play();
	}
	else if (a == 4) {
		printf("\nYou have chosen physics. Best of luck!\n\n");
		physics();
		play();
	}
}

struct info {
	int ans;
	char ques[1000];
	char options[500];
};

struct info quiz[5];
int main() {
	int a;
	i = 0;
	do{
	printf("Welcome to a simple quiz game! You are provided with 4 categories.\nYou have to answer a range of questions from any of these 4 categories.");
	menu();
	if(choice==2)
    {
        break;
    }
	}while(1);
	return 0;
}

int play() {
	int n;
	for(i=0;i<5;i++){
	clock_t begin, end, current_time;
	puts(quiz[i].ques);
	puts(quiz[i].options);
	printf("\nYour Choice: ");
	begin = clock();
	scanf("%d", &n);
	end = clock();
	if(((double)(end-begin))/CLOCKS_PER_SEC >=5){
    printf("your time is up %f\n", (((double)(end-begin))/CLOCKS_PER_SEC));
     }
	if (n == quiz[i].ans) {
		puts("\nCorrect!!!\n\a");
		score++;
	}
	else {
		printf("\nWrong! The correct answer is %d.\a\n\n", quiz[i].ans);
	}

	}
	printf("All 5 questions are answered!");
	printf("\nYour score is %d out of 5.\nThanks for playing(^_^)\n", score);
	printf("1.Play again  2.Exit\n");
	printf("Your choice:");
	scanf("%d",&choice);
	return choice;
}



void gk() {
	strcpy(quiz[0].ques, "Diamonds are made from highly compressed?");
	strcpy(quiz[1].ques, "If you checked the time on Big Ben, in which country would you be?");
	strcpy(quiz[2].ques, "Where was Hitler born?");
	strcpy(quiz[3].ques, "Biggest selling music of all time?");
	strcpy(quiz[4].ques, "Who played the protagonist in Christopher Nolan's 'Inception'?");

	strcpy(quiz[0].options, "1. Emeralds\n2. Coal\n3. Crystals\n4. Mud");
	strcpy(quiz[1].options, "1. Australia\n2. Bangladesh\n3. France\n4. England");
	strcpy(quiz[2].options, "1. Germany\n2. Austria\n3. Poland\n4. Ukraine");
	strcpy(quiz[3].options, "1. Billy Jean\n2. Thriller\n3. Candle In The Wind\n4. The Dark Side of The Moon");
	strcpy(quiz[4].options, "1. Leonardo DiCaprio\n2. Joesph Gordon-Levitt\n3. Tom Hardy\n4. Ananta Jalil");

	quiz[0].ans = 2;
	quiz[1].ans = 4;
	quiz[2].ans = 2;
	quiz[3].ans = 3;
	quiz[4].ans = 1;

}

void sports() {

	strcpy(quiz[0].ques, "Who is currently the best all rounder in cricket?");
	strcpy(quiz[1].ques, "Who has been presented with the Ballon d'Or award for the most number of times?");
	strcpy(quiz[2].ques, "Who is the current WWE Champion?");
	strcpy(quiz[3].ques, "What is the current ranking of Bangladesh Cricket Team in ODI?");
	strcpy(quiz[4].ques, "Who has won the 2016 Paris marathon in the men's category?");

	strcpy(quiz[0].options, "1. Ravindra Jadeja\n2. Ravichandran Ashwin\n3. Shakib Al Hasan\n4. Ben Stokes");
	strcpy(quiz[1].options, "1. Lionel Messi\n2. CR7\n3. Manuel Neuer\n4. David Beckham");
	strcpy(quiz[2].options, "1. Jinder Mahal\n2. AJ Styles\n3. Brock Lesnar\n4. Stone Cold Steve Austin");
	strcpy(quiz[3].options, "1. Second\n2. First\n3. 5th\n4. 7th");
	strcpy(quiz[4].options, "1. Mark Korir\n2. Martin Lel\n3. Abraha Gebretsadik\n4. Cyprian Kotut");

	quiz[0].ans = 3;
	quiz[1].ans = 1;
	quiz[2].ans = 1;
	quiz[3].ans = 4;
	quiz[4].ans = 4;

}

void geo() {
	strcpy(quiz[0].ques, "Which one is the coldest location on Earth?");
	strcpy(quiz[1].ques, "What is the lowest point on Earth?");
	strcpy(quiz[2].ques, "What is longest river on Earth?");
	strcpy(quiz[3].ques, "What is the capital of New Zealand?");
	strcpy(quiz[4].ques, "What was once the capital of Japan?");

	strcpy(quiz[0].options, "1. East Antarctica\n2. Uganda\n3. Mount Everest\n4. Switzerland");
	strcpy(quiz[1].options, "1. Deepwater Horizons\n2. Mariana Trench\n3. Mponeng & TauTona Gold Mines\n4. Base of Grand Canyon");
	strcpy(quiz[2].options, "1. Amazon River\n2. Nile\n3. Yangtze\n4. Congo River");
	strcpy(quiz[3].options, "1. Oslo\n2. Vienna\n3. Uganda City\n4. Wellington");
	strcpy(quiz[4].options, "1. Tokyo\n2. Kyoto\n3. Okinawa\n4. Osaka");

	quiz[0].ans = 1;
	quiz[1].ans = 2;
	quiz[2].ans = 1;
	quiz[3].ans = 4;
	quiz[4].ans = 2;
}

void physics() {
	strcpy(quiz[0].ques, "Who was the inventor of steam engine?");
	strcpy(quiz[1].ques, "Which of these is taken as an ideal temperature for executing experiment?");
	strcpy(quiz[2].ques, "which one of these instrument is use for finding radius of a ball?");
	strcpy(quiz[3].ques, "What is the value of G?");
	strcpy(quiz[4].ques, "Who is the father of modern physics?");

	strcpy(quiz[0].options, "1. James Watt\n2. Newton\n3. Aristotle\n4. Micheal Faraday");
	strcpy(quiz[1].options, "1. 22c\n2. 24c\n3. 25c\n4. 28c");
	strcpy(quiz[2].options, "1. Compass\n2. Slide Calipers\n3. Vernier Scale\n4. Inch scale");
	strcpy(quiz[3].options, "1. 6.674^11\n2. 6.673*10^-11\n3. 6.694*10\n4. 9.8");
	strcpy(quiz[4].options, "1. Newton\n2. Aristotle\n3. Stephen Hawkings\n4. Einstein");

	quiz[0].ans = 1;
	quiz[1].ans = 3;
	quiz[2].ans = 2;
	quiz[3].ans = 2;
	quiz[4].ans = 4;
}





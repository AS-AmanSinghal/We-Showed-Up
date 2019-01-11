#include<stdio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#define clrscr() system("cls");
void foo()
{
	clrscr();
}

void ABOUT();
void CONTACT();
void TEAM();
void main_menu();
void QUESTION_BAR();
void LIVE();
void ANSWER();
void ASK();
void HOST();
void JOIN();
void OPEN();
void CLOSE();
void OPEN1();
void CLOSE1();
void DOWNLOAD();
void REGISTRATION();
void university_roll();
void mobile_number();
void DETAILS();
void LOG_IN();
int main()
{
	char ch[1];
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n\n\n\n\n\t\t\t\t\t\t\t\t WELCOME TO WE SHOWED UP\n");
	printf("\t\t\t\t\t\t\t\t\n\n\n\n\n\t\t\t\t\t\t\t\t PRESS ENTER TO CONTINUE.......");
	gets(ch);
	main_menu();
}

void main_menu()
{
	int n;
	char ch='Y';
	do
	{
		clrscr();
		printf("\t\t WELCOME SCREEN\n");
		printf("1. ABOUT US\n");
		printf("2. REGISTRATION\n");
		printf("3. TEAM\n");
		printf("4. CONTACT US\n");
		printf("5. EXIT\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				ABOUT();
				break;
			case 2:
				REGISTRATION();
				break;
			case 3:
				TEAM();
				break;
			case 4:
				CONTACT();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("CHOOSE VALID OPTION\n");
		}
		printf("\n DO YOU WANT TO CONTINUE FOR HOME SCREEN Y/N\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

void ABOUT()
{
	clrscr();
	printf("The basic idea was to share Knowledge help coders to work on project or host a project.\n");
	printf("A common platform where people can tell that someone is working on a project and you can join it regardless of who and where are you.\n");
	printf("Wether it is an open source project or a close source project that is held by a company,you can collaborate.\n");
}

void TEAM()
{
	clrscr();
	printf("President:- AMAN SINGHAL\n");
	printf("Vice President:- ABHINAV VARSHNEY\n");
	printf("TECHNICAL TEAM:-\n");
	printf("\t\t\t 1) Tanishq Tripathi\n");
	printf("\t\t\t 2) Utkarsh Rastogi\n");
	printf("\t\t\t 3) Manish Saraswat\n");
}

void CONTACT()
{
	clrscr();
	printf("weshowedup@gmail.com\n");
	printf("\t\t\t President:- 9719899876\n");
	printf("\t\t\t Vice President:- xxxxxxxxxx\n");
}

void QUESTION_BAR()
{
	int n;
	char ch='Y';
	do
	{
		clrscr();
		printf("\t\t\t\t\t\n\n\n QUESTION BAR\n");
		printf("1. LIVE A QUESTION\n");
		printf("2. ASK A QUESTION\n");
		printf("3. HOST A QUESTION\n");
		printf("4. JOIN A QUESTION\n");
		printf("5. DOWNLOAD A FILE\n");
		printf("6. BACK\n");
		printf("7. EXIT\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				LIVE();
				break;
			case 2:
				ASK();
				break;
			case 3:
				HOST();
				break;
			case 4:
				JOIN();
				break;
			case 5:
				DOWNLOAD();
				break;
			case 6:
				main_menu();
				break;
				case 7:
					exit(0);
			default:
				printf("CHOOSE VALID OPTION\n");
		}
		printf("\n DO YOU WANT TO CONTINUE FOR QUESTION BAR Y/N\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

void LIVE()
{
	int n;
	char ch='Y',ask='Y';
	do
	{
		clrscr();
		printf("\t\t\t\t\t\n\n\n LIVE QUESTIONS\n");
		printf("1. What is C Language?\n");
		printf("2. What is Header File\n");
		printf("Do you Want to Answer (Y/N) \n");
		scanf("%d",&n);
		scanf("%c",&ask);
		switch(ask)
		{
			case 'Y':
				ANSWER();
				break;
			case 'y':
				ANSWER();
				break;
			case 'N':
				exit(0);
				break;
			case 'n':
				exit(0);
				break;
			default:
				printf("CHOOSE VALID OPTION\n");
		}
		printf("\n DO YOU WANT TO CONTINUE FOR LIVE QUESTIONS Y/N\n");
		scanf("%d",&n);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

void ANSWER()
{
	char answer[1000],ch='Y';
	int n,x;
	do
	{
		printf("Which Question You Want to Answer\n");
		scanf("%d",&n);
		printf("Type Your Answer\n");
		scanf("%d",&x);
		gets(answer);
		printf("Do You Want To Answer\n");
		scanf("%d",&x);
		scanf("%c",&ch);
		if(ch=='n' || ch=='N')
		{
			QUESTION_BAR();	
		}	
	}while(ch=='y' || ch=='Y');
}

void ASK()
{
	char cha='y',aman;
	char ask[100];
	int x;
	do
	{
		printf("ENTER YOUR QUESTION \n");
		scanf("%c",&aman);
		gets(ask);
		printf("We Will Reply Soon\n\n");
		printf("Do You Have Any Other Question \n");
		scanf("%d",&x);
		scanf("%c",&cha);
	}while(cha=='Y' || cha=='y');
}

void HOST()
{
	int n;
	char ch='Y',ask='Y';
	do
	{
		clrscr();
		printf("\t\t\t\t\t\n\n\n HOST BAR\n\n\n");
		printf("1. OPEN PROJECT\n");
		printf("2. CLOSE PROJECT\n");
		printf("3. BACK\n");
		printf("4. EXIT\n\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				OPEN();
				break;
			case 2:
				CLOSE();
				break;
			case 3:
				QUESTION_BAR();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("CHOOSE VALID OPTION\n");
		}
		printf("\n DO YOU WANT TO CONTINUE FOR HOST BAR Y/N\n");
		scanf("%d",&n);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

void OPEN()
{
	clrscr();
	char pitch[1000];
	int code1,x;
	printf("PLEASE ENTER FIELD OF YOUR IDEA\n\n");
	printf("1. COMPUTER SCIENCE (CODE:- 801)\n");
	printf("2. ELECTRICAL ENGINEERING (CODE:- 802)\n");
	printf("3. CIVIL ENGINEERING (CODE:- 803)\n");
	printf("4. MECHNICAL ENGINEERING (CODE:- 804)\n");
	printf("5. ELECTRONICS AND COMMUNICATION ENGINEERING (CODE:- 805)\n\n");
	printf("ENTER A CODE\n");
	scanf("%d",&code1);
	printf("PITCH US YOUR PROJECT\n");
	scanf("%d",&x);
	gets(pitch);
	printf("THANK YOU FOR PITCHING US YOUR IDEA\n\n");
	printf("\t WE WILL CONTACT YOU SOON\n");
}

void CLOSE()
{
	clrscr();
	char pitch[1000];
	int code1,x;
	printf("PLEASE ENTER FIELD OF YOUR IDEA\n\n");
	printf("1. COMPUTER SCIENCE (CODE:- 801)\n");
	printf("2. ELECTRICAL ENGINEERING (CODE:- 802)\n");
	printf("3. CIVIL ENGINEERING (CODE:- 803)\n");
	printf("4. MECHNICAL ENGINEERING (CODE:- 804)\n");
	printf("5. ELECTRONICS AND COMMUNICATION ENGINEERING (CODE:- 805)\n\n");
	printf("ENTER A CODE\n");
	scanf("%d",&code1);
	printf("PITCH US YOUR PROJECT\n");
	scanf("%d",&x);
	gets(pitch);
	printf("THANK YOU FOR PITCHING US YOUR IDEA\n\n");
	printf("\t WE WILL CONTACT YOU SOON\n");
}

void JOIN()
{
	int n;
	char ch='Y',ask='Y';
	do
	{
		clrscr();
		printf("\t\t\t\t\t\n\n\n JOIN BAR\n\n\n");
		printf("1. OPEN PROJECT\n");
		printf("2. CLOSE PROJECT\n");
		printf("3. BACK\n");
		printf("4. EXIT\n\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				OPEN1();
				break;
			case 2:
				CLOSE1();
				break;
			case 3:
				QUESTION_BAR();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("CHOOSE VALID OPTION\n");
		}
		printf("\n DO YOU WANT TO CONTINUE FOR JOIN BAR Y/N\n");
		scanf("%d",&n);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

void OPEN1()
{
	clrscr();
	int n;
	printf("1. HyperLeader\n");
	printf("2. Google Brain\n");
	printf("3. Automatic Grade Linux\n");
	printf("4. Jakarta Project\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nPROJECT FINISHED\n");
			break;
		case 2:
			printf("\nPROJECT FINISHED\n");
			break;
		case 3:
			printf("\nPROJECT FINISHED\n");
			break;
		case 4:
			printf("\nPROJECT FINISHED\n");
			break;
		default:
			printf("NO CHOICE AVAILABLE\n");
	}
}

void CLOSE1()
{
	clrscr();
	int n;
	printf("1. MS Office\n");
	printf("2. DreamWeaver\n");
	printf("3. Flash\n");
	printf("4. Notepad\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nPROJECT FINISHED\n");
			break;
		case 2:
			printf("\nPROJECT FINISHED\n");
			break;
		case 3:
			printf("\nPROJECT FINISHED\n");
			break;
		case 4:
			printf("\nPROJECT FINISHED\n");
			break;
		default:
			printf("NO CHOICE AVAILABLE\n");
	}
}

void DOWNLOAD()
{
	clrscr();
	printf("404 ERROR !");
}

void DETAILS()
{
	clrscr();
	char name[1000],uni_name[1000],mail[1000],pass[1000];
	int code1,code2,x;
	printf("\t\t\t SIGN UP PAGE \n\n\n\n");
	printf("PLEASE ENTER YOUR NAME\n");
	scanf("%d",&x);
	gets(name);
	university_roll();
	printf("PLEASE ENTER YOUR UNIVERSITY NAME\n");
	scanf("%d",&x);
	gets(uni_name);
	printf("PLEASE ENTER YOUR EMAIL\n");
	gets(mail);
	printf("PLEASE ENTER YOUR PASSWORD\n");
	gets(pass);
	mobile_number();
	printf("PLEASE ENTER FIELD OF YOUR IDEA\n\n");
	printf("1. COMPUTER SCIENCE (CODE:- 801)\n");
	printf("2. ELECTRICAL ENGINEERING (CODE:- 802)\n");
	printf("3. CIVIL ENGINEERING (CODE:- 803)\n");
	printf("4. MECHNICAL ENGINEERING (CODE:- 804)\n");
	printf("5. ELECTRONICS AND COMMUNICATION ENGINEERING (CODE:- 805)\n\n");
	printf("ENTER AT LEAST TWO CODE\n");
	scanf("%d %d",&code1,&code2);
	QUESTION_BAR();
}

void university_roll()
{
	long long int roll,x;
	int c=0;
	printf("PLEASE YOUR UNIVERSITY ROLL NUMBER\n");
	scanf("%lld",&roll);
	x=roll;
	while(x>0)
	{
		c++;
		x=x/10;
	}
	if(c!=9)
	{
		printf("ENTER 9 DIGIT ROLL NUMBER\n");
		university_roll();
	}
}

void mobile_number()
{
	long long int num,x;
	int c=0;
	printf("PLEASE ENTER YOUR MOBILE NUMBER\n");
	scanf("%lld",&num);
	x=num;
	while(x>0)
	{
		c++;
		x=x/10;
	}
	if(c!=10)
	{
		printf("ENTER 10 DIGIT MOBILE NUMBER\n");
		mobile_number();
	}
}

void REGISTRATION()
{
	int n;
	char ch='Y',ask='Y';
	do
	{
		clrscr();
		printf("\t\t\t\t\t\n\n\n REGISTRATION PAGE\n\n\n");
		printf("1. LOG IN\n");
		printf("2. SIGN UP\n");
		printf("3. BACK\n");
		printf("4. EXIT\n\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				LOG_IN();
				break;
			case 2:
				DETAILS();
				break;
			case 3:
				main_menu();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("CHOOSE VALID OPTION\n");
		}
		printf("\n DO YOU WANT TO CONTINUE FOR REGISTRATION PAGE Y/N\n");
		scanf("%d",&n);
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}

void LOG_IN()
{
	clrscr();
	long long int uni_roll;
	int a;
	char pass[1000];
	printf("ENTER YOUR UNIVERSITY ROLL NUMBER \n");
	scanf("%lld",&uni_roll);
	if(uni_roll==171500038)
	{
		printf("ENTER YOUR PASSWORD \n");
		scanf("%d",&a);
		gets(pass);
		if(strcmp(pass,"aman")==0)
		{
			QUESTION_BAR();
		}
		else
		{
			printf("WRONG PASSWORD");
		}
	}
	else
	{
		printf("PLEASE REGISTER YOURSELF\n");
	}
}

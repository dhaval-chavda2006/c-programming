//menu of string functions

#include<stdio.h>
#include<string.h>
void main()
{
	int string;
	char s1[30],s2[30];
	
	printf("WELCOME TO MENU OF STRING FUNCTION\n");
	
	printf("------------------------------------\n");
	
	printf("\nENTER STRING 1: ");
	gets(s1);
	
	printf("\nENTER STRING 2: ");
	gets(s2);
	
	printf("ENTER YOUR CHOICE\n\n");
	
	
	printf("1. STRING LENGTH\n");
	printf("2. STRING COPY\n");
	printf("3. STRING IN LOWERCASE\n");
	printf("4. STRING IN UPPERCASE\n");
	printf("5. STRING REVERSE\n");
	printf("6. STRING CONNECT\n");
	
	printf("\nenter option no: ");
	scanf("%d",&string);
	

switch(string)
{
	case 1:
		printf("\n%d",strlen(s1));
		
		break;
		
	case 2:
		strcpy(s1,s2);
		printf("\n%s",s1);
		
		break;
		
	case 3:
		strlwr(s1);
		printf("\n%s",s1);
		
		break;
		
	case 4:
		strupr(s1);
		printf("\n%s",s1);
		
		break;
		
	case 5:
		strrev(s1);
		printf("\n%s",s1);
		
		break;
		
	case 6:
		strcat(s1,s2);
		printf("%s\n",s1);
		
		break;
		
	default:
		printf("INVALID NO.");	
}
}
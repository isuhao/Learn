/*
#include  <stdio.h>
#include  <string.h>
#include  <conio.h>
#include  <stdlib.h>

#define N 40

void fun(char *str1,char *str2)
{
    int i;
    char *p1=str1;
    char *p2=str2;
    while(i<=N)
        i++;
    for( ;i<=2*N; i++)
        *(p1+i)=*(p2+i-N);

        *(p1+i)='\0';
}

int main()
{
     char str1[N],str2[N];
     int m,n,k;
     //clrscr() ;
     printf("******* Input the  string str1 & str2*******\n ");
     printf(" \nstr1:");
     gets (str1);
     printf(" \nstr2:");
     gets (str2);
     printf("******* The  string str1 & str2*******\n");
     puts (str1);
     puts (str2);
     fun(str1,str2);
     printf("******* The new string *******\n");
     puts (str1);
}
**/

#include <stdio.h>
#include <conio.h>
#define N 40
void fun(char *str1,char *str2)
{
	int i=0;
	char *p1=str1;
	char *p2=str2;
	while(*(p1+i) )
		i++;
	for(  ;*p2; i++)
		*(p1+i)= *p2++;
	*(p1+i)='\0';
}
int main()
{
	char str1[N],str2[N];
	int m,n,k;
	printf("******* Input the  string str1 & str2*******\n ");
	printf(" \nstr1:");
	gets (str1);
	printf(" \nstr2:");
	gets (str2);
	printf("******* The  string str1 & str2*******\n");
	puts (str1);
	puts (str2);
	fun(str1,str2);
	printf("******* The new string *******\n");
	puts (str1);
}

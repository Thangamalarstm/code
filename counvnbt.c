#include <stdio.h>
#include <conio.h>
void main(){
     int charcnt=0,dotcnt=0,commacnt=0,blankcnt=0,i;
     char ch,str[125];
     clrscr();
     printf("*****String Manipulations*****\n\n");
     printf("Enter a string ( 's' should be last char)\n\n");
     scanf("%[^s]s",str);
     printf("\n\nEntered String is \" %s \" \n",str);
     for(i=0;str[i]!='\0';i++){
     if(str[i]==' ')
        blankcnt++;
     elseif(str[i]=='.')
        dotcnt++;
     elseif(str[i]==',')
        commacnt++;
     }
     charcnt=i;
     printf("\n\nTotal Characters : %d",charcnt);
     printf("\nTotal Blanks     : %d",blankcnt);
     printf("\nTotal Full stops : %d",dotcnt);
     printf("\nTotal Commas     : %d",commacnt);
     getch();
}

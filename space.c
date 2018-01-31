#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int linecount;
 linecount = 0;
printf("Enter a filename :");
  gets(filename);
  fp = fopen(filename,"r");
  if ( fp )
   {
if (ch == '\n') { ++linecount; }
		}

	   if (charcount > 0) {
		++linecount;

	   }
    }
   else
      {
         printf("Failed to open the file\n");
        }
printf("Lines : %d \n", linecount);
getchar();
return(0);
}

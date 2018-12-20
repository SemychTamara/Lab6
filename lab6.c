#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int j = 1;
    char text[256];
    char delimiter[8] = " .,:;-\n";
    int counter=0;
    gets(text);
    

    char *word=strtok(text,delimiter);
    char *word1=word;
    while (word!=NULL)
    {
        if(strcmp(word1,word)==0)
        {
            counter++;
        }
        word=strtok(NULL,delimiter);
    }
     for(int i = 0; i < counter; i++ )

	   printf("\n%s ",word1);
}

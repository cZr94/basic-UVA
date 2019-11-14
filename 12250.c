# include <stdio.h>
# include <string.h>
int main()
{
   char str[20];
   int i;
   for(i=1;scanf("%s",str);i++)
   {
       if(str[0]=='#' && str[1]=='\0') return 0;

       if(!strcmp(str,"HELLO"))
            printf("Case %d: ENGLISH\n",i);
       else if(!strcmp(str,"HOLA"))
            printf("Case %d: SPANISH\n",i);
       else if(!strcmp(str,"HALLO"))
            printf("Case %d: GERMAN\n",i);
       else if(!strcmp(str,"BONJOUR"))
            printf("Case %d: FRENCH\n",i);
       else if(!strcmp(str,"CIAO"))
            printf("Case %d: ITALIAN\n",i);
       else if(!strcmp(str,"ZDRAVSTVUJTE"))
            printf("Case %d: RUSSIAN\n",i);
       else
            printf("Case %d: UNKNOWN\n",i);
   }
    return 0;
}

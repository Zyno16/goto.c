#include <stdio.h>
#include <stdlib.h>

int main()
{
     char *str,name[50],c;
        str= "hello";

        start:
            printf("\n enter you name");
            scanf("%s",&name);
            printf("%s %s",str,name);
          printf("\n do you want to run again(y/s)");
            c = getche();
            printf("\n");
            if(c=='y') goto start;
            system("PAUSE");





}

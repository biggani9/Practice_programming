#include <stdio.h>
#include <string.h>

int main()

{
    int i,n,len;
    char wrd[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",&wrd);
        len = strlen(wrd);

        if(len>10)
        {
            printf("%c%d%c\n",wrd[0],len-2,wrd[len-1]);
        }
        else
        {
            printf("%s\n",wrd);
        }

    }

    return 0;
}

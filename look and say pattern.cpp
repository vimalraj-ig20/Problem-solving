#include <stdio.h>
#include<string.h>

int main()
{
    char str[1000]="1",temp[1000];
    int index,count,N;
    scanf("%d",&N);
    while(N--)
    {
        printf("%s\n",str);
        index=0;count=1;
        for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[i+1])
        count++;
        else{
            temp[index++]=count +48;
            temp[index++]=str[i];
            count=1;
        }
    }
    temp[index]='\0';
    strcpy(str,temp);
    }
}

#include <stdio.h>
concat(char *a,char *b);
int main() {
    char a[]="hello";
    char b[]="world";
    concat(a,b);
     return 0;
}
concat(char *a,char *b)
{
    int i=0;
    while(*(a+i)!='\0')
    {
        i++;
    }
    int j=0;
    while(1)
    {
        *(a+i)=*(b+j);
        if(*(a+i)=='\0')
        break;
        i++;
        j++;
    }
    printf("Concatenated string is %s\nString length is %d",a,i);
   
}

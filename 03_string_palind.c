#include <stdio.h>
void palind(char *a);
int main() {
    char a[]="radar";
    palind(a);
}
void palind(char *a)
{
    int i=0;
    while(*(a+i)!='\0'){
        i++;
    }
    i=i-1;
    int j=0;
    while(j<i)
    {
        if(*(a+i)==*(a+j)){
        i--;
        j++;
        }
        else
        break;
    }
    if(j>=i)
    printf("String is palindrome\n");
    else
    printf("String is not palindrome\n");
    return 0;
}

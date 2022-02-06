#include <stdio.h>
void word_present(char *a,char *b);
int main() {
    char a[]="hellhellohelle";
    char b[]="hello";
    word_present(a,b);
}
void word_present(char *a,char *b)
{
    int i=0,j=0,k;
    while(*(a+i)!='\0')
    {
        if(*(a+i) != *(b+j))
        i++;
        else
        {
            k=i+1;
            while(*(b+j) != '\0')
            {
                if(*(a+i) == *(b+j)){
                i++;
                j++;
                }
                else
                break;
            }
            if(*(b+j) == '\0')
            break;
            else
            {
                j=0;
                i=k;
            }
        }
    }
    if(*(b+j) == '\0')
    printf("String is present\n");
    else
    printf("String is not present\n");
    return 0;
}

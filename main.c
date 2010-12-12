#include <stdio.h>
int main(int argc, const char *argv[])
{
   // int a,b;
    //puts("please input a number with 16 band");
    //scanf("%x",&a);
    //puts("another 16 band number");
    //scanf("%x",&b);
    //printf("%x",a+b);
   char aa[]="hello world";
   char bb[10];
   int i=0,j=0,m=0;
   while(aa[i]!=' ')
   {
        bb[i]=aa[i];
        i++;
   }
    while(aa[j+i+1]!='\0')
    {
        aa[j]=aa[j+i+1];
        j++;
    }
    for (m = 0; m < i; m++) 
    {
    aa[m+j+1]=bb[m];
    m++;
    }
    printf("%s",aa);
    putchar('\n');
    return 0;
}

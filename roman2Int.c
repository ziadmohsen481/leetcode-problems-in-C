#include <stdio.h>
// roman to integer functions
int romanToInt(char * s)
{
    int i=0;
    signed int  num[strlen(s)];
    while (s[i]!='\0')
    {
        switch (s[i])
        {
            case 'I':
            num[i]=1;
            break;
            case 'V':
            num[i]=5;
            break;
            case 'X':
            num[i]=10;
            break;
            case 'L':
            num[i]=50;
            break;
            case 'C':
            num[i]=100;
            break;
            case 'D':
            num[i]=500;
            break;
            case 'M':
            num[i]=1000;
            break;
            default:
            break;
        }
        i++;
    }
    int sum=0;
    int S[15]={0};
    for(int j=0;j<strlen(s)-1;j++)
    {
        
            if(num[j]<num[j+1])
            {
                num[j]*=-1;
            }
    }
    for(int k=0;k<strlen(s);k++)
    {
        sum+=num[k];
    }
    
    return sum;
}
int main()
{
    char s[5]="IIIV";
   printf("%d\n",romanToInt(s)) ;
    return 0;
}
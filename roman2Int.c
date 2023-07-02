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
    for(int j=0;j<strlen(s)-1;j++)
    {
            if(num[j]<num[j+1])
            {
                num[j]*=-1; // multiply by negative to be substracted in sum
            }
    }
    for(int k=0;k<strlen(s);k++)
    {
        sum+=num[k]; // taking sum of all elements
    }
    
    return sum;
}

int lengthOfLastWord(char * s)
{
int whitespace=0,count=0;
int index=0,length=0;
for(int k=strlen(s)-1;k>=0;k--)
{
    if(s[k]==' ')
    {
        count++;
    }
    else
        break;
}
s[strlen(s)-count]='\0'; // deleting tail whitespaces
count=0;
while(s[index]!='\0')
{
    if(s[index]==' ')
    {
        whitespace=index;
        count++;
    }
    index++;
}
if(0==count)
{
    return strlen(s);
}
for(int j=whitespace+1;s[j]!='\0';j++)
{
    length++;
}
return length;
}

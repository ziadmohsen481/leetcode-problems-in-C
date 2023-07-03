/*this solution takes the number storing it in a reverse version in the heap
and stores its orignial form in an array and comparing between them,however, it can be done with two arrays*/
int lengthOfInt(int x)
{
    int count=0;
    //checking length of number
    if(0==x)
    {
        return 1;
    }
    if(x<0)
    {
    while(x!=0)
    {    
        x/=10;
        count++;
    }    
    return count+1;
    }
    while(x!=0)
    {
        
        x/=10;
        count++;
    }
    return count;
}
int* toMemory(int x)
{
   // int num_saved;
    int count;
    //checking length of number
    count=lengthOfInt(x);
    int* ptr=(int*)malloc(count*sizeof(int));
    for(int i=0;x!=0;i++)
    {
        ptr[i]=x%10;
        x=x/10;
    }
    for(int j=0;j<count;j++)
    {
        printf("%d\n",ptr[j]);
    }
    return ptr;
}
bool isPalindrome(int x)
{
/*array of elements of the integer*/
int*ptr;
ptr=toMemory(x);
int length=lengthOfInt(x);
printf("length:%d\n",length);
int array[length];
if(1==length)
{
    return true;
}
/*filling the array with original form*/
for(int i=length-1;i>=0;i--)
{
    array[i]=x%10;
    x=x/10;
}
for(int j=0;j<length;j++)
{
    printf("arr[%d]=%d\n",j,array[j]);
    if(array[j]!=ptr[j])
    {
        return false;
    }
}
return true;
}

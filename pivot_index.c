int sumOfArray(int* array,int size)
{
    if(size<=0)
    {
        return 0;
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=array[i];
    }
return sum;
}
int pivotIndex(int* nums, int numsSize)
{
    int leftSum=0,rightSum,pivot_index;
    if(numsSize==0)
    {
        return -1;
    }
    else if(numsSize==1)
    {
        return 0;
    }
    for(int i=0;i<numsSize;i++)
    {
        rightSum=sumOfArray(nums+i+1,numsSize-i-1);
        leftSum=sumOfArray(nums,i);
        if(rightSum==leftSum)
        {
            return i;
        }   
    }
return (-1);

}

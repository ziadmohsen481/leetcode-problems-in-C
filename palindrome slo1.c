
bool isPalindrome(int x)
{
   unsigned int reversed=0,r,n=x;     // unsigned to prevent overflow
    if(x<0)                          // negative numbers are not palindrome
    {
        return false;
    }
    while(n!=0)                     //reversing the number
    {
        r=n%10;
        reversed=reversed*10+r;
        n=n/10;
    }
    if(x!=reversed)
    {
        return false;
    }
    return true;
}

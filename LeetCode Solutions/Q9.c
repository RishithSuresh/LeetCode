bool isPalindrome(int x) 
{
    int num,a;
    unsigned rev=0;
    num=x;
    while(num>0)
    {
        a=num%10;
        rev=(rev*10)+a;
        num=num/10;
    }    
    if(rev==x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

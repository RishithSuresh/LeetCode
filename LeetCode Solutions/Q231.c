bool isPowerOfTwo(int n) 
{
    long int mul = 1;
    while(mul <= n)
    {
        if(mul == n)
        {
            return true;
        }
        else
        {
            mul *= 2;
        }
    }
    return false;
}

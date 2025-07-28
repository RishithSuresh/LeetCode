int addDigits(int num) 
{
    while(num > 9)
    {
        int sum = 0;
        while(num != 0)
        {
            int i = num % 10;
            sum += i;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

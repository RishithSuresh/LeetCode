#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num) 
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    int sqrtNum = (int)sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int diagonalPrime(int** nums, int numsSize, int* numsColSize) 
{
    int i=0,j=0,prime=0;
    while(i < numsSize && j < *numsColSize)
    {
        if(isPrime(nums[i][j]) && nums[i][j] > prime)
        {
            prime = nums[i][j];
        }
        i++;
        j++;
    }
    i = 0;
    j = *numsColSize - 1;
    while(i < numsSize && j >= 0)
    {
        if(isPrime(nums[i][j]) && nums[i][j] > prime)
        {
            prime = nums[i][j];
        }
        i++;
        j--;
    }
    if(prime > 0)
    {
        return prime;
    }
    return 0;
}

int diagonalSum(int** mat, int matSize, int* matColSize) 
{
    int i,j,sum = 0;
    if(matSize % 2 == 0)
    {
        i=j=0;
        while(i < matSize && j < *matColSize)
        {
            sum += mat[i][j];
            i++;
            j++;
        }
        i = 0;
        j = *matColSize - 1;
        while(i < matSize && j >= 0)
        {
            sum += mat[i][j];
            i++;
            j--;
        }
    }
    else
    {
        i=j=0;
        while(i < matSize && j < *matColSize)
        {
            sum += mat[i][j];
            i++;
            j++;
        }
        i = 0;
        j = *matColSize - 1;
        while(i < matSize && j >= 0)
        {
            if(i != j)
            {
                sum += mat[i][j];
            }
            i++;
            j--;
        }
    }
    return sum;
}

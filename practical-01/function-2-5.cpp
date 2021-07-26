//function to descending
bool descending(int array[], int n) 
{
    if (n == 1 || n == 0) 
        return 1; 
    for (i=1; i<n; i++)
    {
        if (arr[i] > arr[i+1]) 
           return 0; 
    }
    return descending(array,n);
}

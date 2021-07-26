//function to find the maximum number
int minimum(int array[], int n)
{
    if (n<0)
        return 0;
    else
        int maximum=array[0];
        for (int i=1; i<n; i++)
        {
            if (array[i]>minimum)
                maximum=array[i]; 
        }
        return maximum;
}

//function to find the smallest number
int minimum(int array[], int n)
{
    if (n<0)
        return 0;
    else
        int minimum=array[0];
        for (int i=1; i<n; i++)
        {
            if (array[i]<minimum)
                minimum=array[i]; 
        }
        return minimum;
}

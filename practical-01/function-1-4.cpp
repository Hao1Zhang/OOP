// function to sum of two array
int sumtwo(int array[], int secondarray[],int n)
{   
    if (n<1)
        return 0;
    else
        int sum1=0;//the sum of the first array
        int sum2=0;//the sum of the second array
        int sumtwo=0;//the sum of two array

        //iterate through all elements and add them to sum
        for (int i=0; i<n; i++)
            sum1=sum1+array[i];
            sum2=sum2+secondarray[i];
            sumtwo=sum1+sum2;

            return sumtwo;
}

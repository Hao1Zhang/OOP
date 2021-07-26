// Function that returns 0 if a pair 

bool ascending(int array[], int n)
{ 
    // Array has one or no element or the 
    // rest are already checked and approved. 
    if (n == 1 || n == 0) 
        return 1; 
  
    // Unsorted pair found (Equal values allowed) 
    if (array[n - 1] < array[n - 2]) 
        return 0; 
  
    // Last pair was sorted 
    // Keep on checking 
    return ascending(array, n - 1); 
} 

/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(values[mid]==value)
        {
            return true;
        }
        
        else if(values[mid]>value)
        {
            high=mid-1;
        }
        
        else
        {
            low=mid+1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int swap,i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(values[j+1]<values[j])
            {
                swap=values[j];
                values[j]=values[j+1];
                values[j+1]=swap;
            }
        }
    }
    return;
}

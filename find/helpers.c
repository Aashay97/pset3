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
    int swap,i,j,min;
    
    for(i=0;i<n;i++)
    {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(values[min]>=values[j])
           {
               min=j;
           }
       }
       swap=values[i];
       values[i]=values[min];
       values[min]=swap;
    }
    return;
}

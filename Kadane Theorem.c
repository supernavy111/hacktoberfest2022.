#include<stdio.h>

/********************************KADANE'S THEOREM****************************************
Kadane’s Algorithm:

Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far

****************************************************************************************/

int Kadanes_Theorem(int A[], int n)
{
    int max_ending_here=A[0];
    int max_so_far=A[0];
    int i;
    for(i=0;i<n;i++)
    {
        max_ending_here+=A[i];
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }

        if(max_ending_here<0)
        {
            max_ending_here=0;
        }

        }

    return max_so_far;
}

void main()
{
    int A[8]={-2, -3, 4, -1, -2, 1, 5, -3};

    int n = sizeof(A)/sizeof(A[0]);
    int max_sum = Kadanes_Theorem(A, n);

    printf("%d",max_sum);

}

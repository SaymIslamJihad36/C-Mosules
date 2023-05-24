// #include<stdio.h>

// int main()
// {
//     int n,k=1;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         k++;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int n,k;
//     scanf("%d %d",&n,&k); // 10 5
//     for(int i=1;i<=k;i++) // 5
//     {
//         for(int j=1;j<=n;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// pattern2 

// #include<stdio.h>

// int main()
// {
//     int n,s,k;
//     scanf("%d",&n);
//     s = n-1;
//     k=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//         for(int l=1;l<=k;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         s--;
//         k=k+2;
//     }
//     return 0;
// }


// pattern for practice :-

// #include<stdio.h>

// int main()
// {
//     int n,s,k;
//     scanf("%d",&n);
//     s = 0;
//     k = (n*2)-1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//         for(int l=1;l<=k;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         s++;
//         k = k - 2;
//     }
//     return 0;
// }


// pattern 3
// #include<stdio.h>

// int main()
// {
//     int num,k=1;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//         k++;
//     }
//     return 0;
// }


// practice pattern
// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int k = n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//         k--;
//     }
//     return 0;
// }



// pattern4

// #include<stdio.h>

// int main()
// {
//     int n,k,s;
//     scanf("%d",&n);
//     s = n-1;
//     k = 1;
//     for(int i=1;i<=(2*n)-1;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         if(i<=n-1)
//         {
//             s--;
//             k+=2;
//         }
//         else
//         {
//             s++;
//             k-=2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// SUM OF TWO VALUE EQUAL X;

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int x;
//     scanf("%d",&x);
//     int flag = 0;
//     for(int i=0;i<n-1;i++)
//     {
//         arr[i];
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]+arr[j]==x)
//             {
//                 flag = 1;
//             }
//         }
//     }
//     if(flag==0)
//     {
//         printf("No!\n");
//     }
//     else
//     {
//         printf("Yes!\n");
//     }
// }


// SELECTION SHORT ANIMATION
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
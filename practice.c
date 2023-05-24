#include<stdio.h>

int main()
{
    int n; 
    printf("Enter array size : ");
    scanf("%d",&n); 
    int arr[n+1]; 
    int pos,val; 
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter pos & value : ");
    scanf("%d %d",&pos,&val); // 1 100
    for(int i=n;i>=pos+1;i--){
        arr[i] = arr[i-1]; 
    }
    arr[pos] = val;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n; 
    int pos;
    printf("Enter size of array : ");
    scanf("%d",&n); // 5
    int arr[n];
    printf("Enter array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); // 1,2,3,4,5
    }
    printf("Enter index : ");
    scanf("%d",&pos); // 1
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    printf("Now your values is : ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=n-1;
    int i=0;
    while(i<j){
        int temp = arr[i]; 
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter first array size : ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter second array size : ");
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    
    int l = n+m;
    int arrr[l];
    for(int i=0;i<n;i++){
        arrr[i] = ar[i];
    }
    int k = n;
    for(int f=m,i=0;k<f,i<m;k++,i++){
        arrr[k] = arr[i];
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",arrr[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int ans[m+n];
    for(int i=0;i<n;i++){
        ans[i] = a[i];
    }
    int i=n;
    for(int j=0;j<m;j++){
        ans[i] = b[j];
        i++;
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}
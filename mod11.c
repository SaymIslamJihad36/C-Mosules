/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n); // 5
    int arr[n]; // arr[5]
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); // 4 1 3 10 8
    }
    int min=arr[0]; // 4
    int max=arr[0]; // 4
    int mini;
    int maxi;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min){
            min=arr[i];  // 1
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            mini = i;
        }
        if(arr[i]==max)
        {
            maxi = i;
            
        }
    }
    int temp = min; // temp = 1
    arr[mini] = max; // arr[1] =  10
    arr[maxi] = temp; // arr[3] = 1
    // printf("%d %d\n",arr[mini],arr[maxi]);
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000001];
    gets(str);
    int sz = strlen(str);
    for(int i=0;i<sz;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }else if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }else if(str[i]==',')
        {
            str[i]=' ';
        }
    }
    for(int i=0;i<sz;i++)
    {
        printf("%c",str[i]);
    }
}

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    // gets(a);
    // gets(b);
    // printf("%d %d",strlen(a),strlen(b));
    for(int i=0;i<=strlen(b);i++)
    {
        a[i] = b[i];
    }
    printf("%s\n%s",a,b);
    return 0;
}

// lexigraphical comparison

// my own code

#include<stdio.h>

int main()
{
    char a[1000001],b[1000001];
    scanf("%s %s",a,b);
    for(int i=0;;i++)
    {
        if(a[i]=='\0'&&b[i]=='\0')
        {
            printf("same\n");
            break;
        }else if(a[i]!=b[i])
        {
            if(a[i]>b[i]){
                printf("B choto\n");
                break;
            }else
            {
                printf("A choto\n");
                break;
            }
        }
    }
    return 0;
}


#include<stdio.h>
int main()
{
    char a[1000001],b[1000001];
    scanf("%s %s",&a,&b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0'&&b[i]=='\0')
        {
            printf("Same\n");
            break;
        }else if(a[i]=='\0')
        {
            printf("A choto\n");
            break;
        }else if(b[i]=='\0')
        {
            printf("B choto\n");
            break;
        }
        if(a[i]==b[i]){
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A choto\n");
            break;
        }else
        {
            printf("B choto\n");
            break;
        }
    }
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int v = strcmp(a,b);
    printf("%d\n",v);
    if(v<0){
        printf("A is smaller\n");
    }else if(v>0){
        printf("B is smaller\n");
    }else{
        printf("A & B is same\n");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int x = strlen(str1);
    int y = strlen(str2);
    int j = 0;
    for(int i=0;i<=y;i++)
    {
        str1[x] = str2[j];
        x++;
        j++;
    }
    printf("A = %s\n",str1);
    printf("B = %s\n",str2);
    return 0;
}


// counting array 

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
    int count[1000] = {0};
    for(int i=0;i<n;i++)
    {
        int val = arr[i]; // a[0] = 0
        count[val]++;// count[a[0]]++;
    }
    // printf("0 = %d\n",count[0]);
    // printf("1 = %d\n",count[1]);
    // printf("2 = %d\n",count[2]);
    // printf("3 = %d\n",count[3]);
    // printf("4 = %d\n",count[4]);
    // printf("5 = %d\n",count[5]);
    // printf("6 = %d\n",count[6]);
    for(int i=0;i<n;i++)
    {
        printf("%d = %d\n",i,count[i]);
    }
    return 0;
}


// counting array 2

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int value = s[i]-97;
        count[value]++;
    }
    for(int i=0;i<26;i++){
        // printf("%c = %d\n",i+97,count[i]);
        // if(count[i]!=0)
        // {
            printf("%c = %d\n",i+97,count[i]);
        // }
    }
    // for(int i=0;i<strlen(s);i++)
    // {
    //     int value = s[i]-97;
    //     printf("%c = %d\n",value+97,count[value]);
    //     if(count[value]!=0)
    //     {
    //         printf("%c = %d\n",value+97,count[value]);
    //     }
    //     count[value] = 0;
    // }
    return 0;
}
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",&str);
    int count[26] = {0};
    for(int i=0;i<strlen(str);i++)
    {
        int val = str[i]-'a'; 
        count[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("%c = %d\n",i+97,count[i]);
        }
    }
    return 0;
}

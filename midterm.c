// Problem number  1

#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int countev = 0;
    long long int countodd = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            countev++;
        }else
        {
            countodd++;
        }
    }
    printf("%lld %lld",countev,countodd);
    return 0;
}


// mid term problem 2

#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    scanf("%s",&str);
    int count = 0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}


// problem number 3

#include<stdio.h>

int main()
{
    int worker1,worker2,day;
    scanf("%d %d %d",&worker1,&worker2,&day);
    int x = worker1*day;
    int y = x/worker2;
    printf("%d\n",y);
    return 0;
}

// problem 4 



#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];
    scanf("%s",&s);
    int countchoto = 0;
    int countboro = 0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            countchoto++;
        }else if(s[i]>='A'&&s[i]<='Z')
        {
            countboro++;
        }
    }
    printf("%d %d\n",countboro,countchoto);
    return 0;
}


// problem 5

#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}


// problem 6
#include<stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}


// problem 7

#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001];
    scanf("%s",&s);
    int count[26] = {0};
    for(int i=0;i<strlen(s);i++)
    {
        int val = s[i] - 97;
        count[val]++;
    } 
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+97,count[i]);
    }
    return 0;
}
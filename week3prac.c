// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[1000001],b[1000001];
//     scanf("%s %s",&a,&b); // ab abc
//     for(int i=0;;i++)
//     {
//         if(a[i]=='\0'&&b[i]=='\0')
//         {
//             printf("%s\n",a);
//             break;
//         }else if(a[i]!=b[i])
//         {
//             if(a[i]>b[i])
//             {
//                 printf("%s\n",b);
//                 break;
//             }else
//             {
//                 printf("%s\n",a);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     long long int arr[100];
//     scanf("%lld",&arr[0]);// 12345
//     // int m = (int arr)/10;
//     // int m = arr[0]%10;
//     long long int sum=0;
//     long long int i=0;
//     long long int m=arr[0]; //12345
//     long long int l;
//     do
//     {
//         l = m%10; // 5
//         sum+=l; // 5
//         m = m/10; 
//     }while(m>=1);
//     printf("%lld\n",sum);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s[1000001];
//     scanf("%s",s);
//     int count[26] = {0};
//     for(int i=0;i<strlen(s);i++)
//     {
//         int n = s[i]-97; // 0,
//         count[n]++;
//     }
//     for(int i=0;i<26;i++){
//         // printf("%c = %d\n",i+97,count[i]);
//         if(count[i]!=0)
//         {
//             printf("%c : %d\n",i+97,count[i]);
//         }
//         count[i]=0;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char arr[n];
//     scanf("%s",&arr);
//     int sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         int k = arr[i]-48;
//         sum+=k;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
 
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         char s[101];
//         scanf("%s",&s);
//         int len = strlen(s);
//         if(len<=10)
//         {
//             printf("%s\n",s);
//         }
//         else if(len>10)
//         {
//             printf("%c%d%c\n",s[0],len-2,s[len-1]);
//         }
        
//     }
//     return 0;
// }


#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001];
    char l[1000001];
    scanf("%s",s);
    int i=s[0];
    int j=strlen(s);

    while(i>j)
    {
        if(s[i]==s[j-1])
        {
            l[i] = s[i];
            i++;
            j--;
        }else
        {
            printf("NO\n");
            break;
        }
    }
    if(l==s)
    {
        printf("YES\n");
    }
    
    return 0;
}
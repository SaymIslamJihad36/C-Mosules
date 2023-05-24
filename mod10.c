// Module 10

/*
#include<stdio.h>

int main()
{
    char ch[5];
    for(int i=0;i<5;i++)
    {
        scanf("%c",&ch[i]);
    }
    for(int i=0;i<5;i++){
        printf("%c ",ch[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{
    char a[6];
    int sz = sizeof(a)/sizeof(char);
    printf("%d",sz);
    return 0;
}



// first super power 
#include<stdio.h>

int main()
{
//     char ch[5] = {'S','A','Y','M'};
    // first super power //
    char ch[5] = "SAYM";
    for(int i=0;i<5;i++)
    {
        printf("%c\n",ch[i]);
    }   
    return 0;
}

#include<stdio.h>

int main()
{
    // second super power of string 
    char ch[] = "Saym"; // NULL = \0
    int sz = sizeof(ch)/sizeof(char);
    printf("%d\n",sz); // out put will be 6 cz \0 is also a char
    printf("%s\n",ch);// string format specifier %s
    return 0;
}



// Input a string
#include<stdio.h>

int main()
{
    char a[6];
    scanf("%s",&a);
    printf("%s\n",a);
    return 0;
}

// Input with spaces 

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    // gets(ch);
    fgets(ch,18,stdin);
    ch[16] = '\0';
    printf("%s\n",ch);
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char ar[100];
    // scanf("%s",&ar);
    fgets(ar,100,stdin);
    ar[16]='\0';
    int ln = strlen(ar);
    // int count = 0;
    // int i=0;
    // while(ar[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }
    // for(int i=0;ar[i]!='\0';i++)
    // {
    //     count++;
    // }
    printf("%s\n",ar);
    printf("%d\n",ln);
    // printf("%d\n",count);
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001],ar[1001];
    scanf("%s %s",&a,&ar);
    // printf("%d %d\n",strlen(a)-1,strlen(ar)-1);
    // printf("%d",sz);
    int lens = strlen(a);
    int lent = strlen(ar);
    printf("%d %d\n",lens,lent);
    printf("%s %s\n",a,ar);
    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char ar[1000000];
    fgets(ar,1000000,stdin);
    int i=0;
    while(ar[i]!='\\'){
        printf("%c",ar[i]);
        i++;
    }
    return 0;
}
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000001];
    scanf("%s",ch);
    int sum = 0;
    for(int i=0;i<strlen(ch);i++)
    {
        sum+=(ch[i]-48);
    }
    printf("%d\n",sum);
    return 0;
}
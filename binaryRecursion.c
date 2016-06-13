#include<stdio.h>
#include<string.h>
 
char st[100];
int i=0;
 
int s1();
int s2();
int checkif(char);
 
void main()
{
    gets(st);
    int v,m;
 
    if(strlen(st)%2!=0)
    {
        printf("parsing failed\n");
    }
 
 
    else if(st[i]=='0')
        v=s1();
    else if(st[0]=='1')
        m=s2();
 
    if(v==1)
        printf("parsed with s1");
    else if(m==1)
        printf("parsed with s2");
    else
        printf("cant parse");
}
 
int s1()
{
    int v;
    v=checkif('0');
    if(v==2)
        return 2;
    s1();
    v=checkif('1');
    if(v==2)
        return 2;
    if(i==strlen(st))
        return 1;
}
 
int s2()
{
    int v;
    v=checkif('1');
    if(v==2)
        return 2;
    s2();
    v=checkif('0');
    if(v==2)
        return 2;
    if(i==strlen(st))
        return 1;
}
 
int checkif(char c)
{
    if(st[i]==c)
    {
        i++;
        return 3;
    }
    else
        return 2;
 
}
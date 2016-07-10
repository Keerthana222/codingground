#include<stdio.h>
void tofh(int n disk,char source,char temp,char dest)
int main()
{
char source='a',temp='b',dest='c';
int disk;
printf("enter the number of disk":);
scanf("%d",&disk);
printf("sequence is:\n");
tofh(ndisk,source,temp,dest);
return 0;
}
void tofh(int n disk,char source, char temp,char dest)
{
if(n disk==1)
{
printf("move disk %d from %c-->%c\n",ndisk,source,dest);
return;
}
tofh(ndisk-1,source,dest,temp)
printf("move disk %d from %c-->%c\n",ndisk,source,dest);
tofh(ndisk-1,temp,source dest);
}


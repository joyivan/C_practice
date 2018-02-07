#include<stdio.h>
int main()
{
//#strspn(sStr1,sStr2)
char str1[] = "1234567";
char str2[] ="456";
//#sStr1k and chars both in sStr1 and sStr2
printf("result is %s\n", strstr(str1,str2));
}


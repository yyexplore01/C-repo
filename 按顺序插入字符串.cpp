/*======================================Program Description==============================================
程序名称：按顺序插入字符串.cpp
程序目的：
Written By Dong-Hong-Yan(2012-09-22)
========================================================================================================*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20]="cehiknqtw";
    char s[]="fbla";

    int i,k,j;

    for(k=0; s[k]!= '\0'; k++ )
    {
        j=0;
        while(s[k]>=a[j] && a[j]!= '\0')           //用下列子字符串，一次与母串进行比较，锁定位置
            j++;

        for(i=18; i>=j; i--)            //这里通过循环将后续字符串，逐个向后移一位
            a[i+1] = a[i];

        a[j]=s[k];
    }
    puts(a);                      //输出字符串

    system("pause");
    return 0;
}

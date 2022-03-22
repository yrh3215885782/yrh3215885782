#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int chazhao(char *a,char *b)
{
char *p=a;
int e=0,k=0;
while(*p!='\0')
{
while(*p!=' ')
{
if(*p!=b[e])
while(*p!=' ') p++;
else
{
         if(*(p+1)==' ')
{
          k++;
          p++;
}
      else
{
         e++;
         p++;
}
}
}
        p++;
       e=0;
}
   return k;
}
void main()
{
int a = 1, i, c, d = 1;
char g[100],h[100];
    printf("输入要句子：\n");
    gets(g);
    printf("输入要查找的单词：\n");
   gets(h);
for (i = 0; g[i] != '\0'; i++)
	{
		c = g[i];
		if (c == ' ')
		{
			d++;
		}
	}
printf("所查单词出现的次数为%d\n",chazhao(g,h));
printf("这一段英文中的单词数是%d\n", d);
printf("这一段英文中的字母数为%d\n", strlen(g) -(d-1));
}
	


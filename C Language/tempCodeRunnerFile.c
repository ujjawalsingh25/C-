#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void divide(char* s,char* n,char* b,char type)
{
	int i=0,j,count;
	if(type=='a')
	{
		count=1;
		while(count)
		{
			if(s[i]=='.')
				count--;
			n[i]=s[i];
			b[i]=s[i];
			i++;
		}
		count=3;
		printf("Default Mask Id: 255.0.0.0\n");

	}
	else if(type=='b')
	{
		count=2;
		while(count)
		{
			if(s[i]=='.')
				count--;
			n[i]=s[i];
			b[i]=s[i];
			i++;
		}
		count=2;
		printf("Default Mask Id: 255.255.0.0\n");
	}
	else
	{
		count=3;
		while(count)
		{
			if(s[i]=='.')
				count--;
			n[i]=s[i];
			b[i]=s[i];
			i++;
		}
		count=1;
		printf("Default Mask Id: 255.255.255.0\n");
	}
	j=i;
	while(count)
	{
		n[i]='0';
		if(--count)
		n[i+1]='.';
		b[j]='2';
		b[j+1]='5';
		b[j+2]='5';
		if(count)
		b[j+3]='.';
		i+=2;
		j+=4;
	}
	printf("Network Id: %s\nBroadcast Id: %s\n",n,b);
}
int main()
{
	char s[20]={0},n[20]={0},b[20]={0},type;
	int i=0;
	printf("\nEnter IPv4 Address: ");
	fgets(s,50,stdin);
	while(s[i]!='.')
	{
		i++;
	}
	if(i==2)
	{
		printf("\nThis is Class A.\n");
		type='a';
	}
	else
	{
		if((strncmp(s,"127",3))<=0)
		{
			printf("\nThis is Class A.\n");
			type='a';
		}
		else if((strncmp(s,"191",3))<=0)
		{
			printf("\nThis is Class B.\n");
			type='b';
		}
		else
		{
			printf("\nThis is Class C.\n");
			type='c';
		}
	}
	divide(s,n,b,type);
}

#include<iostream>
using namespace std;
int main()
{
	char str[50];
	int i,length=0;
	cout<<"enter the string: \n";
	gets(str);
	for(i=0;str[i]!='\0';++i)
	length++;
	cout<<"length of the string is:"<<length;
	return 0;
}

#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>
#include<windows.h>
////////////////////////
using namespace std;
/////////////////////////
int main()
{
	HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	int sum,Max,array[5];
	for(int i=1;i<=5;i++)
	{
		cout<<"input array["<<i<<"] :";
		cin>>array[i];
		sum+=array[i];
		if(Max<array[i])
		{
			Max=array[i];
		}
	}
	for(int i=1;i<=5;i++)
	{
		if (array[i]>15)
		{
			SetConsoleTextAttribute(console_color,2);
			cout<<array[i]<<endl;

		}
		else
		{
			SetConsoleTextAttribute(console_color,4);
			cout<<array[i]<<endl;

		}
	}
	sum/=5;
	cout<<"sum is :"<<sum<<endl<<"Max is :"<<Max;
	
	return 0;
	getch();
}
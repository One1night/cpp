#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>
#include<windows.h>
////////////////////////
using namespace std;
/////////////////////////
long long int Jam(long long int N,long long int M)
{
	int sum=0;
	for (int i=N;i<=M;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	int N,M;
	long long int X=0;
	cout<<"plese input start number (N) first and end number (M) :"<<endl;
	cin>>N>>M;
	X =Jam(N,M);
	cout<<"Jam is :"<<X;
	return 0;
	getch();
}
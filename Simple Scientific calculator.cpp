#include <iostream>
using namespace std;
int sum(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main ()
{  int x,y,n;
		cout<<"********Calculator****";
	cout<<"\n1.addition\n2.substraction\n3.multiplication\n4.division\n5.modiluiosn\n6.end program";
	cout<<"\nchoose any option=";
	cin >>n;

	if(n==1){
			cout<<"enter the 2 numbers :";
	cin>>x>>y;
		cout<<"the sum of these two numbers are "<<sum(x,y);
	}
	else if(n==2){
			cout<<"enter the 2 numbers :";
	cin>>x>>y;
		cout<<"the diffrence of these two numbers are "<<sub(x,y);
	}
	else if (n==3){
		cout<<"the product of these two numbers are "<<mult(x,y);
	}
	else if (n==4){
			cout<<"enter the 2 numbers :";
	cin>>x>>y;
		cout<<"the qoution of these two numbers are "<<div(x,y);
	}
	else if (n==5){
			cout<<"enter the 2 numbers :";
	cin>>x>>y;
		cout<<"the mod of these two numbers are "<<mod(x,y);
	}
	else{
		cout<<"the program ended";
		}
		return 0;
}
int sum (int a,int b)
{
	return (a+b);
	
}
int sub (int a, int b)
{
	return (a-b);
}
int mult (int a , int b)
{
	return (a*b);
}
int div (int a,int b)
{
	return(a/b);
}
int mod (int a ,int b)
{
	return (a%b);
}

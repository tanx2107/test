//write a program to swap two nos by using call by value,call by address,call by reference
#include<iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"Enter the value of X:\n";
   cin>>x;
   cout<<"\nEnter the value of Y:\n";
   cin>>y;
   cout<<"Before swapping\nValue of X is "<<x<<"\nValue of Y is "<<y;
	swap(x,y);
	cout<<"\nOutside function after swapping\nValue of X is"<<x<<"\nValue of Y is"<<y;
}
void swap(int &x,int &y)
{
	int c;
	c=x;
	x=y;
	y=c;
	cout<<"\nInside function after swapping\nValue of X is"<<x<<"\nValue of Y is"<<y;
}






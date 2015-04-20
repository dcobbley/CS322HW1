#include<iostream>
using namespace std;

int main()
{
   int t= 0;
   int x= 6;
   int y=7;
   while(0<x)
   {
	   if(!(x%2)==0)
		   t=t+y;

	   y=y+y;
	   x=(x/2);
   }

   
   cout<<"your result: "<<t<<endl;

	return 0;
}

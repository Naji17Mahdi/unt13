#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int  , int  , int  )

main()
{
	int x , y , z ;
	
	cout<<"Please enter x : "<<endl;
	cin>>x;
	
	cout<<"Please enter y : "<<endl;
	cin>>y;
	
	cout<<"Please enter z : "<<endl;
	cin>>z;
	
	cout<<int f ( x , y , z );	
}

int f ( int a , int b , int c )
{
	int root;
	int rooot;
	if ( a != 0 )
	{
		int d;
		d = b * b - 4 * a * c;
	}
	
	if ( d >= 0 )
	{
	
	root = (-b + sqrt (d)) / ( 2 * a );
	rooot = ( -b - sqrt (d)) / ( 2 * a );
	cout<<"Root 1 ="<<root<<endl;
	cout<<"Root 2 ="<<rooot;
    }
    else 
    {
    	cout<<"Error";
    }
}

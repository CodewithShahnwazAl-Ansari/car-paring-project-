#include<iostream>
using namespace std;
int main()
{
	
	int u;
	int ammount=0,count=0;
	 
	// menu 
	while (true)
	{
		
	cout<<"press  any  number which is required for you"<<endl;
	cout<<"press 1 for rikshaw"<<endl;// priceof 100
	cout<<"press 2 for cars"<<endl;// car price 200
	cout<<"press 3 for bus"<<endl;
	cout<<"press 4 to show the record"<<endl;
	cout<<"press 5 to delete the record"<<endl;
	cin>>u;
	if(u==1)
	{
		ammount=ammount+100;
		count=count+1;
	}
	else if(u==2)
	{
		ammount=ammount+200;
		count=count+1;
	}
	else if(u==3)
	{
		ammount=ammount+300;
		count=count+1;
	}
	else if(u==4)
	{
		cout<<"The total ammount="<<ammount<<endl;
		cout<<"The total number of vihcles parked ="<<count <<endl;
	}
		else if(u==4)
	{
		ammount=0;
		count=0;
	}
	else
	{
		cout<<"sorry  invaid number"<<endl;
	}
	
	
	
	}
		

}

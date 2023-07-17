#include<iostream>
using namespace std;
main()
{
	int days,choice=0,choice2,cperd_s=750,cperd_t=1000,cperd_m=1200,avail_s=2,avail_f=3,avail_ms=2,count=1;
	char cname[30];
	float tcharge;
	back:
	cout<<"Enter Customer Name"<<endl;
	cin>>cname;
	cout<<"\nEnter the Number of Days for Usage\n"<<endl;
	cin>>days;
	cout<<"\nEnter Choice"<<endl;
	cout<<"\nPress 1 for swift(Rent Price : 750 per day)\nPress 2 for Toyota Fortuner(Rent Price : 1000 per day)\nPress 3 for Maruti Suzuki Ertiga(Rent Price : 1200 per day)\n"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			if(count<=avail_s)
			{
			cout<<"\nCars Available"<<endl;
			cout<<"\nCustomer Name : "<<cname<<endl;
			cout<<"\nCar selected : Swift(Available 2)"<<endl;
			cout<<"\nNumber of Days for Usage : "<<days<<endl;
			tcharge=days*cperd_s;
			cout<<"\nTotal Charge as per usage : "<<tcharge<<endl;
			count++;
		    }
				else
				{
					cout<<"Cars not Available"<<endl;
				}
		break;		
			
		case 2:
			if(count<=avail_f)
			{
			cout<<"\nCars Available"<<endl;
			cout<<"\nCustomer Name : "<<cname<<endl;
			cout<<"\nCar selected : Toyota Fortuner(Available 3)"<<endl;
			cout<<"\nNumber of Days for Usage : "<<days<<endl;
			tcharge=days*cperd_t;
			cout<<"\nTotal Charge as per usage : "<<tcharge<<endl;
			}
				else
				{
					cout<<"Cars not Available"<<endl;
				}	
		break;
				
		case 3:
			if(count<=avail_ms)
			{
			cout<<"\nCars Available"<<endl;
	    	cout<<"\nCustomer Name : "<<cname<<endl;
            cout<<"\nCar selected : Maruti Suzuki Ertiga(Available 2)"<<endl;
			cout<<"\nNumber of Days for Usage : "<<days<<endl;
			tcharge=days*cperd_m;
			cout<<"\nTotal Charge as per usage : "<<tcharge<<endl;
			}
				else
				{
					cout<<"Cars not Available"<<endl;
				}
		break;
		
		default:
			cout<<"\nModels not available";
	}
	cout<<"Do You Want Any Other Car on Rent\n"<<endl;
	cout<<"Press 1 for Yes\nPress 0 for No"<<endl;
	cin>>choice2;
	if(choice2==1)
	{
		goto back;
	}
}

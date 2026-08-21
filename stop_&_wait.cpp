#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int n,lost;
	cout<<"Enter total number of frames:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"\nSending frame"<<i<<endl;
		cout<<"Timer started"<<endl;
		sleep(2);
		if(i==2)
		{
			cout<<"Frame"<<i<<"is lost"<<endl;
			cout<<"Timer Expired"<<endl;
			cout<<"Resending Frame"<<i<<endl;
			sleep(2);
			cout<<"Frame"<<i<<"received"<<endl;
		    cout<<"Sending ACK"<<i<<endl;
			cout<<"ACK"<<"Received"<<endl;
			cout<<"Timer stopped"<<endl;
		}
		else
		{
			cout<<"Frame"<<i<<"Received"<<endl;
			cout<<"Sending ACK"<<i<<endl;
			sleep(1);
			cout<<"ACK"<<i<<"Received"<<endl;
			cout<<"Timer stopped"<<endl;
		}
	}
	cout<<"\nAll Frames transmitted successfully"<<endl;
	return 0;
}

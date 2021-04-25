#include<iostream>
using namespace std;
int main()
{
	int i,b[10],n;
	float tat,w=0,sum=0;
	cout<<"Enter number of processes: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Burst time of process "<<i<<": ";
		cin>>b[i];
		tat=b[1];
	}
	
	cout<<"\n\tProcess \t   Burst Time    \t Waiting Time \t Turn Around Time\n";
	for(i=1;i<=n;i++)
	{	
		tat=b[i]+w;
		cout<<"Process   "<<i<<"  \t\t   "<<b[i]<<"  \t\t\t  "<<w<<"  \t\t\t "<<tat<<endl;
		w+=b[i];
		sum=sum+tat;
	}
	
	cout<<"Average Waiting Time : "<<tat/n<<endl;
	cout<<"Average Turn Around Time :"<<sum/n;
	return 0;
}


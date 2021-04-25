#include<iostream>
using namespace std;
int main()
 { 
    int et[30],
    ts,n,i, x=0,
    tot=0;
    char pn[10][10];  
    cout<<"Program to simulate the Round Robin CPU scheduling with 0 arrival time"<<endl;
    cout<<endl<<"Enter the no of processes:";
    cin>>n; 
   cout<<"Enter the time quantum:";
    cin>>ts; 
    for(i=0;i<n;i++) 
    { cout<<"enter process name & estimated time:"; 
      cin>>pn[i]>>et[i]; 
    } 

 cout<<"\nThe processes are:"<<endl;
     for(i=0;i<n;i++)
     cout<<"process"<<" "<<i+1<<": "<<pn[i]<<endl; 
     for(i=0;i<n;i++) 
     tot=tot+et[i]; 
while(x!=tot) 
    { for(i=0;i<n;i++)
      {
        if(et[i]>ts) 
        { x=x+ts; cout<<pn[i]<<"->"<<ts<<" "; //endl; 
          et[i]=et[i]-ts; 
          } 
      else if((et[i]<=ts)&&et[i]!=0) 
       { 
         x=x+et[i]; 
        cout<<pn[i]<<"->"<<et[i]<<" "; //endl; 
         et[i]=0;} } }
        cout<<endl<<"Total Estimated Time:"<<x; 
	    
	    return 0; 
      } 



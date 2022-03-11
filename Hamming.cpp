#include<iostream>
 
 using namespace std;

int main()
{
    int data[10];
    int DataReceive[10],c,c1,c2,c3,i;
 
    cout<<"Enter 4 bits of data one by one\n";
    cin>>data[0];
    cin>>data[1];
    cin>>data[2];
    cin>>data[4];
 
                                                 //Used x-or to find the parity bits while sending    
    data[6]=data[0]^data[2]^data[4];
    
    data[5]=data[0]^data[1]^data[4];
    
    data[3]=data[0]^data[1]^data[2];
 
    cout<<"\nEncoded data is\n";                 //Hamming code send
    for(i=0;i<7;i++)
        cout<<data[i];
    
    cout<<"\n\nEnter received data bits one by one\n";                //Enter the received Hamming code
    for(i=0;i<7;i++)
        cin>>DataReceive[i];
                                                                           // X-oring to check any errors 
    c1=DataReceive[6]^DataReceive[4]^DataReceive[2]^DataReceive[0];
	    
    c2=DataReceive[5]^DataReceive[4]^DataReceive[1]^DataReceive[0];
    
    c3=DataReceive[3]^DataReceive[2]^DataReceive[1]^DataReceive[0];
    
    c=c3*4+c2*2+c1 ;                                                      //conversion
 
    if(c==0)
	 {
        cout<<"\nNo error while transmission of data\n";
    }
    else
	 {
        cout<<"\nError on position "<<c;
        
        cout<<"\nData sent : ";
        for(i=0;i<7;i++)
            cout<<data[i];
        
        cout<<"\nData received : ";
        for(i=0;i<7;i++)
            cout<<DataReceive[i];
        
        cout<<"\nCorrect message is\n";
        
                                                              //complementing if error found
        if(DataReceive[7-c]==0)
            DataReceive[7-c]=1;
        else
             DataReceive[7-c]=0;
        for (i=0;i<7;i++) 
		{
            cout<<DataReceive[i];
        }
    }
    
    return 0;
}

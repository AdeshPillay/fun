#include<iostream>
#include<cmath>
using namespace std;

int main ()

{

    double num1=0,num2=0,num3=0,num4=0,num5=0,quit,num6 ;
 int track =0;
 int total =0;
 double p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;

    do{
    	
    
	



    cout << "******FAVORITE HOLIDAY DESINATION OPINION POLL****** " <<endl;
    cout << "1.London " <<endl ;
   // cin >>num1 ;
    cout << "2.Paris " <<endl ;
   // cin >>num2 ;
    cout << "3.Rome " <<endl ;
   // cin >>num3 ;
    cout << "4.Sydney " <<endl ;
   // cin >>num4 ;
    cout << "5.New Zealand " <<endl ;
   // cin >>num5 ;
    cout << "6.Quit voting " <<endl ;
   // cin >>quit ;
	track++;
	
cin >>num6 ;

	if(num6 == 1){
	num1++;
}
	 if (num6==2)	{
	num2++;	
	}
	 if (num6==3)	{
	num3++;	
	}	
	if (num6==4)	{
	num4++;	
	}	
	 if (num6==5)	{
	num5++;	
	}	
	

//cout << track <<endl ;


}while(num6 != 6);

total=track-1;


p1=	num1/total*100;
p2=	num2/total*100;
p3=	num3/total*100;
p4=	num4/total*100;
p5=	num5/total*100;

//cout << p1 <<endl ;
cout << "*********FAVORITE HOLIDAY DESTINATION OPINION POLL*********" << endl;
    cout << "ITEM                VOTES                 %" << endl;
	cout << "London "<<num1<<"   "<<p1<<" "<<endl;
	cout << "Paris  "<<num2<<"   "<<p2<<" " << endl;
	cout << "Rome   "<<num3<<"   "<<p3<<" " << endl;
	cout << "Sydney "<<num4<<"   "<<p4<<" " << endl;
	cout << "New Zealand "<<num5<<"   "<<p5<<" " << endl;
	
	{
    int array[5] = {num1,num2,num3,num4,num5};
    int temp = 0;

    for(int i=0;i<5;i++)
    {
        if(array[i]>temp)
        temp=array[i];
    }
    
    	if(temp == 1){
	cout << "According to this Poll, the destination with mojority of vote is london" <<endl;
}
	 if (temp==2)	{
	cout << "According to this Poll, the destination with mojority of vote is paris" <<endl;
	}
	 if (temp==3)	{
cout << "According to this Poll, the destination with mojority of vote is Rome" <<endl;	
	}	
	if (temp==4)	{
	cout << "According to this Poll, the destination with mojority of vote is Sydney" <<endl;
	}	
	 if (temp==5)	{
	cout << "According to this Poll, the destination with mojority of vote is new zealand" <<endl;	
	}	
    
    
    
   // cout << "According to this Poll, the destination with mojority of vote is " << temp<<endl;
   // return 0;
}
	
	
	
//	cout << "According to this Poll, the destination with mojority of vote is " << endl;


return 0;

}

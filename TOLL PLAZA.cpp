#include<iostream>
using namespace std;
int count(int &cash,int &fee, int &reciept, int &totalvehicles)
{
    cash=cash+fee;
    reciept=reciept+1;
    totalvehicles=totalvehicles+1;
    return 0;
}
int entry(int &amount,int &fee, int &weight, int &exchange)
{   cout<<"Deposit the due amount"<<endl;
    cin>>amount;
            while(amount<fee)
            {
            cout<<"Enter amount again(must be more than "<<fee<<" )"<<endl;
                cout<<"Deposit the amount: "<<endl;
            cin>>amount;
        }
           cout<<"Enter weight of vehicle: "<<endl;
            cin>>weight;
              
            if(weight>1000)
            {
                fee=fee*2;
                cout<<"Double Fee will be charged for having over-weight!"<<endl;
         }
                        exchange=amount-fee;
            cout<<"Money TO be returned to customer: "<<exchange<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<endl;
            return 0;
}
int main()
{ 
char n, stats;
int Truck=0, Bus=0, Motorbike=0, GovernmentCar=0, Van=0, Car=0;

     cout<<"         ********   **    *     *        *****     **      **   ********  *   *"<<endl;
     cout<<"            **     *  *   *     *        *    *   *  *    *  *     **     *   *"<<endl;
     cout<<"            **    *    *  *     *        *****   *    *  *    *    **     *****"<<endl;
     cout<<"            **     *  *   *     *        *    *   *  *    *  *     **     *   *"<<endl;
     cout<<"            **      **    ***** *****    *****     **      **      **     *   *"<<endl;

char a;
while(a!='N')
{
   cout<<"Enter: "<<endl;
    cout<<" Y for running Program."<<endl;
    cout<<" N for ending Program."<<endl;
    cin>>a;
    switch(a)
    case'Y':
{
cout<<"Please choose: "<<endl;
cout<<"1  For Starting Program."<<endl;
cout<<"2  For Program info. "<<endl;
cin>>n;
switch(n)
{
case'1':
{

int i=1,weight, cash=0, reciept=0, totalvehicles=0, Exchange, Amount;
char vehicle ;
while(vehicle!='O'&&vehicle!='o')
{  
    cout<<"Enter the type of vehicle "<<endl;
    cout<<"1- Enter T for Truck"<<endl;
    cout<<"2- Enter B for Bus"<<endl;
    cout<<"3- Enter C for car"<<endl;
    cout<<"4- Enter G for Government vehicles"<<endl;
    cout<<"5- Enter V for Van"<<endl;
    cout<<"6- Enter M for MOtorbike"<<endl;
    cout<<"7- Enter O for ending program"<<endl;
    cin>>vehicle;
    if(vehicle=='T'||vehicle=='B'||vehicle=='C'||vehicle=='V'||vehicle=='M'||vehicle=='G')
        if(vehicle=='T')
            { 
        
                int fee=50;
              entry(Amount,fee,weight,Exchange);
              count(cash,fee,reciept,totalvehicles);
                Truck=Truck+1; 
    }
        else if(vehicle=='C')
        {   int fee=20;
            
              entry(Amount,fee,weight,Exchange);
              count(cash,fee,reciept,totalvehicles);
              Car=Car+1;
        }
        else if(vehicle=='M')
        {   int fee=10;
        
             entry(Amount,fee,weight,Exchange);
             count(cash,fee,reciept,totalvehicles);
             Motorbike=Motorbike+1;
        }
        else if(vehicle=='B')
        {   int fee=40;
           
              entry(Amount,fee,weight,Exchange);
              count(cash,fee,reciept,totalvehicles);
              Bus=Bus+1;
            }
        else if(vehicle=='V')
        {   int fee=30;
           
             entry(Amount,fee,weight,Exchange);
              count(cash,fee,reciept,totalvehicles);
              Van=Van+1;
            }
        else if(vehicle=='G')
        { 
         std::cout<<"Government car...no collection of cash"<<std::endl;
            totalvehicles=totalvehicles+1;
            cash=cash;
            reciept=reciept;
            GovernmentCar=GovernmentCar+1;
        }
        else if(vehicle=='O')
            {  
             std::cout<<"Program will close now"<<std::endl;
                i=-1;
            }
        else
        { 
		cout<<"Invalid Entry"<<endl;
        cout<<"Enter the vehicle type  again: "<<endl;
        }
}
    
    cout<<"Total Cash Earned Today: "<<cash<<endl;
    cout<<"Total Vehicles passed today: "<<totalvehicles<<endl;
    cout<<"Reciepts sold today: "<<reciept<<endl;
    while (stats!='E')
    {
    cout<<"Enter S for Detailed vehicle stats. Or press E key to end program."<<endl;
    cin>>stats;
    
        switch(stats)
        {
            case'S':
             {
                cout<<"Trucks Passed today            : "<<Truck<<endl;
                cout<<"Busses Passed today            : "<<Bus<<endl;
                cout<<"Vans passed today            : "<<Van<<endl;
                cout<<"Cars passed today            : "<<Car<<endl;
                cout<<"Motorbikes passed today      : "<<Motorbike<<endl;
                cout<<"Government Cars passed today : "<<GovernmentCar<<endl;
                break;
        }
       default :
        {
            cout<<"enter valid entry."<<endl;
        }
      }
   }
}   
break;
case'2':
    {
        cout<<"Program is about Toll Booth."<<endl;
        cout<<"It was made by M USAMA ASIF(1444)."<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Features of this program:"<<endl;
        cout<<"1-  Total cash earned in a day."<<endl;
        cout<<"2-  Total No. of vehicles passed."<<endl;
        cout<<"3-  Respective fee of each type of vehicle."<<endl;
        cout<<"4-  Reciept number."<<endl;
        cout<<"5-  Government vehicles."<<endl;
        cout<<"6-  weight of vehicle(if more than 100,,,double cash should be paid by the customer).."<<endl;
        cout<<"7-  Background and Text color."<<endl;
        cout<<"8-  Count of each type of vehicle."<<endl;
    }
}   break;
     case'N':
     {
        cout<<"Take Care. Program has ended.";
      }
      break;
      default:
        {
            cout<<"Enter valid command."<<endl;
          }
}
}
return 0;
}

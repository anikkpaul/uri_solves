#include <iostream>
using namespace std;

main()
{
	double mark[5],sum=0, ics, math, pl, eng, phy;
    int i,g;

        cout<<"Enter Marks:\n";
        cout<<"ics : ";
        cin>>mark[0];
        cout<<"math : ";
        cin>>mark[1];
        cout<<"pl : ";
        cin>>mark[2];

        cout<<"eng : ";
        cin>>mark[3];
        cout<<"phy : ";
        cin>>mark[4];
//INPUT END.    DONT TOUCH.ANIK...........
         for(i=0;i<5;i++)
           {
                sum= sum + mark[i];
        }
    g=0;
    for(i=0;i<5;i++)
    {
        if(mark[i]<=100 && mark[i]>=90)
    {
        g=g+4;
        cout<<"Your grade is: 'A+'"<<endl;
    }
        else if(mark[i]<90 && mark[i]>=85)
          {
            g=g+3.75;
            cout<<"Your grade is: 'A'"<<endl;
          }
        else if(mark[i]<85 && mark[i]>=80)
          {
            g=g+3.5;
            cout<<"Your grade is: 'B+'"<<endl;
          }
        else if(mark[i]<80 && mark[i]>=75)
          {
            g=g+3.25;
            cout<<"Your grade is: 'B'"<<endl;
          }
        else if(mark[i]<75 && mark[i]>=70)
          {
            g=g+3;
            cout<<"Your grade is: 'C+'"<<endl;
          }
        else if(mark[i]<70 && mark[i]>=65)
          {
            g=g+2.75;
            cout<<"Your grade is: 'C'"<<endl;
          }
        else if(mark[i]<65 && mark[i]>=60)
          {
            g=g+2.5;
            cout<<"Your grade is: 'D+'"<<endl;
          }
        else if(mark[i]<60 && mark[i]>=55)
          {
            g=g+2.25;
            cout<<"Your grade is: 'D'"<<endl;
          }
        else if(mark[i]<54 && mark[i]>=50)
          {
            g=g+2.25;
            cout<<"Your grade is: 'D'"<<endl;
          }
    else
        {   g=g+0;
            cout<<"Your grade is: 'F'"<<endl;
        }
    }
            sum=g/5;

        cout<<endl<<"Your Total grade is:"<<sum<<endl;

}

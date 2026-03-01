#include <iostream>
using namespace std;
main(){
int Current_Population ;
int Monthly_Birth_Rate;
int Population_in_Three_Decades;
cout<<"Enter No. of Current_Population :";
cin>> Current_Population  ;
cout<<"Enter No. of Monthly_Birth_Rate:";
cin>> Monthly_Birth_Rate;
Population_in_Three_Decades=Current_Population+(Monthly_Birth_Rate*12*30);
cout<<"Enter No. of Population_in_Three_Decades:"<<Population_in_Three_Decades ;
}
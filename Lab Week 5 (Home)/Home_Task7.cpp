#include<iostream>
using namespace std;
main(){
    int count,number;
    cout<<"Enter number count: ";
    cin>>count;
    float p1=0,p2=0,p3=0,p4=0,p5=0;
    float percentage_p1,percentage_p2;
    float percentage_p3,percentage_p4,percentage_p5;
    for (int i=1;i<=count;i++){
    cout<<"Enter number: ";
    cin>>number;
    if (number<200){
        p1++;
    }
    else if ((number>=200)&&(number<=399)){
        p2++;
    }
    else if((number>=400)&&(number<=599)){
        p3++;
    }
    else if ((number>=600)&&(number<=799)){
        p4++;
    }
    else if ((number>=800)&&(number<=1000)){
    p5++;
}
percentage_p1=(p1/count)*100;
percentage_p2=(p2/count)*100;
percentage_p3=(p3/count)*100;
percentage_p4=(p4/count)*100;
percentage_p5=(p5/count)*100;
}
cout<<percentage_p1<<endl;
cout<<percentage_p2<<endl;
cout<<percentage_p3<<endl;
cout<<percentage_p4<<endl;
cout<<percentage_p5<<endl;
}
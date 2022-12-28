#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    double Y, z, n, Sut;
    cout<<"n = ";           // n = Cycle rpm
    cin>>n;
    cout<<"z = ";           // z = Number of teeth in pinion
    cin>>z;                  
    cout<<"Sut = ";         // Sut = Ultimate tensile strength
    cin>>Sut;               
    cout<<"Y = ";           // Y = Lewis Form factor
    cin>>Y;                 
    double I = 0.1089;
    double a = (n*M_PI)/150;
    double T = I*a;
    double P = (2*M_PI*n*T)/60000;
    double Sb = Sut/3;
    double c = (60000000*P*1.5*1.25);
    double d = (M_PI*z*2*n*0.375*9*Sb*Y);
    double x = c/d;
    double m = pow(x,(1.0/3.0));
    cout<<"\nModule of the gear is "<<m<<" mm"<<endl<<endl<<endl;
    return 0;
}
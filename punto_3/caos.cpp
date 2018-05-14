#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>

using namespace std;

double fun_p1(double p1, double p2, double q1, double q2);
double fun_p2(double p1, double p2, double q1, double q2);
double fun_q1(double p1, double p2, double q1, double q2);
double fun_q2(double p1, double p2, double q1, double q2);


int main(){
 
 double a=1/(2*sqrt(2.0)); 
 
 double p1=0;
 double p2=0;
 double q1=a;
 double q2=-a;

 double q1_old=a;

 double t=0;
 double h=0.006;
 double N=3000/h;

 double p11;
 double p21;
 double q11;
 double q21;
 
 double p12;
 double p22;
 double q12;
 double q22;
 
 double p13;
 double p23;
 double q13;
 double q23;

 double p14;
 double p24;
 double q14;
 double q24;

 for(int i=0;i<N;i++){

  p11=fun_p1(p1,p2,q1,q2);
  p21=fun_p2(p1,p2,q1,q2);
  q11=fun_q1(p1,p2,q1,q2);
  q21=fun_q1(p1,p2,q1,q2);
 
  
  p12=fun_p1(p1+(h/2)*p11,p2+(h/2)*p21,q1+(h/2)*q11,q2+(h/2)*q21);
  p22=fun_p2(p1+(h/2)*p11,p2+(h/2)*p21,q1+(h/2)*q11,q2+(h/2)*q21);
  q12=fun_q1(p1+(h/2)*p11,p2+(h/2)*p21,q1+(h/2)*q11,q2+(h/2)*q21);
  q22=fun_q1(p1+(h/2)*p11,p2+(h/2)*p21,q1+(h/2)*q11,q2+(h/2)*q21);


  p13=fun_p1(p1+(h/2)*p12,p2+(h/2)*p22,q1+(h/2)*q12,q2+(h/2)*q22);
  p23=fun_p2(p1+(h/2)*p12,p2+(h/2)*p22,q1+(h/2)*q12,q2+(h/2)*q22);
  q13=fun_q1(p1+(h/2)*p12,p2+(h/2)*p22,q1+(h/2)*q12,q2+(h/2)*q22);
  q23=fun_q1(p1+(h/2)*p12,p2+(h/2)*p22,q1+(h/2)*q12,q2+(h/2)*q22);

  p14=fun_p1(p1+h*p13,p2+h*p23,q1+h*q13,q2+h*q23);
  p24=fun_p2(p1+h*p13,p2+h*p23,q1+h*q13,q2+h*q23);
  q14=fun_q1(p1+h*p13,p2+h*p23,q1+h*q13,q2+h*q23);
  q24=fun_q1(p1+h*p13,p2+h*p23,q1+h*q13,q2+h*q23);  

  p1=p1+(h/6)*(p11+2*p12+2*p13+p14);
  p2=p2+(h/6)*(p21+2*p22+2*p23+p24);
  q1=q1+(h/6)*(q11+2*q12+2*q13+q14);
  q2=q2+(h/6)*(q21+2*q22+2*q23+q24);  
  
  if((q1>0.0 and q1_old<0.0) or (q1<0.0 and q1_old>0.0)){
    cout<<q2<<" "<<p2<<endl;
  }
  q1_old=q1;  
 }
return(0);
} 
double fun_p1(double p1, double p2, double q1, double q2){
  return((-2.0*q1)/pow( ((4.0*q1*q1)+(1.0/1000000.0)),1.5) );
}
double fun_p2(double p1, double p2, double q1, double q2){
   return(((q1-q2)/pow(((4.0*(q1-q2)*(q1-q2))+(1.0/4000000.0)),1.5) )-((q1+q2)/pow(((4.0*(q1+q2)*(q1+q2))+(1.0/4000000.0)),1.5)));
}
double fun_q1(double p1, double p2, double q1, double q2){
   return(p1);
}
double fun_q2(double p1, double p2, double q1, double q2){
   return(p2);
}














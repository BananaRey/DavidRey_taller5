#include <iostream>
#include <cstdlib>
#include <stdio.h>    
#include <math.h> 
#define _USE_MATH_DEFINES

using namespace std;

double x_en_t0(double x,double y,double L);

int main(){
//se hacen las constantes
 double phi=10;
 double T=40;
 double L=100;
 double C=2;
 double Delta_x=0.1;
 double Delta_t=0.001;


 double t=0;
 double intervalo_t=200 ;
 int n_x= (L/Delta_x)+1;
 int n_t= (intervalo_t/Delta_t)+1;
 
//las contenedoras
double *u_0;
 u_0= new double[n_x];

double *u_1;
 u_1= new double[n_x];

double *u_2;
 u_2= new double[n_x];

double *u_3;
 u_3= new double[n_x];

double *u_4;
 u_4= new double[n_x];

double *u_5;
 u_5= new double[n_x];

double *u_6;
 u_6= new double[n_x];

double *u_7;
 u_7= new double[n_x];

double *u_8;
 u_8= new double[n_x];
 
double *u_9;
 u_9= new double[n_x];

double *u_10;
 u_10= new double[n_x];

 double *u_j1;
 u_j1= new double[n_x]; 
 
 double *u_j2;
 u_j2= new double[n_x]; 
 
 double *u_j3;
 u_j3= new double[n_x]; 


//se hace la condicion inicial
 for(int i=0;i<n_x;i++){
 u_j1[i]=x_en_t0(Delta_x*i,0,L);
 u_j2[i]=x_en_t0(Delta_x*i,0,L);
 u_0[i]=x_en_t0(Delta_x*i,0,L);
 }

 u_j1[0]=0; 
 u_j2[0]=0; 
 u_j3[0]=0;

 
// se evoluciona
 for(int n=1;n<n_t;n++){
  for(int i=1;i<n_x-1;i++){
    
   //se hace el avance
   u_j3[i]=((C*Delta_t*Delta_t)/(Delta_x*Delta_x))*(u_j2[i+1]-2*u_j2[i]+u_j2[i-1])+2*u_j2[i]-u_j1[i];	
   //se guardan los datos en deiferente tiempos en diferentes contenedoras
        if(n==(n_t/11)){
	 u_1[i]=u_j3[i];	
         }
         if(n==(n_t/11)*2){
	 u_2[i]=u_j3[i];	
         }
         if(n==(n_t/11)*3){
	 u_3[i]=u_j3[i];	
         }
         if(n==(n_t/11)*4){
	 u_4[i]=u_j3[i];	
         }
         if(n==(n_t/11)*5){
	 u_5[i]=u_j3[i];	
         }
         if(n==(n_t/11)*6){
	 u_6[i]=u_j3[i];	
         }
         if(n==(n_t/11)*7){
	 u_7[i]=u_j3[i];	
         }
         if(n==(n_t/11)*8){
	 u_8[i]=u_j3[i];	
         }
         if(n==(n_t/11)*9){
	 u_9[i]=u_j3[i];	
         }
         if(n==(n_t/11)*10){
	 u_10[i]=u_j3[i];	
         }

     }
//se actualiza
    for(int k=0;k<n_x;k++){
   u_j1[k]=u_j2[k];
   u_j2[k]=u_j3[k];               
   }
  }
//se imprime
 for(int i=0;i<n_x;i++){ 
cout<<i*Delta_x<<" "<<u_0[i]<<" "<<u_1[i]<<" "<<u_2[i]<<" "<<u_3[i]<<" "<<u_4[i]<<" "<<u_5[i]<<" "<<u_6[i]<<" "<<u_7[i]<<" "<<u_8[i]<<" "<<u_9[i]<<" "<<u_10[i]<<" "<<u_j3[i]<<endl;

 }
 
return(0);
}
//funcion en t=0
double x_en_t0(double x,double y,double L){
 if(x<=(0.8*L)){
  return(1.25*x/L);
   }
  else{
   return(5-(5*x/L));
   } 
}

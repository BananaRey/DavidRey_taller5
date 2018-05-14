#include <iostream>
#include <cstdlib>
#include <stdio.h>    
#include <math.h> 
#define _USE_MATH_DEFINES

using namespace std;



int main(){
//se hacen las constantes
 double L=5;
 double l=2;
 double d=1;
 double C=2;
 double h=(5.0/512.0);
 double V_0=100;
 double N=(2*L*L)/(h*h);
 int n=512;
 double V[n][n];
 double V_old[n][n];
 
//inicializar matriz de campo
for (int i=0;i<n;i++){
  for (int j=0;j<n ;j++){
    if( ( j*h >= 1.5) and ( j*h <= 3.5) and (i == 205) ){ 
     V[i][j] = V_0/2.0; 
     V_old[i][j] = V_0/2.0; 
  }

    else if( ( j*h >= 1.5 ) and ( j*h <= 3.5 ) and (i == 307) ){ 
      V[i][j] = -V_0/2.0;
      V_old[i][j] = -V_0/2.0;
  }	
     else if((j*h >= 1.5 )and( j*h <= 3.5 )and(i > 205)and(i< 307 )){ 
      V[i][j] = V_0;
      V_old[i][j] = V_0;
  }

    else{ 
      V[i][j] = 0.0; 
      V_old[i][j] = 0.0; 
  }
 }	
}


for(int t=0; t<1000; t++){
  for(int i=1; i<(n-1); i++){
     for(int j=1; j<(n-1);j++){
        if( (j*h > 3.5 ) or ( j*h < 1.5 )  or (i < 205) or (i> 307 ) ){ 
           V[i][j] =(V_old[i+1][j]+V_old[i-1][j]+V_old[i][j-1]+ V_old[i][j+1])/4.0; 

    }
   }
  }

   for(int i=0; i<n; i++){
      for(int j=0; j<n;j++){
         V_old[i][j]=V[i][j];
     }
    }
    
}





//Se imprime el potencial y los campos

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){  
        cout<<V[i][j]<<" ";
   }
cout<<endl;
}

for (int i=0;i<n;i++){
    for (int j=0;j<n-1;j++){  
        cout<<V[i][j]-V[i][j+1]<<" ";
   }
cout<<" "<<0;
cout<<endl;
}
for (int i=0;i<n-1;i++){
    for (int j=0;j<n;j++){  
        cout<<V[i][j]-V[i+1][j]<<" ";
   }
cout<<endl;
}
return(0);
}











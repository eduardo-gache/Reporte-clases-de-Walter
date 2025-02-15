
#include <stdio.h> 

int n1= 1;
int n2= 10;


int suma ();
int resta();
int multiplicacion();
float division (); 

void main(){
    printf("%d + %d =%d", n1,n2, suma());
}

int suma (){
    return n1 + n2;
}

float division (){
    return n1/(float)n2;  //casting explicito 
}
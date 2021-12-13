
#include <iostream>
#include <conio.h>
#include <stdio.h>
#define F 7
#define C 7
using namespace std;
// PROTOTIPOSS DE FUNCION
void inicializar_en_cero(int matriz[][C]);
void ARISTAS_CARGADAS_DEL_CONJUNTO_A (int matriz[][C]);
void mostrar(int matriz[][C]);
bool Pertenece_Arista (int matriz[][C]);
bool nodo_adyacente (int matriz[][C] );

// MAIN
int main () {
int matriz[F][C];

//inicializa con los valores en cero la matriz	
inicializar_en_cero( matriz);
 
//muestra la matriz	
mostrar(matriz);

//Carga la matriz de adyacencia	        
ARISTAS_CARGADAS_DEL_CONJUNTO_A ( matriz);
 
//muestra la matriz cargada
mostrar(matriz); 
  
// Predicado, indica si pertenece arista o no
if(Pertenece_Arista (matriz)==true){ 
cout << "Pertenece Arista ";
cout<<"\n";
cout<<"\n";
}else{

cout << "No pertenece  ";  	    
cout<<"\n";  
cout<<"\n"; 	
}
// predicado, indica si  dos nodos son adyacentes
if (nodo_adyacente (matriz)==true){ 
cout << "Nodos adyacentes ";
}else

cout << "Nodos no Adyacentes  ";  	    
		
	
}

//  FUNCIONES 
//**************************************************************************
void inicializar_en_cero(int matriz[][C]){
  cout << "Matriz vacia NULL ";
  cout << "\n";
  for (int i=0;i<F; i++) {  
  for(int j=0; j<C;j++){
            
       matriz [i] [j]=0;

  }
 }

}
//**************************************************

void ARISTAS_CARGADAS_DEL_CONJUNTO_A (int matriz[][C]) {
     cout << "\n\n Matriz de adyacencia pre cargada: \n";
    matriz [0] [1] =1,  matriz [1] [2] =1;  
	matriz [1] [3] =1 , matriz [3] [4] =1;    
	matriz [4] [5] =1 , matriz [5] [2] =1;
	matriz [5] [6] =1 ;
 

}  

//**************************************************

void mostrar(int matriz[][C]) {
   
     for ( int i=0 ;i<F ;i++){
        for (int j=0;j<C ;j++){       	
           cout<<  "[" <<matriz [i] [j] <<"]"  ;                                        
	    }		
          cout<<"\n";
    }

}   

//*************************************************
bool Pertenece_Arista (int matriz[][C]) {   
 int a, b; 
    cout<< "************************************  ";
    cout<<"\n";  
    cout<< " VERIFICA SI PERTENECEN LAS ARISTAS:  ";
	cout<<"\n";     
 	cout<< " Digite los vertices:  ";
 	cin>> a;
	cout <<"Ingrese el siguiente vertice : \n";
    cin>>b;          
                
	    if ((a <0 ||  a>6 ) ||  ( b <0 || b>6)) {
			  cout<< "Error  verifique";
			  cout<<"\n"; 
        }   
 	    
		else if(matriz [a] [b] ==1){	   		
		return  true;
		}
	    else{	 
	  	return  false;
	  	cout<<"\n";
	  	    
	    }		     					
	
}

//**************************************************
bool nodo_adyacente (int matriz[][C] ) {
int a,b;
	cout<< " ************************************ :  ";
	cout<<"\n";
    cout<< " VERIFICA SI DOS NODOS SON ADYACENTES :  ";
    cout<<"\n"; 
	cout<< " Ingrese el primer vertice : \n";
 	cin>> a;
	cout <<" Ingrese el siguiente vertice : \n";
    cin>>b;          
	         
		if ((a <0 ||  a>6 ) ||  ( b <0 || b>6)) {
			  cout<< "Error  verifique";
			  cout<<"\n"; 
        }   
 	   	      	
       else if  (matriz [a] [b] ==1  || matriz [b] [a] ==1 ) {  
        return true;
        cout<<"\n";
       }
        else {  		
        return false;
		cout<<"\n";
		}         
         
}		
  
          








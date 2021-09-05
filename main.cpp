#include<bits/stdc++.h>
using namespace std;

float suma(float a, float b = 0){
  return a + b;
}

float resta(float a, float b = 0){
   return a - b;
}

int main(){
   int a;
   int opcion;
   cout << "---------- Calculadora ----------";
   cout << "---------------------------------";
   cout << "---- Seleccione la operacion ----";
   cout << "-           1.- Suma            -";
   cout << "-           2.- Resta           -";
   cout << "-           3.- Multiplicacion  -";
   cout << "-           4.- Division        -";
   cout << "---------------------------------";
   cout << "---------------------------------";
   while(opcion != 0){
   cin >> opcion;
   
   if(opcion == 1){
      int a, b;
      cout << "Ingrese un numero: ";
      cin >> a;
      cout << "Ingrese un numero: ";
      cin >> b;
      cout << "El resultado es " << suma(a, b);
   }
   else if(opcion == 2){
      int a,b;
      cout << "Ingrese un numero: ";
      cin >> a;
      cout << "Ingrese un numero: ";
      cin >> b;
      cout << "El resultado es " << resta(a, b);
   }
   else if(opcion == 3){
   }
   }

}

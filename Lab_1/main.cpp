#include <iostream>
#include <cstdlib>

using namespace std;

//----------------- EJERCICIOS -----------------//

/// EJERCICIO 2

// int main()
// {
//     int numero;
//     cout << "Escriba un numero para identificar si es par o impar: ";

//     cin >> numero;

//     if((numero % 2) == 0){
//         cout << numero << " es par" << endl;
//     }
//     else{
//         cout << numero << " es impar" << endl;
//     }

//     return 0;
// }


/// EJERCICIO 4

// int main()
// {
//     int a;
//     int b;

//     cout << "Ingrese un numero A: ";
//     cin >> a;

//     cout << "Ingrese un numero B: ";
//     cin >> b;

//     int menor = (a < b) ? a : b;
//     cout << "El menor es " << menor << endl;

//     return 0;
// }


/// EJERCICIO 6
// int main()
// {
//     float potencia = 1;
//     int a;
//     int b;

//     cout << "Ingrese un numero A: ";
//     cin >> a;

//     cout << "Ingrese un numero B: ";
//     cin >> b;

//     for(int i = 0; i < b; i++)
//     {
//         potencia *= a;
//     }

//     cout << a << "^" << b  << "=" << potencia << endl;

//     return 0;
// }


/// EJERCICIO 8
// int main()
// {
//     float factorial = 1;
//     int a;

//     cout << "Ingrese un numero A: ";
//     cin >> a;

//     for(int i = 2; i <= a; i++)
//     {
//         factorial *= i;
//     }

//     cout << a << "!" << "=" << factorial << endl;

//     return 0;
// }


/// EJERCICIO 10
// int main()
// {
//     int a;

//     cout << "Ingrese un numero A: ";
//     cin >> a;

//     cout << "multiplos de " << a << " menores de 100" << endl;

//     for(int i = a; i < 100; i += a)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }


/// EJERCICIO 12
// int main()
// {
//     int potencia = 1;
//     int a;


//     cout << "Ingrese un numero A: ";
//     cin >> a;

//     for(int i = 1; i <= 5; i++)
//     {
//         potencia *= a;
//         cout << a << "^" << i  << "=" << potencia << endl;
//     }

//     return 0;
// }


/// EJERCICIO 14
// int main()
// {
//     for (int i = 1, j = 50; i <= 50; i++, j--) {
//         cout << i << "   " << j << endl;
//     }
//     return 0;
// }


/// EJERCICIO 16
// int main()
// {
//     float promedio = 0;
//     int elementos = 0;
//     int n = 1;

//     cout << "Ingrese un numero (0 para salir): " << endl;

//     while (true) {
//         cin >> n;

//         if (n == 0) break;

//         promedio += n;
//         elementos++;
//     }

//     promedio /= elementos;
//     cout << "El promedio es " << promedio << endl;

//     return 0;
// }


/// EJERCICIO 18
// int main()
// {
//     float raiz = 0;
//     int n = 0;

//     cout << "Ingrese un numero: " << endl;
//     cin >> n;

//     while (raiz * raiz < n) {
//         raiz++;
//     }

//     if(raiz * raiz == n){
//         cout << n << " es un cuadrado perfecto" << endl;
//     }
//     else{
//         cout << n << " NO es un cuadrado perfecto" << endl;
//     }

//     return 0;
// }


/// EJERCICIO 20
// int main()
// {
//     int n;
//     cout << "Ingrese un numero: ";
//     cin >> n;

//     string Nstr = to_string(n);
//     string Nrev = string(Nstr.rbegin(), Nstr.rend());

//     if (Nstr == Nrev) {
//         cout << n << " es un número palíndromo" << endl ;
//     } else {
//         cout << n << " NO es un número palíndromo" << endl;
//     }

//     return 0;
// }


/// EJERCICIO 22
// int main()
// {
//     int n;

//     int hora;
//     int min;
//     int seg;

//     cout << "Ingrese un numero: ";
//     cin >> n;


//     hora = n / 3600;
//     min = (n - (hora * 3600)) / 60;
//     seg = n - ((hora * 3600) + (60 * min));


//     cout << hora << ":" << min << ":" << seg << endl;

//     return 0;
// }


/// EJERCICIO 24
// int main()
// {
//     int n;

//     cout << "Ingrese un numero: ";
//     cin >> n;

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             if(i == 0 || i == n-1 || j == 0 || j == n-1){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }


/// EJERCICIO 26
// int main()
// {
//     int a;
//     int b;
//     int c;

//     cout << "Ingrese un numero l1: ";
//     cin >> a;

//     cout << "Ingrese un numero l2: ";
//     cin >> b;

//     cout << "Ingrese un numero l3: ";
//     cin >> c;

//     if(!(a + b > c && a + c > b && b + c > a)){
//         cout << "Las longitudes ingresadas no forman un triangulo" << endl;
//         return 0;
//     }


//     if(a == b && b == c){
//         cout << "Se forma un triangulo equilatero" << endl; 
//     }
//     else if (a == b || b == c || a == c){
//         cout << "Se forma un triangulo isosceles" << endl;
//     }
//     else{
//         cout << "Se forma un triangulo escaleno" << endl;
//     }



//     return 0;
// }


/// EJERCICIO 28
// int main()
// {
//     float n;
//     double pi = 0.0;

//     cout << "Ingrese un numero l1: ";
//     cin >> n;

    
//     for(int i = 0, j = 1; i < n; i++, j += 2)
//     {
//         if (i % 2 == 0) 
//         {pi += 1.0 /j;}
//         else {pi -= 1.0 /j;}
//     }

//     pi *= 4;


//     cout << "pi es aproximadamente: " << pi << endl;

//     return 0;
// }


/// EJERCICIO 30
// int main()
// {
//     srand(time(0));

//     int n = -1;

//     int numero = rand() % 101;


//     while (n != numero)
//     {
//         cout << "\nAdivina el numero del 0 al 100: ";
//         cin >> n;

//         if(n > numero){
//             cout << n << " es MAYOR que el numero que buscas" << endl;
//         }
//         else{
//             cout << n << " es MENOR que el numero que buscas" << endl;
//         }
//     }


//     cout << "Adivinaste el numero." << endl;


//     return 0;
// }


//----------------- PROBLEMAS -----------------//



/// PROBLEMA 2







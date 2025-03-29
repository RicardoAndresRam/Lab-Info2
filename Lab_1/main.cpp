#include <iostream>

using namespace std;

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
int main()
{
    int nalrevez = 0;
    int n = 0;


    return 0;
}




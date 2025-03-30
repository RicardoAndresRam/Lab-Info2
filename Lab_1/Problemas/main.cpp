#include <iostream>

using namespace std;

//----------------- PROBLEMAS LABORATORIO 1 -----------------//


/// PROBLEMA 2
// int main()
// {   
//     int billete_50mil;
//     int billete_20mil;
//     int billete_10mil;
//     int billete_5mil;
//     int billete_2mil;
//     int billete_mil;
//     int moneda_500;
//     int moneda_200;
//     int moneda_100;
//     int moneda_50;

//     int restante;
//     int n;

//     cout << "Ingrese la cantidad de dinero que quiere convertir: ";
//     cin >> n;
    

//     billete_50mil = n / 50000;
//     restante = n - (50000 * billete_50mil);

//     billete_20mil = restante / 20000;
//     restante -= 20000 * billete_20mil;

//     billete_10mil = restante / 10000;
//     restante -= 10000 * billete_10mil;

//     billete_5mil = restante / 5000;
//     restante -= 5000 * billete_5mil;

//     billete_2mil = restante / 2000;
//     restante -= 2000 * billete_2mil;

//     billete_mil = restante / 1000;
//     restante -= 1000 * billete_mil;

//     moneda_500 = restante / 500;
//     restante -= 500 * moneda_500;

//     moneda_200 = restante / 200;
//     restante -= 200 * moneda_200;

//     moneda_100 = restante / 100;
//     restante -= 100 * moneda_100;

//     moneda_50 = restante / 50;
//     restante -= 50 * moneda_50;



//     cout << "50000: " << billete_50mil << endl;
//     cout << "20000: " << billete_20mil << endl;
//     cout << "10000: " << billete_10mil << endl;
//     cout << "5000: " << billete_5mil << endl;
//     cout << "2000: " << billete_2mil << endl;
//     cout << "1000: " << billete_mil << endl;
//     cout << "500: " << moneda_500 << endl;
//     cout << "200: " << moneda_200 << endl;
//     cout << "100: " << moneda_100 << endl;
//     cout << "50: " << moneda_50 << endl;
//     cout << "Restante: " << restante << endl;


//     return 0;
// }


/// PROBLEMA 4
// int main()
// {   
//     int hora1;
//     int minutosH1; 
//     int horaH1;


//     int hora2;
//     int minutosH2; 
//     int horaH2;

//     cout << "Ingrese una hora: ";
//     cin >> hora1;


//     minutosH1 = hora1 % 100;
//     horaH1 = hora1 / 100;

//     if(!(horaH1 >= 0 && horaH1 < 24 && minutosH1 >= 0 && minutosH1 < 60)){
//         cout << hora1 << " es un tiempo invalido" << endl;
//         return 0;
//     }

//     cout << "Ingrese la duracion: ";
//     cin >> hora2;

//     minutosH2 = hora2 % 100;
//     horaH2 = hora2 / 100;

//     if(!(horaH2 >= 0 && minutosH2 >= 0 && minutosH2 < 60)){
//         cout << hora2 << " es una duracion invalida" << endl;
//         return 0;
//     }


//     int minutosTotalesHora1 = (horaH1 * 60) + minutosH1;
//     int minutosTotalesHora2 = (horaH2 * 60) + minutosH2;

//     int totalMinutos = (minutosTotalesHora1 + minutosTotalesHora2) % 1440;

//     int resultado = (totalMinutos / 60) * 100 + (totalMinutos % 60);

    
//     cout << "La hora es " << resultado << endl;

//     return 0;
// }


/// PROBLEMA 6
// int main(){

//     float euler = 0;
//     int n;

//     cout << "Escribe la precicion de euler: ";
//     cin >> n;

    
//     for(int i = 0; i < n; i++)
//     {
//         int factorial = 1;
//         for(int j = 1; j <= i; j++)
//         {
//             factorial *= j;
//         }

//         euler += 1.0f / factorial; 
//     }

//     cout << "e es aproximadamente: " << euler << endl;
// }


/// PROBLEMA 8
// int main(){
//     int sumatoria = 0;
//     int a, b, c;

//     cout << "Ingrese el valor de a: ";
//     cin >> a;

//     cout << "Ingrese el valor de b: ";
//     cin >> b;

//     cout << "Ingrese el valor de c: ";
//     cin >> c;


//     for (int i = a; i < c; i += a)
//     {
//         sumatoria += i;

//         cout << i << " + ";
//     }


//     for (int i = b; i < c; i += b)
//     {
//         if(i % a != 0){
//             sumatoria += i;

//             cout << i;

//             if((i + b < c))
//             {
//                 cout << " + ";
//             }
//         }
//     }

//     cout << " = " << sumatoria << endl;
    
// }


/// PROBLEMA 10
// int main(){
//     int primo = 1;
//     int n;

//     cout << "Ingrese un numero: ";
//     cin >> n;

//     for(int i = 0; i < n;)
//     {
//         primo++;

//         if(primo < 2) continue;

//         bool esPrimo = true;
//         for (int j = 2; j * j <= primo; j++) {
//             if (primo % j == 0) {
//                 esPrimo = false;
//                 break;
//             }
//         }

//         if(!esPrimo) continue;

//         i++;
//     }

//     cout << "El primo numero " << n << " es: " << primo << endl;

    
// }


/// PROBLEMA 12
int main(){
    int maxPrimo;
    int primo;
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    primo = n;

    while(primo % 2 == 0) {
        maxPrimo = 2;
        primo /= 2;
    }


    for (int i = 3; i * i <= primo; i+= 2) {
        while (primo % i == 0) {
            maxPrimo = i;
            primo /= i;
        }
    }

    if(primo > 2)
    {
        maxPrimo = primo;
    }


    cout << "El mayor factor primo de " << n << " es: " << maxPrimo << endl;

    
}


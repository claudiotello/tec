#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<conio.h>
/*Hacer un programa de punto de ventas el cual llevara la facturación de la empresa al momento de realizar la venta. Cuando el comprador llegue con el cajero, este le entregara todos los productos. Al finalizar el cajero tiene que entregar un ticket de comprobante de venta con la siguiente información:

1. Nombre del cajero
2. Fecha
3. Hora
4. RFC de la empresa
5. Nombre del cliente
6. RFC solo si requiere factura
7. Desglose de los productos vendidos, que no sean mayores a 20( caja rapida)
8. Subtotal
9. Iva
10. Total a pagar
11. Por cada 500 pesos se dan 500 millas
12. Adicionalmente la empresa maneja los siguientes descuentos, si la compra es mayor a 5 mil pesos,se dara el 30% de descuento, y si es mayor a 2500 el 20%, si no, no le toca descuento

Con la finalidad de obtener mas clientes, la empresa maneja descuentos por dia. Si es lunes y martes 3%, miercoles 10%, jueves y viernes 5%, sabado y domingo 4%

Las promociones no son acumulables, el cliente debe escoger. Si ocupa factura no se cobra impuesto*/
using namespace std;
int main ()
{
    float precio[20];   //array de NUMALUM elementos tipo float
    int i = 0;           
    float suma = 0,subtotal,total,iva,cantidad,rfc;
    char nombre, res;  

    // Entrada de datos. Se asigna a cada elemento del array
    // la nota introducida por teclado
    cout << "Bienvenido a Walmart lo atiende Yessenia "<<endl<<"Cuantos productos va a llevar?"<<endl;
    cin>>cantidad;
    if(cantidad>20)
    {
                   cout<<"Esta es una caja rapida pase a la siguiente"<<endl;
    }
    else if(cantidad<1)
    {
                   cout<<"Esta es una caja rapida pase a la siguiente"<<endl;
    }
    else
    {
    while (i<cantidad)
    {
        cout << "Precio del articulo " << i+1<<": ";
        cin >> precio[i];
        i++;
    }

cout<<"Ocupa RFC?"<<endl;
cin>>res;
if(res=='s' or res=='S')
{
     cout<<"Cual es su nombre? "<<endl;
     cin>>nombre;
            for (i=0; i<cantidad; i++)
         suma = suma + precio[i];
    cout<<"cual es su RFC?"<<endl;
    cin>>rfc;
    cout << fixed << setprecision(2);
    cout << endl<< endl << "Gracias por venir a Walmart lo Atendio Yessenia" << endl;
    cout << endl<< endl << "RFC de la empresa: 00518189191811919189" << endl;
    cout << endl<< endl << "RFC del cliente: "<<rfc<< endl;
   
    // Mostrar los valores superiores a la media
    cout << "Listado de productos" << endl;
    cout << "--------------------------------------" << endl;
    for (i=0; i<cantidad; i++)
        {
            cout << "Articulo "<< i+1<<": $" << precio[i] << endl;
        }
        cout << "--------------------------------------" << endl<< endl;
        iva=suma*.16;
        total=iva+suma;
        cout<<"Subtotal: $"<<suma<<endl;
        cout<<"IVA: $"<<iva<<endl;
        cout<<"Total: $"<<total<<endl;
        }
        else
        {
        for (i=0; i<cantidad; i++)
         suma = suma + precio[i];
                 cout << fixed << setprecision(2);
                     cout << endl<< endl << "Gracias por venir a Walmart lo Atendio Yessenia" << endl;
                      cout << endl<< endl << "RFC de la empresa: 00518189191811919189" << endl;
   
    // Mostrar los valores superiores a la media
    cout << "Listado de productos" << endl;
    cout << "--------------------------------------" << endl;
    for (i=0; i<cantidad; i++)
        {
            cout << "Articulo "<< i+1<<": $" << precio[i] << endl;
        }
        cout << "--------------------------------------" << endl<< endl;
        iva=suma*.16;
        total=iva+suma;
        cout<<"Subtotal: $"<<suma<<endl;
        cout<<"IVA: $"<<iva<<endl;
        cout<<"Total: $"<<total<<endl;
        }
        }
    system("pause");
}

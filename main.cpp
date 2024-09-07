//Fernando A. Berrios Cintron
//801233975
//Este programa cacula dinero generado por una pelicula en el Box Office

#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int main(){

cout << "Bienvenide al Box Office Calculator.
El proposito de este programa es calcular la 
cantidad de dinero que una pelicula ha generado 
en el box office, con cuanto se queda el cine y
 cuanto se va para el distribuidor." << endl ;
     
 //Aqui se inicializan las variables
double ticket_adulto,ticket_kid, precio_adulto, precio_kid, total_gross, net_box, distributor ;
string nombre_pelicula ;
     
//Aqui se le pide el usuario los inputs de cada variable

cout <<"\nEntre el nombre de la pelicula: " << endl ;
getline (cin, nombre_pelicula) ;

cout <<"\nEntre la cantidad de boletos de adultos vendidos: " << endl ;
     cin >> ticket_adulto ;

cout <<"\nEntre la cantidad de boletos de niños vendidos: " << endl ;
     cin >> ticket_kid;

//Aqui se hacen los calculos de el gross box office profit, net box office profit, y con cuanto se queda el distribuidor.

precio_adulto = ticket_adulto * 10.00 ;
precio_kid = ticket_kid * 6.00 ;

total_gross = precio_adulto + precio_kid;

net_box = total_gross * 20 / 100 ;

distributor = total_gross - net_box;

//Aqui se despliega los totales de cada variable 
     
cout << "\nNombre de Pelicula:" << setw(13) << '\"' << nombre_pelicula << '\"' << endl ;

cout << setprecision(2) << fixed ;

cout << "Total de Boletos de Adulto:" << setw(10) << ticket_adulto << endl ;
     
cout << "Total de Boletos de Niños:" << setw(11) << ticket_kid << endl ;

cout << "Gross Box Office Profit:" << setw(8) << '$' << setw(8) << total_gross << endl ;
     
cout << "Net Box Office Profit:" << setw(10) << '$' << setw(6) << net_box << endl ;
     
cout << "Distributor Profit:" << setw(13) << '$' << setw(8) << distributor << endl ;

return 0 ;


}

//fin del programa
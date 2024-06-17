#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>

using namespace std;//uso principal es para no tener el uso repetitivo de "std::"

//Declaracion de variables globales
map <string, set<string>> bd;

//Declarar funciones 
void pausar();
bool validarFecha(const string& fecha, int& year, int& month, int& day);
void agregarEvento(const string& fecha, const string& evento);
void eliminarEvento(const string& fecha, const string& evento);
void eliminarEventos(const string& fecha);
void buscarEventoConFecha(const string& fecha);
void imprimir();
string obtenerPrimeraPalabra(string str);
string eliminarPrimeraPalabra(string cadena);
string obtenerLaFecha(string cadena);

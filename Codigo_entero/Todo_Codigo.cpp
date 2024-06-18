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

//Funcion que permite pausar el programa antes de continuar
void pausar() {
    cout << "\nIngrese enter para continuar: ";
    cin.ignore();//Ignora cualquier entrada pendiente
    con.get();// Se espera a que se presione enter
}

//Funcion validar fecha
bool validarFecha(const string& fecha, int& year, int& month, int& day){
    istringstream iss(fecha);
    char dash1, dash2;
    if (iss >> year >> dash1 >>month >> dash2 >> day && dash1 == '-', '/' && dash2 == '-', '/'){
        if(month < 1 || month >12){
            cout << "El valor del mes no es valido: " << month << endl;
            return false;
        }
        if (day < 1 || day > 31) {
            cout << "El valor del dia no es valido: " << day << endl;
            return false;
        }
        return true;
    }
    cout << "Formato de fecha incorrecto: " << fecha <<endl;
    return false;
}

//Funcion agregar evento
void agregarEvento(const string& fecha, const string& evento) {
    int year, month, day;
    if (validarfecha(fecha, year, month, day)) {
        bd[fecha].insert(evento);
    }
}

//funcion eliminar evento
void eliminarEvento(const string& fecha, const string& evento){
    int year, month, day;
    if (validarFecha(fecha, year, month, day)){
        if(bd[fecha].erase(evento)) {
            cout << "Borrador exitosamente" << endl;
        } else {
            cout << "Evento no encontrado" << endl;
        }
    }
}

//funcion eliminar eventos
void eliminarEventos(const string& fecha){
    int year, month, day;
    if(validarFecha(fecha, year, month, day)){
        int count = bd[fecha].size();
        bd.erase(fecha);
        cout << "Eliminado " << count << " eventos" << endl;
    }
}

//funcion buscar evento con fecha
void buscarEventoConFecha(const string& fecha){
    int year, month, day;
    if(validarFecha(fecha, year, month, day)){
        if(bd.count(fecha)){
            for(const auto& e : bd[fecha]){
                cout << e << endl;
            }
        }
    }
}

//funcion imprimir
void imprimir(){
    if(bd.empty()){
    } else {
        cout << "Imprimiendo evento:\n\n";
        for(const auto& [fecha, eventos] : bd){
            for(const auto& evento : eventos){
                cout << fecha <<" | "<< evento << endl
            }
        }
    }
}
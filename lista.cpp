#include <iostream>
#include <stdlib.h>
#include <list>
#include <iterator>

using namespace std;

list<string> lista;
int n;

void mostrarLista(list<string> lista)
    {
       
        list<string>::iterator pos;
        pos = lista.begin();
       cout<<endl<<"La lista es: "<<endl;
        while(pos != lista.end()){
            cout<<*pos<<endl;
            pos++;
        }
        cout<<endl;
    }

void insertarAntesDeX(string omega, string gamma)
{
    list<string>::iterator pos;
    pos = lista.begin();
    
    while(pos != lista.end()){
    
        if(*pos==omega){
            
            
            lista.insert(pos, gamma); 
            break;
    
            
        }pos++;
       
    }
}

void insertarDespuesDeX(string omega, string gamma)
{
    list<string>::iterator pos;
    pos = lista.begin();
    
    while(pos != lista.end()){
    
        if(*pos==omega){
            
            pos++;
            lista.insert(pos, gamma); 
            break;
    
            
        }pos++;
       
    }
}

void menu(){
    int select, option;
    string valorcini, buscador;
    do{
        
        cout<<"1. Insertar nodo"<<endl;
        cout<<"2. Eliminar nodo"<<endl;
        cout<<"3. Buscar nodo"<<endl;
        cout<<"4. Tamaño de la lista"<<endl;
        cout<<"5. Comprobar lista vacia"<<endl;
        cout<<"6. Mostrar Lista"<<endl;
        cout<<"7. Vaciar lista"<<endl;
        cout<<"8 Salir"<<endl;
        cin>>select;
        
        switch(select){
            case 1:
            do{
                cout<<"1. insertar nodo al inicio"<<endl;
                cout<<"2. insertar nodo al final"<<endl;
                cout<<"3. insertar nodo antes del elemento X"<<endl;
                cout<<"4. insertar nodo despues del elemento X"<<endl;
                cout<<"5. volver"<<endl;
                cin>>option;
                
                switch(option){
                    case 1: 
                        cout<<"inserte el elemento que quiere añadir al inicio: "<<endl;
                        cin>>valorcini;
                        lista.push_front(valorcini);
                        mostrarLista(lista);
                        break;
                    case 2: 
                        cout<<"inserte el elemento que quiere añadir al final: "<<endl;
                        cin>>valorcini;
                        lista.push_back(valorcini);
                        mostrarLista(lista);
                        break;
                    case 3:
                        cout<<"inserte el elemento que quiere añadir antes del elemento x: "<<endl;
                        cin>>valorcini;
                        cout<<"inserte el valor del elemento x";
                        cin>>buscador;
                        insertarAntesDeX(buscador, valorcini);
                        mostrarLista(lista);
                        break;
                    case 4: 
                        cout<<"inserte el elemento que quiere añadir despues del elemento x: "<<endl;
                        cin>>valorcini;
                        cout<<"inserte el valor del elemento x: ";
                        cin>>buscador;
                        insertarDespuesDeX(buscador, valorcini);
                        mostrarLista(lista);
                        break;
                }
                
            }while(option != 5);
                
                break;
            
            case 2: 
                cout<<"No disponible aun"<<endl;
                break;
                
            case 3: 
                cout<<"No disponible aun"<<endl;
                break;
                
            case 4: 
                cout<<"No disponible aun"<<endl;
                break;
                
            case 5: 
                cout<<"No disponible aun"<<endl;
                break;
                
            case 6: 
                cout<<"No disponible aun"<<endl;
                break;
                
            case 7: 
                cout<<"No disponible aun"<<endl; 
                break;
        }
        
    }
        while(select != 8);
        system("pause");
}


int main(){
   
   
    
    cout<<"Digite el numero de nodos de la lista: ";
    cin>>n;

    for(int i=0; i<n; i++){

        string valor;
        cout<<"Digite el nuevo elemento: ";
        cin>>valor;
        lista.push_back(valor);
        
    }
    
    menu();
    

}

#include <iostream>
#include <iostream>

using namespace std;

class Biblioteca{

private:
    string nombre;
    public:
        Biblioteca(string);
        virtual void leer();
        virtual void mostrar();

};

Biblioteca::Biblioteca(string _nombre){
nombre= _nombre;

}




void Biblioteca::leer(){

cout<<"Leer libro"<<endl;
}


void Biblioteca::mostrar(){

cout<<"nombre de la biblioteca: "<<nombre<<endl;


}


class Libro:public Biblioteca{

private:
     string libros;
     string autor;
public:
    Libro(string,string,string);

    void leer();
    void mostrar();


};

Libro::Libro(string _nombre, string _libros,string _autor): Biblioteca(_nombre){

libros = _libros;
autor = _autor;




}


void Libro::leer(){

cout<<"llevar libro para leer"<<endl;


}


void Libro::mostrar(){
Biblioteca::mostrar();
cout<<"nombre del libro: "<<libros<<endl;
cout<<"Autor: "<<autor<<endl;


}








int main()
{
    Biblioteca *biblioteca[1];
    biblioteca[0]= new Libro("Rodolfo walsh", "Ficciones", "Borges");
    biblioteca[0]->mostrar();
    biblioteca[0]->leer();

    cout<<endl;
    biblioteca[1]= new Libro("Rodolfo walsh", "Rayuela", "Julio cortazar");
    biblioteca[1]->mostrar();
    biblioteca[1]->leer();



}

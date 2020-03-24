#include "libro.h"
#include "lista.h"
#include <stdlib.h>

void LlenarLibro(int n, Libro* Lib) {
  for(int i = 0; i < n; i++){
    printf("Ingrese los datos del libro %ui \n\n", (i+1));
    printf("Ingrese el titulo del libro: ");
    scanf("%s", Lib[i].titulo);
    printf("Ingrese el nombre del autor: ");
    scanf("%s", Lib[i].autor);
    printf("Ingrese el isbn del libro: ");
    scanf("%s", Lib[i].isbn);
  }
}

void ImprimirLibro(int n, Nodo* Libros){
  for(int i = 0; i < n; i++){
    printf("Titulo del libro: %s\n",Libros->libro.titulo);
    printf("Nombre del autor: %s\n",Libros->libro.autor);
    printf("ISBN del libro: %s\n",Libros->libro.isbn);
  }
  printf("\n\n");
}

Libro *MemoriaLibro(int n){
  Libro *Lib = (Libro *)malloc(n*sizeof(Libro));
  return Lib;
}

void LiberarMemoriaLibro(Libro *Lib){
  free(Lib);
}

int main(int argc, char** argv) {

Nodo *Libros;
Libro *Lib;

int n = 2;
Lib = MemoriaLibro(n);

//printf("ELNdsfsdfsd:");

LlenarLibro(n, Lib);
//printf("El nombre del libro es: %s\n", Lib->titulo);
Libros = CrearNodo(Lib);
//printf("ELNombreDelLibroEnNodoEs: %s\n", Libros->libro.titulo);
ImprimirLibro(n, Libros);
DestruirNodo(Libros);
LiberarMemoriaLibro(Lib);
printf("ELNdsfsdfsd: %s\n", Libros->libro.titulo);

  return 0;
}

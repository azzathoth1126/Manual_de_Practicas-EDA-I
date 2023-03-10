// Nodo película - Código
#include<stdio.h>

struct pelicula{
    char *nombre;
    char *genero;
    short anio;
    short numDirectores;
    char *directores[10];
};

void imprimirDatosPelicula(struct pelicula);

struct pelicula llenarDatosPelicula(char *, char *, short , short , char*[10]);


int main(){

    char *directores[10];

    directores[0] = "Lana Wachowski";
    directores[1] = "Andy Wachowski";

    struct pelicula matrix = llenarDatosPelicula("The matrix", "Cienciaficción", 1999, 2, directores);

    imprimirDatosPelicula(matrix);
    
    return 0;
}

void imprimirDatosPelicula(struct pelicula movie){
    printf("PELICULA: %s\n", movie.nombre);
    printf("GENERO: %s\n", movie.genero);
    printf("ANIO: %d\n", movie.anio);
    printf("DIRECTOR(ES):\n");

    
    for (int cont = 0; cont < movie.numDirectores ; cont++)
        printf("%s\n", movie.directores[cont]);

}

struct pelicula llenarDatosPelicula(char *nombre, char *genero, short anio, short numDirectores, char *directores[10]){
    struct pelicula movie;
    movie.nombre = nombre;
    movie.genero = genero;
    movie.anio = anio;
    movie.numDirectores = numDirectores;
    
    for (int cont = 0; cont < movie.numDirectores ; cont++)
        movie.directores[cont] = directores[cont];
    
    return movie;
};
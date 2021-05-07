/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Marisol
 *
 * Created on 28 de abril de 2021, 12:40 AM
 */

#include <stdio.h>
#include <stdlib.h>

//variables globales
int num = 30; 
int a = 34;
int b = 2;

// tipo_funcion nombre_funcion (parametros);

//prototipos
void f1();
int suma(int a, int b);
void ejemploIf();
void ejemploSwitch();
int cubo(int base);
void escribir();
void escribir2();
void escribir3();
void vectores();
void fichero();

int main(int argc, char** argv) {
    //variable local
    int num = 21;
    printf("Variable num: %d\n", num);
    
    int a = 10;
    if(a > 11 && a == 10){
        printf("es mayor");
    }
    else{
        //ambito else
        int num = 11;
        printf("Variable num: %d\n", num);
        //printf("es falso\n");
    }
    
    f1();
    /*
    for(declaracion ; condicion ; incremento | decremento){
     * 
     * } 
     */
    
    for(int i=0; i < 5; i++){
        //printf("%d", i);
        int for1 = 0;
        if(i == 2){
            break;
        }
        
    }
    int i = 0;
    while(i < 5){
        //printf("While %d", i);
        i++;
    }
    i = i + 8;
    
    int resultado = suma(3, 323);
    printf("\nResultado: %d\n", suma(2, 3));
    ejemploIf();
    ejemploSwitch();
    
    for(int i=0; i <=5; i++){
        printf("El cubo del numero %d es %d\n", i, cubo(i));
    }
    
    escribir();
    escribir2();
    escribir3();
    vectores();
    fichero();
    return (EXIT_SUCCESS);
}

    /*
     tipo_funcion nombre_funcion (parametros){  
        sentencias 
     }
    */

int cubo(int base){
    int potencia;
    potencia = base * base * base;
    return potencia;
}

void f1()
{
    printf("variable num: %d\n",num);
}

int suma(int a, int b){
    return a + b;
}

void ejemploIf(){
    int v = 2;
    if (v == 1){
        printf("Uno\n");
    }
    else if(v == 2){
        printf("Dos\n");
        return;
    }
    else if(v == 3){
        printf("Tres\n");
    }
    else{
        printf("No cumple if\n");
    }
    printf("Final de if\n");
}

void ejemploSwitch(){
    int valor = 3;
    switch(valor){
        case 1:
            printf("Uno\n");
            break;
        case 2+5:
            printf("Dos\n");
            break;
        case 2+1:
            printf("Tres\n");
            break;
        default:
            printf("No Cumple Switch\n");
    }
}

void escribir(){
    FILE* fichero;
    fichero = fopen("texto1.txt", "wt");
    fputs("Primera forma (linea 1)\n", fichero);
    fputs("de escribir en (linea 2)\n", fichero);
    fputs("un archivo (linea 3)", fichero);
    fclose(fichero);
    printf("Proceso completado\n");
}

void escribir2(){
    char cadena1 [] = "(linea 1)\n";
    char cadena2 [] = "(linea 2)\n";
    char cadena3 [] = "(linea 3)";
    FILE* fichero;
    fichero = fopen("texto2.txt", "wt");
    fputs(cadena1, fichero);
    fputs(cadena2, fichero);
    fputs(cadena3, fichero);
    fclose(fichero);
    printf("Proceso completado\n");
}

void escribir3(){
    int i=0;
    char cadena1 [] = "Cadena 1\n";
    char cadena2 [] = "salto de linea\n";
    char cadena3 [] = "final\n";
    FILE* fichero;
    fichero = fopen("texto3.txt", "wt");
    printf("Longitud de cadena1 es %d \n", sizeof(cadena1));
    
    fprintf (fichero, "%s%s%sEscritas %d lineas en fichero", cadena1, cadena2, cadena3, 3);
    fclose(fichero);
    printf("Proceso completado\n");
}

void vectores(){
    int vector[10],i;
    for (i=0;i<10;i++){
        vector[i]=i;
    }
    for (i=0;i<10;i++){
        printf(" %d",vector[i]);
    }
    
    //[4]
    //[0, 1, 2, 3]
}

void fichero(){
    /* Declaramos la variable fichero como puntero a FILE. */
    FILE *fichero;

    /* Abrimos fichero1.txt en modo texto y
     * guardamos su direccion en el puntero. */
    fichero = fopen("reporte.html", "wt");

    /* Imprimimos la direccion para este ejemplo. */
    //printf("\nDireccion de texto1.txt: %p\n",fichero);
    int id [] = {1,2,3,4,5,6,7,8,9,10};
    char abc [] = {'a','b','c','d','e','f','g','h','i','j'};

    abc[5]='k';
    
    printf("%c", abc[5]);
    int matriz[5][5];
    matriz[5][5] = 3;
    //matriz[i][j]
    /*
     * j->
     i[0, 1, 2, 3, 4]
     i[1, 2, 3, 4, 5]
     *[2, 3, 4, 5, 6]
     .
     .
     */
    
    for(int i=0; i<5; i++){
        //i=0
        for(int j=0; j<5; j++){
            //i=0
            matriz[i][j]= i+j;
        }
        //i=1
    }
    
    printf("\n");
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<5;i++){
        printf("%d\t", matriz[i][0]);
    }
    
    fputs("<!DOCTYPE html>\n<html>\n<head>\n<meta charset=\"UTF-8\">\n<title>Reporte HTML</title>\n", fichero);
    fputs("<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6\" crossorigin=\"anonymous\">", fichero);
    fputs("</head>\n<body><h1>Ejemplo Reporte</h1>",fichero);
    fputs("<table class=\"table table-dark\">\n<thead>\n<tr><th>Numero</th><th>Letra</th></tr></thead>",fichero);
    for(int i=0; i<10; i++){
        fprintf(fichero, "<tr><td>%d</td><td>%c</td></tr>", id[i], abc[i]);
    }
    fputs("</table></body></html>", fichero);
    fclose(fichero);
    printf("reporte html creado");
   
}

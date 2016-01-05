//
//  main.c
//  GettingStartedWithC
//
//  Created by Ralph Blanes on 1/4/16.
//  Copyright (c) 2016 RalphGotBranes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MuhDik "Eight Inches"
void convert_celsius_fahr(float temperature);
void convert_fahr_celsius(float temperature);
void convert_kelvin_celsius(float temperature);
void convert_celsius_kelvin(float temperature);

int main(int argc, const char * argv[]) {
// Lista de exercicios
// problema 1
//    int read;
//    printf("Plz input a number \n");
//    scanf("%d",&read);

//problema 2
//    float read;
//    printf("Plz input a number \n");
//    scanf("%f",&read);
//

//problema 3
//    int input1,input2,input3;
//    printf("Plz input 3 numbers \n");
//    scanf("%d%d%d",&input1,&input2,&input3);
//    printf("The numbers are %d, %d, %d",input1,input2,input3);
    
//Problema 4 e 5
//    float read;
//    printf("Plz input a number \n");
//    scanf("%f",&read);
//    printf("The square of your number is %f \n",read*read);
//    printf("One fifth of your number is %f \n",read/5);
//
//Problemas 6 a 9
    float temperature = 123.2;
    convert_celsius_fahr(temperature);
    convert_fahr_celsius(temperature);
    convert_kelvin_celsius(temperature);
    convert_celsius_kelvin(temperature);
    printf("%s",MuhDik);
    float number = 9%2;
    printf("%f", number);
    

    
    
}


void convert_celsius_fahr(float temperature){
    float converted_value = temperature*(9.0/5.0)+32.0;
    printf("%f degrees Celsius corresponds to %f degrees Fahrenheit \n", temperature,converted_value);
}

void convert_fahr_celsius(float temperature){
    float converted_value = (temperature-32)*(9.0/5.0)+32.0;
    printf("%f degrees Fahrenheit corresponds to %f degrees Celsius \n", temperature,converted_value);
    
}

void convert_kelvin_celsius(float temperature){
    float converted_value = temperature-273.15;
    printf("%f degrees Kelvin corresponds to %f degrees Celsius \n", temperature,converted_value);
}

void convert_celsius_kelvin(float temperature){
    float converted_value = temperature+273.15;
    printf("%f degrees Celsius corresponds to %f degrees Kelvin \n", temperature,converted_value);
}
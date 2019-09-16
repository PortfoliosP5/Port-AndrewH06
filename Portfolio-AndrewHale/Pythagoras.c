//
//  Pythagoras.c
//  Portfolio
//
//  Created by Hale, Andrew on 9/11/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//

#include "Pythagoras.h"
#include <math.h>

float hypo(float, float);
void pythagoras()
{
    float base, height;
    printf("Enter the base legnth: ");
    scanf("%f", &base); //takes base value
    printf("\nEnter the height: ");
    scanf("%f", &height); //takes height value
    printf("The hypotenuse is %.2f\n", hypo(base, height));
}

float hypo(float base, float height)
{
    float hypo;
    hypo = sqrt((base*base)+(height*height)); //does math with inputted values
    return hypo;
}

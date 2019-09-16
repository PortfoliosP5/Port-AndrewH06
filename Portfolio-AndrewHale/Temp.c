//
//  Temp.c
//  Portfolio
//
//  Created by Hale, Andrew on 9/11/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//

#include "Temp.h"

float fahr;
float celc(float);
void temp() {
    printf("Enter your first Fahrenheit value: ");
    scanf("%f", &fahr); //takes fahrenheit value
    printf("\nWhen Fahrenheit = %.2f                    Celcius = %.2f\n\n", fahr, celc(fahr));
}

float celc(float fahr) {
    float celc;
    celc = (fahr - 32)*.55555; //does conversion math
    return celc;
}

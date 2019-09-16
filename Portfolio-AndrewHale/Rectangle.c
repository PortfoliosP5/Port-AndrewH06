//
//  Rectangle.c
//  Portfolio
//
//  Created by Hale, Andrew on 9/11/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//

#include "Rectangle.h"

float perim(float, float);
void rectangle()
{
    float legnth, width;
    printf("What is your legnth?\n");
    scanf("%f", &legnth); //takes legnth value
    printf("What is your width?\n");
    scanf("%f", &width); //takes width value
    printf("Your perimeter is %.2f.\n", perim(legnth, width));
}

float perim(float legnth, float width) {
    float perim;
    perim = (legnth*2) + (width*2); //does actual math with inputted values
    return perim;
}


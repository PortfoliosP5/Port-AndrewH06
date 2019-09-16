//
//  main.c
//  Portfolio
//
//  Created by Hale, Andrew on 9/11/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//

#include <stdio.h>
#include "Rectangle.h"
#include "Pythagoras.h"
#include "Temp.h"
#include "MMCalculator.h"
#include "IdealGas.h"

void byebye(void);
void range(void);
char choice;
int main(int argc, const char * argv[])
{
    printf("Welcome to the portfolio!\nA = Rectangle Perimeter\nB = Pythagoras\nC = Temprature Converter\nD = Molar Mass Converter\nE = Ideal Gas Calculator\nEnter a number for the Lab you want to see: ");
    choice = getchar();
    getchar();
    //takes imput and sends them to corresponding .c
    if (choice == 'A') {
        printf("\nWelcome to the Rectangle Perimeter calculator!\n");
        rectangle();
    }
    else if (choice == 'B') {
        printf("\nWelcome to the Pythagoras calculator!\n");
        pythagoras();
    }
    else if (choice == 'C') {
        printf("\nWelcome to the Temperature converter!\n");
        temp();
    }
    else if (choice == 'D') {
        printf("\nWelcome to the Molar Mass calculator!\n");
        mmcalculator();
    }
    else if (choice == 'E') {
        printf("\nWelcome to the Ideal Gas calculator!\n");
        idealgas();
    }
    else { // if they put something that isn't any out of the choices it sends them down to range()
        range();
    }
    // runs at end
    byebye();
    return 0;
}

void range() {
    printf("Sorry that number isn't one of the choices.\n");
}

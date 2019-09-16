//
//  MMCalculator.c
//  MM Calculator
//
//  Created by Hale, Andrew on 9/12/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//

#include "MMCalculator.h"

int input(void);
int mm(void);
int den(void);
int tem(void);
int pre(void);
float d;
float t;
float p;
float n;
float fn;
float fd;
float ft;
float fp;

int mmcalculator() {
    input();
    return 0;
}

int input() {
    char miss;
    printf("Enter your missing value for n=drT/P: ");
    scanf("%c", &miss);
    switch(miss) { //allows user to choose which value to solve for
        case 'n':
        case 'N':
            mm();
            break;
        case 'd':
        case 'D':
            den();
            break;
        case 'T':
        case 't':
            tem();
            break;
        case 'P':
        case 'p':
            pre();
            break;
        // r is a constant value so you can't solve for it
        default:
            printf("Sorry that's not a valid input. Try again:\n");
            input();
    }
    return 0;
}

int mm() {
    printf("Enter a d value: ");
    scanf("%f", &d);
    printf("Enter a t value: ");
    scanf("%f", &t);
    printf("Enter a p value: ");
    scanf("%f", &p);
    fn = (d*0.08206*t)/p; //takes user input and solves
    printf("Your final Molar Mass (n) is %.3f\n", fn);
    return 0;
}

int den() {
    printf("Enter a n value: ");
    scanf("%f", &n);
    printf("Enter a t value: ");
    scanf("%f", &t);
    printf("Enter a p value: ");
    scanf("%f", &p);
    fd = (0.08206*t)/(n*p); //takes user input and solves
    printf("Your final Density (d) is %.3f\n", fd);
    return 0;
}

int tem() {
    printf("Enter a n value: ");
    scanf("%f", &n);
    printf("Enter a d value: ");
    scanf("%f", &d);
    printf("Enter a p value: ");
    scanf("%f", &p);
    ft = (0.08206*d)/(p*n); //takes user input and solves
    printf("Your final Tempreture (t) is %.3f\n", ft);
    return 0;
}

int pre() {
    printf("Enter a n value: ");
    scanf("%f", &n);
    printf("Enter a d value: ");
    scanf("%f", &d);
    printf("Enter a t value: ");
    scanf("%f", &t);
    fp = (d*0.08206*t)/n; //takes user input and solves
    printf("Your final Pressure (p) is %.3f\n", fp);
    return 0;
}

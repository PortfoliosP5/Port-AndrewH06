//
//  IdealGas.c
//  Portfolio
//
//  Created by Hale, Andrew on 9/13/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//

#include "IdealGas.h"

int input2(void);
int pre2(void);
int vol2(void);
int mm2(void);
int tem2(void);
float p2;
float v2;
float n2;
float t2;
float r = 0.08206; // r is a constant
float fp2;
float fv2;
float fn2;
float ft2;

int idealgas() {
    input2(); //puts you into input
    return 0;
}

int input2() {
    char miss2;
    printf("Enter your missing value for PV=nRT: ");
    scanf("%c", &miss2);
    switch(miss2) { //finding which value is missing and sending them to the correct function
        case 'p':
        case 'P':
            pre2();
            break;
        case 'v':
        case 'V':
            vol2();
            break;
        case 'n':
        case 'N':
            mm2();
            break;
        case 't':
        case 'T':
            tem2();
            break;
        default:
            printf("Sorry that's not a valid input. Try again:\n");
            input2();
    }
    return 0;
}

int pre2() {
    printf("V = ");
    scanf("%f", &v2);
    printf("n = ");
    scanf("%f", &n2);
    printf("T = ");
    scanf("%f", &t2);
    fp2 = (n2*t2*r)/v2;
    printf("The pressure [P] is %.2f", fp2); //calculations with inputted values
    return 0;
}

int vol2() {
    printf("P = ");
    scanf("%f",&p2);
    printf("n = ");
    scanf("%f",&n2);
    printf("T = ");
    scanf("%f",&t2);
    fv2 = (n2*t2*r)/p2;
    printf("The volume [V] is %.2f", fv2); //calculations with inputted values
    return 0;
}

int mm2() {
    printf("P = ");
    scanf("%f", &p2);
    printf("V = ");
    scanf("%f", &v2);
    printf("T = ");
    scanf("%f", &t2);
    fn2 = (p2*v2)/(r*t2);
    printf("The molar mass [n] is %.2f", fn2); //calculations with inputted values
    return 0;
}

int tem2() {
    printf("P = ");
    scanf("%f", &p2);
    printf("V = ");
    scanf("%f", &v2);
    printf("n = ");
    scanf("%f", &n2);
    ft2 = (p2*v2)/(n2*r);
    printf("The temperture [T] is %.2f", ft2); //calculations with inputted values
    return 0;
}

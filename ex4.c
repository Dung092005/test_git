#include<stdio.h>

int ex4(int a, int b){
    while(b != 0){
        int temb = b;
        b = a % b; 
        a = temb;
    }
    return a;
}
viet dong nay de test branch 
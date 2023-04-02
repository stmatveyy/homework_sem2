#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>


int main() {

    double x = 2;
    double y = 1;
    
    if ((x >= 0) && (y >= 0) && (x <= 5) && (y <= 5) && ((pow((y-5),2)+pow((x-5),2)) >= 25)){
        printf("1");
    } else{
        printf("0");
    }
    
    return 0;
}

//Тесты:
// (-1,-1) - значения не должны входить в область
// (-1,5)
// (6,0)
// (0,6)
// (5,5)

// (0,0) - значения должны входить в область
// (1,1)
// (0,5)
// (5,0)
// (2,1)

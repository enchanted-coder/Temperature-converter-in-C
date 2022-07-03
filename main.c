#include <stdio.h>
#include <stdlib.h>

#define onepointeight 1.8
#define thirtytwo 32

static void ctof(){
    float tempC, tempF;

    printf("Input temp in celcius: ");
    scanf("%f", &tempC);
    
    printf("%.1f°F\n", (tempC * onepointeight) + thirtytwo);
}

static void ftoc(){
    float tempC, tempF;

    printf("Input temp in farenheit: ");
    scanf("%f", &tempF);

    printf("%.1f°C\n", (tempF-32) / 1.8);
}


int main(int argc, char **argv){
    char choice; //either c or f
    system("clear");
    printf("What do you want to convert? \nIf Celcius to Farenheit, choose C\nIf Farenheit to Celcius, choose F\n");
    scanf("%c", &choice);
    switch(choice){
        case 'c':
            ctof();
            break;
        case 'f':
            ftoc();
            break;
        case 'C':
            ctof();
            break;
        case 'F':
            ftoc();
            break;
        default:
            printf("invalid!");
            break;
    }
    return 0;
}

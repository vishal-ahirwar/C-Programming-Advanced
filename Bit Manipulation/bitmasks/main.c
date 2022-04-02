<<<<<<< HEAD
//Copyright(c)2022 Vishal Ahirwar. All rights reserved.
=======
//Copyright(c) 2022 Vishal Ahirwar. All rights reserved.

>>>>>>> 4665f495d77ff8574e3c4172f61a6aa58931ce04
#include <stdio.h>
#define OFF 0
#define ON 1
// used to set/unset or check bit state
int main(void)
{
    int DRONES_Propeller_STATE = OFF;
    // enable 1rst head left Propeller
    int mask = 0b0000000000000001;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 1rst head righ Propeller
    mask = 0b0000000000000010;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 2rst left Propeller
    mask = 0b0000000000000100;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 2rst right Propeller
    mask = 0b0000000000001000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 3rd left Propeller
    mask = 0b0000000000010000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 3rd right Propeller
    mask = 0b000000000010000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 4rth left Propeller
    mask = 0b0000000000100000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 4rth right Propeller
    mask = 0b000000001000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 5th left Propeller
    mask = 0b0000000001000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 5th right Propeller
    mask = 0b000000100000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 6th left Propeller
    mask = 0b0000000010000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 6th right Propeller
    mask = 0b000010000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 7th left Propeller
    mask = 0b0000000100000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 7th right Propeller
    mask = 0b000000100000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 8th left Propeller
    mask = 0b0000001000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 8th right Propeller
    mask = 0b000010000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 9th left Propeller
    mask = 0b0000010000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 9th right Propeller
    mask = 0b001000000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 10th left Propeller
    mask = 0b0010000000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    // enable 10th right Propeller
    mask = 0b010000000000000;
    DRONES_Propeller_STATE = DRONES_Propeller_STATE | mask;
    printf("\nDRONE STATE : %d, \n", DRONES_Propeller_STATE);

    return 0;
}

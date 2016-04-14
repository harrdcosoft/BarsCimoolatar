#include <stdio.h>
#include <stdlib.h>
#include "moduleHW.c"


int main(void)
{
    
    /*printf("Please enter the core number:\n");
    int corenumbers = scanf("%d\n", &corenumbers);
    printf("%d\n", corenumbers);*/
   
    /*int corenumbers = 2;
    struct hardwaremodule * HWcore = CreateCore(corenumbers);    
    HWcore->coreAddress = 1;
    printf("%d\n", HWcore->coreAddress);
    SetupCoreProperty(HWcore,2, 5);
    printf("%d, %d, %d\n", HWcore->coreID, HWcore->coreAddress, HWcore->priority);*/
   
    int corenumbers = 2;
    struct hardwaremodule** HWcore2 = CreateCoreCC(corenumbers);
    int properties[corenumbers*3];
    
    SetupCoreProperty(HWcore2[0], 0, 0);
    /*HWcore2[0]->coreID = 1;
    HWcore2[1]->coreID = 2;*/
    printf("%d\n", HWcore2[0]->coreID);
    //printf("%d\n", HWcore2[1]->coreID);
    //HWcore->coreAddress = 1;
    //HWcore[1]->coreAddress = 2;
    //printf("%d", **HWcore->coreAddress);
    deletecore(HWcore2, corenumbers);
    
    return 0;
}



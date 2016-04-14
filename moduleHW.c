#include <stdlib.h>
//#include "moduleHW.h"
#include <assert.h>
#define MASTER 1
#define SLAVE 2

struct hardwaremodule
{
    int coreID;
    int coreAddress;
    int priority;
};

typedef struct hardwaremodule HWCORE;

int arbiter(int request1, int request2)
{
    int which;
    return which;
}

void channel_msgPassing(int *data, int modulename1, int modulename2)
{

}

struct hardwaremodule* CreateCore(int numbers)
{
    struct hardwaremodule* HWcore = (struct hardwaremodule*)malloc(sizeof(struct hardwaremodule));
    return HWcore;
}

struct hardwaremodule** CreateCoreCC(int numbers)
{
    struct hardwaremodule** HWcore = (struct hardwaremodule**)malloc(numbers*sizeof(struct hardwaremodule*));
    int i;
    assert (HWcore!=NULL);
    
    for(i=0;i<numbers;++i)
    {
	HWcore[i]=(struct hardwaremodule*)malloc(sizeof(struct hardwaremodule));
	assert(HWcore[i] != NULL);
    }
    return HWcore;
}

void deletecore(struct hardwaremodule** HWcore, int corenumbers)
{
    if(HWcore)
    {
        int i;
        for(i=0;i<corenumbers;i++)
            free(HWcore[i]);
    }
    free(HWcore);
}

void SetupCoreProperty(struct hardwaremodule * HWcore, int modulenumber, int Address)
{
    HWcore->coreID = modulenumber;
    HWcore->coreAddress = Address;
    HWcore->priority = MASTER;
}


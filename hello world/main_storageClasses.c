////const char* VERSION;//create a new var but will not use static file var

////void print(const char*);//same here

//const float Health(){return 2.5f;};
#include<stdio.h>
#include<stdbool.h>

bool HealthRegen()
{
    //const float h={Health()};
    static float Health_f={0.5f};
    Health_f+=0.5f;
    if(Health_f>=10)
    {
        return 1;
    }else
    {
        return 0;
    };

};

void increement()
{
    static int Score=0;
    Score+=20;
};

 struct staticStruct
{
    static char Name;
    static int age;
    static int ID;
};

int main(void)
{
    ////printf("%s",VERSION);
    // static int Score;
    // increement();
    // increement();
    // printf("Score : %d",Score);
    //while(HealthRegen()==0)printf("\nYou are not Alive....\n");
    printf("\nNow You are Alive ...\n");

   ///// print(VERSION);// can't use static function outside of the file where it dec

    return 0;
};

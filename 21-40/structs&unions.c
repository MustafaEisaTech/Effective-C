#include <stdio.h>

struct mechanics
{
    volatile int point_x;
    unsigned int point_y;
};

union Data
{
    int i;
    float f;
    char man[30];
    volatile ard;
};



int main(void){
    struct mechanics manim;
    manim.point_x = 19;
    manim.point_y = 13;

    union Data dtaa;
    dtaa.f = 13.9;
    dtaa.i = 17;
}

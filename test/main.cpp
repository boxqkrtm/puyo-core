#include <iostream>
#include "../core/core.h"

int main()
{
    auto t = bench_pop(5000000);
    printf("do 5000000, time: %d ms\n", t);
    while(true){
    }
    return 0;
};

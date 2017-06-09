//
//  main.c
//  robo69
//
//  Created by takumi on 2017/06/09.
//  Copyright © 2017年 takumi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year=1900;
    if(year % 4 == 0 && year % 100 != 0){
        printf("%dはうるう年です",year);
    }
    else if(year % 400 == 0){
        printf("%dはうるう年です",year);
    }
    else{
        printf("%dはうるう年ではありません",year);
    }
    return 0;
}

//
//  main.c
//  taskrobo3
//
//  Created by takumi on 2017/06/09.
//  Copyright © 2017年 takumi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=524,total=0,kosuu=0;
    for(int k=1;k<=a;k++){
        if(a%k==0){
            kosuu ++;
            total += k;
        }
    }
    printf("%dの役数の個数は%dで和は%dです",a,kosuu,total);
    return 0;
}

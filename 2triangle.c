//
//  main.c
//  robo69
//
//  Created by takumi on 2017/06/09.
//  Copyright © 2017年 takumi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a =5,b=4,c=3,d=0;
    printf("a:%d b:%d c:%d\n",a,b,c);
    if(a<b){
        d = a;
        a = b;
        b = a;
    }
    if(b<c){
        d = b;
        b = c;
        c = d;
    }
    if(a<b){
        d = a;
        a = b;
        b = a;
    }
    if(a==b&&b==c){
        printf("正三角形です");
    }
    else if(a==b){
        printf("二等辺三角形です");
    }
    else if(c==b){
        printf("二等辺三角形です");
    }
    else if(a==c){
        printf("二等辺三角形です");
    }
    else if(a*a == b*b + c*c){
        printf("直角三角形です");
    }
    else if(a*a > b*b + c*c){
        printf("鋭角三角形です");
    }
    else if(a*a < b*b + c*c){
        printf("鈍角三角形です");
    }
    return 0;
}

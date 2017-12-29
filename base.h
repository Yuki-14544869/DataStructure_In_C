//
// Created by Yuki on 2017/12/28 0028.
//

#ifndef DATASTRUCTURE_IN_C_BASE_H
#define DATASTRUCTURE_IN_C_BASE_H

#include <stdio.h>
#include <math.h>        // OVERFLOW
#include <malloc.h>      // malloc()
#include <process.h>    // exit()
#include <minmax.h>     // max()
#include <stdlib.h>     //exit()

//#define TRUE 1
//#define FALSE 0
#define OK 1
#define ERROR 0
//#define INFEASIBLE -1
// #define OVERFLOW -2     // 因为在math.h中已定义OVERFLOW的值为3,故去掉此行
typedef int Status;     // Status是函数的类型,其值是函数结果状态代码，如OK等
//typedef int Boolean;    // Boolean是布尔类型,其值是TRUE或FALSE

typedef int ElemType;   // 定义抽象数据类型 ElemType在本程序中为整形


#endif //DATASTRUCTURE_IN_C_BASE_H

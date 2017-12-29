//
// Created by Yuki on 2017/12/28 0028.
//

#ifndef DATASTRUCTURE_IN_C_TRIPLET_H
#define DATASTRUCTURE_IN_C_TRIPLET_H

#include "../../base.h"
typedef ElemType *Triplet;

Status InitTriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3);
// 操作结果:构造三元组T,依次置T的三个元素的初值为v1,v2和v3

Status DestroyTriplet(Triplet *T);
// 操作结果：三元组T被销毁

Status Get(Triplet T[], int i, ElemType *e);
// 初始条件：三元组T已存在，1≤i≤3。
// 操作结果：用e返回T的第i元的值

Status Put(Triplet *T, int i, ElemType e);
// 初始条件：三元组T已存在，1≤i≤3。
// 操作结果：改变T的第i元的值为e

Status IsAscending(Triplet T[]);
// 初始条件：三元组T已存在。
// 操作结果：如果T的三个元素按升序排列，返回1，否则返回0

Status IsDescending(Triplet T[]);
// 初始条件：三元组T已存在。
// 操作结果：如果T的三个元素按降序排列，返回1，否则返回0

void Max(Triplet T[], ElemType *e);
// 初始条件：三元组T已存在。
// 操作结果：用e返回T的三个元素中的最大值

void Min(Triplet T[], ElemType *e);
// 初始条件：三元组T已存在。
// 操作结果：用e返回T的三个元素中的最小值


#endif //DATASTRUCTURE_IN_C_TRIPLET_H

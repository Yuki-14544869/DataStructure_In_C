//
// Created by Yuki on 2017/12/30 0030.
//

#include "../../base.h"
#include "SqList.h"

Status InitList(SqList  *L) {
    // 操作结果：构造一个空的顺序线性表

    (*L).elem = (ElemType*)malloc(LIST_INT_SIZE * sizeof(ElemType));
    if(!(*L).elem)
        exit(OVERFLOW);         //存储分配失败
    (*L).length = 0;
    (*L).listSize = LIST_INT_SIZE;
    return OK;
}

Status DestoryList(SqList *L) {
    // 初始条件：顺序线性表L已存在。
    // 操作结果：销毁顺序线性表L

    free((void *) *L->elem);
    (*L).elem = NULL;
    (*L).length = 0;
    (*L).listSize = 0;
    return OK;
}


Status ClearList(SqList *L) {
    // 初始条件：顺序线性表L已存在。
    // 操作结果：将L重置为空表

    (*L).length = 0;
    return OK;
}


Status ListEmpty(SqList L[]) {
    // 初始条件：顺序线性表L已存在。
    // 操作结果：若L为空表，则返回TRUE，否则返回FALSE

    if(L->length == 0)
        return TRUE;
    else return FALSE;
}


Status ListLength(SqList L[]) {
    // 初始条件：顺序线性表L已存在。
    // 操作结果：返回L中数据元素个数

    return L->length;
}


Status GetElem(SqList L[], int i, ElemType *e) {
    // 初始条件：顺序线性表L已存在，1≤i≤ListLength(L)
    // 操作结果：用e返回L中第i个数据元素的值

    if(i<1 || i>ListLength(L))
        exit(ERROR);
    *e = *(L->elem+i-1);
    return OK;
}

Status
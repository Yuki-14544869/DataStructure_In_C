//
// Created by Yuki on 2017/12/30 0030.
//

#ifndef DATASTRUCTURE_IN_C_SQLIST_H
#define DATASTRUCTURE_IN_C_SQLIST_H

#include "../../base.h"
#define LIST_INT_SIZE 100        // 线性表存储空间的初始分配量
#define LISTINCREMENT 10         // 线性表存储空间的分配增量
typedef struct {
    ElemType *elem;         // 存储空间基址
    int length;             // 表当前长度
    int listSize;           // 表被分配的空间大小
}SqList;

Status InitList(SqList  *L);
// 操作结果：构造一个空的顺序线性表

Status DestoryList(SqList *L);
// 初始条件：顺序线性表L已存在。
// 操作结果：销毁顺序线性表L

Status ClearList(SqList *L);
// 初始条件：顺序线性表L已存在。
// 操作结果：将L重置为空表

Status ListEmpty(SqList L[]);
// 初始条件：顺序线性表L已存在。
// 操作结果：若L为空表，则返回TRUE，否则返回FALSE

Status ListLength(SqList L[]);
// 初始条件：顺序线性表L已存在。
// 操作结果：返回L中数据元素个数

Status GetElem(SqList L[], int i, ElemType *e);
// 初始条件：顺序线性表L已存在，1≤i≤ListLength(L)
// 操作结果：用e返回L中第i个数据元素的值

Status LocateElem(SqList L[], ElemType e, compare());
// 初始条件：顺序线性表L已存在，compare()是数据元素判定函数(满足为1,否则为0)
// 操作结果：返回L中第1个与e满足关系compare()的数据元素的位序。
//           若这样的数据元素不存在，则返回值为0。

Status PriorElem(Status L[], ElemType cur_e, ElemType *pre_e);
// 初始条件：顺序线性表L已存在 */
// 操作结果：若cur_e是L的数据元素，且不是第一个，则用pre_e返回它的前驱,
//           否则操作失败，pre_e无定义

Status NextElem(SqList L[],ElemType cur_e,ElemType *next_e);
// 初始条件：顺序线性表L已存在
// 操作结果：若cur_e是L的数据元素，且不是最后一个，则用next_e返回它的后继，
//           否则操作失败，next_e无定义

Status ListInsert(SqList *L,int i,ElemType e);
// 初始条件：顺序线性表L已存在，1≤i≤ListLength(L)+1
// 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1

Status ListDelete(SqList *L,int i,ElemType *e)
// 初始条件：顺序线性表L已存在，1≤i≤ListLength(L)
// 操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1

Status ListTraverse(SqList L[],void(*visit)(ElemType*));
// 初始条件：顺序线性表L已存在
// 操作结果：依次对L的每个数据元素调用函数vi()。一旦vi()失败，则操作失败
//           vi()的形参加'&'，表明可通过调用vi()改变元素的值

#endif //DATASTRUCTURE_IN_C_SQLIST_H

//
// Created by Yuki on 2017/12/28 0028.
//

#include "Triplet.h"

Status TripletTest() {

    Triplet T;
    ElemType m;

    Status i1 = InitTriplet(&T, 78, 89, 15);
    if(i1 == OK)
        printf("建立三元组成功，三个值为：%d %d %d\n", T[0], T[1], T[2]);

    Status i2 = Get((Triplet *)T, 2, &m);
    if (i2 == OK)
        printf("T的第2个值为：%d\n", m);

    Status i3 = Put(&T, 2, 6);
    if (i3 == OK)
        printf("将T的第2个值改为6后，T的三个值为：%d %d %d\n", T[0], T[1], T[2]);

    Status i4 = IsAscending((Triplet *) T);
    if(i4 == 1)
        printf("T 是升序的\n");
    else
        printf("T 不是升序的\n");

    Status i5 = IsDescending((Triplet *) T);
    if(i5 == 1)
        printf("T 是降序的\n");
    else
        printf("T 不是降序的\n");


    Max((Triplet *)T, &m);
    printf("T中的最大值为：%d\n", m);

    Min((Triplet *)T, &m);
    printf("T中的最小值为：%d\n", m);

    Status i8 = DestroyTriplet(&T); /* 函数也可以不带回返回值 */
    if(i8==OK && T==NULL)
        printf("销毁 T 成功\n");

    if(i1==OK && i2==OK && i3==OK &&i8==OK)
        return OK;
    else return ERROR;
}
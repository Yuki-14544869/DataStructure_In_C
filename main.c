#include <stdio.h>
#include "Chapter1/Triplet/TripletTest.cpp"

int main() {

    if(TripletTest() == OK )
        printf("Triplet 测试成功！\n");
    else printf("Triplet 测试异常！\n");

    return 0;
}
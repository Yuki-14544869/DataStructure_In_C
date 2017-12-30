cmake_minimum_required(VERSION 3.9)
project(DataStructure_In_C C)

set(CMAKE_C_STANDARD 99)

add_executable(DataStructure_In_C main.c base.h
        Chapter1/Triplet/Triplet.c Chapter1/Triplet/TripletTest.c Chapter1/Triplet/Triplet.h
        Chapter2/LinearList/SqList.c Chapter2/LinearList/SqList.h)
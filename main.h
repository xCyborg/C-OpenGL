//
//  main.h
//  CLT
//
//  Created by SamiBx on 15/6/2023.
//
#pragma once

int add(int a, int b)
{
    return a + b;
}
static void draw_cube(int width, int height) {
    
    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= width; j++) {
            if((i == 0 || i == height) || (j == 0 || j == width))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int factorial(int n)
{
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

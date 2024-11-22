/* This file is encoded in Big-5. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;

    // 无限循环用于持续获取用户输入
    while (1) {
        printf("Please input an integer: ");
        scanf(" %d", &input);
        
        // 如果输入为 0，结束程序
        if (input == 0) {
            printf("Go to next question\n");
            return 1;
        }

        // 检查输入是否在有效范围内
        if (input < 1 || input > 3999) {
            printf("Wrong input, input again!\n\n");
            continue;
        }

        printf("Roman numerical: ");
        
        // 处理千位数字
        switch (input / 1000) {
            case 3: printf("MMM"); break;
            case 2: printf("MM"); break;
            case 1: printf("M"); break;
        }
        input %= 1000;

        // 处理百位数字
        switch (input / 100) {
            case 9: printf("CM"); break;
            case 8: printf("DCCC"); break;
            case 7: printf("DCC"); break;
            case 6: printf("DC"); break;
            case 5: printf("D"); break;
            case 4: printf("CD"); break;
            case 3: printf("CCC"); break;
            case 2: printf("CC"); break;
            case 1: printf("C"); break;
        }
        input %= 100;

        // 处理十位数字
        switch (input / 10) {
            case 9: printf("XC"); break;
            case 8: printf("LXXX"); break;
            case 7: printf("LXX"); break;
            case 6: printf("LX"); break;
            case 5: printf("L"); break;
            case 4: printf("XL"); break;
            case 3: printf("XXX"); break;
            case 2: printf("XX"); break;
            case 1: printf("X"); break;
        }
        input %= 10;

        // 处理个位数字
        switch (input) {
            case 9: printf("IX"); break;
            case 8: printf("VIII"); break;
            case 7: printf("VII"); break;
            case 6: printf("VI"); break;
            case 5: printf("V"); break;
            case 4: printf("IV"); break;
            case 3: printf("III"); break;
            case 2: printf("II"); break;
            case 1: printf("I"); break;
        }

        printf("\n\n");
    }
}

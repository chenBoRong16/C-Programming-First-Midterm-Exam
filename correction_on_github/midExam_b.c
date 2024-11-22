#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int input; // 用于存储用户输入的整数

    while (1) {
        printf("Please input an integer: ");
        scanf(" %d", &input);
        
        // 如果输入为 0，结束程序
        if (input == 0) {
            printf("Go to next question\n");
            return 1;    
        }

        // 检查输入是否为正数
        if (input < 1) {
            printf("Wrong input, input again!\n\n");
            continue;    
        }

        // 将整数转换为字符串以便比较
        int temp = input;
        int length = 0;
        while (temp != 0) {
            temp /= 10;
            length++;
        }

        char *storage = (char *)malloc((length + 1) * sizeof(char));
        sprintf(storage, "%d", input);
        printf("%s", storage);
        
        // 检查是否为回文数
        int j, k, check = 1;
        for (j = 0, k = length - 1; j <= k; j++, k--) {
            if (storage[j] != storage[k]) {
                check = 0;
                break;
            }
        }

        if (check == 1) {
            printf("%d is a palindrome\n\n", input);
        } else {
            printf("%d is not a palindrome\n\n", input);
        }

        free(storage); // 释放动态分配的内存
    }
}

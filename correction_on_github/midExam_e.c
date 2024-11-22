#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 檢查輸入的字符串是否為有效的進制數字
int isValidInput(char *chStorage, int base) {
    int i = 0;

    // 驗證字符串中的每個字符是否符合給定進制的要求
    for (; i < strlen(chStorage); i++) {
        if (chStorage[i] >= 'A' && chStorage[i] <= ('A' - 1 + base - 10)) {
            // 字符在 'A' 到 (A + base - 10) 之間，屬於有效範圍
        } else if (chStorage[i] >= '0' && chStorage[i] <= ('0' + base - 1) && chStorage[i] <= '9') {
            // 字符在 '0' 到 (0 + base - 1) 之間，且為數字，屬於有效範圍
        } else {
            return 0; // 輸入不符合要求，返回 0 表示無效
        }
    }
    return 1; // 輸入有效
}

int main() {
    char chStorage[5]; // 存儲輸入的字符串，最多四個字符
    int base;          // 存儲進制的值

    while (1) {
        printf("Please input a pair of string and integer: ");
        
        // 讀取輸入的字符串和整數，格式為 (字符串, 整數)
        if (scanf(" (%4[^,],%d)", chStorage, &base) != 2) {
            printf("Wrong input, input again!\n\n");
            while (getchar() != '\n'); // 清空輸入緩衝區
            continue;
        }

        // 測試數據，例如：(1112,2) (9CE1,15) (FFF6,16) (0000,0)

        // 如果輸入為 "0000" 且 base 為 0，則結束程序
        if (strcmp("0000", chStorage) == 0 && base == 0) {
            printf("Go to next question\n");
            break;
        }

        // 檢查 base 是否符合要求，必須大於等於 2
        if (base < 2) {
            printf("Wrong input, input again!\n\n");
            continue;
        }

        // 將字符串轉換為對應進制的整數
        char *endptr;
        long int result = strtol(chStorage, &endptr, base);
        if (*endptr == '\0') {
            // 成功轉換，打印結果
            printf("%s in base %d is %ld.\n\n", chStorage, base, result);
        } else {
            // 轉換失敗，提示錯誤
            printf("Wrong input, input again!\n\n");
            continue;
        }
    }

    return 0;
}
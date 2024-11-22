#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 檢測是否為閏年
int isLeapYear(int year) {
    // 閏年條件：能被4整除且不能被100整除，或者能被400整除
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}

// 返回特定月份的天數
int daysInMonth(int year, int month) {
    if (month == 2) {
        // 2月視是否為閏年返回28或29天
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // 4月、6月、9月、11月為小月，返回30天
        return 30;
    } else {
        // 其他月份為大月，返回31天
        return 31;
    }
}

// 計算從公元1年到給定日期的天數
int daysSinceStart(int year, int month, int day) {
    int PassedDay = 0;
    // 計算從公元1年到前一年為止的總天數
    while (year > 1) {
        PassedDay += (isLeapYear(year)) ? 366 : 365;
        year--;
    }
    // 計算從1月到前一個月的天數
    while (month > 1) {
        PassedDay += daysInMonth(year, month - 1);
        month--;
    }
    // 加上本月已經過去的天數
    PassedDay += (day - 1);
    return PassedDay;
}

// 返回給定日期是星期幾
char* daysOfWeek(int year, int month, int day) {
    int PassedDay = daysSinceStart(year, month, day);
    // 根據總天數取模7，對應星期幾
    switch ((PassedDay + 1) % 7) {
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
    }
}

// 清空輸入緩衝區
void cleanInputBuffer() {
    char ch = 0;
    while (ch != '\n') {
        ch = getchar();
    }
}

int main() {
    int year, month, day;

    while (1) {
        printf("Please input a date (yyyy/mm/dd): ");
        // 檢查輸入格式是否正確
        if (scanf("%d/%d/%d", &year, &month, &day) != 3) {
            printf("The date is wrong, input again!\n\n");
            cleanInputBuffer();
            continue;
        }

        // 如果輸入為 0/0/0，結束程序
        if (year == 0 && month == 0 && day == 0) {
            printf("Go to next question\n");
            break;
        }

        // 檢查日期是否有效
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > daysInMonth(year, month)) {
            printf("The date is wrong, input again!\n\n");
            cleanInputBuffer();
            continue;
        }

        cleanInputBuffer();

        // 打印指定日期是星期幾
        printf("\n");
        printf("%04d/%02d/%02d is %s.\n", year, 1, 1, daysOfWeek(year, 1, 1));
        printf("%04d/%02d/%02d is %s.\n", year, month, 1, daysOfWeek(year, month, 1));
        printf("%04d/%02d/%02d is %s.\n", year, month, day, daysOfWeek(year, month, day));
        printf("\n");
    }
    return 0;
}
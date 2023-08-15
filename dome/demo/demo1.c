#include <stdio.h>
int main() {
    char x, y;   //定义变量
    printf("请输入任意一个字母：");  //输出提示语句，提醒输入
    x = getchar();  //输入字母，并且赋给x
    if (65 <= x && x <= 90) {  //大写字母ASCII码范围为：65A~90Z，判断为大写执行代码
        y = x + 32;  //A为65，a为97相差32，加32变为小写
        putchar(y);  //输出获得的小写字母
        putchar('\n');  //换行
    }
    else if (97 <= x && x <= 122) {  //小写字母ASCII码范围为：97a~122z，判断为小写执行代码
        y = x - 32;  //A为65，a为97相差32，减32变为大写
        putchar(y);  //输出获得的大写字母
        putchar('\n');  //换行
    }
    else {
        printf("输入有误！");  //输出提示语句，提醒输入错误
    }
    return 0;
}
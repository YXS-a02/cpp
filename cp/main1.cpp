#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    printf("程序名: %s\n", argv[0]);
    printf("参数数量: %d\n", argc - 1);
    
    for (int i = 1; i < argc; i++) {
        printf("参数 %d: %s\n", i, argv[i]);
    }
    return 0;
}

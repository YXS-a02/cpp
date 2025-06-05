#include <iostream>
#include <cstring>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void helppage() {  // 改为 void 函数
    printf("welcome to use this program\n");
    printf("this is help\n");
    printf("newing......\n");
    printf("plase wait\n");
}

int main(int argc, char** argv) {
    printf("HELLO\n");
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "about") == 0) {
            printf("3Y V.1.0\n");
        }
        if (strcmp(argv[i], "help") == 0) {
            helppage();
        }
        if (strcmp(argv[i], "hh") == 0) {
            PlaySound(TEXT("s.wav"), NULL, SND_FILENAME | SND_ASYNC);
        }
    }
    printf("---------------------------------------------------------------------\n");
    return 0;  // 明确返回
}

#define _CRT_SECURE_NO_WARNINGS  // [중요] 이 줄이 없으면 Visual Studio에서 에러가 남
#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm *t;
    timer = time(NULL); // 현재 시각(UTC) 가져오기
    // 한국 시간(KST)은 UTC보다 9시간 빠름
    timer += 9 * 60 * 60; 
    // 시간 구조체로 변환
    t = gmtime(&timer); 
    printf("%04d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    return 0;
}
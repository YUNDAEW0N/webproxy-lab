#include <stdio.h>

int main() {
    // 파일 포인터를 선언하고 파일을 쓰기 모드로 엽니다.
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // fprintf 함수를 사용하여 파일에 텍스트를 씁니다.
    fprintf(fp, "Hello, ");
    // 버퍼를 비워줍니다.
    // fflush(fp);
    // 추가적인 텍스트를 fprintf 함수를 사용하여 파일에 씁니다.
    fprintf(fp, "world!");
    printf("%f",fp);

    // 파일을 닫습니다.
    fclose(fp);

    printf("파일에 텍스트를 쓰는 작업을 완료했습니다.\n");

    return 0;
}

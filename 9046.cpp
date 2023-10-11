#include <stdio.h>
#include <string.h>

int main() {
    int t;
    int alp[30] = { 0 };
    char buffer;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        //alp 배열 0으로 초기화
        for (int j = 0; j < 30; j++) {
            alp[j] = 0;
        }

        //버퍼 비워주기
        scanf("%c",&buffer);

        //공백을 포함한 str 입력
        char str[300];
        scanf("%[^\n]",str);


        int j = 0;
        while (j < strlen(str)) {
            // printf("%d",str[j]);


            if (str[j] == ' ') j++;
            else {
                alp[str[j++] - 97]++;

            }
        }

        int max = 0;
        int index = 0;
        int frq = 0;
        for (int i = 0; i < 30; i++) {
            if (alp[i] > max) {
                max = alp[i];
                index = i;
                frq = 1;
            }
            else if (alp[i] == max) {
                frq++;
            }
        }

        if (frq > 1) printf("?\n");
        else printf("%c\n", 97 + index);

    }

    return 0;
}

//a = 97
//spacebar = 32
#include <stdio.h>

// 3 6 9 게임을 실행하는 함수
void play_369_game(int N) {
    for (int i = 1; i <= N; i++) {
        int num = i;
        int clap_count = 0;

        // 숫자에 3, 6, 9가 포함되어 있는지 확인
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                clap_count++;
            }
            num /= 10;
        }

        // 박수 횟수에 따라 출력 결정
        if (clap_count > 0) {
            for (int j = 0; j < clap_count; j++) {
                printf("-");
            }
        }
        else {
            printf("%d", i);
        }

        if (i != N) {
            printf(" "); // 공백 출력 (마지막 숫자에는 공백 없음)
        }
    }
    printf("\n");
}

int main() {
    // freopen("input.txt", "r", stdin);  // 파일에서 입력을 받을 경우 사용
    // freopen("output.txt", "w", stdout); // 결과를 파일에 출력할 경우 사용

    int N;
    scanf_s("%d", &N);

    if (N < 10 || N > 1000) {
        return 1; // 잘못된 입력 범위 처리
    }

    play_369_game(N);

    return 0;
}

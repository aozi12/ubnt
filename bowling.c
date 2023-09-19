#include <stdio.h>

#define MAX_FRAMES 10

int main() {
    int frames[MAX_FRAMES];
    int score = 0;

    printf("볼링 게임 점수 입력(0~10): \n");

    // 각 프레임의 투구 점수 입력받기
    for (int i = 0; i < MAX_FRAMES; i++) {
        printf("프레임 %d, 투구 1 점수: ", i + 1);
        scanf("%d", &frames[i]);

        if (frames[i] == 10) {  // 스트라이크 처리
            score += 10;
            continue;
        }

        printf("프레임 %d, 투구 2 점수: ", i + 1);
        scanf("%d", &frames[i]);
    }

    // 점수 계산
    for (int i = 0; i < MAX_FRAMES; i++) {
        score += frames[i];

        if (frames[i] == 10) {  // 스트라이크 보너스 처리
            score += frames[i + 1] + frames[i + 2];
        } else if (frames[i] + frames[i + 1] == 10) {  // 스페어 보너스 처리
            score += frames[i + 2];
        }
    }

    printf("총 점수: %d\n", score);

    return 0;
}

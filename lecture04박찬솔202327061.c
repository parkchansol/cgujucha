#include <stdio.h>

int main() {
    int hero;
    int enemy = 30;

    printf("주인공의 공격력을 입력하세요 : ");
    scanf("%d", &hero);
    printf("주인공은 공격력이 %d입니다.\n\n", hero);

    if (hero > enemy) {
        hero = enemy; 
    }

    enemy -= hero;
    printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n", hero);
    printf("적의 잔여 HP : %d\n\n", enemy);

    if (enemy <= 0) {
        printf("적을 물리쳤습니다!\n");
        printf("Happy End");
    } else {
        printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
        printf("Game Over");
    }

    return 0;
}
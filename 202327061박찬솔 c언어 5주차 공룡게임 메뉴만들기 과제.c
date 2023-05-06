#include <stdio.h>

int title_screen() {
    printf("################################################\n");
    printf("##                                            ##\n");
    printf("##                                            ##\n");
    printf("##                   Dino RUN                 ##\n");
    printf("##                    -V0.1-                  ##\n");
    printf("##                                            ##\n");
    printf("##                                            ##\n");
    printf("##                                            ##\n");
    printf("##            1.GAME START                    ##\n");
    printf("##            2.How TO Play                   ##\n");
    printf("##            3.EXIT                          ##\n");
    printf("##                                            ##\n");
    printf("################################################\n");
    return 0;
}

int introduce_screen() {
    printf("         -게임설명-        .\n");
    printf("이 게임은 전체 이용가 입니다.\n");
    printf("공룡을 조작하여 게임을 하십시오.\n");
    printf("점프를 하여 장애물을 피하십시오.\n");
    return 0;
}

int main() {
    int game_state = 0; // 게임 상태 변수, 0 = 메뉴, 1 = 게임 실행 중
    int game_running = 1; 
    int screen = 1; // 화면 상태 변수, 1 = 타이틀 스크린, 0 = 게임 설명 스크린
    char key_input = 0; // 사용자 입력을 저장할 변수

    while (game_running) { //계속 반복하게 함
        if (game_state == 0) { // 메뉴 상태일 때
            if (screen == 1) { //스크린 변수가 1인 상태일때 타이틀 스크린 표시 그리고 0으로 바꿈
                title_screen(); 
                screen = 0;
            }

            scanf(" %c", &key_input);

            if (key_input == '2') {  // 2을 입력하면 print_title_screen() 함수 호출
                title_screen();
            }
            else if(key_input == '3') { // 게임종료
                break;
            }
            else if(key_input == '1'){ //구현 아직 아직 안됨
                printf("구현안됨");
                break;
            }
        }
                introduce_screen(); //2번을 입력하면 뜨는거
                printf("Return to menu?\n");
                printf("1. Yes\n");
                printf("2. No\n");
                
            

            scanf(" %c", &key_input);

            if (key_input == '1') {
                game_state = 0;
                screen = 1;  // yes를 누르면 메뉴화면 출력
            }
            else if (key_input == '2') {
                introduce_screen();
                printf("Return to menu?\n");
                printf("1. Yes\n");
                printf("2. No\n");
                screen = 0; //다시 게임설명 출력후 리턴 투 메뉴할꺼냐고 물어봄
            }               //이때 스크린 값은 0 
                            //스크린 변수 값 0=게임설명화면 1=메뉴 화면
        
    }

    return 0;
}
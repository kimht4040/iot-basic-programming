#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//argc :인자개수, argv : 인자 문자열의 배열
//실행하면 실행파일 이름 뒤에 글자를 넣으면 인자로 들어감 스페이스바로 구별 
int main(int argc, char** argv) {


	int i;
	if (argc < 2) {
		printf("명령어가 필요함\n");
		printf("사용법: mygit <command> [options]\n");
	}
	if (strcmp(argv[1], "init") == 0) {
		printf("깃저장소 초기화!");
	}
	else if (strcmp(argv[1], "commit") == 0) {
		if (argc >= 4 && strcmp(argv[2], "-m")) {
			printf("커밋 메시지: '%s'\n", argv[3]);
			printf("완료\n");
		}
		else
			printf("오류\n");

	}
	else
		printf("알 수 없는 명령 : '%s' \n", argv[1]);


	return 0;
}
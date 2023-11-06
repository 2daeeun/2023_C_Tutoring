#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int choice;
	while (1)
	{
		system("cls"); //콘솔화면 지우기 (초기화)
		printf("\n\n  *** 단일 연결 리스트 ***\n\n");
		printf("=====================================\n");
		printf("1. 노드 삽입\n");
		printf("2. 노드 삭제 (free)\n");
		printf("3. 단일 연결 리스트 출력 (노드 순회)\n");
		printf("0. 프로그램 종료\n");
		printf("=====================================\n");
		printf("\n메뉴 선택 : ");

		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			exit(0); //프로그램 강제 종료
		}
		//switch문을 빠져 나오면 일시 대기 시킨다.
		printf("\n\n\t\t");
		system("pause"); //일시 대기
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
	int a, b;
	int game = 1;
	int input = 0;
	int ingame = 0;
	while (game == 1)
	{
		system("cls");
		printf("1. gamestart\n");
		printf("2. exit\n");
		scanf_s("%d", &input);

		if (input == 3)
		{
			system("cls");
			printf("게임이 시작되었습니다.\n");
			printf("번호를 입력하세요.\n");
			printf("1. 가위바위보\n");
			printf("2. 묵찌빠\n");
			printf("입력 : ");
			scanf_s("%d", &ingame);

			if (ingame == 4)
			{
				system("cls");
				printf("가위바위보 게임에 오신 것을 환영합니다.\n");
				printf("가위바위보 인공지능봇을 이겨보세요.\n");
				printf("당신이 이긴다면 이 게임에서 탈출할 수 있습니다.\n");
				printf("가위(0), 바위(1), 보(2) 중에 하나를 고르세요.\n");
				scanf_s("%d", &a, &ingame);

				srand(time(NULL));
				b = rand() % 3;

				printf("도전자(나) %d\n", a);
				printf("인공지능봇 %d\n", b);
				//도전자(나)가 가위(0)를 낸 경우
				if (a = 0, b = 0)
					printf("무승부");
				else if (a = 0, b = 1)
					printf("인공지능봇의 승리");
				else if (a = 0, b = 2)
					printf("도전자(나)의 승리");
				//도전자(나)가 바위(1)를 낸 경우
				else if (a = 1, b == 1)
					printf("무승부");
				else if (a = 1, b == 2)
					printf("인공지능봇의 승리");
				else if (a = 1, b = 0)
					printf("도전자(나)의 승리");
				//도전자(나)가 보(2)를 낸 경우
				else if (a = 2, b == 2)
					printf("무승부");
				else if (a = 2, b == 0)
					printf("인공지능봇의 승리");
				else
					printf("도전자(나)의 승리");
			}
		}
			if (ingame == 2)
			{
				system("cls");
				printf("아직 준비중입니다.");
				scanf("%d", &ingame);
			}
	}

	return 0;
}
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
			printf("������ ���۵Ǿ����ϴ�.\n");
			printf("��ȣ�� �Է��ϼ���.\n");
			printf("1. ����������\n");
			printf("2. �����\n");
			printf("�Է� : ");
			scanf_s("%d", &ingame);

			if (ingame == 4)
			{
				system("cls");
				printf("���������� ���ӿ� ���� ���� ȯ���մϴ�.\n");
				printf("���������� �ΰ����ɺ��� �̰ܺ�����.\n");
				printf("����� �̱�ٸ� �� ���ӿ��� Ż���� �� �ֽ��ϴ�.\n");
				printf("����(0), ����(1), ��(2) �߿� �ϳ��� ������.\n");
				scanf_s("%d", &a, &ingame);

				srand(time(NULL));
				b = rand() % 3;

				printf("������(��) %d\n", a);
				printf("�ΰ����ɺ� %d\n", b);
				//������(��)�� ����(0)�� �� ���
				if (a = 0, b = 0)
					printf("���º�");
				else if (a = 0, b = 1)
					printf("�ΰ����ɺ��� �¸�");
				else if (a = 0, b = 2)
					printf("������(��)�� �¸�");
				//������(��)�� ����(1)�� �� ���
				else if (a = 1, b == 1)
					printf("���º�");
				else if (a = 1, b == 2)
					printf("�ΰ����ɺ��� �¸�");
				else if (a = 1, b = 0)
					printf("������(��)�� �¸�");
				//������(��)�� ��(2)�� �� ���
				else if (a = 2, b == 2)
					printf("���º�");
				else if (a = 2, b == 0)
					printf("�ΰ����ɺ��� �¸�");
				else
					printf("������(��)�� �¸�");
			}
		}
			if (ingame == 2)
			{
				system("cls");
				printf("���� �غ����Դϴ�.");
				scanf("%d", &ingame);
			}
	}

	return 0;
}
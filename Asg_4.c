#include <stdio.h>

int main()
{
	int presentTime;
	char batteryMarket;
	double k;
	
	printf("����, ������ �� ����?\n");
	scanf("%d", &presentTime);

	printf("\n   �ȳ��Ͻʴϱ�. ������ �ҽ� �˷��帮�� ABC�� %d�� �����Դϴ�.\n", presentTime);
	printf("   ������ ���͸� ������ �۷ι� ������ ���� ġ�������� �ֽ��ϴ�.\n\n");
	
	printf("������ ���͸� �����̸� ��� ���ϴ°ɱ�? L��? S��? \n");
	scanf("%c", &batteryMarket);

	printf("   T��� F�� �� �ϼ��� ��ü���� ���͸��� ���� �����ϰڴٰ� �����Կ� ����\n");
	printf("   �׵��� ������ �����ؿ� %c�� ���� ���� ���͸� ����������� ��¦ �����ϰ� �ֽ��ϴ�.\n", batteryMarket);

	printf("���� ���� �Ϲ�ȭ�� �ð��� ���͸��� ����� ��Ƭ�� ���ؼ� �����.");
	printf("�ڿ����� �߰ߵǴ� ��Ƭ�� 7.5%%�� �߼��ڸ� 3�� ������ �ְ� ");
	
}
#include <stdio.h>

int main()
{
	int presentTime;
	char batteryMarket;
	double k;
	
	printf("흐음, 지금이 몇 시지?\n");
	scanf("%d", &presentTime);

	printf("\n   안녕하십니까. 오늘의 소식 알려드리는 ABC의 %d시 뉴스입니다.\n", presentTime);
	printf("   전기차 배터리 시장의 글로벌 경쟁은 날로 치열해지고 있습니다.\n\n");
	
	printf("전기차 배터리 시장이면 어디를 말하는걸까? L사? S사? \n");
	scanf("%c", &batteryMarket);

	printf("   T사와 F사 등 완성차 업체까지 배터리를 직접 생산하겠다고 선언함에 따라\n");
	printf("   그동안 시장을 지배해온 %c와 같은 기존 배터리 전문기업들은 바짝 긴장하고 있습니다.\n", batteryMarket);

	printf("아하 오늘 일반화학 시간에 배터리의 요소인 리튬에 대해서 배웠지.");
	printf("자연에서 발견되는 리튬의 7.5%%가 중성자를 3개 가지고 있고 ");
	
}
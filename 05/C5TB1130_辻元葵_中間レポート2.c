#include <stdio.h>

int main()
{
	int i, order;
	int menu[8];
    int cost[8] = {650, 680, 720, 840, 920, 980, 1080, 1280};
    int total[8] = {0,0,0,0,0,0,0,0};
    int goukei = 0;
    int totalNum = 0;

	for (i = 0; i < 8; i++) menu[i] = 0;
	
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &order);
		if ( order >=0 && order <= 7)
		{
			++menu[order];
		}
	}
    for (i = 0; i < 8; i++)
    {
        total[i] = cost[i]*menu[i];
        goukei = goukei + total[i];
        totalNum = totalNum + menu[i];
    }
	for (i = 0; i < 8; i++)
	{
		printf("menu %d: %d %d %d\n", i, cost[i], menu[i], total[i]);
	}
    printf("goukei: %d    %d\n", totalNum, goukei);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int randomNum=rand()%101;
	int times=1;
	int begin=0;
	int end=100;
	while(1)
	{
		printf("猜数字，数字的范围是：%d-%d\n",begin,end);
		int value=-1;
		if(!scanf("%d",&value))
		{
			while(getchar()!='\n');
			continue;
		}
		
		if(value<begin||value>end)
		{
			printf("无效输入，请重新输入\n");
			continue;
			//TODO
		}
		times++;
		if (value==randomNum)
		{
			printf("猜对了，一共猜了%d次\n",times);
			getchar();
			break;
			//TODO
		}
	    else if(value<randomNum)
		{
			begin=value+1;
			printf("猜错了，数字的范围是：%d-%d\n",begin,end);
			//TODO
		}
	    else if(value>randomNum)
	    {
			end=value-1;
			printf("猜错了，数字的范围是：%d-%d\n",begin,end);
		}
		//TODO
	}	
	return 0;
}

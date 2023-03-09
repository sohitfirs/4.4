/* https://github.com/sohitfirs/4.4.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int mas[100];
	int n;
	
	printf("kol el ");
	scanf("%i", &n);
	
	for (int i=0; i<n; i++)
	{
		scanf("%i", &mas[i]);
	}
	
	int min, max;
	min=max=mas[0];
	
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		if(mas[i]>max)
		{
			max=mas[i];
		}
		
		if(mas[i]<min)
		{
			min=mas[i];
		}
		
		sum+=mas[i];
	}
	
	float sr=(float)sum/(float)n;
	
	printf("min=%i max=%i sum=%i sr=%f\n", min, max, sum, sr);
	system("pause");
}

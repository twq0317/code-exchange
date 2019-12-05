// CodeExchange.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <assert.h>

int main()
{
	double col1[10];
	double col2[10];
	double col3[10];
	double col4[10];
	double col5[10];
	FILE* fp = fopen("data.txt","r");
	assert(fp != NULL);
	for(int i = 0; i < 4; i++)
	{
		fscanf(fp, "%lf", &col1[i]);
		fscanf(fp, "%lf", &col2[i]);
		fscanf(fp, "%lf", &col3[i]);
		fscanf(fp, "%lf", &col4[i]);
		fscanf(fp, "%lf", &col5[i]);
	}
	fclose(fp);

	for (int i = 0; i < 4; i++)
	{
		printf("%lf ", col1[i]);
		printf("%lf ", col2[i]);
		printf("%lf ", col3[i]);
		printf("%lf ", col4[i]);
		printf("%lf ", col5[i]);
		printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[12][10] = { "black","brown","red","orange", "yellow", "green", "blue", "violet", "grey", "white" };
	int value[12] = { 0,1,2,3,4,5,6,7,8,9 };
	int mtp[12] = { 1,10,100,1000,10000,100000,1000000,10000000, 100000000, 1000000000 };
	char tmp1[12];
	char tmp2[12];
	char tmp3[12];
	unsigned long long int sum = 0;

	scanf("%s", tmp1);
	scanf("%s", tmp2);
	scanf("%s", tmp3);

	if (!strcmp(tmp1, str[0])) {
		sum = value[0] * 10;
	}
	else if (!strcmp(tmp1, str[1])) {
		sum = value[1] * 10;
	}
	else if (!strcmp(tmp1, str[2])) {
		sum = value[2] * 10;
	}
	else if (!strcmp(tmp1, str[3])) {
		sum = value[3] * 10;
	}
	else if (!strcmp(tmp1, str[4])) {
		sum = value[4] * 10;
	}
	else if (!strcmp(tmp1, str[5])) {
		sum = value[5] * 10;
	}
	else if (!strcmp(tmp1, str[6])) {
		sum = value[6] * 10;
	}
	else if (!strcmp(tmp1, str[7])) {
		sum = value[7] * 10;
	}
	else if (!strcmp(tmp1, str[8])) {
		sum = value[8] * 10;
	}
	else if (!strcmp(tmp1, str[9])) {
		sum = value[9] * 10;
	}


	if (!strcmp(tmp2, str[0])) {
		sum += value[0];
	}
	else if (!strcmp(tmp2, str[1])) {
		sum += value[1];
	}
	else if (!strcmp(tmp2, str[2])) {
		sum += value[2];
	}
	else if (!strcmp(tmp2, str[3])) {
		sum += value[3];
	}
	else if (!strcmp(tmp2, str[4])) {
		sum += value[4];
	}
	else if (!strcmp(tmp2, str[5])) {
		sum += value[5];
	}
	else if (!strcmp(tmp2, str[6])) {
		sum += value[6];
	}
	else if (!strcmp(tmp2, str[7])) {
		sum += value[7];
	}
	else if (!strcmp(tmp2, str[8])) {
		sum += value[8];
	}
	else if (!strcmp(tmp2, str[9])) {
		sum += value[9];
	}

	if (!strcmp(tmp3, str[0])) {
		sum *= mtp[0];
	}
	else if (!strcmp(tmp3, str[1])) {
		sum *= mtp[1];
	}
	else if (!strcmp(tmp3, str[2])) {
		sum *= mtp[2];
	}
	else if (!strcmp(tmp3, str[3])) {
		sum *= mtp[3];
	}
	else if (!strcmp(tmp3, str[4])) {
		sum *= mtp[4];
	}
	else if (!strcmp(tmp3, str[5])) {
		sum *= mtp[5];
	}
	else if (!strcmp(tmp3, str[6])) {
		sum *= mtp[6];
	}
	else if (!strcmp(tmp3, str[7])) {
		sum *= mtp[7];
	}
	else if (!strcmp(tmp3, str[8])) {
		sum *= mtp[8];
	}
	else if (!strcmp(tmp3, str[9])) {
		sum *= mtp[9];
	}

	printf("%lld", sum);

	return 0;
}
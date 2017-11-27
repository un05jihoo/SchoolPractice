#include <stdio.h>
int main()
{
	int a,b; // 입력값
	int i,k; // 배열의 주소
	int m[9][9];
	
	for(i=0;i<9;i++)
	{
		for(k=0; k<9; k++)
			m[i][k] = i*k; //2중 반복으로 구구단 값 저장
	}

	scanf("%d %d",&a,&b);
	printf("%d X %d = %d\n",a,b,m[a][b]);
}

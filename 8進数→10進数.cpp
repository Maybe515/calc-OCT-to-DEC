#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    
    int input;
	char re;
	
	printf("8�i����10�i�� �ϊ�\n");
 
 	do{ //�ē��͂̏���
	
    printf("8�i�� 0�`7����͂��Ă�������\n");
    fflush(stdout);
    scanf("%o", &input);
 
    printf("8�i���u%o�v�́A10�i���u%d�v�ł�\n", input, input);
	
	printf("�ē��͂���ꍇ�́y1�z�����:");	
	scanf("%d",&re);
	printf("\n");
 	} while(re==1);	//1�őS�̃v���O�����̍ē��͂����s
	
	printf("Finished");
    return 0;
}
#include<stdio.h> 

int main() {
char str[5][50], temp[50];

printf("����5���ַ���: ");

//��ȡ�ַ�������

for (int i = 0; i 

fgets(str[i], sizeof(str[i]), stdin);

}

//���ֵ�˳��洢�ַ���

for (int i = 0; i 

for (int j = i + 1; j 

//�����ַ���(������ǲ����ֵ�˳����)

if (strcmp(str[i], str[j]) > 0) {
strcpy(temp, str[i]);

strcpy(str[i], str[j]);

strcpy(str[j], temp);

}

}

}

printf("\n�����ֵ��˳��: \n");

for (int i = 0; i 

fputs(str[i], stdout);

}

return 0;

}

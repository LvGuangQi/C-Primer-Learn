#include<stdio.h> 

int main() {
char str[5][50], temp[50];

printf("ÊäÈë5¸ö×Ö·û´®: ");

//»ñÈ¡×Ö·û´®ÊäÈë

for (int i = 0; i 

fgets(str[i], sizeof(str[i]), stdin);

}

//°´×ÖµäË³Ğò´æ´¢×Ö·û´®

for (int i = 0; i 

for (int j = i + 1; j 

//½»»»×Ö·û´®(Èç¹ûËüÃÇ²»ÔÚ×ÖµäË³ĞòÖĞ)

if (strcmp(str[i], str[j]) > 0) {
strcpy(temp, str[i]);

strcpy(str[i], str[j]);

strcpy(str[j], temp);

}

}

}

printf("\n°´ÕÕ×ÖµäµÄË³Ğò: \n");

for (int i = 0; i 

fputs(str[i], stdout);

}

return 0;

}

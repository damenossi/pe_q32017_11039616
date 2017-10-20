#include <stdio.h>
#include <stdlib.h>

int tamanho (char * c) {
	int i = 0;
	char current = c[0];

	while (current) {
		i++;
		current = c[i];
	}
	
	return i;
}

char * concat (char * s1, char * s2) {
	char * s3;

	int t_s1 = tamanho(s1);
	int t_s2 = tamanho(s2);
	int newSize = t_s1 + t_s2;
	s3 = malloc((t_s1 + t_s2) * sizeof(char));

	if (s3 == NULL ) return s3;

	for (int i =0; i<t_s1; i++) {
		s3[i] = s1[i];
	}
	
	for (int i = t_s1; i < newSize; i++) {	
		s3[i] = s2[i-t_s1];
	}
	
	 		
	return s3;
}

int main() {
	char * s1;
	char * s2;
	char * s3;
	
	s1 = malloc(256 * sizeof(char));
	s2 = malloc(256 * sizeof(char));	
	s3 = malloc(256 * sizeof(char));
	
	if (s1 == NULL || s2 == NULL || s3 == NULL) {
		printf("memoria insuficiente\n");
		
		return -1;
	}
	
	scanf("%s %s", s1, s2);
	
	s3 = concat(s1, s2);
	
	printf("%s\n", s3);
	
	free(s1);
	free(s2);
	free(s3);

	return 0;
	
}

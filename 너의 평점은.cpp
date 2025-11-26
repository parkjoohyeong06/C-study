#include <stdio.h>
#include <string.h>

double inspect(char *g){
    if (!strcmp(g, "A+")) return 4.5;
    if (!strcmp(g, "A0")) return 4.0;
    if (!strcmp(g, "B+")) return 3.5;
    if (!strcmp(g, "B0")) return 3.0;
    if (!strcmp(g, "C+")) return 2.5;
    if (!strcmp(g, "C0")) return 2.0;
    if (!strcmp(g, "D+")) return 1.5;
    if (!strcmp(g, "D0")) return 1.0;
    if (!strcmp(g, "F"))  return 0.0;
    return -1;  // P일 때 return하지 않음. 그래서 return 0이 아니다 
}

int main(){
	char sub[51], grade[3];
	double grade_double[21];
	double sum[21] = {0}, final_sum = 0, tot, gradeSum = 0;  // sum = 과목별 점수, tot=전공평점
	for(int i=0;i<20;i++){
		scanf("%s %lf %s", sub, &grade_double[i], grade);
		if(inspect(grade) != -1){
			sum[i] = grade_double[i] * inspect(grade); 
			final_sum += sum[i];
			gradeSum += grade_double[i];
		}
	}
	tot = final_sum / gradeSum;
	printf("%.6f", tot);
	return 0;
}

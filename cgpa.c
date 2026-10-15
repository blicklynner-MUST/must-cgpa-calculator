#include <stdio.h>

float marksToGPA(int marks){
    if (marks>=80) return 5.0;
    else if (marks>=75) return 4.5;
    else if (marks>=70) return 4.0;
    else if (marks>=65) return 3.5;
    else if (marks>=60) return 3.0;
    else if (marks>=55) return 2.5;
    else if (marks>=50) return 2.0;
    else return 0.0;
}

int main(){
    int numcourse, marks, cu;
    char coursename[30];
    float totalCU=0, weightedTotal=0, gpa, cgpa;

    printf("MUST BIOMEDICAL CGPA CALCULATOR\n");
    printf("How many courses? ");
    scanf("%d",&numcourse);

    for(int i=1;i<=numcourse;i++){
        printf("\nCourse %d code: ",i);
        scanf("%s",coursename);
        printf("Marks for %s: ",coursename);
        scanf("%d",&marks);
        printf("Credit Units: ");
        scanf("%d",&cu);
        gpa = marksToGPA(marks);
        printf("GPA: %.1f\n",gpa);
        weightedTotal += gpa * cu;
        totalCU += cu;
    }

    cgpa = weightedTotal/totalCU;
    printf("\n----------------\n");
    printf("CGPA: %.2f\n",cgpa);
    if(cgpa>=4.4) printf("FIRST CLASS\n");
    else if(cgpa>=3.6) printf("SECOND UPPER\n");
    else if(cgpa>=2.8) printf("SECOND LOWER\n");
    else printf("PASS\n");
    return 0;
}

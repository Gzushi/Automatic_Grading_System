#include<stdio.h>
#include<conio.h>

int main() {

    //Request Input for Grade Range, & Student Status
    int gradeRange;
    printf("\nTip: If the Student is IC put 101, if W put 110, if D put 111 \nInput Grade Range: \n");
    scanf("%d", &gradeRange);

    //Provide Grade Point, Letter Grade, & Remarks
    if ( gradeRange >= 0 && gradeRange < 50) {
        printf("Grade Point: 5.00 \n");
        printf("Letter Grade: F \n");
        printf("Remarks: FAILED \n");
    } else if ( gradeRange >= 50 && gradeRange <= 56) {
        printf("Grade Point: 3.00 \n");
        printf("Letter Grade: C- \n");
        printf("Remarks: FAIR \n");
    } else if (gradeRange >= 57 && gradeRange <= 62) {
        printf("Grade Point: 2.75 \n");
        printf("Letter Grade: C \n");
        printf("Remarks: FAIR \n");
    } else if (gradeRange >= 63 && gradeRange <= 68) {
        printf("Grade Point: 2.50 \n");
        printf("Letter Grade: C+ \n");
        printf("Remarks: FAIR \n");
    } else if (gradeRange >= 69 && gradeRange <= 74) {
        printf("Grade Point: 2.25 \n");
        printf("Letter Grade: B- \n");
        printf("Remarks: GOOD \n");
    } else if (gradeRange >= 75 && gradeRange <= 80) {
        printf("Grade Point: 2.00 \n");
        printf("Letter Grade: B \n");
        printf("Remarks: GOOD \n");
    } else if (gradeRange >= 81 && gradeRange <= 85) {
        printf("Grade Point: 1.75 \n");
        printf("Letter Grade: B+ \n");
        printf("Remarks: GOOD \n");
    } else if (gradeRange >= 86 && gradeRange <= 90) {
        printf("Grade Point: 1.50 \n");
        printf("Letter Grade: A- \n");
        printf("Remarks: VERY GOOD \n");
    } else if (gradeRange >= 91 && gradeRange <= 95) {
        printf("Grade Point: 1.25 \n");
        printf("Letter Grade: A \n");
        printf("Remarks: VERY GOOD \n");
    } else if (gradeRange >= 96 && gradeRange <= 100) {
        printf("Grade Point: 1.00 \n");
        printf("Letter Grade: A+ \n");
        printf("Remarks: EXCELLENT \n");
    } else if (gradeRange == 101) {
        printf("Grade Point: TBD \n");
        printf("Letter Grade: TBD \n");
        printf("Remarks: INCOMPLETE \n");
    } else if (gradeRange == 110) {
        printf("Grade Point: N/A \n");
        printf("Letter Grade: N/A \n");
        printf("Remarks: WITHDRAWN \n");
    } else if (gradeRange == 111) {
        printf("Grade Point: N/A \n");
        printf("Letter Grade: N/A \n");
        printf("Remarks: DROPPED \n");
    } else {
        printf("INVALID");
    }
    
    return main();
} 
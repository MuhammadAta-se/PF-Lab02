#include<stdio.h>
int main(){
    double pfMarks = 91.5;
    double calculusMarks = 82.5;
    double physicsMarks = 85.0;
    int pfCredit = 3;
    int calculusCredit = 3;
    int physicsCredit = 2;
    double weightedScore;
    int totalCredits;
    double weightedAverage;
    weightedScore = (pfMarks * pfCredit)+(calculusMarks * calculusCredit) + (physicsMarks * physicsCredit);
    totalCredits = pfCredit + calculusCredit + physicsCredit ;
    weightedAverage = weightedScore / totalCredits ;
    printf("========SEMESTER RESULT=========");
    printf("Course Marks\n ");
    printf("--------------------------------");
    printf("Programming Fund   3  %.2f\n",pfMarks);
    printf("Calculus           3  %.2f\n",calculusMarks);
    printf("Applied Physics    2  %.2f\n",physicsMarks);
    printf("--------------------------------");
    printf("Total Credits : %d  Weighted Average : %.2f%%\n",totalCredits , weightedAverage);
    printf("================================");  
    return 0;}  
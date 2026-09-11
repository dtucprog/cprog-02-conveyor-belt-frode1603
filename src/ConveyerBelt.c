#include <stdio.h>

int main() {
    int MOTOR_CAPACITY = 12;
    int motorCount, packageCount, currentPackageWeight, totalPackageWeight;

    printf("How many motors are carrying the packages? \n");
    scanf("%d", &motorCount);
    printf("%d\n", motorCount);
    printf("How many packages are we carrying?\n");
    scanf("%d", &packageCount);
    while (packageCount > 0){
        printf("What does the current package weight?\n");
        scanf("%d", &currentPackageWeight);
        totalPackageWeight += currentPackageWeight;
        packageCount -= 1;
    }
    printf("Lets find out if the motors are capable of carrying the packages\n");

    if (totalPackageWeight < MOTOR_CAPACITY * motorCount){
        printf("Yes! The conveyer belt can carry the packages.");
    }
    else{
        printf("No. The conveyer belt cannot carry the packages.");
    }

}
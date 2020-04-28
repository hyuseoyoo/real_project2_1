#include "calculator.h"

void addition(){
    int answer = a + b;
    cout << "= " << answer << endl;
}

void subtraction(){
    int answer = a - b;
    cout << "= " << answer << endl;
}

void multiplication(){
    int answer = a * b;
    printf("%d * %d = %d\n", a, b, answer);
}

void division(){
    float answer = (float)(a) / (float)(b);
    printf("%d / %d = %f\n", a, b, answer);
}

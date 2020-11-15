#include <stdio.h>

int main (){
    char x[]={0,0,1,1};
    char y[]={0,1,0,1};
    for (int i=0; i<=3; i++){
        printf("%d%s%d%s%d%s", x[i], "^", y[i], " = ", x[i] && y[1], "  ");
        printf("%d%s%d%s%d%s", x[i], "v", y[i], " = ", x[i] || y[1], "  ");
        printf("%d%s%d%s%d%s\n", x[i], " XOR ", y[i], " = ", x[i] ^ y[1], "  ");
    }
    return 0;
}

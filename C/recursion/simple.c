#include <stdio.h>
void up_and_down(int a){
    printf("Level %d location: %p\n",a, &a);
    if(a<4)
        up_and_down(a+1);
    printf("Level %d location: %p\n",a, &a);
}

int main(){
    up_and_down(1);

    return 0;
}

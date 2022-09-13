#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value){
    printf("큐에 %d 추가\n",value);
     queue[++rear] = value;
}
int dequeue(){
   printf("큐에 값 %d 삭제 \n",queue[front+1]);
    return queue[++front];
}
int main()
{
    printf("배열로 만드는 큐\n");
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();

    return 0;
}

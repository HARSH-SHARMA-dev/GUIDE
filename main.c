#include <stdio.h>
#include <stdlib.h>



struct node{
    int data;
    struct node **values;
};

void dfs(struct node *head) {
  if(head == NULL) return;
  printf("%d\n", head->data);
  for(int i = 0; i < 2; i++){
    dfs(head->values[i]);
  }
}


int main(int argc, char *argv[]){
  struct node *head = malloc(sizeof(struct node));
  struct node *one = malloc(sizeof(struct node));
  struct node *two = malloc(sizeof(struct node));

  head->data = 1;
  one->data = 2;
  two->data = 3;
  head->values = malloc(sizeof(struct node *) * 2);
  head->values[0] = one;
  head->values[1] = two;

  dfs(head);
  

}
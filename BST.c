#include <stdio.h>

typedef struct st{
                int data;
                struct st*right,*left;
                }node;

node * temp,*root;

void create_BST(node*, node*);
void seraching(node*);
void inorder(node*);
void preorder(node*);
void postorder(node*);

int main(){
    int ch,val;
    root=NULL;

    while (1)
    {
        printf("1. Creation of BST\n");
        printf("2.Searching\n");
        printf("3.Preorder\n");
        printf("4.Inorder\n");
        printf("5. postorder\n");
        printf("6.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: temp = (node*)malloc(sizeof(node));
                    printf("Enter any data:\n");
                    scanf("%d", &temp->data);
                    temp->left=NULL;
                    temp->right=NULL;
                    create_BST(root,temp);
                    break;
            case 2:printf("Enter any value for searching\n");
                    scanf("%d", &val);
                    seraching(root,val);
                    break;
            case 3:preorder(root);
                    break;
            case 4: inorder(root);
                    break;
            case 5:postorder(root);
                    break;
            default: exit(0);                                        
        }
    }
    
    return 0;
}
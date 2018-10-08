#include <iostream>
#include <stdlib.h>

using namespace std;

struct NODE
{
    NODE **child;
    int data;
};

void insert(struct NODE** root, int val, int nchild, struct NODE* temp,int noChild)
{

    struct NODE* curr=(struct NODE*)malloc(sizeof(struct NODE));
    curr->child=(struct NODE**)malloc(sizeof(struct NODE)*nchild);
    curr->data=val;

    for(int i=0;i<nchild;i++)
    {
        curr->child[i]=NULL;
    }
    if(*root==NULL)
    {
        *root=curr;
    }
    else
    {
        temp->child[noChild]=curr;
    }



}


int main()
{
    struct NODE *root=NULL;
    insert(&root,1,3,NULL,0);
    insert(&root,2,2,root,0);
    insert(&root,3,1,root,1);
    insert(&root,4,0,root,2);
    insert(&root,5,0,root->child[0],0);
    insert(&root,6,0,root->child[0],1);
    insert(&root,7,2,root->child[1],0);
    insert(&root,9,0,root->child[1]->child[0],0);
    insert(&root,8,0,root->child[1]->child[0],1);

    cout<<root->data<<endl;
    cout<<root->child[0]->data<<endl;
    cout<<root->child[1]->data<<endl;
    cout<<root->child[2]->data<<endl;
    cout<<root->child[0]->child[0]->data<<endl;
    cout<<root->child[0]->child[1]->data<<endl;
    cout<<root->child[1]->child[0]->data<<endl;
    cout<<root->child[1]->child[0]->child[0]->data<<endl;
    cout<<root->child[1]->child[0]->child[1]->data<<endl;








}

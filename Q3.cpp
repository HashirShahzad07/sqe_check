#include<iostream>
#include <queue>

using namespace std;

class node
{
	public:
	node* right;
	node* left;
	int data;
	node(int val)
	{
		data=val;
		right=left=NULL;
	}
};

void printLevelOrder(node* root)
{
	if(root==NULL){
		return;
	}
	
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		node* n = q.front();
		q.pop();
		
		if(n!=NULL)
		{
			cout<<n->data<<" ";
			if(n->left)
			{
				q.push(n->left);
			}
			if(n->right)
			{
				q.push(n->right);
			}
		}
		else if(!q.empty())
		{
			q.push(NULL);
		}
	}
}
	
	int sum(node* root,int k)
	{
		if(root==NULL)
		{
			return -1;
		}
		queue<node*> q;
		q.push(root);
		q.push(NULL);
		int level=0;
		int sum=0;
		
		while(!q.empty())
		{
			node* n=q.front();
			q.pop();
			 
			 if(n!=NULL)
			 {
			 	if(level==k)
			 	{
			 		int temp;
			 		temp=n->data;
			 		if(n->data>=temp)
			 		{
			 			temp=n->data;
			 						 		cout<<temp<<endl;

					 }
//			 		sum+=n->data;
//			 		cout<<temp<<endl;
				 }
				 
				 if(n->left)
				 {
				 	q.push(n->left); 
				 }
				 if(n->right)
				 {
				 	q.push(n->right);
				 }
			 }
			 
			 else if(!q.empty())
		{
			q.push(NULL);
			level++;
		}
		}
		return sum;
	}

int main()
{
     node* root=new node(1);
     root->left=new node(2);
     root->right=new node(3);
     root->left->left=new node(4);
     root->left->right=new node(5);
     root->right->left=new node(6);
     root->right->right=new node(7);
     
     printLevelOrder(root);
    sum(root,2);
     
}
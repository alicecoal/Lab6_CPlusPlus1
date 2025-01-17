//---------------------------------------------------------------------------

#ifndef TreeH
#define TreeH
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vcl.h>
#include <math.h>

class Node
{
	public:
	AnsiString data;
	int key;
	Node *left;
	Node *right;
	public:
	void Add(Node **a, int key, AnsiString value)
	{
		if (*a == NULL)
		{
			*a = new Node;
			(*a)->key = key;
			(*a)->data = value;
			(*a)->left = (*a)->right = NULL;
			return;
		}
		if (key <= (*a)->key)
		{
			Add(&((*a)->left), key, value);
		}
		else
		{
			Add(&((*a)->right), key, value);
		}
	}

	void Delete(Node **a, int data)
	{
		if (*a!=nullptr)
		{
			if ((*a)->key == data)
			{
				Node *x = *a;
				if ((*a)->left == NULL && (*a)->right == NULL)
				{
					(*a) = NULL;
				}
				else if ((*a)->left == NULL)
				{
					(*a) = x->right;
				}
				else if ((*a)->right == NULL)
				{
					(*a) = x->left;
				}
				else
				{
					*a = x->right;
					Node **y = a;
					while (*y)
					{
						y = &((*y)->left);
					}
					*y = x->left;
				}
				free(x);
			}
			else
			{
				if ((*a)->key > data)
				{
					Delete(&((*a)->left), data);
				}
				else
				{
					Delete(&((*a)->right), data);
				}
			}
		}
	}

	void balance(Node **a)
	{
		if(*a ==NULL)
		{
			return;
		}
		while(abs(deep((*a)->left)-deep((*a)->right))>1)
		{
			if (deep((*a)->left) > deep((*a)->right) + 1)
			{
				Node *left = (*a)->left->right;
				Node *right = *a;
				*a = (*a)->left;
				right->left = left;
				(*a)->right = right;
			}
			else if (1 + deep((*a)->left) < deep((*a)->right))
			{
				Node *left = *a;
				Node *right = (*a)->right->left;
				*a = (*a)->right;
				left->right = right;
				(*a)->left = left;
			}
		}
	}

	void Find(Node *a,TEdit *edit)
	{
		int data=StrToInt(edit->Text);
		if (a)
		{
			if (a->key == data)
			{
				edit->Text=IntToStr(data) + " " + a->data;
			}
			else
			{
				if (a->key > data)
				{
					Find(a->left, edit);
				}
				else
				{
					Find(a->right, edit);
				}
			}
		}
	}

	void Sum(Node *a, int &sum)
	{
		if (a)
		{
			sum += a->data.Length();
			Sum(a->left,sum);
			Sum(a->right,sum);
		}
	}


	int max(int a, int b)
	{
		if (a > b) return a;
		else return b;
	}

	int deep(Node *a)
	{
		if (a) return (1 + max(deep(a->left), deep(a->right)));
		else return 0;
	}

	void KeyPrint(Node *a, TMemo* Memo)
	{
		if (a)
		{
			KeyPrint(a->left,Memo);
			Memo->Lines->Add(IntToStr(a->key)+" ");
			KeyPrint(a->right,Memo);
		}
	}

	void DirectOrder(Node *a, TMemo *Memo)
	{
		if (a)
		{
			Memo->Lines->Add(IntToStr(a->key)+" ");
			DirectOrder(a->left,Memo);
			DirectOrder(a->right,Memo);
		}
	}

	void ReverseOrder(Node *a, TMemo *Memo)
	{
		if (a)
		{
			ReverseOrder(a->left,Memo);
			ReverseOrder(a->right,Memo);
			Memo->Lines->Add(IntToStr(a->key)+" ");
		}
	}

    void Clear(Node *a)
	{
		if (a)
		{
			Clear(a->right);
			Clear(a->left);
			free(a);
		}
	}
};
#endif

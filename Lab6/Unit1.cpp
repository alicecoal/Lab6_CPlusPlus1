//---------------------------------------------------------------------------

#include <vcl.h>
#include <utility>
#pragma hdrstop

#include "Unit1.h"
#include "Tree.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Node *tree = NULL;
int n = 0;
AnsiString a[1000], b[1000];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
    List->Lines->Clear();
}

void print(Node *curTree, int level, TTreeView *Tree)
{
	if (!curTree) return;
	if (level == -1)
	{
		Tree->Items->AddFirst(NULL, curTree->key);
	}
	else
	{
		Tree->Items->AddChildFirst(Tree->Items->Item[level], curTree->key);
	}
	print(curTree->right, level++, Tree);
	print(curTree->left, level++, Tree);
}

void clear(TMemo *Memo,TTreeView *Tree)
{
	  Memo->Clear();
      Tree->Items->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddTreeClick(TObject *Sender)
{
	try
	{
		tree->Add(&tree,StrToInt(Key->Text), String->Text);
		clear(Memo,TreeView);
		print(tree, -1, TreeView);
		String->Clear();
		Key->Clear();
	}
	catch(...)
	{
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddArrayClick(TObject *Sender)
{
	AnsiString s = Key->Text + " | " + String->Text;
	List->Lines->Add(s);
	a[n] = Key->Text;
	b[n] = String->Text;
	n++;
	Key->Clear();
	String->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonAddClick(TObject *Sender)
{
	for (int i = 0; i < n; i++)
	{
		try
		{
			tree->Add(&tree,StrToInt(a[i]),b[i]);
		}
		catch (...)
		{
			return;
		}
	}
	clear(Memo,TreeView);
	print(tree,-1,TreeView);
	List->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DeleteClick(TObject *Sender)
{
	try
	{
		tree->Delete(&tree, StrToInt(Edit->Text));
		TreeView->Items->Clear();
		print(tree, -1, TreeView);
	}
	catch(...)
	{
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonBalanceClick(TObject *Sender)
{
	tree->Balance(&tree);
	TreeView->Items->Clear();
	print(tree,-1,TreeView);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FindClick(TObject *Sender)
{
	try
	{
		AnsiString info = Edit->Text;
		tree->Find(tree, info);
	}
	catch(...)
	{
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonFindSumClick(TObject *Sender)
{
	int sum = 0;
	tree->Sum(tree, sum);
    Sum->Text = IntToStr(sum);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonDirectClick(TObject *Sender)
{
	Memo->Clear();
	tree->DirectOrder(tree, Memo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonAscendingClick(TObject *Sender)
{
	Memo->Clear();
	tree->KeyPrint(tree, Memo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonReverseClick(TObject *Sender)
{
	Memo->Clear();
	tree->ReverseOrder(tree, Memo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditClick(TObject *Sender)
{
    Edit->Clear();
}
//---------------------------------------------------------------------------


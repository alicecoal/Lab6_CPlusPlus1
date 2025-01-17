//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTreeView *TreeView;
	TMemo *Memo;
	TEdit *Key;
	TEdit *String;
	TButton *AddTree;
	TButton *AddArray;
	TButton *ButtonAdd;
	TButton *ButtonFindSum;
	TButton *ButtonBalance;
	TEdit *Edit;
	TButton *Find;
	TButton *Delete;
	TEdit *Sum;
	TLabel *LabelPrint;
	TButton *ButtonDirect;
	TButton *ButtonAscending;
	TButton *ButtonReverse;
	TMemo *List;
	void __fastcall AddTreeClick(TObject *Sender);
	void __fastcall AddArrayClick(TObject *Sender);
	void __fastcall ButtonAddClick(TObject *Sender);
	void __fastcall FindClick(TObject *Sender);
	void __fastcall DeleteClick(TObject *Sender);
	void __fastcall ButtonBalanceClick(TObject *Sender);
	void __fastcall ButtonFindSumClick(TObject *Sender);
	void __fastcall ButtonDirectClick(TObject *Sender);
	void __fastcall ButtonAscendingClick(TObject *Sender);
	void __fastcall ButtonReverseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

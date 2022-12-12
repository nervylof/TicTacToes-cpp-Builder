//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
bool checker;
//---------------------------------------------------------------------------
	void __fastcall TForm1::CallEnable(TObject *Sender)
	{
		btnTic1->Enabled = false;
		btnTic2->Enabled = false;
		btnTic3->Enabled = false;
		btnTic4->Enabled = false;
		btnTic5->Enabled = false;
		btnTic6->Enabled = false;
		btnTic7->Enabled = false;
		btnTic8->Enabled = false;
		btnTic9->Enabled = false;

	}
//---------------------------------------------------------------------------
	void __fastcall TForm1::scorekeeper(TObject *Sender)
	{
		Integer i, q;

		i = StrToInt (lblPlayerX->Caption);
		q = StrToInt (lblPlayerO->Caption);

		if((btnTic1->Caption == "X") && (btnTic2->Caption == "X") && (btnTic3->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic1->Caption == "X") && (btnTic4->Caption == "X") && (btnTic7->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic1->Caption == "X") && (btnTic5->Caption == "X") && (btnTic9->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic3->Caption == "X") && (btnTic5->Caption == "X") && (btnTic7->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic2->Caption == "X") && (btnTic5->Caption == "X") && (btnTic8->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic3->Caption == "X") && (btnTic6->Caption == "X") && (btnTic9->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic4->Caption == "X") && (btnTic5->Caption == "X") && (btnTic6->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}

			if((btnTic7->Caption == "X") && (btnTic8->Caption == "X") && (btnTic9->Caption == "X"))
		{
			lblPlayerX->Caption = IntToStr(i + 1);
			ShowMessage("The winner is Player X");
			CallEnable(Sender);
		}
	//---------------------------------------------------------------------------
       		 if((btnTic1->Caption == "O") && (btnTic2->Caption == "O") && (btnTic3->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic1->Caption == "O") && (btnTic4->Caption == "O") && (btnTic7->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic1->Caption == "O") && (btnTic5->Caption == "O") && (btnTic9->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic3->Caption == "O") && (btnTic5->Caption == "O") && (btnTic7->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic2->Caption == "O") && (btnTic5->Caption == "O") && (btnTic8->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic3->Caption == "O") && (btnTic6->Caption == "O") && (btnTic9->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic4->Caption == "O") && (btnTic5->Caption == "O") && (btnTic6->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}

			if((btnTic7->Caption == "O") && (btnTic8->Caption == "O") && (btnTic9->Caption == "O"))
		{
			lblPlayerO->Caption = IntToStr(q + 1);
			ShowMessage("The winner is Player O");
			CallEnable(Sender);
		}
	}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnExitClick(TObject *Sender)
{
	Close ();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic1Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic1->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic1->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic2Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic2->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic2->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic3Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic3->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic3->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic4Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic4->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic4->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic5Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic5->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic5->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic6Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic6->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic6->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic7Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic7->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic7->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic8Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic8->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic8->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnTic9Click(TObject *Sender)
{
	if (checker == false)
	{
		btnTic9->Caption = "X";
		checker = true;
	}

	else if (checker == true)
	{
		btnTic9->Caption = "O";
		checker = false;
	}

	scorekeeper(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnResetClick(TObject *Sender)
{
	 lblPlayerX->Caption = "0";
	 lblPlayerO->Caption = "0";

     btnNewGameClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnNewGameClick(TObject *Sender)
{
	  btnTic1->Caption = "";
	  btnTic2->Caption = "";
	  btnTic3->Caption = "";
	  btnTic4->Caption = "";
	  btnTic5->Caption = "";
	  btnTic6->Caption = "";
	  btnTic7->Caption = "";
	  btnTic8->Caption = "";
	  btnTic9->Caption = "";

	  btnTic1->Enabled = true;
	  btnTic2->Enabled = true;
	  btnTic3->Enabled = true;
	  btnTic4->Enabled = true;
	  btnTic5->Enabled = true;
	  btnTic6->Enabled = true;
	  btnTic7->Enabled = true;
	  btnTic8->Enabled = true;
	  btnTic9->Enabled = true;
}
//---------------------------------------------------------------------------





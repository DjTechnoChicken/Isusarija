#pragma once
#include "wx/wx.h"
#include <stdio.h>
//Definira klasu cDnevnik i daje joj atribude klase wxFrame (klasa koja omogu�ava ra�enje prozora)

class cDnevnik : public wxFrame
{
public:
	cDnevnik();
	~cDnevnik();
public:
	//Daje cDnevniku ove atribude
	wxTextCtrl* m_txt3 = nullptr;
	wxTextCtrl* m_txt4 = nullptr;
	wxListBox* m_list2 = nullptr;
	wxButton* m_btn2 = nullptr;


};



#include "cDnevnik.h"

//Definira prozor cDnevnik koji se poziva i poziva tu funkciju

cDnevnik::cDnevnik() : wxFrame(nullptr, wxID_ANY, "Sranje", wxPoint(710, 150), wxSize(600, 600)) {
	m_txt3 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(600 / 2 - 300 / 2, 20), wxSize(300, 30));
	m_txt4 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(600 / 2 - 300 / 2, 60), wxSize(300, 30));
	m_list2 = new wxListBox(this, wxID_ANY, wxPoint(600 / 2 - 300 / 2, 350), wxSize(300, 100));
	m_btn2 = new wxButton(this, 10001, "RAK", wxPoint(225, 500), wxSize(150, 50));


}
cDnevnik::~cDnevnik() {

}
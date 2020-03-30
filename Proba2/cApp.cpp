#include "cAPP.h"
#include <stdio.h>

//Radi i "klasu" koja sadrži cijei program

wxIMPLEMENT_APP(cApp);






cApp::cApp() {

}

cApp::~cApp() {

}

//Funkcija koja stvara prvi prozor pri paljenju programa (OnInit = On initalisation)

bool cApp::OnInit() {
	m_frame1 = new cMain();
	m_frame1->Show();
	return true;
}

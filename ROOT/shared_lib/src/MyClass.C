#include "MyClass.h"

#include <iostream>
#include "TFile.h"
#include "TString.h"

ClassImp(MyClass);

void MyClass::internalMethod(){
	std::cout << "calling an internal method" << std::endl;
}

MyClass::MyClass(TString *fname){
	fFile = new TFile(*fname,"RECREATE");
}

MyClass::~MyClass(){
	fFile->Write();
	fFile->Close();
	delete fFile;
}

void MyClass::run(){
	this->internalMethod();
}

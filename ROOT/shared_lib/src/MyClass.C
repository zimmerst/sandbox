#include "MyClass.h"

ClassImp(MyClass);

void MyClass::internalMethod(){
	std::cout << "calling an internal method" << std::endl;
}

public:

MyClass::MyClass(TString *fname){
	fFile = TFile::Open(*fname,"RECREATE");
}

MyClass::~MyClass(){
	fFile->Write();
	fFile->Close();
	delete fFile;
}

void MyClass::run(){
	this->internalMethod();
}

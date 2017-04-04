#ifndef _MyClass_h
#define _MyClass_h 1

#if !defined (__CINT__) || defined (__MAKECINT__)
#include "Rtypes.h"
#endif
#include <iostream>
#include "TFile.h"
#include "TString.h"

class MyClass : public TObject {
private:
	TFile *fFile;
	void internalMethod(){
		std::cout << "calling an internal method" << std::endl;
	}
	
public:
	MyClass(TString *fname){
		fFile = TFile::Open(*fname,"RECREATE");
	};
	~MyClass(){
		fFile->Write();
		fFile->Close();
		delete fFile;
	}
	void run();
	ClassDef(MyClass, 1)
};

#endif

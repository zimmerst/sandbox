#ifndef _MyClass_h
#define _MyClass_h 1

#if !defined (__CINT__) || defined (__MAKECINT__)
#include "Rtypes.h"
#endif

class MyClass : public TObject {
private:
	TFile *fFile;
	void internalMethod();
	
public:
	/// Default constructor
	MyClass();
	MyClass(TString *fname);
	/// Virtual destructor
	virtual ~MyClass();
	void run();
	
	ClassDef(MyClass, 1)
};

#endif

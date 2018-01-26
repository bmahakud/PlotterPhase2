#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
using namespace std;

class ClassReadData {

public :

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   Int_t           fCurrent; //!current Tree number in a TChain



// Fixed size dimensions of array or collections stored in the TTree if any.



   // Declaration of leaf types

   UInt_t          RunNum;

   UInt_t          LumiBlockNum;

   ULong64_t       EvtNum;

   vector<TLorentzVector> *AK8GenJet;

   vector<TLorentzVector> *Jet0;

   vector<double>  *Jet0Area;

   Double_t        Jet0CEF;

   Double_t        Jet0CHF;

   Double_t        Jet0CM;

   Double_t        Jet0L2RelativeCorr;

   Double_t        Jet0MassPruned;

   Double_t        Jet0MassTrimmed;

   Double_t        Jet0MF;

   Double_t        Jet0Mult;

   Double_t        Jet0NEF;

   Double_t        Jet0NHF;

   Double_t        Jet0NM;

   vector<TLorentzVector> *Jet0Raw;

   vector<TLorentzVector> *Jet0SD;

   Double_t        Jet0SDmass;

   Double_t        Jet0SDmaxbdisc;

   Double_t        Jet0SDmaxbdiscflavHadron;

   Double_t        Jet0SDmaxbdiscflavParton;

   vector<TLorentzVector> *Jet0SDRaw;

   vector<TLorentzVector> *Jet0SDsubjet0;

   Double_t        Jet0SDsubjet0area;

   Double_t        Jet0SDsubjet0bdisc;

   Double_t        Jet0SDsubjet0flavHadron;

   Double_t        Jet0SDsubjet0flavParton;

   Double_t        Jet0SDsubjet0matchedgenjetpt;

   Double_t        Jet0SDsubjet0tau1;

   Double_t        Jet0SDsubjet0tau2;

   Double_t        Jet0SDsubjet0tau3;

   vector<TLorentzVector> *Jet0SDsubjet1;

   Double_t        Jet0SDsubjet1area;

   Double_t        Jet0SDsubjet1bdisc;

   Double_t        Jet0SDsubjet1flavHadron;

   Double_t        Jet0SDsubjet1flavParton;

   Double_t        Jet0SDsubjet1matchedgenjetpt;

   Double_t        Jet0SDsubjet1tau1;

   Double_t        Jet0SDsubjet1tau2;

   Double_t        Jet0SDsubjet1tau3;

   Double_t        Jet0Tau1;

   Double_t        Jet0Tau2;

   Double_t        Jet0Tau3;

   Double_t        Jet0Tau32;

   Double_t        Jet0Tau4;

   vector<TLorentzVector> *Jet1;

   vector<double>  *Jet1Area;

   Double_t        Jet1CEF;

   Double_t        Jet1CHF;

   Double_t        Jet1CM;

   Double_t        Jet1L2RelativeCorr;

   Double_t        Jet1MassPruned;

   Double_t        Jet1MassTrimmed;

   Double_t        Jet1MF;

   Double_t        Jet1Mult;

   Double_t        Jet1NEF;

   Double_t        Jet1NHF;

   Double_t        Jet1NM;

   vector<TLorentzVector> *Jet1Raw;

   vector<TLorentzVector> *Jet1SD;

   Double_t        Jet1SDmass;

   Double_t        Jet1SDmaxbdisc;

   Double_t        Jet1SDmaxbdiscflavHadron;

   Double_t        Jet1SDmaxbdiscflavParton;

   vector<TLorentzVector> *Jet1SDRaw;

   vector<TLorentzVector> *Jet1SDsubjet0;

   Double_t        Jet1SDsubjet0area;

   Double_t        Jet1SDsubjet0bdisc;

   Double_t        Jet1SDsubjet0flavHadron;

   Double_t        Jet1SDsubjet0flavParton;

   Double_t        Jet1SDsubjet0matchedgenjetpt;

   Double_t        Jet1SDsubjet0tau1;

   Double_t        Jet1SDsubjet0tau2;

   Double_t        Jet1SDsubjet0tau3;

   vector<TLorentzVector> *Jet1SDsubjet1;

   Double_t        Jet1SDsubjet1area;

   Double_t        Jet1SDsubjet1bdisc;

   Double_t        Jet1SDsubjet1flavHadron;

   Double_t        Jet1SDsubjet1flavParton;

   Double_t        Jet1SDsubjet1matchedgenjetpt;

   Double_t        Jet1SDsubjet1tau1;

   Double_t        Jet1SDsubjet1tau2;

   Double_t        Jet1SDsubjet1tau3;

   Double_t        Jet1Tau1;

   Double_t        Jet1Tau2;

   Double_t        Jet1Tau3;

   Double_t        Jet1Tau32;

   Double_t        Jet1Tau4;

   Double_t        MET;

   Int_t           npu;

   Int_t           NumAK8Jets;

   Int_t           NVtx;



   // List of branches

   TBranch        *b_RunNum;   //!

   TBranch        *b_LumiBlockNum;   //!

   TBranch        *b_EvtNum;   //!

   TBranch        *b_AK8GenJet;   //!

   TBranch        *b_Jet0;   //!

   TBranch        *b_Jet0Area;   //!

   TBranch        *b_Jet0CEF;   //!

   TBranch        *b_Jet0CHF;   //!

   TBranch        *b_Jet0CM;   //!

   TBranch        *b_Jet0L2RelativeCorr;   //!

   TBranch        *b_Jet0MassPruned;   //!

   TBranch        *b_Jet0MassTrimmed;   //!

   TBranch        *b_Jet0MF;   //!

   TBranch        *b_Jet0Mult;   //!

   TBranch        *b_Jet0NEF;   //!

   TBranch        *b_Jet0NHF;   //!

   TBranch        *b_Jet0NM;   //!

   TBranch        *b_Jet0Raw;   //!

   TBranch        *b_Jet0SD;   //!

   TBranch        *b_Jet0SDmass;   //!

   TBranch        *b_Jet0SDmaxbdisc;   //!

   TBranch        *b_Jet0SDmaxbdiscflavHadron;   //!

   TBranch        *b_Jet0SDmaxbdiscflavParton;   //!

   TBranch        *b_Jet0SDRaw;   //!

   TBranch        *b_Jet0SDsubjet0;   //!

   TBranch        *b_Jet0SDsubjet0area;   //!

   TBranch        *b_Jet0SDsubjet0bdisc;   //!

   TBranch        *b_Jet0SDsubjet0flavHadron;   //!

   TBranch        *b_Jet0SDsubjet0flavParton;   //!

   TBranch        *b_Jet0SDsubjet0matchedgenjetpt;   //!

   TBranch        *b_Jet0SDsubjet0tau1;   //!

   TBranch        *b_Jet0SDsubjet0tau2;   //!

   TBranch        *b_Jet0SDsubjet0tau3;   //!

   TBranch        *b_Jet0SDsubjet1;   //!

   TBranch        *b_Jet0SDsubjet1area;   //!

   TBranch        *b_Jet0SDsubjet1bdisc;   //!

   TBranch        *b_Jet0SDsubjet1flavHadron;   //!

   TBranch        *b_Jet0SDsubjet1flavParton;   //!

   TBranch        *b_Jet0SDsubjet1matchedgenjetpt;   //!

   TBranch        *b_Jet0SDsubjet1tau1;   //!

   TBranch        *b_Jet0SDsubjet1tau2;   //!

   TBranch        *b_Jet0SDsubjet1tau3;   //!

   TBranch        *b_Jet0Tau1;   //!

   TBranch        *b_Jet0Tau2;   //!

   TBranch        *b_Jet0Tau3;   //!

   TBranch        *b_Jet0Tau32;   //!

   TBranch        *b_Jet0Tau4;   //!

   TBranch        *b_Jet1;   //!

   TBranch        *b_Jet1Area;   //!

   TBranch        *b_Jet1CEF;   //!

   TBranch        *b_Jet1CHF;   //!

   TBranch        *b_Jet1CM;   //!

   TBranch        *b_Jet1L2RelativeCorr;   //!

   TBranch        *b_Jet1MassPruned;   //!

   TBranch        *b_Jet1MassTrimmed;   //!

   TBranch        *b_Jet1MF;   //!

   TBranch        *b_Jet1Mult;   //!

   TBranch        *b_Jet1NEF;   //!

   TBranch        *b_Jet1NHF;   //!

   TBranch        *b_Jet1NM;   //!

   TBranch        *b_Jet1Raw;   //!

   TBranch        *b_Jet1SD;   //!

   TBranch        *b_Jet1SDmass;   //!

   TBranch        *b_Jet1SDmaxbdisc;   //!

   TBranch        *b_Jet1SDmaxbdiscflavHadron;   //!

   TBranch        *b_Jet1SDmaxbdiscflavParton;   //!

   TBranch        *b_Jet1SDRaw;   //!

   TBranch        *b_Jet1SDsubjet0;   //!

   TBranch        *b_Jet1SDsubjet0area;   //!

   TBranch        *b_Jet1SDsubjet0bdisc;   //!

   TBranch        *b_Jet1SDsubjet0flavHadron;   //!

   TBranch        *b_Jet1SDsubjet0flavParton;   //!

   TBranch        *b_Jet1SDsubjet0matchedgenjetpt;   //!

   TBranch        *b_Jet1SDsubjet0tau1;   //!

   TBranch        *b_Jet1SDsubjet0tau2;   //!

   TBranch        *b_Jet1SDsubjet0tau3;   //!

   TBranch        *b_Jet1SDsubjet1;   //!

   TBranch        *b_Jet1SDsubjet1area;   //!

   TBranch        *b_Jet1SDsubjet1bdisc;   //!

   TBranch        *b_Jet1SDsubjet1flavHadron;   //!

   TBranch        *b_Jet1SDsubjet1flavParton;   //!

   TBranch        *b_Jet1SDsubjet1matchedgenjetpt;   //!

   TBranch        *b_Jet1SDsubjet1tau1;   //!

   TBranch        *b_Jet1SDsubjet1tau2;   //!

   TBranch        *b_Jet1SDsubjet1tau3;   //!

   TBranch        *b_Jet1Tau1;   //!

   TBranch        *b_Jet1Tau2;   //!

   TBranch        *b_Jet1Tau3;   //!

   TBranch        *b_Jet1Tau32;   //!

   TBranch        *b_Jet1Tau4;   //!

   TBranch        *b_MET;   //!

   TBranch        *b_npu;   //!

   TBranch        *b_NumAK8Jets;   //!

   TBranch        *b_NVtx;   //!



   ClassReadData(TTree *tree);

   virtual ~ClassReadData();

   

   

   

   virtual void     Init(TTree *tree);

   

   

   

};

ClassReadData::~ClassReadData()

{

   if (!fChain) return;

   delete fChain->GetCurrentFile();

}

void ClassReadData::Init(TTree *tree)

{

   // The Init() function is called when the selector needs to initialize

   // a new tree or chain. Typically here the branch addresses and branch

   // pointers of the tree will be set.

   // It is normally not necessary to make changes to the generated

   // code, but the routine can be extended by the user if needed.

   // Init() will be called many times when running on PROOF

   // (once per file to be processed).



   // Set object pointer

   AK8GenJet = 0;

   Jet0 = 0;

   Jet0Area = 0;

   Jet0Raw = 0;

   Jet0SD = 0;

   Jet0SDRaw = 0;

   Jet0SDsubjet0 = 0;

   Jet0SDsubjet1 = 0;

   Jet1 = 0;

   Jet1Area = 0;

   Jet1Raw = 0;

   Jet1SD = 0;

   Jet1SDRaw = 0;

   Jet1SDsubjet0 = 0;

   Jet1SDsubjet1 = 0;

   // Set branch addresses and branch pointers

   if (!tree) return;

   fChain = tree;

   fCurrent = -1;

   fChain->SetMakeClass(1);



   fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);

   fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);

   fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);

   fChain->SetBranchAddress("AK8GenJet", &AK8GenJet, &b_AK8GenJet);

   fChain->SetBranchAddress("Jet0", &Jet0, &b_Jet0);

   fChain->SetBranchAddress("Jet0Area", &Jet0Area, &b_Jet0Area);

   fChain->SetBranchAddress("Jet0CEF", &Jet0CEF, &b_Jet0CEF);

   fChain->SetBranchAddress("Jet0CHF", &Jet0CHF, &b_Jet0CHF);

   fChain->SetBranchAddress("Jet0CM", &Jet0CM, &b_Jet0CM);

   fChain->SetBranchAddress("Jet0L2RelativeCorr", &Jet0L2RelativeCorr, &b_Jet0L2RelativeCorr);

   fChain->SetBranchAddress("Jet0MassPruned", &Jet0MassPruned, &b_Jet0MassPruned);

   fChain->SetBranchAddress("Jet0MassTrimmed", &Jet0MassTrimmed, &b_Jet0MassTrimmed);

   fChain->SetBranchAddress("Jet0MF", &Jet0MF, &b_Jet0MF);

   fChain->SetBranchAddress("Jet0Mult", &Jet0Mult, &b_Jet0Mult);

   fChain->SetBranchAddress("Jet0NEF", &Jet0NEF, &b_Jet0NEF);

   fChain->SetBranchAddress("Jet0NHF", &Jet0NHF, &b_Jet0NHF);

   fChain->SetBranchAddress("Jet0NM", &Jet0NM, &b_Jet0NM);

   fChain->SetBranchAddress("Jet0Raw", &Jet0Raw, &b_Jet0Raw);

   fChain->SetBranchAddress("Jet0SD", &Jet0SD, &b_Jet0SD);

   fChain->SetBranchAddress("Jet0SDmass", &Jet0SDmass, &b_Jet0SDmass);

   fChain->SetBranchAddress("Jet0SDmaxbdisc", &Jet0SDmaxbdisc, &b_Jet0SDmaxbdisc);

   fChain->SetBranchAddress("Jet0SDmaxbdiscflavHadron", &Jet0SDmaxbdiscflavHadron, &b_Jet0SDmaxbdiscflavHadron);

   fChain->SetBranchAddress("Jet0SDmaxbdiscflavParton", &Jet0SDmaxbdiscflavParton, &b_Jet0SDmaxbdiscflavParton);

   fChain->SetBranchAddress("Jet0SDRaw", &Jet0SDRaw, &b_Jet0SDRaw);

   fChain->SetBranchAddress("Jet0SDsubjet0", &Jet0SDsubjet0, &b_Jet0SDsubjet0);

   fChain->SetBranchAddress("Jet0SDsubjet0area", &Jet0SDsubjet0area, &b_Jet0SDsubjet0area);

   fChain->SetBranchAddress("Jet0SDsubjet0bdisc", &Jet0SDsubjet0bdisc, &b_Jet0SDsubjet0bdisc);

   fChain->SetBranchAddress("Jet0SDsubjet0flavHadron", &Jet0SDsubjet0flavHadron, &b_Jet0SDsubjet0flavHadron);

   fChain->SetBranchAddress("Jet0SDsubjet0flavParton", &Jet0SDsubjet0flavParton, &b_Jet0SDsubjet0flavParton);

   fChain->SetBranchAddress("Jet0SDsubjet0matchedgenjetpt", &Jet0SDsubjet0matchedgenjetpt, &b_Jet0SDsubjet0matchedgenjetpt);

   fChain->SetBranchAddress("Jet0SDsubjet0tau1", &Jet0SDsubjet0tau1, &b_Jet0SDsubjet0tau1);

   fChain->SetBranchAddress("Jet0SDsubjet0tau2", &Jet0SDsubjet0tau2, &b_Jet0SDsubjet0tau2);

   fChain->SetBranchAddress("Jet0SDsubjet0tau3", &Jet0SDsubjet0tau3, &b_Jet0SDsubjet0tau3);

   fChain->SetBranchAddress("Jet0SDsubjet1", &Jet0SDsubjet1, &b_Jet0SDsubjet1);

   fChain->SetBranchAddress("Jet0SDsubjet1area", &Jet0SDsubjet1area, &b_Jet0SDsubjet1area);

   fChain->SetBranchAddress("Jet0SDsubjet1bdisc", &Jet0SDsubjet1bdisc, &b_Jet0SDsubjet1bdisc);

   fChain->SetBranchAddress("Jet0SDsubjet1flavHadron", &Jet0SDsubjet1flavHadron, &b_Jet0SDsubjet1flavHadron);

   fChain->SetBranchAddress("Jet0SDsubjet1flavParton", &Jet0SDsubjet1flavParton, &b_Jet0SDsubjet1flavParton);

   fChain->SetBranchAddress("Jet0SDsubjet1matchedgenjetpt", &Jet0SDsubjet1matchedgenjetpt, &b_Jet0SDsubjet1matchedgenjetpt);

   fChain->SetBranchAddress("Jet0SDsubjet1tau1", &Jet0SDsubjet1tau1, &b_Jet0SDsubjet1tau1);

   fChain->SetBranchAddress("Jet0SDsubjet1tau2", &Jet0SDsubjet1tau2, &b_Jet0SDsubjet1tau2);

   fChain->SetBranchAddress("Jet0SDsubjet1tau3", &Jet0SDsubjet1tau3, &b_Jet0SDsubjet1tau3);

   fChain->SetBranchAddress("Jet0Tau1", &Jet0Tau1, &b_Jet0Tau1);

   fChain->SetBranchAddress("Jet0Tau2", &Jet0Tau2, &b_Jet0Tau2);

   fChain->SetBranchAddress("Jet0Tau3", &Jet0Tau3, &b_Jet0Tau3);

   fChain->SetBranchAddress("Jet0Tau32", &Jet0Tau32, &b_Jet0Tau32);

   fChain->SetBranchAddress("Jet0Tau4", &Jet0Tau4, &b_Jet0Tau4);

   fChain->SetBranchAddress("Jet1", &Jet1, &b_Jet1);

   fChain->SetBranchAddress("Jet1Area", &Jet1Area, &b_Jet1Area);

   fChain->SetBranchAddress("Jet1CEF", &Jet1CEF, &b_Jet1CEF);

   fChain->SetBranchAddress("Jet1CHF", &Jet1CHF, &b_Jet1CHF);

   fChain->SetBranchAddress("Jet1CM", &Jet1CM, &b_Jet1CM);

   fChain->SetBranchAddress("Jet1L2RelativeCorr", &Jet1L2RelativeCorr, &b_Jet1L2RelativeCorr);

   fChain->SetBranchAddress("Jet1MassPruned", &Jet1MassPruned, &b_Jet1MassPruned);

   fChain->SetBranchAddress("Jet1MassTrimmed", &Jet1MassTrimmed, &b_Jet1MassTrimmed);

   fChain->SetBranchAddress("Jet1MF", &Jet1MF, &b_Jet1MF);

   fChain->SetBranchAddress("Jet1Mult", &Jet1Mult, &b_Jet1Mult);

   fChain->SetBranchAddress("Jet1NEF", &Jet1NEF, &b_Jet1NEF);

   fChain->SetBranchAddress("Jet1NHF", &Jet1NHF, &b_Jet1NHF);

   fChain->SetBranchAddress("Jet1NM", &Jet1NM, &b_Jet1NM);

   fChain->SetBranchAddress("Jet1Raw", &Jet1Raw, &b_Jet1Raw);

   fChain->SetBranchAddress("Jet1SD", &Jet1SD, &b_Jet1SD);

   fChain->SetBranchAddress("Jet1SDmass", &Jet1SDmass, &b_Jet1SDmass);

   fChain->SetBranchAddress("Jet1SDmaxbdisc", &Jet1SDmaxbdisc, &b_Jet1SDmaxbdisc);

   fChain->SetBranchAddress("Jet1SDmaxbdiscflavHadron", &Jet1SDmaxbdiscflavHadron, &b_Jet1SDmaxbdiscflavHadron);

   fChain->SetBranchAddress("Jet1SDmaxbdiscflavParton", &Jet1SDmaxbdiscflavParton, &b_Jet1SDmaxbdiscflavParton);

   fChain->SetBranchAddress("Jet1SDRaw", &Jet1SDRaw, &b_Jet1SDRaw);

   fChain->SetBranchAddress("Jet1SDsubjet0", &Jet1SDsubjet0, &b_Jet1SDsubjet0);

   fChain->SetBranchAddress("Jet1SDsubjet0area", &Jet1SDsubjet0area, &b_Jet1SDsubjet0area);

   fChain->SetBranchAddress("Jet1SDsubjet0bdisc", &Jet1SDsubjet0bdisc, &b_Jet1SDsubjet0bdisc);

   fChain->SetBranchAddress("Jet1SDsubjet0flavHadron", &Jet1SDsubjet0flavHadron, &b_Jet1SDsubjet0flavHadron);

   fChain->SetBranchAddress("Jet1SDsubjet0flavParton", &Jet1SDsubjet0flavParton, &b_Jet1SDsubjet0flavParton);

   fChain->SetBranchAddress("Jet1SDsubjet0matchedgenjetpt", &Jet1SDsubjet0matchedgenjetpt, &b_Jet1SDsubjet0matchedgenjetpt);

   fChain->SetBranchAddress("Jet1SDsubjet0tau1", &Jet1SDsubjet0tau1, &b_Jet1SDsubjet0tau1);

   fChain->SetBranchAddress("Jet1SDsubjet0tau2", &Jet1SDsubjet0tau2, &b_Jet1SDsubjet0tau2);

   fChain->SetBranchAddress("Jet1SDsubjet0tau3", &Jet1SDsubjet0tau3, &b_Jet1SDsubjet0tau3);

   fChain->SetBranchAddress("Jet1SDsubjet1", &Jet1SDsubjet1, &b_Jet1SDsubjet1);

   fChain->SetBranchAddress("Jet1SDsubjet1area", &Jet1SDsubjet1area, &b_Jet1SDsubjet1area);

   fChain->SetBranchAddress("Jet1SDsubjet1bdisc", &Jet1SDsubjet1bdisc, &b_Jet1SDsubjet1bdisc);

   fChain->SetBranchAddress("Jet1SDsubjet1flavHadron", &Jet1SDsubjet1flavHadron, &b_Jet1SDsubjet1flavHadron);

   fChain->SetBranchAddress("Jet1SDsubjet1flavParton", &Jet1SDsubjet1flavParton, &b_Jet1SDsubjet1flavParton);

   fChain->SetBranchAddress("Jet1SDsubjet1matchedgenjetpt", &Jet1SDsubjet1matchedgenjetpt, &b_Jet1SDsubjet1matchedgenjetpt);

   fChain->SetBranchAddress("Jet1SDsubjet1tau1", &Jet1SDsubjet1tau1, &b_Jet1SDsubjet1tau1);

   fChain->SetBranchAddress("Jet1SDsubjet1tau2", &Jet1SDsubjet1tau2, &b_Jet1SDsubjet1tau2);

   fChain->SetBranchAddress("Jet1SDsubjet1tau3", &Jet1SDsubjet1tau3, &b_Jet1SDsubjet1tau3);

   fChain->SetBranchAddress("Jet1Tau1", &Jet1Tau1, &b_Jet1Tau1);

   fChain->SetBranchAddress("Jet1Tau2", &Jet1Tau2, &b_Jet1Tau2);

   fChain->SetBranchAddress("Jet1Tau3", &Jet1Tau3, &b_Jet1Tau3);

   fChain->SetBranchAddress("Jet1Tau32", &Jet1Tau32, &b_Jet1Tau32);

   fChain->SetBranchAddress("Jet1Tau4", &Jet1Tau4, &b_Jet1Tau4);

   fChain->SetBranchAddress("MET", &MET, &b_MET);

   fChain->SetBranchAddress("npu", &npu, &b_npu);

   fChain->SetBranchAddress("NumAK8Jets", &NumAK8Jets, &b_NumAK8Jets);

   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);

   

}

ClassReadData::ClassReadData(TTree *tree)
{
	Init(tree);
}
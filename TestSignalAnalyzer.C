#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
#include "TH1F.h"
#include "TPaveText.h"
#include "ClassReadSig.cc"
#include "ClassReadBkg.cc"
#include "ClassReadData.cc"
#include "Loader.C"
#include "Looper_sig.C"
#include "Looper_bkg.C"
#include "Looper_data.C"
#include "HistCreater.C"
using namespace std;


void TestSignalAnalyzer(){


TFile *f=new TFile("HistosDR.root","RECREATE");

TH1F *h=new TH1F("h","h",100,0,500);
TH1F *hRSG=new TH1F("hRSG","hRSG",100,0,10000);

TH1F *hDRsig=new TH1F("hDRsig","hDRsig",100,0,10);
TH1F *hDRtt=new TH1F("hDRtt","hDRtt",100,0,10);
TH1F *hDRQCD=new TH1F("hDRQCD","hDRQCD",100,0,10);




Loader L;



TFile *f=new TFile("Histograms.root","RECREATE");
HistCreater hs;
Looper_sig<ClassReadSig,HistCreater> loop_s;



TChain *tree_RSG5TeV=L.Load("RSG5TeV");
ClassReadSig RSG5TeV(tree_RSG5TeV);


for(int iEv=0;iEv<tree_RSG5TeV->GetEntries();iEv++){
tree_RSG5TeV->GetEntry(iEv);

if(RSG5TeV.AK8Jets->size()>1 && RSG5TeV.AK8Jets->at(0).Pt()>500.0 && RSG5TeV.AK8Jets->at(1).Pt()>500.0){//gen size

if(RSG5TeV.AK8Jets->at(0).M()>150. && RSG5TeV.AK8GenJets->at(1).M()>150.){//mass cut

h->Fill(RSG5TeV.AK8Jets->at(0).M());
TLorentzVector Jet1;
TLorentzVector Jet2;
Jet1=RSG5TeV.AK8Jets->at(0);
Jet2=RSG5TeV.AK8Jets->at(1);
TLorentzVector RSGvec=Jet1+Jet2;

//hRSG->Fill(RSGvec.M());


}//mass cut
}//gen size

}



hRSG->Draw();

//loop_s.Loop(tree_RSG5TeV,RSG5TeV,hs,"RSG5TeV");

















}

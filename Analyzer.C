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
//#include "Looper_data.C"
/*#include "stackPlotter.C"*/
#include "HistCreater.C"
using namespace std;


void Analyzer(){
 
Loader L;



TFile *f=new TFile("Histograms.root","RECREATE");
HistCreater hs;
Looper_sig<ClassReadSig,HistCreater> loop_s;



TChain *tree_RSG3TeVP2=L.Load("RSG3TeVP2");
ClassReadSig RSG3TeVP2(tree_RSG3TeVP2);
loop_s.Loop(tree_RSG3TeVP2,RSG3TeVP2,hs,"RSG3TeVP2");



TChain *tree_RSG4TeVP2=L.Load("RSG4TeVP2");
ClassReadSig RSG4TeVP2(tree_RSG4TeVP2);
loop_s.Loop(tree_RSG4TeVP2,RSG4TeVP2,hs,"RSG4TeVP2");



TChain *tree_RSG5TeVP2=L.Load("RSG5TeVP2");
ClassReadSig RSG5TeVP2(tree_RSG5TeVP2);
loop_s.Loop(tree_RSG5TeVP2,RSG5TeVP2,hs,"RSG5TeVP2");







Looper_bkg<ClassReadBkg,HistCreater> loop_b;
//TChain *tree_TTinclP2=L.Load("TTinclP2");
//ClassReadBkg TTinclP2(tree_TTinclP2);
//loop_b.Loop(tree_TTinclP2,TTinclP2,hs,"TTinclP2");



TChain *tree_TTMttP2=L.Load("TTMttP2");
ClassReadBkg TTMttP2(tree_TTMttP2);
loop_b.Loop(tree_TTMttP2,TTMttP2,hs,"TTMttP2");



//TChain *tree_QCDFlatP2=L.Load("QCDFlatP2");
//ClassReadBkg QCDFlatP2(tree_QCDFlatP2);
//loop_b.Loop(tree_QCDFlatP2,QCDFlatP2,hs,"QCDFlatP2");



TChain *tree_QCDMjjP2=L.Load("QCDMjjP2");
ClassReadBkg QCDMjjP2(tree_QCDMjjP2);
loop_b.Loop(tree_QCDMjjP2,QCDMjjP2,hs,"QCDMjjP2");







/*
Looper_data<ClassReadData,HistCreater> loop_d;
TChain *tree_Data=L.Load("Data");
ClassReadData Data(tree_Data);
loop_d.Loop(tree_Data,Data,hs,"Data");



//sample tav text could be used as argument to the stack plotter  
TPaveText *tpav_txt = new TPaveText(0.57043478,0.548342,0.8652174,0.9210471,"brNDC");
    tpav_txt->SetBorderSize(0);
    tpav_txt->SetFillStyle(0);
    tpav_txt->SetTextAlign(11);
    tpav_txt->SetTextFont(42);
    tpav_txt->SetTextSize(0.04);
    tpav_txt->AddText("HT >500");
    tpav_txt->AddText("#gamma p_{T} > 100 ");
    tpav_txt->AddText("NJets >=4");
    tpav_txt->AddText("MHT>200");
    tpav_txt->AddText("BTags=0");
//Example of how to use stack plotter
StackPlotter stack;

//uncomment the following line. put histogram names correctly
//sample arguments if you want to plot one signal,5 background and no data then use the function plotS1B5D0
//if you want to use data then use the function plotS1B5D1, this way you can use all possible combinations 
//use following procees nums
// RSG3TeVP2 - 0    // RSG4TeVP2 - 1    // RSG5TeVP2 - 2    // TTinclP2 - 3    // TTMttP2 - 4    // QCDFlatP2 - 5    // QCDMjjP2 - 6    // Data - 7    

stack.plotS1B3D0("HT(GeV)",tpav_txt,hs.h_[0][0][0],"ZH_mG750",hs.h_[0][3][0],"ZJets",hs.h_[0][4][0],"QCD",hs.h_[0][5][0],"TTJets");
*/


f->Write();

}

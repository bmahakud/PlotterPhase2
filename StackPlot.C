#include"SetStyle.C"
void plotS3B2D0( string VarName,TPaveText *txtGen , TH1F *hs1 , string sig_proc1
, TH1F *hs2 , string sig_proc2
, TH1F *hs3 , string sig_proc3
,  TH1F *hb1  , string bkg_proc1 ,  TH1F *hb2  , string bkg_proc2 ){
using namespace std;
TStyle *gStyle = new TStyle("gStyle","Style for P-TDR");
SetStyle st;
st.SetPars(gStyle);
char Variable[100];
char Cname[100];
const char *Var_Name;
Var_Name=VarName.c_str();
sprintf(Variable," ;%s; Events",Var_Name);
sprintf(Cname,"%s",Var_Name);
TPaveText *pCMS = new TPaveText(0.132107,0.9308003,0.8327759,0.9923583,"brNDC");
pCMS->SetBorderSize(0);
pCMS->SetFillStyle(0);
pCMS->SetTextAlign(11);
pCMS->SetTextFont(42);
pCMS->SetTextSize(0.04);
pCMS->AddText("CMS #it{Preliminary}                   36 fb^{-1}, #sqrt{s}= 14 TeV");
TLegend *leg=new TLegend(0.3582943,0.7051483,0.55025753,0.9049564,NULL,"brNDC");
leg->SetTextFont(62);
leg->SetLineColor(1);
leg->SetLineStyle(1);
leg->SetLineWidth(3);
leg->SetFillColor(0);
leg->SetFillStyle(1001);
leg->SetShadowColor(0);
leg->SetDrawOption(0);
leg->SetBorderSize(0);
leg->SetTextSize(0.03);
THStack *hallbkg=new THStack("hallbkg",Variable);
hb1->SetFillColor(2);
hb1->SetLineColor(1);
hallbkg->Add(hb1);
char h1L_bkg[100];
const char *h1_L_bkg;
h1_L_bkg=bkg_proc1.c_str();
sprintf(h1L_bkg,"%s",h1_L_bkg);
leg->AddEntry(hb1,h1L_bkg,"f");
hb2->SetFillColor(3);
hb2->SetLineColor(1);
hallbkg->Add(hb2);
char h2L_bkg[100];
const char *h2_L_bkg;
h2_L_bkg=bkg_proc2.c_str();
sprintf(h2L_bkg,"%s",h2_L_bkg);
leg->AddEntry(hb2,h2L_bkg,"f");
hs1->SetFillStyle(1);
hs1->SetLineColor(1);
char h1L_sig[100];
const char *h1_L_sig;
h1_L_sig=sig_proc1.c_str();
sprintf(h1L_sig,"%s",h1_L_sig);
leg->AddEntry(hs1,h1L_sig,"l");
hs2->SetFillStyle(1);
hs2->SetLineColor(2);
char h2L_sig[100];
const char *h2_L_sig;
h2_L_sig=sig_proc2.c_str();
sprintf(h2L_sig,"%s",h2_L_sig);
leg->AddEntry(hs2,h2L_sig,"l");
hs3->SetFillStyle(1);
hs3->SetLineColor(4);
char h3L_sig[100];
const char *h3_L_sig;
h3_L_sig=sig_proc3.c_str();
sprintf(h3L_sig,"%s",h3_L_sig);
leg->AddEntry(hs3,h3L_sig,"l");
TCanvas *c=new TCanvas(Cname,Cname);
c->cd();
hallbkg->Draw("hist");
hallbkg->GetYaxis()->SetTitle("Events");
hallbkg->Draw("hist");
hs1->Draw("hist same");
hs2->Draw("hist same");
hs3->Draw("hist same");
txtGen->Draw();
pCMS->Draw();
leg->Draw();
c->Write();
}

#include <iostream>
#include <fstream>


void StackPlot(){



TFile *f=new TFile("Histograms36fbi.root","READ");






TH1F *S1A=(TH1F*)f->Get("h_UserDef_RSGMass_RSG3TeVP2_A");
TH1F *S2A=(TH1F*)f->Get("h_UserDef_RSGMass_RSG4TeVP2_A");
TH1F *S3A=(TH1F*)f->Get("h_UserDef_RSGMass_RSG5TeVP2_A");
TH1F *B1A=(TH1F*)f->Get("h_UserDef_RSGMass_TTMttP2_A");
TH1F *B2A=(TH1F*)f->Get("h_UserDef_RSGMass_QCDMjjP2_A");



TH1F *S1B=(TH1F*)f->Get("h_UserDef_RSGMass_RSG3TeVP2_B");
TH1F *S2B=(TH1F*)f->Get("h_UserDef_RSGMass_RSG4TeVP2_B");
TH1F *S3B=(TH1F*)f->Get("h_UserDef_RSGMass_RSG5TeVP2_B");
TH1F *B1B=(TH1F*)f->Get("h_UserDef_RSGMass_TTMttP2_B");
TH1F *B2B=(TH1F*)f->Get("h_UserDef_RSGMass_QCDMjjP2_B");

TH1F *S1C=(TH1F*)f->Get("h_UserDef_RSGMass_RSG3TeVP2_C");
TH1F *S2C=(TH1F*)f->Get("h_UserDef_RSGMass_RSG4TeVP2_C");
TH1F *S3C=(TH1F*)f->Get("h_UserDef_RSGMass_RSG5TeVP2_C");
TH1F *B1C=(TH1F*)f->Get("h_UserDef_RSGMass_TTMttP2_C");
TH1F *B2C=(TH1F*)f->Get("h_UserDef_RSGMass_QCDMjjP2_C");


TH1F *S1D=(TH1F*)f->Get("h_UserDef_RSGMass_RSG3TeVP2_D");
TH1F *S2D=(TH1F*)f->Get("h_UserDef_RSGMass_RSG4TeVP2_D");
TH1F *S3D=(TH1F*)f->Get("h_UserDef_RSGMass_RSG5TeVP2_D");
TH1F *B1D=(TH1F*)f->Get("h_UserDef_RSGMass_TTMttP2_D");
TH1F *B2D=(TH1F*)f->Get("h_UserDef_RSGMass_QCDMjjP2_D");

TH1F *S1E=(TH1F*)f->Get("h_UserDef_RSGMass_RSG3TeVP2_E");
TH1F *S2E=(TH1F*)f->Get("h_UserDef_RSGMass_RSG4TeVP2_E");
TH1F *S3E=(TH1F*)f->Get("h_UserDef_RSGMass_RSG5TeVP2_E");
TH1F *B1E=(TH1F*)f->Get("h_UserDef_RSGMass_TTMttP2_E");
TH1F *B2E=(TH1F*)f->Get("h_UserDef_RSGMass_QCDMjjP2_E");

TH1F *S1F=(TH1F*)f->Get("h_UserDef_RSGMass_RSG3TeVP2_F");
TH1F *S2F=(TH1F*)f->Get("h_UserDef_RSGMass_RSG4TeVP2_F");
TH1F *S3F=(TH1F*)f->Get("h_UserDef_RSGMass_RSG5TeVP2_F");
TH1F *B1F=(TH1F*)f->Get("h_UserDef_RSGMass_TTMttP2_F");
TH1F *B2F=(TH1F*)f->Get("h_UserDef_RSGMass_QCDMjjP2_F");


TPaveText *tpav_txtA = new TPaveText(0.583612,0.6491319,0.8779264,0.9210069,"brNDC");
    tpav_txtA->SetBorderSize(0);
    tpav_txtA->SetFillStyle(0);
    tpav_txtA->SetTextAlign(11);
    tpav_txtA->SetTextFont(42);
    tpav_txtA->SetTextSize(0.04);
    //tpav_txt->AddText("RSGluon#rightarrow t#bar{t}");
    //tpav_txt->AddText("RSGluon Mass: 5 TeV");
    tpav_txtA->AddText("Anti-kt (R=0.8)");
    tpav_txtA->AddText("PF+PUPPI,PU200");
    tpav_txtA->AddText("105<SDmass<210 GeV");
    tpav_txtA->AddText("#tau_{3}/#tau_{2} <0.65");
    tpav_txtA->AddText("cat. A: #Delta Y < 1.0, 0 b ");
 

TPaveText *tpav_txtB = new TPaveText(0.583612,0.6491319,0.8779264,0.9210069,"brNDC");
    tpav_txtB->SetBorderSize(0);
    tpav_txtB->SetFillStyle(0);
    tpav_txtB->SetTextAlign(11);
    tpav_txtB->SetTextFont(42);
    tpav_txtB->SetTextSize(0.04);
    //tpav_txt->AddText("RSGluon#rightarrow t#bar{t}");
    //tpav_txt->AddText("RSGluon Mass: 5 TeV");
    tpav_txtB->AddText("Anti-kt (R=0.8)");
    tpav_txtB->AddText("PF+PUPPI,PU200");
    tpav_txtB->AddText("105<SDmass<210 GeV");
    tpav_txtB->AddText("#tau_{3}/#tau_{2} <0.65");
    tpav_txtB->AddText("cat. B: #Delta Y < 1.0, 1 b ");



TPaveText *tpav_txtC = new TPaveText(0.583612,0.6491319,0.8779264,0.9210069,"brNDC");
    tpav_txtC->SetBorderSize(0);
    tpav_txtC->SetFillStyle(0);
    tpav_txtC->SetTextAlign(11);
    tpav_txtC->SetTextFont(42);
    tpav_txtC->SetTextSize(0.04);
    //tpav_txt->AddText("RSGluon#rightarrow t#bar{t}");
    //tpav_txt->AddText("RSGluon Mass: 5 TeV");
    tpav_txtC->AddText("Anti-kt (R=0.8)");
    tpav_txtC->AddText("PF+PUPPI,PU200");
    tpav_txtC->AddText("105<SDmass<210 GeV");
    tpav_txtC->AddText("#tau_{3}/#tau_{2} <0.65");
    tpav_txtC->AddText("cat. C: #Delta Y < 1.0, 2 b ");




TPaveText *tpav_txtD = new TPaveText(0.583612,0.6491319,0.8779264,0.9210069,"brNDC");
    tpav_txtD->SetBorderSize(0);
    tpav_txtD->SetFillStyle(0);
    tpav_txtD->SetTextAlign(11);
    tpav_txtD->SetTextFont(42);
    tpav_txtD->SetTextSize(0.04);
    //tpav_txt->AddText("RSGluon#rightarrow t#bar{t}");
    //tpav_txt->AddText("RSGluon Mass: 5 TeV");
    tpav_txtD->AddText("Anti-kt (R=0.8)");
    tpav_txtD->AddText("PF+PUPPI,PU200");
    tpav_txtD->AddText("105<SDmass<210 GeV");
    tpav_txtD->AddText("#tau_{3}/#tau_{2} <0.65");
    tpav_txtD->AddText("cat. D: #Delta Y < 1.0, 0 b ");



TPaveText *tpav_txtE = new TPaveText(0.583612,0.6491319,0.8779264,0.9210069,"brNDC");
    tpav_txtE->SetBorderSize(0);
    tpav_txtE->SetFillStyle(0);
    tpav_txtE->SetTextAlign(11);
    tpav_txtE->SetTextFont(42);
    tpav_txtE->SetTextSize(0.04);
    //tpav_txt->AddText("RSGluon#rightarrow t#bar{t}");
    //tpav_txt->AddText("RSGluon Mass: 5 TeV");
    tpav_txtE->AddText("Anti-kt (R=0.8)");
    tpav_txtE->AddText("PF+PUPPI,PU200");
    tpav_txtE->AddText("105<SDmass<210 GeV");
    tpav_txtE->AddText("#tau_{3}/#tau_{2} <0.65");
    tpav_txtE->AddText("cat. E: #Delta Y < 1.0, 1 b ");


TPaveText *tpav_txtF = new TPaveText(0.583612,0.6491319,0.8779264,0.9210069,"brNDC");
    tpav_txtF->SetBorderSize(0);
    tpav_txtF->SetFillStyle(0);
    tpav_txtF->SetTextAlign(11);
    tpav_txtF->SetTextFont(42);
    tpav_txtF->SetTextSize(0.04);
    //tpav_txt->AddText("RSGluon#rightarrow t#bar{t}");
    //tpav_txt->AddText("RSGluon Mass: 5 TeV");
    tpav_txtF->AddText("Anti-kt (R=0.8)");
    tpav_txtF->AddText("PF+PUPPI,PU200");
    tpav_txtF->AddText("105<SDmass<210 GeV");
    tpav_txtF->AddText("#tau_{3}/#tau_{2} <0.65");
    tpav_txtF->AddText("cat. E: #Delta Y < 1.0, 2 b ");


//plotS3B2D0("t#bar{t} invariant mass [GeV]",tpav_txtA,S1A,"3TeV",S2A,"4TeV",S3A,"5TeV",B1A,"t#bar{t}",B2A,"QCD");

//plotS3B2D0("t#bar{t} invariant mass [GeV]",tpav_txtB,S1B,"3TeV",S2B,"4TeV",S3B,"5TeV",B1B,"t#bar{t}",B2B,"QCD");

//plotS3B2D0("t#bar{t} invariant mass [GeV]",tpav_txtC,S1C,"3TeV",S2C,"4TeV",S3C,"5TeV",B1C,"t#bar{t}",B2C,"QCD");

//plotS3B2D0("t#bar{t} invariant mass [GeV]",tpav_txtD,S1D,"3TeV",S2D,"4TeV",S3D,"5TeV",B1D,"t#bar{t}",B2D,"QCD");

plotS3B2D0("t#bar{t} invariant mass [GeV]",tpav_txtE,S1E,"3TeV",S2E,"4TeV",S3E,"5TeV",B1E,"t#bar{t}",B2E,"QCD");

//plotS3B2D0("t#bar{t} invariant mass [GeV]",tpav_txtF,S1F,"3TeV",S2F,"4TeV",S3F,"5TeV",B1F,"t#bar{t}",B2F,"QCD");



///making datacards


  TFile *flimitA=new TFile("LimitARS3.root","RECREATE");

  S1A->SetName("signalA"); 
  B1A->SetName("ttbarA");
  B2A->SetName("QCDA");
  S1A->SetTitle("signalA"); 
  B1A->SetTitle("ttbarA");
  B2A->SetTitle("QCDA");

  TH1F *h_obsA = (TH1F*)B1A->Clone();
  h_obsA->Add(B2A);
  h_obsA->SetName("data_obs");
  h_obsA->SetTitle("data_obs");
  h_obsA->Write("data_obs",TObject::kWriteDelete);



  S1A->Write("signalA",TObject::kWriteDelete);
  B1A->Write("ttbarA",TObject::kWriteDelete);
  B2A->Write("QCDA",TObject::kWriteDelete);

  ofstream writeA;
  writeA.open("DatacardA3TeV.txt");

  

  writeA<<"imax 1"<<endl;
  writeA<<"jmax 2"<<endl;
  writeA<<"kmax *"<<endl;
  writeA<<"---------------"<<endl;
  writeA<<"shapes * * LimitARS3.root $PROCESS"<<endl;
  writeA<<"---------------"<<endl;
  writeA<<"bin 1"<<endl;

  double sig1A=S1A->Integral();
  double obsA=B1A->Integral()+B2A->Integral();
  double bkg1A=B1A->Integral();
  double bkg2A=B2A->Integral();

  writeA<<"observation  ";
  writeA<<obsA<<endl;
  writeA<<"------------------------------"<<endl;
  writeA<<"bin             1          1          1"<<endl;
  writeA<<"process         signalA    ttbarA     QCDA"<<endl;
  writeA<<"process         0          1          2"<<endl;
  writeA<<"rate            ";writeA<<sig1A<<" ";writeA<<bkg1A<<" ";writeA<<bkg2A<<endl;
  writeA<<"--------------------------------"<<endl;
  writeA<<"lumi     lnN    1.015       1.015         1.015"<<endl;
  writeA<<"xsec     lnN    1.0         1.08          1.08"<<endl;
  
  flimitA->Close();

///////////////////////////////////////////////////////////////////////////////  

  TFile *flimitB=new TFile("LimitBRS3.root","RECREATE");

  S1B->SetName("signalB"); 
  B1B->SetName("ttbarB");
  B2B->SetName("QCDB");
  S1B->SetTitle("signalB"); 
  B1B->SetTitle("ttbarB");
  B2B->SetTitle("QCDB");

  TH1F *h_obsB = (TH1F*)B1B->Clone();
  h_obsB->Add(B2B);
  h_obsB->SetName("data_obs");
  h_obsB->SetTitle("data_obs");
  h_obsB->Write("data_obs",TObject::kWriteDelete);



  S1B->Write("signalB",TObject::kWriteDelete);
  B1B->Write("ttbarB",TObject::kWriteDelete);
  B2B->Write("QCDB",TObject::kWriteDelete);
  ofstream writeB;
  writeB.open ("DatacardB3TeV.txt");
  writeB<<"imax 1"<<endl;
  writeB<<"jmax 2"<<endl;
  writeB<<"kmax *"<<endl;
  writeB<<"---------------"<<endl;
  writeB<<"shapes * * LimitBRS3.root $PROCESS"<<endl;
  writeB<<"---------------"<<endl;
  writeB<<"bin 1"<<endl;

  double sig1B=S1B->Integral();
  double obsB=B1B->Integral()+B2B->Integral();
  double bkg1B=B1B->Integral();
  double bkg2B=B2B->Integral();

  writeB<<"observation  ";
  writeB<<obsB<<endl;
  writeB<<"------------------------------"<<endl;
  writeB<<"bin             1          1          1"<<endl;
  writeB<<"process         signalB    ttbarB     QCDB"<<endl;
  writeB<<"process         0          1          2"<<endl;
  writeB<<"rate            ";writeB<<sig1B<<" ";writeB<<bkg1B<<" ";writeB<<bkg2B<<endl;
  writeB<<"--------------------------------"<<endl;
  writeB<<"lumi     lnN    1.015       1.015         1.015"<<endl;
  writeB<<"xsec     lnN    1.0         1.08          1.08"<<endl;
  
  flimitB->Close();


 ////////////////////////////////////////////////////////////////////////////////////////////////////////



TFile *flimitC=new TFile("LimitCRS3.root","RECREATE");

  S1C->SetName("signalC"); 
  B1C->SetName("ttbarC");
  B2C->SetName("QCDC");
  S1C->SetTitle("signalC"); 
  B1C->SetTitle("ttbarC");
  B2C->SetTitle("QCDC");

  TH1F *h_obsC = (TH1F*)B1C->Clone();
  h_obsC->Add(B2C);
  h_obsC->SetName("data_obs");
  h_obsC->SetTitle("data_obs");
  h_obsC->Write("data_obs",TObject::kWriteDelete);



  S1C->Write("signalC",TObject::kWriteDelete);
  B1C->Write("ttbarC",TObject::kWriteDelete);
  B2C->Write("QCDC",TObject::kWriteDelete);
  ofstream writeC;
  writeC.open ("DatacardC3TeV.txt");
  writeC<<"imax 1"<<endl;
  writeC<<"jmax 2"<<endl;
  writeC<<"kmax *"<<endl;
  writeC<<"---------------"<<endl;
  writeC<<"shapes * * LimitCRS3.root $PROCESS"<<endl;
  writeC<<"---------------"<<endl;
  writeC<<"bin 1"<<endl;

  double sig1C=S1C->Integral();
  double obsC=B1C->Integral()+B2C->Integral();
  double bkg1C=B1C->Integral();
  double bkg2C=B2C->Integral();

  writeC<<"observation  ";
  writeC<<obsC<<endl;
  writeC<<"------------------------------"<<endl;
  writeC<<"bin             1          1          1"<<endl;
  writeC<<"process         signalC    ttbarC     QCDC"<<endl;
  writeC<<"process         0          1          2"<<endl;
  writeC<<"rate            ";writeC<<sig1C<<" ";writeC<<bkg1C<<" ";writeC<<bkg2C<<endl;
  writeC<<"--------------------------------"<<endl;
  writeC<<"lumi     lnN    1.015       1.015         1.015"<<endl;
  writeC<<"xsec     lnN    1.0         1.08          1.08"<<endl;
  
  flimitC->Close();



  ////////////////////////////////////////////////////////////////////////////////////////////////


  TFile *flimitD=new TFile("LimitDRS3.root","RECREATE");

  S1D->SetName("signalD"); 
  B1D->SetName("ttbarD");
  B2D->SetName("QCDD");
  S1D->SetTitle("signalD"); 
  B1D->SetTitle("ttbarD");
  B2D->SetTitle("QCDD");

  TH1F *h_obsD = (TH1F*)B1D->Clone();
  h_obsD->Add(B2D);
  h_obsD->SetName("data_obs");
  h_obsD->SetTitle("data_obs");
  h_obsD->Write("data_obs",TObject::kWriteDelete);



  S1D->Write("signalD",TObject::kWriteDelete);
  B1D->Write("ttbarD",TObject::kWriteDelete);
  B2D->Write("QCDD",TObject::kWriteDelete);
  ofstream writeD;
  writeD.open ("DatacardD3TeV.txt");
  writeD<<"imax 1"<<endl;
  writeD<<"jmax 2"<<endl;
  writeD<<"kmax *"<<endl;
  writeD<<"---------------"<<endl;
  writeD<<"shapes * * LimitDRS3.root $PRODESS"<<endl;
  writeD<<"---------------"<<endl;
  writeD<<"bin 1"<<endl;

  double sig1D=S1D->Integral();
  double obsD=B1D->Integral()+B2D->Integral();
  double bkg1D=B1D->Integral();
  double bkg2D=B2D->Integral();

  writeD<<"observation  ";
  writeD<<obsD<<endl;
  writeD<<"------------------------------"<<endl;
  writeD<<"bin             1          1          1"<<endl;
  writeD<<"process         signalD    ttbarD     QCDD"<<endl;
  writeD<<"process         0          1          2"<<endl;
  writeD<<"rate            ";writeD<<sig1D<<" ";writeD<<bkg1D<<" ";writeD<<bkg2D<<endl;
  writeD<<"--------------------------------"<<endl;
  writeD<<"lumi     lnN    1.015       1.015         1.015"<<endl;
  writeD<<"xsec     lnN    1.0         1.08          1.08"<<endl;
  
  flimitD->Close();





 ///////////////////////////////////////////////////////////////////////////////////////////////



  TFile *flimitE=new TFile("LimitERS3.root","RECREATE");

  S1E->SetName("signalE"); 
  B1E->SetName("ttbarE");
  B2E->SetName("QCDE");
  S1E->SetTitle("signalE"); 
  B1E->SetTitle("ttbarE");
  B2E->SetTitle("QCDE");

  TH1F *h_obsE = (TH1F*)B1E->Clone();
  h_obsE->Add(B2E);
  h_obsE->SetName("data_obs");
  h_obsE->SetTitle("data_obs");
  h_obsE->Write("data_obs",TObject::kWriteDelete);



  S1E->Write("signalE",TObject::kWriteDelete);
  B1E->Write("ttbarE",TObject::kWriteDelete);
  B2E->Write("QCDE",TObject::kWriteDelete);
  ofstream writeE;
  writeE.open ("DatacardE3TeV.txt");
  writeE<<"imax 1"<<endl;
  writeE<<"jmax 2"<<endl;
  writeE<<"kmax *"<<endl;
  writeE<<"---------------"<<endl;
  writeE<<"shapes * * LimitERS3.root $PROEESS"<<endl;
  writeE<<"---------------"<<endl;
  writeE<<"bin 1"<<endl;

  double sig1E=S1E->Integral();
  double obsE=B1E->Integral()+B2E->Integral();
  double bkg1E=B1E->Integral();
  double bkg2E=B2E->Integral();

  writeE<<"observation  ";
  writeE<<obsE<<endl;
  writeE<<"------------------------------"<<endl;
  writeE<<"bin             1          1          1"<<endl;
  writeE<<"process         signalE    ttbarE     QCDE"<<endl;
  writeE<<"process         0          1          2"<<endl;
  writeE<<"rate            ";writeE<<sig1E<<" ";writeE<<bkg1E<<" ";writeE<<bkg2E<<endl;
  writeE<<"--------------------------------"<<endl;
  writeE<<"lumi     lnN    1.015       1.015         1.015"<<endl;
  writeE<<"xsec     lnN    1.0         1.08          1.08"<<endl;
  
  flimitE->Close();
 ///////////////////////////////////////////////

  TFile *flimitF=new TFile("LimitFRS3.root","RECREATE");

  S1F->SetName("signalF"); 
  B1F->SetName("ttbarF");
  B2F->SetName("QCDF");
  S1F->SetTitle("signalF"); 
  B1F->SetTitle("ttbarF");
  B2F->SetTitle("QCDF");

  TH1F *h_obsF = (TH1F*)B1F->Clone();
  h_obsF->Add(B2F);
  h_obsF->SetName("data_obs");
  h_obsF->SetTitle("data_obs");
  h_obsF->Write("data_obs",TObject::kWriteDelete);



  S1F->Write("signalF",TObject::kWriteDelete);
  B1F->Write("ttbarF",TObject::kWriteDelete);
  B2F->Write("QCDF",TObject::kWriteDelete);
  ofstream writeF;
  writeF.open ("DatacardF3TeV.txt");
  writeF<<"imax 1"<<endl;
  writeF<<"jmax 2"<<endl;
  writeF<<"kmax *"<<endl;
  writeF<<"---------------"<<endl;
  writeF<<"shapes * * LimitFRS3.root $PROFESS"<<endl;
  writeF<<"---------------"<<endl;
  writeF<<"bin 1"<<endl;

  double sig1F=S1F->Integral();
  double obsF=B1F->Integral()+B2F->Integral();
  double bkg1F=B1F->Integral();
  double bkg2F=B2F->Integral();

  writeF<<"observation  ";
  writeF<<obsF<<endl;
  writeF<<"------------------------------"<<endl;
  writeF<<"bin             1          1          1"<<endl;
  writeF<<"process         signalF    ttbarF     QCDF"<<endl;
  writeF<<"process         0          1          2"<<endl;
  writeF<<"rate            ";writeF<<sig1F<<" ";writeF<<bkg1F<<" ";writeF<<bkg2F<<endl;
  writeF<<"--------------------------------"<<endl;
  writeF<<"lumi     lnN    1.015       1.015         1.015"<<endl;
  writeF<<"xsec     lnN    1.0         1.08          1.08"<<endl;
  
  flimitF->Close();
















}

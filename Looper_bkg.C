template <class classInst, class HistogramCreater> class Looper_bkg{
public:

void Loop(TChain *tr,classInst& read,HistogramCreater hs, string ProcessName);

bool Baseline(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool ProcessCuts(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool A(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool B(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool C(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool D(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool E(TChain *tr,classInst& read,string ProcessName,int iEvent);

bool F(TChain *tr,classInst& read,string ProcessName,int iEvent);

double UserDef_RSGPt(TChain *tr,classInst& read,string ProcessName,int iEvent);
double UserDef_RSGMass(TChain *tr,classInst& read,string ProcessName,int iEvent);
double UserDef_DeltaRJ1J2(TChain *tr,classInst& read,string ProcessName,int iEvent);
double UserDef_DeltaEtaJ1J2(TChain *tr,classInst& read,string ProcessName,int iEvent);
double UserDef_DeltaPhiJ1J2(TChain *tr,classInst& read,string ProcessName,int iEvent);
};

template <class classInst,class HistogramCreater> void Looper_bkg<classInst,HistogramCreater>::Loop(TChain *tr,classInst& read,HistogramCreater hs,string ProcessName)

{//looper definition

string processes[8]={ "RSG3TeVP2"  , "RSG4TeVP2"  , "RSG5TeVP2"  , "TTinclP2"  , "TTMttP2"  , "QCDFlatP2"  , "QCDMjjP2"  , "Data"  };
double xsecWeights[8]={0.297252*0.12,0.0718248*0.12,0.0231878*0.12,90.2367*0.12,0.0672527*0.12,8.99789e+07*0.12,7.82602*.12,1};
string dataprocesses[1]={
"Data"  };
const int processesSize=8;
            auto it=std::find(processes,processes+processesSize,ProcessName);
            int processInt=it-processes;
       std::cout<<"Total number of entries: "<<tr->GetEntries()<<std::endl;

       for(int iEv=0;iEv<tr->GetEntries();iEv++){// event loop

       tr->GetEntry(iEv);

          if(iEv % 1000==0)std::cout<<"Running on "<<ProcessName<<" event no: "<<iEv<<"---completed : "<<(float(iEv)/float(tr->GetEntries()))*100<<" %"<<std::endl;

            if(Baseline(tr,read,ProcessName,iEv)  && ProcessCuts(tr,read,ProcessName, iEv)){ //Baseline for this processn

            double EventWeight=1;
            EventWeight=xsecWeights[processInt];
if(A(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][0]->Fill(read.npu,EventWeight); 
         hs.h_[1][processInt][0]->Fill(read.NumAK8Jets,EventWeight); 
         hs.h_[2][processInt][0]->Fill(read.Jet0->at(0).Eta(),EventWeight); 
         hs.h_[3][processInt][0]->Fill(read.Jet1->at(0).Eta(),EventWeight); 
         hs.h_[4][processInt][0]->Fill(read.Jet0->at(0).Phi(),EventWeight); 
         hs.h_[5][processInt][0]->Fill(read.Jet1->at(0).Phi(),EventWeight); 
         hs.h_[6][processInt][0]->Fill(read.Jet0->at(0).Pt(),EventWeight); 
         hs.h_[7][processInt][0]->Fill(read.Jet1->at(0).Pt(),EventWeight); 
         hs.h_[8][processInt][0]->Fill(read.Jet0->at(0).M(),EventWeight); 
         hs.h_[9][processInt][0]->Fill(read.Jet1->at(0).M(),EventWeight); 
         hs.h_[10][processInt][0]->Fill(read.Jet0SDmass,EventWeight); 
         hs.h_[11][processInt][0]->Fill(read.Jet1SDmass,EventWeight); 
         hs.h_[12][processInt][0]->Fill(read.Jet0SDmass*read.Jet0L2RelativeCorr,EventWeight); 
         hs.h_[13][processInt][0]->Fill(read.Jet1SDmass*read.Jet1L2RelativeCorr,EventWeight); 
         hs.h_[14][processInt][0]->Fill(read.Jet0Tau32,EventWeight); 
         hs.h_[15][processInt][0]->Fill(read.Jet1Tau32,EventWeight); 
         hs.h_[16][processInt][0]->Fill(read.Jet0Tau2/read.Jet0Tau1,EventWeight); 
         hs.h_[17][processInt][0]->Fill(read.Jet1Tau2/read.Jet1Tau1,EventWeight); 
         hs.h_[18][processInt][0]->Fill(read.Jet0SDmaxbdisc,EventWeight); 
         hs.h_[19][processInt][0]->Fill(read.Jet1SDmaxbdisc,EventWeight); 
         hs.h_[20][processInt][0]->Fill(read.Jet0SDsubjet0bdisc,EventWeight); 
         hs.h_[21][processInt][0]->Fill(read.Jet0SDsubjet1bdisc,EventWeight); 
         hs.h_[22][processInt][0]->Fill(read.Jet1SDsubjet0bdisc,EventWeight); 
         hs.h_[23][processInt][0]->Fill(read.Jet1SDsubjet1bdisc,EventWeight); 
         hs.h_[24][processInt][0]->Fill(read.Jet0Mult,EventWeight); 
         hs.h_[25][processInt][0]->Fill(read.Jet1Mult,EventWeight); 
         hs.h_[26][processInt][0]->Fill(read.Jet0CHF,EventWeight); 
         hs.h_[27][processInt][0]->Fill(read.Jet1CHF,EventWeight); 
         hs.h_[28][processInt][0]->Fill(UserDef_RSGPt(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[29][processInt][0]->Fill(UserDef_RSGMass(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[30][processInt][0]->Fill(UserDef_DeltaRJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[31][processInt][0]->Fill(UserDef_DeltaEtaJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[32][processInt][0]->Fill(UserDef_DeltaPhiJ1J2(tr,read,ProcessName,iEv),EventWeight); 
}

if(B(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][1]->Fill(read.npu,EventWeight); 
         hs.h_[1][processInt][1]->Fill(read.NumAK8Jets,EventWeight); 
         hs.h_[2][processInt][1]->Fill(read.Jet0->at(0).Eta(),EventWeight); 
         hs.h_[3][processInt][1]->Fill(read.Jet1->at(0).Eta(),EventWeight); 
         hs.h_[4][processInt][1]->Fill(read.Jet0->at(0).Phi(),EventWeight); 
         hs.h_[5][processInt][1]->Fill(read.Jet1->at(0).Phi(),EventWeight); 
         hs.h_[6][processInt][1]->Fill(read.Jet0->at(0).Pt(),EventWeight); 
         hs.h_[7][processInt][1]->Fill(read.Jet1->at(0).Pt(),EventWeight); 
         hs.h_[8][processInt][1]->Fill(read.Jet0->at(0).M(),EventWeight); 
         hs.h_[9][processInt][1]->Fill(read.Jet1->at(0).M(),EventWeight); 
         hs.h_[10][processInt][1]->Fill(read.Jet0SDmass,EventWeight); 
         hs.h_[11][processInt][1]->Fill(read.Jet1SDmass,EventWeight); 
         hs.h_[12][processInt][1]->Fill(read.Jet0SDmass*read.Jet0L2RelativeCorr,EventWeight); 
         hs.h_[13][processInt][1]->Fill(read.Jet1SDmass*read.Jet1L2RelativeCorr,EventWeight); 
         hs.h_[14][processInt][1]->Fill(read.Jet0Tau32,EventWeight); 
         hs.h_[15][processInt][1]->Fill(read.Jet1Tau32,EventWeight); 
         hs.h_[16][processInt][1]->Fill(read.Jet0Tau2/read.Jet0Tau1,EventWeight); 
         hs.h_[17][processInt][1]->Fill(read.Jet1Tau2/read.Jet1Tau1,EventWeight); 
         hs.h_[18][processInt][1]->Fill(read.Jet0SDmaxbdisc,EventWeight); 
         hs.h_[19][processInt][1]->Fill(read.Jet1SDmaxbdisc,EventWeight); 
         hs.h_[20][processInt][1]->Fill(read.Jet0SDsubjet0bdisc,EventWeight); 
         hs.h_[21][processInt][1]->Fill(read.Jet0SDsubjet1bdisc,EventWeight); 
         hs.h_[22][processInt][1]->Fill(read.Jet1SDsubjet0bdisc,EventWeight); 
         hs.h_[23][processInt][1]->Fill(read.Jet1SDsubjet1bdisc,EventWeight); 
         hs.h_[24][processInt][1]->Fill(read.Jet0Mult,EventWeight); 
         hs.h_[25][processInt][1]->Fill(read.Jet1Mult,EventWeight); 
         hs.h_[26][processInt][1]->Fill(read.Jet0CHF,EventWeight); 
         hs.h_[27][processInt][1]->Fill(read.Jet1CHF,EventWeight); 
         hs.h_[28][processInt][1]->Fill(UserDef_RSGPt(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[29][processInt][1]->Fill(UserDef_RSGMass(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[30][processInt][1]->Fill(UserDef_DeltaRJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[31][processInt][1]->Fill(UserDef_DeltaEtaJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[32][processInt][1]->Fill(UserDef_DeltaPhiJ1J2(tr,read,ProcessName,iEv),EventWeight); 
}

if(C(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][2]->Fill(read.npu,EventWeight); 
         hs.h_[1][processInt][2]->Fill(read.NumAK8Jets,EventWeight); 
         hs.h_[2][processInt][2]->Fill(read.Jet0->at(0).Eta(),EventWeight); 
         hs.h_[3][processInt][2]->Fill(read.Jet1->at(0).Eta(),EventWeight); 
         hs.h_[4][processInt][2]->Fill(read.Jet0->at(0).Phi(),EventWeight); 
         hs.h_[5][processInt][2]->Fill(read.Jet1->at(0).Phi(),EventWeight); 
         hs.h_[6][processInt][2]->Fill(read.Jet0->at(0).Pt(),EventWeight); 
         hs.h_[7][processInt][2]->Fill(read.Jet1->at(0).Pt(),EventWeight); 
         hs.h_[8][processInt][2]->Fill(read.Jet0->at(0).M(),EventWeight); 
         hs.h_[9][processInt][2]->Fill(read.Jet1->at(0).M(),EventWeight); 
         hs.h_[10][processInt][2]->Fill(read.Jet0SDmass,EventWeight); 
         hs.h_[11][processInt][2]->Fill(read.Jet1SDmass,EventWeight); 
         hs.h_[12][processInt][2]->Fill(read.Jet0SDmass*read.Jet0L2RelativeCorr,EventWeight); 
         hs.h_[13][processInt][2]->Fill(read.Jet1SDmass*read.Jet1L2RelativeCorr,EventWeight); 
         hs.h_[14][processInt][2]->Fill(read.Jet0Tau32,EventWeight); 
         hs.h_[15][processInt][2]->Fill(read.Jet1Tau32,EventWeight); 
         hs.h_[16][processInt][2]->Fill(read.Jet0Tau2/read.Jet0Tau1,EventWeight); 
         hs.h_[17][processInt][2]->Fill(read.Jet1Tau2/read.Jet1Tau1,EventWeight); 
         hs.h_[18][processInt][2]->Fill(read.Jet0SDmaxbdisc,EventWeight); 
         hs.h_[19][processInt][2]->Fill(read.Jet1SDmaxbdisc,EventWeight); 
         hs.h_[20][processInt][2]->Fill(read.Jet0SDsubjet0bdisc,EventWeight); 
         hs.h_[21][processInt][2]->Fill(read.Jet0SDsubjet1bdisc,EventWeight); 
         hs.h_[22][processInt][2]->Fill(read.Jet1SDsubjet0bdisc,EventWeight); 
         hs.h_[23][processInt][2]->Fill(read.Jet1SDsubjet1bdisc,EventWeight); 
         hs.h_[24][processInt][2]->Fill(read.Jet0Mult,EventWeight); 
         hs.h_[25][processInt][2]->Fill(read.Jet1Mult,EventWeight); 
         hs.h_[26][processInt][2]->Fill(read.Jet0CHF,EventWeight); 
         hs.h_[27][processInt][2]->Fill(read.Jet1CHF,EventWeight); 
         hs.h_[28][processInt][2]->Fill(UserDef_RSGPt(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[29][processInt][2]->Fill(UserDef_RSGMass(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[30][processInt][2]->Fill(UserDef_DeltaRJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[31][processInt][2]->Fill(UserDef_DeltaEtaJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[32][processInt][2]->Fill(UserDef_DeltaPhiJ1J2(tr,read,ProcessName,iEv),EventWeight); 
}

if(D(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][3]->Fill(read.npu,EventWeight); 
         hs.h_[1][processInt][3]->Fill(read.NumAK8Jets,EventWeight); 
         hs.h_[2][processInt][3]->Fill(read.Jet0->at(0).Eta(),EventWeight); 
         hs.h_[3][processInt][3]->Fill(read.Jet1->at(0).Eta(),EventWeight); 
         hs.h_[4][processInt][3]->Fill(read.Jet0->at(0).Phi(),EventWeight); 
         hs.h_[5][processInt][3]->Fill(read.Jet1->at(0).Phi(),EventWeight); 
         hs.h_[6][processInt][3]->Fill(read.Jet0->at(0).Pt(),EventWeight); 
         hs.h_[7][processInt][3]->Fill(read.Jet1->at(0).Pt(),EventWeight); 
         hs.h_[8][processInt][3]->Fill(read.Jet0->at(0).M(),EventWeight); 
         hs.h_[9][processInt][3]->Fill(read.Jet1->at(0).M(),EventWeight); 
         hs.h_[10][processInt][3]->Fill(read.Jet0SDmass,EventWeight); 
         hs.h_[11][processInt][3]->Fill(read.Jet1SDmass,EventWeight); 
         hs.h_[12][processInt][3]->Fill(read.Jet0SDmass*read.Jet0L2RelativeCorr,EventWeight); 
         hs.h_[13][processInt][3]->Fill(read.Jet1SDmass*read.Jet1L2RelativeCorr,EventWeight); 
         hs.h_[14][processInt][3]->Fill(read.Jet0Tau32,EventWeight); 
         hs.h_[15][processInt][3]->Fill(read.Jet1Tau32,EventWeight); 
         hs.h_[16][processInt][3]->Fill(read.Jet0Tau2/read.Jet0Tau1,EventWeight); 
         hs.h_[17][processInt][3]->Fill(read.Jet1Tau2/read.Jet1Tau1,EventWeight); 
         hs.h_[18][processInt][3]->Fill(read.Jet0SDmaxbdisc,EventWeight); 
         hs.h_[19][processInt][3]->Fill(read.Jet1SDmaxbdisc,EventWeight); 
         hs.h_[20][processInt][3]->Fill(read.Jet0SDsubjet0bdisc,EventWeight); 
         hs.h_[21][processInt][3]->Fill(read.Jet0SDsubjet1bdisc,EventWeight); 
         hs.h_[22][processInt][3]->Fill(read.Jet1SDsubjet0bdisc,EventWeight); 
         hs.h_[23][processInt][3]->Fill(read.Jet1SDsubjet1bdisc,EventWeight); 
         hs.h_[24][processInt][3]->Fill(read.Jet0Mult,EventWeight); 
         hs.h_[25][processInt][3]->Fill(read.Jet1Mult,EventWeight); 
         hs.h_[26][processInt][3]->Fill(read.Jet0CHF,EventWeight); 
         hs.h_[27][processInt][3]->Fill(read.Jet1CHF,EventWeight); 
         hs.h_[28][processInt][3]->Fill(UserDef_RSGPt(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[29][processInt][3]->Fill(UserDef_RSGMass(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[30][processInt][3]->Fill(UserDef_DeltaRJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[31][processInt][3]->Fill(UserDef_DeltaEtaJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[32][processInt][3]->Fill(UserDef_DeltaPhiJ1J2(tr,read,ProcessName,iEv),EventWeight); 
}

if(E(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][4]->Fill(read.npu,EventWeight); 
         hs.h_[1][processInt][4]->Fill(read.NumAK8Jets,EventWeight); 
         hs.h_[2][processInt][4]->Fill(read.Jet0->at(0).Eta(),EventWeight); 
         hs.h_[3][processInt][4]->Fill(read.Jet1->at(0).Eta(),EventWeight); 
         hs.h_[4][processInt][4]->Fill(read.Jet0->at(0).Phi(),EventWeight); 
         hs.h_[5][processInt][4]->Fill(read.Jet1->at(0).Phi(),EventWeight); 
         hs.h_[6][processInt][4]->Fill(read.Jet0->at(0).Pt(),EventWeight); 
         hs.h_[7][processInt][4]->Fill(read.Jet1->at(0).Pt(),EventWeight); 
         hs.h_[8][processInt][4]->Fill(read.Jet0->at(0).M(),EventWeight); 
         hs.h_[9][processInt][4]->Fill(read.Jet1->at(0).M(),EventWeight); 
         hs.h_[10][processInt][4]->Fill(read.Jet0SDmass,EventWeight); 
         hs.h_[11][processInt][4]->Fill(read.Jet1SDmass,EventWeight); 
         hs.h_[12][processInt][4]->Fill(read.Jet0SDmass*read.Jet0L2RelativeCorr,EventWeight); 
         hs.h_[13][processInt][4]->Fill(read.Jet1SDmass*read.Jet1L2RelativeCorr,EventWeight); 
         hs.h_[14][processInt][4]->Fill(read.Jet0Tau32,EventWeight); 
         hs.h_[15][processInt][4]->Fill(read.Jet1Tau32,EventWeight); 
         hs.h_[16][processInt][4]->Fill(read.Jet0Tau2/read.Jet0Tau1,EventWeight); 
         hs.h_[17][processInt][4]->Fill(read.Jet1Tau2/read.Jet1Tau1,EventWeight); 
         hs.h_[18][processInt][4]->Fill(read.Jet0SDmaxbdisc,EventWeight); 
         hs.h_[19][processInt][4]->Fill(read.Jet1SDmaxbdisc,EventWeight); 
         hs.h_[20][processInt][4]->Fill(read.Jet0SDsubjet0bdisc,EventWeight); 
         hs.h_[21][processInt][4]->Fill(read.Jet0SDsubjet1bdisc,EventWeight); 
         hs.h_[22][processInt][4]->Fill(read.Jet1SDsubjet0bdisc,EventWeight); 
         hs.h_[23][processInt][4]->Fill(read.Jet1SDsubjet1bdisc,EventWeight); 
         hs.h_[24][processInt][4]->Fill(read.Jet0Mult,EventWeight); 
         hs.h_[25][processInt][4]->Fill(read.Jet1Mult,EventWeight); 
         hs.h_[26][processInt][4]->Fill(read.Jet0CHF,EventWeight); 
         hs.h_[27][processInt][4]->Fill(read.Jet1CHF,EventWeight); 
         hs.h_[28][processInt][4]->Fill(UserDef_RSGPt(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[29][processInt][4]->Fill(UserDef_RSGMass(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[30][processInt][4]->Fill(UserDef_DeltaRJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[31][processInt][4]->Fill(UserDef_DeltaEtaJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[32][processInt][4]->Fill(UserDef_DeltaPhiJ1J2(tr,read,ProcessName,iEv),EventWeight); 
}

if(F(tr,read,ProcessName,iEv)){
         hs.h_[0][processInt][5]->Fill(read.npu,EventWeight); 
         hs.h_[1][processInt][5]->Fill(read.NumAK8Jets,EventWeight); 
         hs.h_[2][processInt][5]->Fill(read.Jet0->at(0).Eta(),EventWeight); 
         hs.h_[3][processInt][5]->Fill(read.Jet1->at(0).Eta(),EventWeight); 
         hs.h_[4][processInt][5]->Fill(read.Jet0->at(0).Phi(),EventWeight); 
         hs.h_[5][processInt][5]->Fill(read.Jet1->at(0).Phi(),EventWeight); 
         hs.h_[6][processInt][5]->Fill(read.Jet0->at(0).Pt(),EventWeight); 
         hs.h_[7][processInt][5]->Fill(read.Jet1->at(0).Pt(),EventWeight); 
         hs.h_[8][processInt][5]->Fill(read.Jet0->at(0).M(),EventWeight); 
         hs.h_[9][processInt][5]->Fill(read.Jet1->at(0).M(),EventWeight); 
         hs.h_[10][processInt][5]->Fill(read.Jet0SDmass,EventWeight); 
         hs.h_[11][processInt][5]->Fill(read.Jet1SDmass,EventWeight); 
         hs.h_[12][processInt][5]->Fill(read.Jet0SDmass*read.Jet0L2RelativeCorr,EventWeight); 
         hs.h_[13][processInt][5]->Fill(read.Jet1SDmass*read.Jet1L2RelativeCorr,EventWeight); 
         hs.h_[14][processInt][5]->Fill(read.Jet0Tau32,EventWeight); 
         hs.h_[15][processInt][5]->Fill(read.Jet1Tau32,EventWeight); 
         hs.h_[16][processInt][5]->Fill(read.Jet0Tau2/read.Jet0Tau1,EventWeight); 
         hs.h_[17][processInt][5]->Fill(read.Jet1Tau2/read.Jet1Tau1,EventWeight); 
         hs.h_[18][processInt][5]->Fill(read.Jet0SDmaxbdisc,EventWeight); 
         hs.h_[19][processInt][5]->Fill(read.Jet1SDmaxbdisc,EventWeight); 
         hs.h_[20][processInt][5]->Fill(read.Jet0SDsubjet0bdisc,EventWeight); 
         hs.h_[21][processInt][5]->Fill(read.Jet0SDsubjet1bdisc,EventWeight); 
         hs.h_[22][processInt][5]->Fill(read.Jet1SDsubjet0bdisc,EventWeight); 
         hs.h_[23][processInt][5]->Fill(read.Jet1SDsubjet1bdisc,EventWeight); 
         hs.h_[24][processInt][5]->Fill(read.Jet0Mult,EventWeight); 
         hs.h_[25][processInt][5]->Fill(read.Jet1Mult,EventWeight); 
         hs.h_[26][processInt][5]->Fill(read.Jet0CHF,EventWeight); 
         hs.h_[27][processInt][5]->Fill(read.Jet1CHF,EventWeight); 
         hs.h_[28][processInt][5]->Fill(UserDef_RSGPt(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[29][processInt][5]->Fill(UserDef_RSGMass(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[30][processInt][5]->Fill(UserDef_DeltaRJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[31][processInt][5]->Fill(UserDef_DeltaEtaJ1J2(tr,read,ProcessName,iEv),EventWeight); 
         hs.h_[32][processInt][5]->Fill(UserDef_DeltaPhiJ1J2(tr,read,ProcessName,iEv),EventWeight); 
}

               }//Baseline for this process

       }//event loop

}//looper definition

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::Baseline(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(
read. Jet0->size()>0 &&
read. Jet1->size()>0 &&
read. Jet0->at(0).Pt()>400.0 &&
read. Jet1->at(0).Pt()>400.0 &&
read. Jet0->at(0).Eta()<2.4 &&
read. Jet1->at(0).Eta()<2.4
){

return true;

}
else{
return false;

}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::ProcessCuts(TChain *tr,classInst& read,string ProcessName,int iEvent){

if(ProcessName=="RSG5TeVP2"){

return true;
}

if(ProcessName=="RSG4TeVP2"){

return true;
}

if(ProcessName=="RSG3TeVP2"){

return true;
}

if(ProcessName=="TTMttP2"){

return true;
}

if(ProcessName=="TTinclP2"){

return true;
}

if(ProcessName=="QCDMjjP2"){

return true;
}

if(ProcessName=="QCDFlatP2"){

return true;
}

if(ProcessName=="Data"){

return true;
}

return false;
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::A(TChain *tr,classInst& read,string ProcessName,int iEvent){

TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;
double Rap1=0.5*log((Jet1.E()+Jet1.P())/(Jet1.E()-Jet1.P()));double Rap2=0.5*log((Jet2.E()+Jet2.P())/(Jet2.E()-Jet2.P()));
double delY=fabs(Rap1-Rap2);
int NumTags=0;
double CSVM=0.8;
double J1S0=read.Jet0SDsubjet0bdisc;
double J1S1=read.Jet0SDsubjet1bdisc;
double J2S0=read.Jet1SDsubjet0bdisc;
double J2S1=read.Jet1SDsubjet1bdisc;
if(J1S0>CSVM || J1S1 >CSVM){NumTags=NumTags+1;}
if(J2S0>CSVM || J2S1 >CSVM){NumTags=NumTags+1;}
bool catA=false;
bool catB=false;
bool catC=false;
bool catD=false;
bool catE=false;
bool catF=false;
if(delY<1.0 && NumTags==0){catA=true;}
if(delY<1.0 && NumTags==1){catB=true;}
if(delY<1.0 && NumTags==2){catC=true;}
if(delY>1.0 && NumTags==0){catD=true;}
if(delY>1.0 && NumTags==1){catE=true;}
if(delY>1.0 && NumTags==2){catF=true;}
if(read.Jet0SDmass > 105.0 && read.Jet0SDmass< 210. && read.Jet1SDmass>105.0 && read.Jet1SDmass < 210.0 && read.Jet0Tau32 < 0.65 && read.Jet1Tau32 < 0.65 && catA==true){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::B(TChain *tr,classInst& read,string ProcessName,int iEvent){

TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;
double Rap1=0.5*log((Jet1.E()+Jet1.P())/(Jet1.E()-Jet1.P()));double Rap2=0.5*log((Jet2.E()+Jet2.P())/(Jet2.E()-Jet2.P()));
double delY=fabs(Rap1-Rap2);
int NumTags=0;
double CSVM=0.8;
double J1S0=read.Jet0SDsubjet0bdisc;
double J1S1=read.Jet0SDsubjet1bdisc;
double J2S0=read.Jet1SDsubjet0bdisc;
double J2S1=read.Jet1SDsubjet1bdisc;
if(J1S0>CSVM || J1S1 >CSVM){NumTags=NumTags+1;}
if(J2S0>CSVM || J2S1 >CSVM){NumTags=NumTags+1;}
bool catA=false;
bool catB=false;
bool catC=false;
bool catD=false;
bool catE=false;
bool catF=false;
if(delY<1.0 && NumTags==0){catA=true;}
if(delY<1.0 && NumTags==1){catB=true;}
if(delY<1.0 && NumTags==2){catC=true;}
if(delY>1.0 && NumTags==0){catD=true;}
if(delY>1.0 && NumTags==1){catE=true;}
if(delY>1.0 && NumTags==2){catF=true;}
if(read.Jet0SDmass > 105.0 && read.Jet0SDmass< 210. && read.Jet1SDmass>105.0 && read.Jet1SDmass < 210.0 && read.Jet0Tau32 < 0.65 && read.Jet1Tau32 < 0.65 && catB==true){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::C(TChain *tr,classInst& read,string ProcessName,int iEvent){

TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;
double Rap1=0.5*log((Jet1.E()+Jet1.P())/(Jet1.E()-Jet1.P()));double Rap2=0.5*log((Jet2.E()+Jet2.P())/(Jet2.E()-Jet2.P()));
double delY=fabs(Rap1-Rap2);
int NumTags=0;
double CSVM=0.8;
double J1S0=read.Jet0SDsubjet0bdisc;
double J1S1=read.Jet0SDsubjet1bdisc;
double J2S0=read.Jet1SDsubjet0bdisc;
double J2S1=read.Jet1SDsubjet1bdisc;
if(J1S0>CSVM || J1S1 >CSVM){NumTags=NumTags+1;}
if(J2S0>CSVM || J2S1 >CSVM){NumTags=NumTags+1;}
bool catA=false;
bool catB=false;
bool catC=false;
bool catD=false;
bool catE=false;
bool catF=false;
if(delY<1.0 && NumTags==0){catA=true;}
if(delY<1.0 && NumTags==1){catB=true;}
if(delY<1.0 && NumTags==2){catC=true;}
if(delY>1.0 && NumTags==0){catD=true;}
if(delY>1.0 && NumTags==1){catE=true;}
if(delY>1.0 && NumTags==2){catF=true;}
if(read.Jet0SDmass > 105.0 && read.Jet0SDmass< 210. && read.Jet1SDmass>105.0 && read.Jet1SDmass < 210.0 && read.Jet0Tau32 < 0.65 && read.Jet1Tau32 < 0.65 && catC==true){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::D(TChain *tr,classInst& read,string ProcessName,int iEvent){

TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;
double Rap1=0.5*log((Jet1.E()+Jet1.P())/(Jet1.E()-Jet1.P()));double Rap2=0.5*log((Jet2.E()+Jet2.P())/(Jet2.E()-Jet2.P()));
double delY=fabs(Rap1-Rap2);
int NumTags=0;
double CSVM=0.8;
double J1S0=read.Jet0SDsubjet0bdisc;
double J1S1=read.Jet0SDsubjet1bdisc;
double J2S0=read.Jet1SDsubjet0bdisc;
double J2S1=read.Jet1SDsubjet1bdisc;
if(J1S0>CSVM || J1S1 >CSVM){NumTags=NumTags+1;}
if(J2S0>CSVM || J2S1 >CSVM){NumTags=NumTags+1;}
bool catA=false;
bool catB=false;
bool catC=false;
bool catD=false;
bool catE=false;
bool catF=false;
if(delY<1.0 && NumTags==0){catA=true;}
if(delY<1.0 && NumTags==1){catB=true;}
if(delY<1.0 && NumTags==2){catC=true;}
if(delY>1.0 && NumTags==0){catD=true;}
if(delY>1.0 && NumTags==1){catE=true;}
if(delY>1.0 && NumTags==2){catF=true;}
if(read.Jet0SDmass > 105.0 && read.Jet0SDmass< 210. && read.Jet1SDmass>105.0 && read.Jet1SDmass < 210.0 && read.Jet0Tau32 < 0.65 && read.Jet1Tau32 < 0.65 && catD==true){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::E(TChain *tr,classInst& read,string ProcessName,int iEvent){

TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;
double Rap1=0.5*log((Jet1.E()+Jet1.P())/(Jet1.E()-Jet1.P()));double Rap2=0.5*log((Jet2.E()+Jet2.P())/(Jet2.E()-Jet2.P()));
double delY=fabs(Rap1-Rap2);
int NumTags=0;
double CSVM=0.8;
double J1S0=read.Jet0SDsubjet0bdisc;
double J1S1=read.Jet0SDsubjet1bdisc;
double J2S0=read.Jet1SDsubjet0bdisc;
double J2S1=read.Jet1SDsubjet1bdisc;
if(J1S0>CSVM || J1S1 >CSVM){NumTags=NumTags+1;}
if(J2S0>CSVM || J2S1 >CSVM){NumTags=NumTags+1;}
bool catA=false;
bool catB=false;
bool catC=false;
bool catD=false;
bool catE=false;
bool catF=false;
if(delY<1.0 && NumTags==0){catA=true;}
if(delY<1.0 && NumTags==1){catB=true;}
if(delY<1.0 && NumTags==2){catC=true;}
if(delY>1.0 && NumTags==0){catD=true;}
if(delY>1.0 && NumTags==1){catE=true;}
if(delY>1.0 && NumTags==2){catF=true;}
if(read.Jet0SDmass > 105.0 && read.Jet0SDmass< 210. && read.Jet1SDmass>105.0 && read.Jet1SDmass < 210.0 && read.Jet0Tau32 < 0.65 && read.Jet1Tau32 < 0.65 && catE==true){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> bool Looper_bkg<classInst,HistogramCreater>::F(TChain *tr,classInst& read,string ProcessName,int iEvent){

TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;
double Rap1=0.5*log((Jet1.E()+Jet1.P())/(Jet1.E()-Jet1.P()));double Rap2=0.5*log((Jet2.E()+Jet2.P())/(Jet2.E()-Jet2.P()));
double delY=fabs(Rap1-Rap2);
int NumTags=0;
double CSVM=0.8;
double J1S0=read.Jet0SDsubjet0bdisc;
double J1S1=read.Jet0SDsubjet1bdisc;
double J2S0=read.Jet1SDsubjet0bdisc;
double J2S1=read.Jet1SDsubjet1bdisc;
if(J1S0>CSVM || J1S1 >CSVM){NumTags=NumTags+1;}
if(J2S0>CSVM || J2S1 >CSVM){NumTags=NumTags+1;}
bool catA=false;
bool catB=false;
bool catC=false;
bool catD=false;
bool catE=false;
bool catF=false;
if(delY<1.0 && NumTags==0){catA=true;}
if(delY<1.0 && NumTags==1){catB=true;}
if(delY<1.0 && NumTags==2){catC=true;}
if(delY>1.0 && NumTags==0){catD=true;}
if(delY>1.0 && NumTags==1){catE=true;}
if(delY>1.0 && NumTags==2){catF=true;}
if(read.Jet0SDmass > 105.0 && read.Jet0SDmass< 210. && read.Jet1SDmass>105.0 && read.Jet1SDmass < 210.0 && read.Jet0Tau32 < 0.65 && read.Jet1Tau32 < 0.65 && catF==true){return true;} else{return false;}
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_RSGPt(TChain *tr,classInst& read,string ProcessName,int iEvent){
TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;double RSGPt=RSG.Pt();return RSGPt;
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_RSGMass(TChain *tr,classInst& read,string ProcessName,int iEvent){
TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);TLorentzVector RSG=Jet1+Jet2;double RSGMass=RSG.M();return RSGMass;
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_DeltaRJ1J2(TChain *tr,classInst& read,string ProcessName,int iEvent){
TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);double DeltaR=Jet1.DeltaR(Jet2);return DeltaR;
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_DeltaEtaJ1J2(TChain *tr,classInst& read,string ProcessName,int iEvent){
TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);double DeltaEta=Jet1.Eta()-Jet2.Eta();return DeltaEta;
}

template <class classInst,class HistogramCreater> double Looper_bkg<classInst,HistogramCreater>::UserDef_DeltaPhiJ1J2(TChain *tr,classInst& read,string ProcessName,int iEvent){
TLorentzVector Jet1=read.Jet0->at(0);TLorentzVector Jet2=read.Jet1->at(0);double DeltaPhi=Jet1.Eta()-Jet2.Phi();return DeltaPhi;
}


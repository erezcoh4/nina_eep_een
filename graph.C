void graph()
{
//=========Macro generated from canvas: c11/
//=========  (Thu Jul 26 13:43:12 2018) by ROOT version6.04/10
   TCanvas *c11 = new TCanvas("c11", "",2240,45,1300,800);
   gStyle->SetOptStat(0);
   c11->SetHighLightColor(2);
   c11->Range(0,0,1,1);
   c11->SetFillColor(0);
   c11->SetBorderMode(0);
   c11->SetBorderSize(2);
   c11->SetLeftMargin(0.18);
   c11->SetBottomMargin(0.18);
   c11->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c11_1
   TPad *c11_1 = new TPad("c11_1", "c11_1",0.01,0.51,0.49,0.99);
   c11_1->Draw();
   c11_1->cd();
   c11_1->Range(8.976,-1.5,14.576,6.833333);
   c11_1->SetFillColor(0);
   c11_1->SetBorderMode(0);
   c11_1->SetBorderSize(2);
   c11_1->SetLeftMargin(0.18);
   c11_1->SetBottomMargin(0.18);
   c11_1->SetFrameBorderMode(0);
   c11_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[2] = {
   10,
   14};
   Double_t Graph0_fy1001[2] = {
   inf,
   inf};
   Double_t Graph0_fex1001[2] = {
   0,
   0};
   Double_t Graph0_fey1001[2] = {
   nan,
   nan};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("12C");
   gre->SetFillColor(6);
   gre->SetFillStyle(3008);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","12C",100,9.6,14.4);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(6);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("A");
   Graph_Graph1001->GetXaxis()->SetRange(9,92);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetNdivisions(505);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#frac{#(e,e'p)}{#(e,e'n)}");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(505);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ae3");
   
   Double_t Graph1_fx1002[1] = {
   12};
   Double_t Graph1_fy1002[1] = {
   nan};
   Double_t Graph1_fex1002[1] = {
   0};
   Double_t Graph1_fey1002[1] = {
   inf};
   gre = new TGraphErrors(1,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,11.9,13.1);
   Graph_Graph1002->SetMinimum(nan);
   Graph_Graph1002->SetMaximum(nan);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4627144,0.94,0.5372856,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("12C");
   pt->Draw();
   c11_1->Modified();
   c11->cd();
  
// ------------>Primitives in pad: c11_2
   TPad *c11_2 = new TPad("c11_2", "c11_2",0.51,0.51,0.99,0.99);
   c11_2->Draw();
   c11_2->cd();
   c11_2->Range(0,0,1,1);
   c11_2->SetFillColor(0);
   c11_2->SetBorderMode(0);
   c11_2->SetBorderSize(2);
   c11_2->SetLeftMargin(0.18);
   c11_2->SetBottomMargin(0.18);
   c11_2->SetFrameBorderMode(0);
   c11_2->Modified();
   c11->cd();
  
// ------------>Primitives in pad: c11_3
   TPad *c11_3 = new TPad("c11_3", "c11_3",0.01,0.01,0.49,0.49);
   c11_3->Draw();
   c11_3->cd();
   c11_3->Range(0,0,1,1);
   c11_3->SetFillColor(0);
   c11_3->SetBorderMode(0);
   c11_3->SetBorderSize(2);
   c11_3->SetLeftMargin(0.18);
   c11_3->SetBottomMargin(0.18);
   c11_3->SetFrameBorderMode(0);
   c11_3->Modified();
   c11->cd();
  
// ------------>Primitives in pad: c11_4
   TPad *c11_4 = new TPad("c11_4", "c11_4",0.51,0.01,0.99,0.49);
   c11_4->Draw();
   c11_4->cd();
   c11_4->Range(0,0,1,1);
   c11_4->SetFillColor(0);
   c11_4->SetBorderMode(0);
   c11_4->SetBorderSize(2);
   c11_4->SetLeftMargin(0.18);
   c11_4->SetBottomMargin(0.18);
   c11_4->SetFrameBorderMode(0);
   c11_4->Modified();
   c11->cd();
   c11->Modified();
   c11->cd();
   c11->SetSelected(c11);
}

#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test( "RRTRB-bl", "6" );    
/*1*/ test( "R-tr", "0" );    
/*2*/ test( "L-br", "0" );    
/*3*/ test( "T-tl", "0" );    
/*4*/ test( "B-tl", "0" );    
/*5*/ test( "BL-br", "0" );    
/*6*/ test( "LB-tl", "0" );    
/*7*/ test( "RL-tl", "0" );    
/*8*/ test( "BL-tl", "0" );    
/*9*/ test( "TL-bl", "0" );    
/*10*/ test( "RT-tr", "1" );    
/*11*/ test( "TRB-tl", "0" );    
/*12*/ test( "TRL-bl", "0" );    
/*13*/ test( "TRB-br", "2" );    
/*14*/ test( "LLB-bl", "2" );    
/*15*/ test( "RTL-tr", "1" );    
/*16*/ test( "LBB-tr", "0" );    
/*17*/ test( "TLL-tl", "2" );    
/*18*/ test( "RLRR-tr", "0" );    
/*19*/ test( "BBTL-tl", "4" );    
/*20*/ test( "TBBT-tr", "0" );    
/*21*/ test( "LLBR-tl", "0" );    
/*22*/ test( "LBRT-tl", "2" );    
/*23*/ test( "RLBL-bl", "4" );    
/*24*/ test( "BRRL-br", "3" );    
/*25*/ test( "TBBTL-tl", "8" );    
/*26*/ test( "TLBBT-br", "0" );    
/*27*/ test( "LRBLL-br", "7" );    
/*28*/ test( "TRRTT-br", "6" );    
/*29*/ test( "BBBLB-br", "0" );    
/*30*/ test( "RTTTR-tl", "4" );    
/*31*/ test( "BBLLL-br", "6" );    
/*32*/ test( "RRLLTR-tr", "16" );    
/*33*/ test( "TTRBLB-br", "8" );    
/*34*/ test( "LRBRBR-bl", "14" );    
/*35*/ test( "RBBLRL-tl", "8" );    
/*36*/ test( "RTRLTB-tl", "12" );    
/*37*/ test( "LBLRTR-tl", "14" );    
/*38*/ test( "RRLTRL-tl", "16" );    
/*39*/ test( "TBLTRR-br", "12" );    
/*40*/ test( "TTTRLTT-bl", "30" );    
/*41*/ test( "TBBRTBL-tr", "15" );    
/*42*/ test( "TRTRTLL-tr", "28" );    
/*43*/ test( "TLLRTRB-tr", "24" );    
/*44*/ test( "RLLBRLB-tr", "15" );    
/*45*/ test( "LTLRRBT-tr", "32" );    
/*46*/ test( "RBBRBLT-br", "21" );    
/*47*/ test( "LLRLRLR-tr", "0" );
}
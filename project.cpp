#include<iostream>
#include<fstream>
using namespace std;
int main()
{
cout<<endl;
cout<<endl;
cout<<"\t\t\t\t\t\t\t\t\t   #####    ##### #####    #####   \n"
      "\t\t\t\t\t\t\t\t\t   ### ##  ## ### ### ##  ## ###   \n"
      "\t\t\t\t\t\t\t\t\t   ###  ####  ### ###  ####  ###   \n"
      "\t\t\t\t\t\t\t\t\t   ###   ##   ### ###   ##   ###   \n"
      "\t\t\t\t\t\t\t\t\t   ###        ### ###        ###   \n"
      "\t\t\t\t\t\t\t\t\t   ###        ### ###        ###   \n"
      "\t\t\t\t\t\t\t\t\t    ##        ### ###        ##    \n"
      "\t\t\t\t\t\t\t\t\t     #        ### ###        #     \n"
      "\t\t\t\t\t\t\t\t\t               ## ##              \n"
      "\t\t\t\t\t\t\t\t\t                # #              \n"
      "\t\t\t\t\t\t\t\t\t                              \n"
      "\t\t\t\t\t\t\t\t\t     M A S T E R    M I N D  \n\n"
      "\t\t\t\t\t\t\t\t    PLAY THIS GAME AND IMPROVE YOUR KNOWLEDGE  \n";
cout<<endl;
cout<<endl;
cout<<endl;


string name;
cout<<" \t\t ENTER YOUR NAME -- ";
cin>>name;
cout<<endl;
fstream file;
cout<<"\t\t MR OR MRS "<<name<<" \n \t\t WELCOME TO MASTER MIND";
cout<<endl;
cout<<endl;
cout<<endl;
int menu;
cout<<" \t\t\t 1.CATEGORY \n\n \t\t\t 2.INSTRUCTIONS \n\n \t\t\t 3.SCORE \n\n \t\t\t SELECT THE OPTION : ";
cin>>menu;
cout<<endl;
cout<<endl;
cout<<endl;
int category;
int c=0;
if(menu==1)
{

cout<<"\t\t\t 1. MATHEMATICS \n\n \t\t\t 2. SCIENCE \n\n\t\t\t 3. HISTORY \n\n\t\t\t 4. GEOGRAPHY \n\n\t\t\t 5. SPORTS\n\n \t\t SELECT THE CATEGORY __ ";
cin>>category;
cout<<endl;
cout<<endl;
cout<<endl;

if(category==1)
{
int answer;
int myanswers [10];
 cout<<" \t\t 1. 1,4,9,16,25,........... WHAT IS THE 25TH ELEMENT ? \n\n\t\t 1.200 \n\t\t 2.425 \n\t\t 3.625 \n\t\t 4.525\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [1]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 2. WHICH IS THE LONGEST DISTANCE ?\n\n\t\t 1.3500cm \n\t\t 2.65.5m \n\t\t 3.75000mm \n\t\t 4.0.1km\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [2]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 3. IF  R=(S + T)P/3 THEN T EQUALS?\n\n\t\t 1.3R-S/3 \n\t\t 2.3R/P+S \n\t\t 3.3R+S/3 \n\t\t 4.3R/P-S\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [3]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 4. SAM BOUGHT A CAR VALUED AT $7700. ONE YEAR LATER CAR'S VALUE HAD DECREASE 2/7. WHAT IS THE NEW VALUE OF CAR ?\n\n\t\t 1.$2200 \n\t\t 2.$5500  \n\t\t 3.$9900 \n\t\t 4.$4400\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t  ";
 cin>>answer;
 myanswers [4]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 5. EXPAND AND SIMPLYFY  -6(2X-3)-11 \n\n\t\t 1.-12X-29 \n\t\t 2. 7-12X \n\t\t 3. 12X-7 \n\t\t 4.7+12X \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [5]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 6. WHICH  EQUATION SHOWS THE FOLLOWING STATMENT ?\n\t\t X IS 6 OR LESS THAN AND MORE -5 \n\n\t\t 1. -5< X <=6 \n\t\t 2. -5> X >=6 \n\t\t 3. -5<= X <=6 \n\t\t 4. -5< X >6 \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [6]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 7. 5*-2-(8-12)+16/ -8 = ?\n\n\t\t 1.-8 \n\t\t 2. 6 \n\t\t 3.-6 \n\t\t 4. 4 \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [7]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 8. WHAT IS THE SPEED IN M/S OF A CAR  THAT TRAVELS 30KM IN 20 MINITUES ? \n\n\t\t 1. 25 M/S \n\t\t 2. 250 M/S \n\t\t 3. 150 M/S \n\t\t 4. 1500 M/S   \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [8]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 9. 1/X+3/2*(5+ -3)=10 WHAT IS THE VALUE OF X ?\n\n\t\t 1. 2/5 \n\t\t 2. 7/1 \n\t\t 3. 1/7  \n\t\t 4. 5/2   \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [9]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 10. WHAT IS THE ANSWER OF  (1/2+1/4) + 1/2*1/4 ? \n\n\t\t 1. 7/8 \n\t\t 2. 7/4 \n\t\t 3. 3/4  \n\t\t 4. 3/8   \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [10]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
cout<<"\t\t\t\t   YOUR ANSWERS \t\t CORRECT ANSWERS" <<endl;
cout<<endl;
char myarray[]={'0','3','4','4','2','2','1','1','1','3','1'};

for(int i=1;i<=10;i++)
    cout<<"\t\tQUSTION "<< i <<" = \t\t"<<myanswers[i]<<"\t\t\t\t"<<myarray[i]<<endl;
    cout<<endl;

    cout<<"\t\tYOUR SCORE IS : "<<c;

    file<<name<<"\t"<<c<<"\t"<<category<<endl;
}
if(category==2)
{
int answer;
int myanswers [10];
 cout<<" \t\t 1. WHICH OF THE FOLLOWING IS USED IN PENCILS ? \n\n\t\t 1. GRAPHITE\n\t\t 2. SILICON \n\t\t 3. CHARCOAL \n\t\t 4. PHOSPHOROUS\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [1]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 2. THE GAS USUALLY FILLED IN THE ELECTRIC BULB IS ?\n\n\t\t 1.HYDROGEN \n\t\t 2.CARBON DIOXIDE \n\t\t 3.OXYGEN \n\t\t 4.NITROGEN \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [2]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 3. ONE HORSE POWER IS EQUAL TO ?  \n\n\t\t 1.748 WATTS \n\t\t 2.756 WATTS \n\t\t 3.746 WATTS \n\t\t 4.736 WATTS\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [3]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 4. WHO SUGGESTED THAT MOST OF THE MASS OF THE ATOM IS LOCATED IN THE NUCLEUS ?\n\n\t\t 1.THOMPSON \n\t\t 2.BOHR  \n\t\t 3.EINSTEIN \n\t\t 4.RUTHERFORD\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t  ";
 cin>>answer;
 myanswers [4]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 5. KILOWATT IS A UNIT TO MEASURE ?  \n\n\t\t 1.WORK \n\t\t 2.POWER  \n\t\t 3.ELECTRICITY  \n\t\t 4.CURRENT \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [5]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 6. NUCLEAR FISSION IS CAUSED BY THE IMPACT OF ? \n\n\t\t 1.NEUTRON  \n\t\t 2.PROTON \n\t\t 3.DEUTERON  \n\t\t 4.ELECTRON  \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [6]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 7. WHICH TYPE OF FIRE EXTINGUISHER IS USED FOR PETROLEUM FIRE ?\n\n\t\t 1.POWDER TYPE \n\t\t 2.LIQUID TYPE \n\t\t 3.SODA ACID TYPE \n\t\t 4.FOAM TYPE \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [7]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 8. WOOD IS THE MAIN RAW MATERIAL FOR THE MANUFACTURE OF ? \n\n\t\t 1.PAINT  \n\t\t 2.PAPER  \n\t\t 3.INK  \n\t\t 4.GUN POWDER    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [8]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 9. WHICH OF THE FOLLOWING IS A PROTEIN ?\n\n\t\t 1.STARCH  \n\t\t 2.CELLULOSE  \n\t\t 3.NATURAL RUBBER   \n\t\t 4.NONE OF THESE    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [9]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 10. WHO IS THE INVERTOR OF THERMOSCOPE ? \n\n\t\t 1.ALEXANDER FLEMING  \n\t\t 2.JOHN LOGIE BARED  \n\t\t 3.CHARLES DARWIN   \n\t\t 4.GALILEO GALILEI    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [10]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
cout<<"\t\t\t\t   YOUR ANSWERS \t\t CORRECT ANSWERS" <<endl;
cout<<endl;
char myarray[]={'0','1','4','3','4','2','1','1','2','3','4'};

for(int i=1;i<=10;i++)
    cout<<"\t\tQUSTION "<< i <<" = \t\t"<<myanswers[i]<<"\t\t\t\t"<<myarray[i]<<endl;
    cout<<endl;

    cout<<"\t\tYOUR SCORE IS : "<<c;

   file<<name<<"\t"<<c<<"\t"<<category<<endl;
}
if(category==3)
{
int answer;
int myanswers [10];
 cout<<" \t\t 1. WHO WERE THE AXIS POWERS IN 2ND WORLD WAR ? \n\n\t\t 1.POLAND,JAPAN,GERMANY \n\t\t 2.ITALY,JAPAN,BRITAIN  \n\t\t 3.ITALY,JAPAN,GERMANY  \n\t\t 4.ITALY,FRANCE,GERMANY \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [1]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 2. AMRRICAN CIVIL WAR WAS STARTED IN THE YEAR ?\n\n\t\t 1.1756 \n\t\t 2.1806 \n\t\t 3.1890 \n\t\t 4.1861 \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [2]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 3. WHO WAS POPULARLY KNOWN AS AFRICA'S GANDHI?  \n\n\t\t 1.MIR KARZAI \n\t\t 2.FIIROZ GHANDI \n\t\t 3.NELSON MANDELA \n\t\t 4.M.K.GHANDHI\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [3]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 4. WHO IS THE FATHER OF HISTORY ?\n\n\t\t 1.ARISTOTLE \n\t\t 2.HERODOTUS  \n\t\t 3.AUGUSTUS \n\t\t 4.CHARLES DARWIN\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t  ";
 cin>>answer;
 myanswers [4]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 5. WHO IS THE FIRST KING OF SRI LANKA ?  \n\n\t\t 1.KING DEVANAMPYATISSA \n\t\t 2.KING DUTUGEMUNU  \n\t\t 3.KING PANDUKABHAYA  \n\t\t 4.KING VIJAYA \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [5]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 6. WHAT IS THE NEW NAME OF 'HOLLAND' ? \n\n\t\t 1.FINLAND  \n\t\t 2.NEDERLAND \n\t\t 3.POLAND  \n\t\t 4.SWITZERLAND  \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [6]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 7. WHO IS THE FATHER OF COMMUNISM ?\n\n\t\t 1.KARL MARX \n\t\t 2.VLADIMIR LENIN \n\t\t 3.MAO ZEDONG \n\t\t 4.NEPOLIAN BONA BART \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [7]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 8. WHERE IS THE BORN PLACE OF ADOLF HITLER ? \n\n\t\t 1.GERMANY  \n\t\t 2.ITALY  \n\t\t 3.AUSTRIYA  \n\t\t 4.AUSTRALIYA    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [8]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 9. DURING THE FIRST WORLD WAR, WHICH COUNTRY SIGNED THE PEACE TREATY (1917) WITH GERMANY ?\n\n\t\t 1.ENGLAND  \n\t\t 2.USA  \n\t\t 3.RUSSIA   \n\t\t 4.AUSTRIA    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [9]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 10. WHO IS DISCOVERED AMERICA ? \n\n\t\t 1.AMERIGO VESPUCCHI  \n\t\t 2.CHRISTOPHER COLUMBUS  \n\t\t 3.FEDINAND MAGELLAN   \n\t\t 4.MARCO POLO    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [10]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
cout<<"\t\t\t\t   YOUR ANSWERS \t\t CORRECT ANSWERS" <<endl;
cout<<endl;
char myarray[]={'0','3','4','3','2','4','2','1','3','3','2'};

for(int i=1;i<=10;i++)
    cout<<"\t\tQUSTION "<< i <<" = \t\t"<<myanswers[i]<<"\t\t\t\t"<<myarray[i]<<endl;
    cout<<endl;

    cout<<"\t\tYOUR SCORE IS : "<<c;

   file<<name<<"\t"<<c<<"\t"<<category<<endl;
 }
if(category==4)
{
int answer;
int myanswers [10];
 cout<<" \t\t 1. WHAT IS THE HIGHEST MOUNTAIN IN THE WORLD ? \n\n\t\t 1.HIMALAYAS \n\t\t 2.ANDES  \n\t\t 3.LHOTSE  \n\t\t 4.ALPHS \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [1]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 2. WHICH AMOUNG THE FOLLOWING SEAS IS KNOWN FOR HIGHEST SALINITY ?\n\n\t\t 1.RED SEA \n\t\t 2.DEAD SEA \n\t\t 3.CASPIAN SEA \n\t\t 4.BLACK SEA \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [2]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 3. WORLD'S LARGEST NUMBER OF ACTIVE VOLCANOES ARE FOUND IN WHICH OF THE FOLLOWING OCEANS ?  \n\n\t\t 1.PACIFIC OCEAN \n\t\t 2.ATLANDIC OCEAN \n\t\t 3.INDIAN OCEAN \n\t\t 4.ARCTIC OCEAN\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [3]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 4. WHICH IS THE LARGEST ISLAND IN THE WORLD ?\n\n\t\t 1.NEW GUINEA \n\t\t 2.BORNEO  \n\t\t 3.MADAGASCAR \n\t\t 4.GREENLAND\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t  ";
 cin>>answer;
 myanswers [4]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 5. WHICH IS THE LARGEST PLANET ?  \n\n\t\t 1.MARS \n\t\t 2.JUPITER  \n\t\t 3.EARTH  \n\t\t 4.VENUS \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [5]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 6. WHICH IS THE LARGEST DESERT IN THE WORLD ? \n\n\t\t 1.SAHARA  \n\t\t 2.ARTIC \n\t\t 3.ANTARTIC  \n\t\t 4.GOBI  \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [6]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 7. WHAT IS THE LARGEST COUNTRY IN THE WORLD ?\n\n\t\t 1.AMERICA \n\t\t 2.CANADA \n\t\t 3.RUSSIA \n\t\t 4.CHINA \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [7]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 8. WHAT IS THE RICHEST COUNTRY IN THE WORLD ? \n\n\t\t 1.DUBAI  \n\t\t 2.LUXEMBOURG \n\t\t 3.SINGAPORE  \n\t\t 4.QATAR    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [8]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 9. WHICH IS THE LONGEST RIVER IN THE WORLD ?\n\n\t\t 1.NILE RIVER  \n\t\t 2.AMAZON RIVER  \n\t\t 3.CONGO RIVER   \n\t\t 4.LENA RIVER   \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [9]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 10. WHICH IS THE MOST POPULOUS CITY IN THE WORLD ? \n\n\t\t 1.DELHI  \n\t\t 2.SHANGHAI  \n\t\t 3.TOKYO   \n\t\t 4.MEXICO CITY    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [10]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
cout<<"\t\t\t\t   YOUR ANSWERS \t\t CORRECT ANSWERS" <<endl;
cout<<endl;
char myarray[]={'0','1','2','1','4','2','1','3','2','1','3'};

for(int i=1;i<=10;i++)
    cout<<"\t\tQUSTION "<< i <<" = \t\t"<<myanswers[i]<<"\t\t\t\t"<<myarray[i]<<endl;
    cout<<endl;

    cout<<"\t\tYOUR SCORE IS : "<<c;

   file<<name<<"\t"<<c<<endl;
}
if(category==4)
{
int answer;
int myanswers [10];
 cout<<" \t\t 1. WHAT IS THE HIGHEST MOUNTAIN IN THE WORLD ? \n\n\t\t 1.HIMALAYAS \n\t\t 2.ANDES  \n\t\t 3.LHOTSE  \n\t\t 4.ALPHS \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [1]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 2. WHICH AMOUNG THE FOLLOWING SEAS IS KNOWN FOR HIGHEST SALINITY ?\n\n\t\t 1.RED SEA \n\t\t 2.DEAD SEA \n\t\t 3.CASPIAN SEA \n\t\t 4.BLACK SEA \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [2]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 3.WORLD'S LARGEST NUMBER OF ACTIVE VOLCANOES ARE FOUND IN WHICH OF THE FOLLOWING OCEANS ?  \n\n\t\t 1.PACIFIC OCEAN \n\t\t 2.ATLANDIC OCEAN \n\t\t 3.INDIAN OCEAN \n\t\t 4.ARCTIC OCEAN\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [3]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
  cout<<" \t\t 4. WHICH IS THE LARGEST ISLAND IN THE WORLD ?\n\n\t\t 1.NEW GUINEA \n\t\t 2.BORNEO  \n\t\t 3.MADAGASCAR \n\t\t 4.GREENLAND\n\n\t\t ENTER YOUR ANSWER NUMBER  --\t  ";
 cin>>answer;
 myanswers [4]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==4)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 5. WHICH IS THE LARGEST PLANET ?  \n\n\t\t 1.MARS \n\t\t 2.JUPITER  \n\t\t 3.EARTH  \n\t\t 4.VENUS \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t";
 cin>>answer;
 myanswers [5]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 6. WHICH IS THE LARGEST DESERT IN THE WORLD ? \n\n\t\t 1.SAHARA  \n\t\t 2.ARTIC \n\t\t 3.ANTARTIC  \n\t\t 4.GOBI  \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [6]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 7. WHAT IS THE LARGEST COUNTRY IN THE WORLD ?\n\n\t\t 1.AMERICA \n\t\t 2.CANADA \n\t\t 3.RUSSIA \n\t\t 4.CHINA \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [7]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 8. WHAT IS THE RICHEST COUNTRY IN THE WORLD ? \n\n\t\t 1.DUBAI  \n\t\t 2.LUXEMBOURG \n\t\t 3.SINGAPORE  \n\t\t 4.QATAR    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [8]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==2)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 9. WHICH IS THE LONGEST RIVER IN THE WORLD ?\n\n\t\t 1.NILE RIVER  \n\t\t 2.AMAZON RIVER  \n\t\t 3.CONGO RIVER   \n\t\t 4.LENA RIVER   \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [9]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==1)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
   cout<<" \t\t 10. WHICH IS THE MOST POPULOUS CITY IN THE WORLD ? \n\n\t\t 1.DELHI  \n\t\t 2.SHANGHAI  \n\t\t 3.TOKYO   \n\t\t 4.MEXICO CITY    \n\n\t\t ENTER YOUR ANSWER NUMBER  --\t ";
 cin>>answer;
 myanswers [10]=answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+2;
 }
 else
 {
  c=c-1;
 }
cout<<"\t\t\t\t   YOUR ANSWERS \t\t CORRECT ANSWERS" <<endl;
cout<<endl;
char myarray[]={'0','1','2','1','4','2','1','3','2','1','3'};

for(int i=1;i<=10;i++)
    cout<<"\t\tQUSTION "<< i <<" = \t\t"<<myanswers[i]<<"\t\t\t\t"<<myarray[i]<<endl;
    cout<<endl;

    cout<<"\t\tYOUR SCORE IS : "<<c;

   file<<name<<"\t"<<c<<endl;
 }
}
else if(menu==2)
{
    cout<<" 1. ENTER YOUR NAME \n 2. SELECT YOUR CATEGORY \n 3. ANSWER THE QUSTIONS \n 4. SEE YOUR SCORE AND STATUS \n"<<endl;
    int press;
    cout<<" PRESS 0 GO TO MENU \n\n";
    cin>>press;
    if(press==0)
    {


    }
}
else if (menu==3)
{
    cout<< "\t\t  NAME    \t\t      SCORE   \t\t    CATEGORY"<<endl;
    cout<<endl;
    file>>name;
    file>>c;
    cout<< "\t\t   "<<name<<"\t\t\t\t"<<c<<"\t\t\t"<<category<<endl;
}
return 0;
}

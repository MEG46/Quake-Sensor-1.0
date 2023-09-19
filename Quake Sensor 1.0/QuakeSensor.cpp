#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void alarm(){
	cout << endl << "Earthquake Alarm!!!" << endl << endl;
	Sleep(45000);
}
void browse(){
	int counter = 0;
	cout << "Thermal Browser Activated" << endl;
	Sleep(3000);
	cout << "Browsering" << endl;
	Sleep(5000);
	int rnd = rand() % 2;
	if(rnd==0&&counter<=15){
		char ans;
		cout << "There are signs of life!" << endl << endl;
		cout << "Did you hurt or under debris?";
		cin >> ans;
		if(ans=='y'||ans=='Y'){
			cout << "Don't panic! The disaster team is on the way!" << endl << endl;
		Sleep(3000);
		}else{
			cout << "I'm glad to hear that you're safe! ";
			Sleep(3000);
		}
		
	}else{
		cout << "There are no signs of life!" << endl;
		counter++;
		Sleep(3000);
		browse();
	}
}
void messageto(std::string plc){
	std::string name[20]={"ISTANBUL","ADANA","MALATYA","KAHRAMANMARAS","SANLIURFA","HATAY","ADIYAMAN","VAN","MUGLA","ANKARA","MANISA","BOLU","DUZCE","TEKIRDAG","IZMIR","DIYARBAKIR","ESKISEHIR","SAKARYA","ELAZIG","KILIS"};
	std::string address[20]={"ISTANBUL_FATIH_DERVIS_ALI_FEVZİPAŞA_Edirnekapi_Meydani","ADANA_SEYHAN_SOGUTLU_KANAL_BOYU_1_NOLU_SPOR_KOMPLEKSI","MALATYA_PUTURGE_TASBASI_AKSEKI_4_Puturge_Kaymakamligi_Hali_Saha","KAHRAMANMARAS_PAZARCIK_SEHIT_NURETTIN_ADEMOGLU_INONU_PAZARCIK_SEVGI_PARKI","SANLIURFA_CEYLANPINAR_15_TEMMUZ_AKREPLI_SEHIT_UMIT_YOLCU_PARKI","HATAY_ISKENDERUN_AKCAY_AVLUK_AKCAY_PAZARYERI","ADIYAMAN_MERKEZ_YUNUS_EMRE_ESKI_SAMSAT_YUNUSEMRE_MAHALLESI_PARK-1_TOPLANMA_ALANI","VAN_BAHCESARAY_ISLAM_CUMHURIYET_BAHCESARAY_TOPLANMA_ALANI"
,"MUGLA_MARMARIS_OSMANIYE_UCBURUN_Osmaniye_Eski_Ilkogretim_Okulu","ANKARA_GOLBASI_BAHCELIEVLER_302_Bahceli_Parki","MANISA_SOMA_NIHAT_DANISMAN_ATATURK_KURTULUS_MAH._-_MILLET BAHCESI","BOLU_MERKEZ_KURKCULER_MANDIRA_EVLERI_KURKCULER_TOKI_PARK_ALANI","DUZCE_MERKEZ_BEYCILER_1767._Beyciler_Ilkokulu_Bahcesi","TEKIRDAG_MARMARAEREGLISI_KAMARADERE_MALTEPE_3NO'LU_TOPLANMA_ALANI","IZMIR_GUZELBAHCE_MALTEPE_17_GUZELBAHCE_ILCESI_MALTEPE_MAHALLESI_2_NO'LU_AFET_VE_ACIL_DURUM_TOPLANMA_ALANI","DIYARBAKIR_DICLE_15_TEMMUZ_ESKI_HASTANE_1._Cesme_Meydani","ESKISEHIR_INONU_CARSI_SEVINC_INONU_Pazaryeri_Karsisi","SAKARYA_SERDIVAN_BAHCELIEVLER_712._Bahcelievler_Parki","ELAZIG_BASKIL_CANBEYLER_KUYULU_ELAZIG_BASKIL_MUSTAFA_DEMIREL_MAHALLESI_TOPLANMA_ALANI"
,"KILIS_MERKEZ_BARIS_KANAL_BOYU_Metin_Ozbalci_Parki"};
	int temp=-2;
	for(int i=0;i<20;i++){
		temp=plc.compare(name[i]);
		if(temp==0){
			cout << name[i] << " " << "Disaster Assembly Area :" << endl;
			cout << address[i] << endl;
			break;
		}
	}
}
int main(){
	srand(time(NULL));
int num;
float temp;
cout << "How many earthquake datas do you want to enter : ";
cin >> num;

string Names[] = { "Date", "Time", "Latitude", "Longitude", "Depth (KM)", "Intensity", "Place" };
string data[7][num];
cout << "Data Entrance" << endl << endl;
for (int k = 0; k < num; k++)
{
	cout << k+1 << ". Data :" << endl << endl;
for (int i = 0; i < 7; i++)
{
    cout << Names[i] <<  " : ";
    cin >> data[i][k];
}
}
for (int i = 0; i < 7; i++)
{
    cout << Names[i] << "\t" << "\t";
}
cout << endl;
for (int k = 0; k < num; k++)
{
for (int i = 0; i < 7; i++)
{
    cout << data[i][k] << "\t" << "\t";
    
}
temp=stof(data[5][k]);
if(temp>=5){
		alarm();
		browse();
		messageto(data[6][k]);
		
	}
cout << endl << endl;
Sleep(3000);
}
}
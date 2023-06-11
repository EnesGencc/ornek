#include <iostream> 
using namespace std;

int main(){

string sorular[]={"1. Türkiyenin baskenti ?",
                  "2. Ozon tabakası nedir?",
                  "3. Evers dagi nerdedir?",
                  "4. Hangisi bir doga olayidir?" };

string cevaplar[][4] {{"A.İstanbul","B.Ankara","C.Sambua","D.Bakü"},
                      {"A.Toz","B.Bulut","C.Gaz Tabakasi","D.İsim"},
                      {"A.Somali","B.Çin-Nepal","C.Hindistan","D.Macaristan"},
                      {"A.Deprem","B.Bulutlar","C.Gaz Tabakası","D.İsim"}};


char dogrucevaplar[]={'B','C','B','A'};

int puan=0;
char tahmin;
int boyut=4;

    for(int i=0; i <boyut; i++){

        cout<<"**************"<<endl;
        cout<<sorular[i]<<endl;
        cout<<"***************"<<endl;

    for(int j=0; j <boyut; j++){
        cout<<cevaplar[i][j]<<endl;

    }
    cin>>tahmin;
    tahmin = toupper(tahmin);
    if(tahmin == dogrucevaplar[i]){
        cout<<"Dogru Cevap "<<endl;
        puan++;
    }

    else{

        cout<<"Yanlıs Cevap"<<endl;
        cout<<"Dogru Cevap ="<<dogrucevaplar[i]<<endl;
    }

    }
    cout<<"*********************************"<<endl;
    cout<<"Sonuclar"<<endl;
    cout<<"Dogru tahminlerin ="<<puan<<endl;
    cout<<"Soru sayisi = 4"<<endl;

    return 0;
}
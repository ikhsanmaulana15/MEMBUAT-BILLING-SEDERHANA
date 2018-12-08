#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int pilihan,harga,jumlah,total,bayar,kembalian;
    char mad;
    do
    {
        cout<<" SANNA SETIA 15 RESTO "<<endl;   
        cout<<" (MANTAP, ENAK, NIKMAT, DAN PENUH CINTA) "<<endl;
        cout<<" JALAN KARANGSAMBUNG, KM 17, KEBUMEN, JAWA TENGAH "<<endl;
        cout<<"==================================================="<<endl;
        cout<<""<<endl;

        cout<<"MENU MAKANAN                                                         HARGA MAKANAN"<<endl;
        cout<<""<<endl;
        cout<<"1. PAKET 1 (NASI PUTIH, PECEL, AYAM GORENG, DAN ES TEH)              Rp. 18.000"<<endl;
        cout<<"2. PAKET 2 (NASI PUTIH, LALAPAN, TELOR GORENG, DAN ES TEH)           Rp. 17.000"<<endl;
        cout<<"3. PAKET 3 (NASI PUTIH, AYAM KECAP, LALAPAN, TEMPE, DAN ES TEH)      Rp. 18.000"<<endl;
        cout<<"4. PAKET 4 (NASI PUTIH, NILA BAKAR, TEMPE, DAN ES TEH)               Rp. 20.000"<<endl;
        cout<<"5. MIE AYAM + ES JERUK                                               Rp. 13.000"<<endl;
        cout<<"6. BAKSO SPESIAL + ES JERUK                                          Rp. 13.000"<<endl;
        cout<<"7. PECEL LELE MANTAP + ES TEH                                        Rp. 14.000"<<endl;
        cout<<"8. NILA BAKAR SAOS KEJU SPESIAL                                      Rp. 16.000"<<endl;
        cout<<"9. JUICE RASA RASA                                                   Rp. 5.000"<<endl;
        cout<<"10. GORENGAN                                                         Rp. 1.000"<<endl;
        cout<<" "<<endl;

        cout<<"SILAHKAN MASUKAN PILIHAN ANDA : ";
        cin>>pilihan;

        switch(pilihan)
        { case 1:
        cout<<"\n"<<"NASI PUTIH, PECEL, AYAM GORENG, DAN ES TEH"<<endl;
        harga=18000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 2:
        cout<<"\n"<<"NASI PUTIH, LALAPAN, TELOR GORENG, DAN ES TEH"<<endl;
        harga=17000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 3:
        cout<<"\n"<<"NASI PUTIH, AYAM KECAP, LALAPAN, TEMPE, DAN ES TEH"<<endl;
        harga=18000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 4:
        cout<<"\n"<<"NASI PUTIH, NILA BAKAR, TEMPE, DAN ES TEH"<<endl;
        harga=20000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 5:
        cout<<"\n"<<"MIE AYAM + ES JERUK"<<endl;
        harga=13000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 6:
        cout<<"\n"<<"BAKSO SPESIAL + ES JERUK"<<endl;
        harga=13000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 7:
        cout<<"\n"<<"PECEL LELE MANTAP + ES TEH  "<<endl;
        harga=14000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 8:
        cout<<"\n"<<"NILA BAKAR SAOS KEJU SPESIAL"<<endl;
        harga=16000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 9:
        cout<<"\n"<<"JUICE RASA RASA"<<endl;
        harga=5000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;

        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    case 10:
        cout<<"\n"<<"GORENGAN"<<endl;
        harga=1000;

        cout<<"\n"<<"MASUKKAN JUMLAH YANG DIBELI : ";
        cin>>jumlah;

        total= harga*jumlah;
        cout<<"\n"<<"ANDA PERLU MEMBAYAR SEJUMLAH : Rp."<<total<<endl;

        cout<<"\n"<<"UANG YANG ANDA KELUARKAN UNTUK PEMBAYARAN : Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"\n"<<"UANG KEMBALIAN ANDA ADALAH : Rp."<<kembalian<<endl;
        cout<<"\n"<<"MASIH ADAKAH YANG LAIN Y/T: ";
        cin>>mad;
        break;

    default:
        cout<<"MAAF PILIHAN ANDA TIDAK TERSEDIA";
        cout<<"SILAHKAN MASUKKAN PILIHAN YANG LAIN";
    }
    }

    
    while(mad/='Y');
    cout<<"TERIMA KASIH ATAS KUNJUNGAN ANDA";
    getch();
    return 0;
}

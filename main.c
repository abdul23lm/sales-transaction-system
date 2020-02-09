/*===Tugas UTS Membuat Program Pemesanan Alat Musik Yang Sedang Laris Bulan Ini===

     Nama       	: Abdul Latif Munjiat
     NPM        	: 1610631170004
     Semester   	: 2'A (Genap) Angkatan 2016
     Prodi      	: Teknik Informatika
     Fakultas   :	 Ilmu Komputer
      	Universitas Singaperbangsa Karawang */


#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>


void panggilMenu(void);
void Penghitungan();
void struk(void);
void SetColor(unsigned short);

    struct macammenu
    {
        int menu1,menu2;
    };
    struct subtotal
    {
        int jmlbeli1,jmlbeli2,jmlbeli3,jmlbeli4,jmlbeli5,jmlbeli6,jmlbeli7,jmlbeli8,jmlbeli9,jmlbeli10, totalharga, bayar, kembalian;
    };
    struct daftar1
    {
        int guitarac, guitarel, guitarst, guitaref, guitarcapo;

    };
    struct daftar2
    {
        int cajon, drum, launchpad, ampli, kabel;

    };
    struct daftar1 menu_1;
    struct daftar2 menu_2;
    struct macammenu menu;
    struct subtotal sub;

    char yakin;
    time_t ambil_waktu;

int main()
{
    panggilMenu();
    return 0;
}

void panggilMenu (void){
    makan:
        SetColor(15);
    printf ("\n\t\t\t\t\tSelamat datang di Abdul LM Music Store's.\n");
    printf ("\t\t\t\t\t  Inilah barang terlaris bulan ini:\n\n");
    printf("==============================================================================================================================\n");
    printf ("|No.| Daftar Alat Musik \t\t\t|     Harga   |\t\t|No.| Daftar Alat Musik\t \t\t\t|    Harga   |\n");
    printf("|-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 1 | Guitar Accoustic Cort SFX AB\t\t|  Rp.2200000 |\t\t");
    printf("| 6.| Cajon Santa Fe\t\t\t| Rp.1100000 | \n");
    printf("| 2 | Guitar Elektric Schecter BANSHEE 6 ACTIVE |  Rp.6808000 |\t\t");
    printf("| 7.| Drum Peace DP-101 DEMON \t\t| Rp.4750000 |\n");
    printf("| 3 | Guitar Sring Elixir Phospor Bronze Nanoweb|  Rp.225000  |\t\t");
    printf("| 8.| Novation Launchpad Pro\t\t| Rp.4800000 |\n");
    printf("| 4 | Behringer VINTAGE TUBE OVERDRIVE VT911\t|  Rp.784000  |\t\t");
    printf("| 9.| Behringer GUITAR AMPLIFIER GTX30 \t| Rp.2536000 |\n");
    printf("| 5 | Guitar Capo MP 0279 - Capo Planet Waves\t|  Rp.300000  |\t\t");
    printf("| 10| Kabel jack Ibanez Tipe DSC 20\t| Rp.195000  |\n");
    printf("\n==============================================================================================================================");
    printf("\n ");
    printf("\n99. Struk Pembayaran\n55. Reset Pilihan\n00. Keluar\n");
    printf("==============================================================================================================================\n");

for (menu.menu1!=0;menu.menu1!=99;){

   printf("\nInput pilihan yang Anda inginkan:         "); scanf("%d",&menu.menu1);
    switch(menu.menu1) {
    case 1:
            printf("\n [1] Pemesanan Guitar Accoustic Cort SFX AB\n");
            printf("jumlah pesan =\t\t\t  ");scanf("%d",&menu_1.guitarac);
            printf("\n===============================================\n");
            sub.jmlbeli1=menu_1.guitarac*2200000;
            break;
    case 2:
            printf("\n [2]Pemesanan Guitar Elektric Schecter BANSHEE 6 ACTIVE\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_1.guitarel);
            printf("\n===============================================\n");
            sub.jmlbeli2=menu_1.guitarel*6808000;
    break;
    case 3:
            printf("\n [3] Pemesanan Guitar Sring Elixir Phospor Bronze Nanoweb\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_1.guitarst);
            printf("\n===============================================\n");
            sub.jmlbeli3=menu_1.guitarst*225000;
    break;
    case 4:
            printf("\n [4] Pemesanan Guitar Effect Behringer VINTAGE TUBE OVERDRIVE VT911\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_1.guitaref);
            printf("\n===============================================\n");
            sub.jmlbeli4=menu_1.guitaref*784000;
    break;
    case 5:
            printf("\n [5] Pemesanan Guitar Capo MP 0279 - Capo Planet Waves\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_1.guitarcapo);
            printf("\n===============================================\n");
            sub.jmlbeli5=menu_1.guitarcapo*3000000;
    break;
    case 6:
            printf("\n [6] Pemesanan Cajon Santa Fe\n ");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_2.cajon);
            printf("\n===============================================\n");
            sub.jmlbeli6=menu_2.cajon*1100000;
    break;
    case 7:
            printf("\n [7] Pemesanan Drum Peace DP-101 DEMON\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_2.drum);
            printf("\n===============================================\n");
            sub.jmlbeli7=menu_2.drum*4750000;
    break;
    case 8:
            printf("\n [8] Pemesanan Novation Launchpad Pro\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_2.launchpad);
            printf("\n===============================================\n");
            sub.jmlbeli8=menu_2.launchpad*4800000;
    break;
    case 9:
            printf("\n [9] Pemesanan Behringer GUITAR AMPLIFIER GTX30\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_2.ampli);
            printf("\n===============================================\n");
            sub.jmlbeli9=menu_2.ampli*2536000;
    break;
    case 10:
            printf("\n [10] Pemesanan Kabel jack Ibanez Tipe DSC 20\n");
            printf("jumlah pesan = \t\t\t  ");scanf("%d",&menu_2.kabel);
            printf("\n===============================================\n");
            sub.jmlbeli10=menu_2.kabel*195000;
    break;
    case 99:
            Penghitungan();
    break;
    case 55:
            system("cls");
            panggilMenu();
    break;
    case 00:
            peyakinan:
            printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
            printf("Input Pilihan \t\t\t\t");scanf("%s",&yakin);

            if (yakin=='Y'||yakin=='y')
            {
                system("cls");
                printf("\t\t- Terima Kasih atas kunjungan Anda -\n\n");
            system("pause");
            exit(panggilMenu);
            }
            else if (yakin=='T'||yakin=='t')
            {
                system("cls");
                panggilMenu();
            }
            else
            {
                printf("\nKesalahan inputan\n\n");
                system("pause");
                goto peyakinan;
            }

    break;

    }
}


    }

void SetColor(unsigned short color) {
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsoleOutput,color);}

void Penghitungan(void)
{
            printf("\nPesanan Barang \n");
            printf("\tJumlah | Nama Barang  \t\t\t\t\t\t| Total Harga\n\t====================================\n");
            printf("\t   %d   : Guitar Accoustic Cort SFX AB                            : Rp. %d \n",menu_1.guitarac, sub.jmlbeli1);
            printf("\t   %d   : Guitar Elektric Schecter BANSHEE 6 ACTIVE               : Rp. %d \n",menu_1.guitarel, sub.jmlbeli2);
            printf("\t   %d   : Guitar Sring Elixir Phospor Bronze Nanoweb              : Rp. %d \n",menu_1.guitarst, sub.jmlbeli3);
            printf("\t   %d   : Guitar Effect Behringer VINTAGE TUBE OVERDRIVE VT911    : Rp. %d \n",menu_1.guitaref, sub.jmlbeli4);
            printf("\t   %d   : Guitar Capo MP 0279 - Capo Planet Waves                 : Rp. %d \n",menu_1.guitarcapo, sub.jmlbeli5);
            printf("\t------------------------------------\n\n");

            printf("Pesanan Barang \n");
            printf("\tJumlah | Nama Barang  \t\t\t\t\t\t| Total Harga\n\t====================================\n");
            printf("\t   %d   : Cajon Santa Fe                                          : Rp. %d \n",menu_2.cajon, sub.jmlbeli6);
            printf("\t   %d   : Drum Peace DP-101 DEMON                                 : Rp. %d \n",menu_2.drum, sub.jmlbeli7);
            printf("\t   %d   : Novation Launchpad Pro                                  : Rp. %d \n",menu_2.launchpad, sub.jmlbeli8);
            printf("\t   %d   : Behringer GUITAR AMPLIFIER GTX30                        : Rp. %d \n",menu_2.ampli, sub.jmlbeli9);
            printf("\t   %d   : Kabel jack Ibanez Tipe DSC                              : Rp. %d \n",menu_2.kabel, sub.jmlbeli10);
            printf("\t------------------------------------\n");

            sub.totalharga=sub.jmlbeli1+sub.jmlbeli2+sub.jmlbeli3+sub.jmlbeli4+sub.jmlbeli5+sub.jmlbeli6+sub.jmlbeli7+sub.jmlbeli8+sub.jmlbeli9+sub.jmlbeli10;
            printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n",sub.totalharga);
            bayar:
            printf("\nMasukkan uang bayar = ");scanf("%d",&sub.bayar);
            if (sub.bayar>=sub.totalharga)
            {
            sub.kembalian=sub.bayar-sub.totalharga;
            printf("\nKembalian = %d", sub.kembalian);
            }
            else
            {
                printf("Uang Anda tidak cukup! Silakan input ulang\n");

                goto bayar;
            }
            printf("\nTekan apa saja untuk melihat struk pembayaran\n");
            system("Pause");
            system("cls");
            struk();
}

void struk(void)
    {
                    time(&ambil_waktu);
        printf("===================================================================================================================\n");
        printf(" \t\t\t\t\t\tAbdul LM Music Store's                  \t\t\t   \n");
        printf(" \t\t\t\t\t Jl.Pasanggrahan NO 07, Tasikmalaya\t\t\t\t\t   \n");
        printf("\t\t\t\t\t\t    Jawa Barat\t\t\t\t\t\t\t   \n");
        printf(" \t\t\t\t\t   Telp : (0274)520712 / 08996065217                 \t\t\t   \n");
        printf("__________________________________________________________________________________________________________________\n");
        printf(" Nama Pesanan  \t\t\t\t| Harga Satuan  | Jumlah  | \t    Total  \t\t\t   \n");
        printf("==================================================================================================================\n");
        if (sub.jmlbeli1>0)
        {
        printf("Guitar Accoustic Cort SFX AB\t\t|     2200000\t|    %d\t  |  Rp.%d",menu_1.guitarac, sub.jmlbeli1);
        }
                if (sub.jmlbeli2>0)
        {
        printf("\nGuitar Schecter BANSHEE 6 ACTIVE\t|     6808000\t|    %d\t  |  Rp.%d",menu_1.guitarel, sub.jmlbeli2);
        }
                if (sub.jmlbeli3>0)
        {
        printf("\nElixir Phospor Bronze Nanoweb\t\t|     225000\t|    %d\t  |  Rp.%d",menu_1.guitarst, sub.jmlbeli3);
        }
                if (sub.jmlbeli4>0)
        {
        printf("\nBehringer VINTAGE TUBE OVERDRIVE VT911\t|     784000\t|    %d\t  |  Rp.%d",menu_1.guitaref, sub.jmlbeli4);
        }
                if (sub.jmlbeli5>0)
        {
        printf("\nGuitar Capo MP 0279 Planet Waves\t|     300000\t|    %d\t  |  Rp.%d",menu_1.guitarcapo, sub.jmlbeli5);
        }
                if (sub.jmlbeli6>0)
        {
        printf("\nCajon Santa Fe\t\t\t\t|     1100000\t|    %d\t  |  Rp.%d",menu_2.cajon, sub.jmlbeli6);
        }
                if (sub.jmlbeli7>0)
        {
        printf("\nDrum Peace DP-101 DEMON\t\t\t|     47500000\t|    %d\t  |  Rp.%d",menu_2.drum, sub.jmlbeli7);
        }
                if (sub.jmlbeli8>0)
        {
        printf("\nNovation Launchpad Pro\t\t\t|     4800000\t|    %d\t  |  Rp.%d",menu_2.launchpad, sub.jmlbeli8);
        }
                if (sub.jmlbeli9>0)
        {
        printf("\nBehringer Guitar Amplifier GTX30\t|     2536000\t|    %d\t  |  Rp.%d",menu_2.ampli, sub.jmlbeli9);
        }
                if (sub.jmlbeli10>0)
        {
        printf("\nKabel jack Ibanez Tipe DSC 20\t\t|     195000\t|    %d\t  |  Rp.%d",menu_2.kabel, sub.jmlbeli10);
        }
        printf("\n__________________________________________________________________________________________________________________");
        printf("\n Total Keseluruhan = %d\t\t\t\t\t\t\t\t\t\t\t   ", sub.totalharga);
        printf("\n Uang bayar        = %d\t\t\t\t\t\t\t\t\t\t\t", sub.bayar);
        printf("\n Kembalian         = %d\t\t\t\t\t\t\t\t\t\t\t   ", sub.kembalian);
        printf("\n                                                               \t\t\t\t\t\t   ");
        printf("\n                                                               \t\t\t\t\t\t   ");
        printf("\n Waktu/Hari : %s|", ctime (&ambil_waktu));
        printf("                    \t\t\tTerimakasih Telah Menjadi Konsumen Kami\t\t\t\t");
        printf("\n                                                               \t\t\t\t\t\t   \n");
        printf("------------------------------------------------------------------------------------------------------------------\n");


    }

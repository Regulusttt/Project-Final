#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int total,hayyyuk,n,i,j,b,i7,i8,a1=0,jum=0;
int tanda;

void lihatmenu();
void inputharga();
void bayar1();
int bayar();
int pesanpaket();
void pesanunit();
int buatorder1();
int main();

typedef struct
{
    char menupaket[100];
    char menupisah[100];
    char menubundle[100];
    char menubundle1[100];
    int keyuser;
    int keyuser1;
    int totalbundle;
    int hargabundle;
    int hargapaket;
    int hargapisah;
    float harga;
} data;
data nilai[100];

void menubundle()
{
    i=0;
    jum=0;
    FILE *fmb,*fmb1;
            fmb = fopen("Assets//menu bundle.txt","r");
            if(fmb == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            while(!feof(fmb))
            {
                fgets(nilai[i].menubundle,100,fmb);
                i++;
                jum++;
            }
            fclose(fmb);
            fflush(stdin);
            i=0;
            jum=0;
            fmb1 = fopen("Assets//menu1 bundle.txt","r");
            if(fmb1 == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            while(!feof(fmb1))
            {
                fscanf(fmb1,"%s",&nilai[i].menubundle1);
                i++;
                jum++;
            }
            fclose(fmb1);
            fflush(stdin);
            for(i=0;i<jum;i++){
                printf("%s\n",nilai[i].menubundle1);
            }
}

void pricebun()
{
    i=0;
    jum=0;
    FILE *fhb;
            fhb = fopen("Assets//harga bundle.txt","r");
            if(fhb == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            while(!feof(fhb))
            {
                fscanf(fhb,"%d",&nilai[i].hargabundle);
                i++;
                jum++;
            }
            fclose(fhb);
            fflush(stdin);
}

void paketuser()
{
    int a,c7;
    if(tanda==1){
        puts("Paket Anda : ");
        printf("%d %s\n",nilai[0].keyuser1,nilai[nilai[0].keyuser-1].menubundle1);
        a = nilai[0].totalbundle;
    }else if(tanda==2){
        puts("Paket Anda : ");
        printf("%d %s + %d %s\n",nilai[0].keyuser1,nilai[nilai[0].keyuser-1].menubundle1,nilai[1].keyuser1,nilai[nilai[1].keyuser-1].menubundle1);
        a = nilai[0].totalbundle+nilai[1].totalbundle;
    }else if(tanda==3){
        puts("Paket Anda : ");
        printf("%d %s + %d %s +%d %s\n",nilai[0].keyuser1,nilai[nilai[0].keyuser-1].menubundle1,nilai[1].keyuser1,nilai[nilai[1].keyuser-1].menubundle1,nilai[2].keyuser1,nilai[nilai[2].keyuser-1].menubundle1);
        a = nilai[0].totalbundle+nilai[1].totalbundle+nilai[2].totalbundle;
    }printf("Total Harga Paket adalah : %d\n",a);
}

int tambahorder()
{
    a1=0;
    int a=0;
    printf("Tambah order sesuai nomor : ");
    scanf("%d",&a);
    if(a>14 || a<1){
        puts("inputan salah");
        return tambahorder();
    }
    printf("Jumlah item : ");
    scanf("%d",&a1);
    if(a1<1){
        puts("Inputan salah");
        return tambahorder();
    }else if(a1>10){
        puts("Max jumlah item adalah 10");
        return tambahorder();
    }
    nilai[hayyyuk].keyuser1 = a1;
    nilai[hayyyuk].keyuser = a;
    nilai[hayyyuk].totalbundle = nilai[a-1].hargabundle*a1;
    hayyyuk++;
    tanda++;
    return bpaket();
}

int bpaket()
{
    if(tanda==3){
        paketuser();
    }
    int a;
    puts("1.Lihat menu");
    puts("2.Tambah order");
    puts("3.selesai");
    printf("Pilihan anda : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        for(i=0;i<jum;i++){
                puts(nilai[i].menubundle);
            }
            puts("Tekan enter untuk melanjutkan...");
            getch();
            return bpaket();
        break;
        case 2:
        tambahorder();
        break;
        case 3:
        paketuser();
        break;
        default :
        puts("Pilihan salah");
        return bpaket();
    }
}

int bundle()
{
    int a;
    menubundle();
    puts("=====Custom Paket=====");
    puts("1.Lihat Menu");
    puts("2.Buat Paket");
    puts("3.kembali");
    printf("Ketik pilihan : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        for(i=0;i<jum;i++){
                puts(nilai[i].menubundle);
            }
            puts("Tekan enter untuk melanjutkan...");
            getch();
            return bundle();
        break;
        case 2:
        pricebun();
        bpaket();
        break;
        case 3:
        return buatorder1();
        break;
        default:
        puts("pilihan salah\n");
        return bundle();
        break;
    }
}

void lihatmenu()
{
    i=0;
    b=0;
    jum=0;
    
            FILE *fptr,*fptr1;
            fptr = fopen("Assets//MENU PAKET.txt","r");
            if(fptr == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            while(!feof(fptr))
            {
                fgets(nilai[i].menupaket,100,fptr);
                i++;
                jum++;
            }
            fclose(fptr);
            fflush(stdin);
          fptr1 = fopen("Assets//MENU TERPISAH.txt","r");
           if(fptr1 == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            i=0;
            while(!feof(fptr1))
            {
                fgets(nilai[i].menupisah,100,fptr1);
                i++;
                b++;
            }
            fclose(fptr1);
            fflush(stdin);
}

void inputharga()
{
    i=0;
    int a;
    a=0;
    FILE *fh,*fh1;
    fh = fopen("Assets//HARGA MENU PAKET.txt","r");
    while(!feof(fh)){
        fscanf(fh,"%d",&nilai[i].hargapaket);
        i++;
        a++;
    }
    fclose(fh);
    i=0;
    a=0;
    fh1 = fopen("Assets//HARGA MENU TERPISAH.txt","r");
    while(!feof(fh)){
        fscanf(fh1,"%d",&nilai[i].hargapisah);
        i++;
        a++;
    }
    fclose(fh1);
}

void bayar1()
{
    int kembalian,c;
    printf("Total pesanan anda : %d\n",total);
        printf("Bayar : ");
        scanf("%d",&c);
        if(c<total){
            puts("Uang anda tidak mencukupi");
            return bayar1();
        }else if(c==total) {
            puts("Uangnya pas ya!");
            puts("Terima kasih telah datang ke resto kami!");
            exit(0);
        }else {
            kembalian = c - total;
            printf("Kembalian anda : %d\n",kembalian);
            puts("Terima kasih telah datang ke resto kami!");
            exit(0);
        }
}

int bayar()
{
    int a,c;
    puts("Apakah anda ingin memesan lagi?");
    puts("1.Ya");
    puts("2.Tidak");
    printf("Pilihan anda : ");
    scanf("%d",&a);
    if(a==1){
        return buatorder1();
    }
    else if(a==2){
        bayar1();
    }else {
        puts("Pilihan salah");
        return bayar();
    }

}

int pesanpaket()
{
    int a,b1;
    puts("=====Pesan Paket=====");
    puts("1.Lihat Menu Paket");
    puts("2.Pesan Menu");
    puts("3.Kembali");
    printf("Masukan pilihan : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        puts("Menu Paket : ");
            for(i=0; i<jum; i++)
            {
                puts(nilai[i].menupaket);
            }
            puts("Tekan enter untuk melanjutkan...");
            getch();
            return pesanpaket();
            case 2:
            printf("Pesan sesuai nomor : ");
            scanf("%d",&b1);
            if(b1-1>jum){
                puts("Pilihan salah");
                return pesanpaket();
            }
            puts("Menu pesanan anda : ");
            puts(nilai[b1-1].menupaket);
            total = total + nilai[b1-1].hargapaket;
            bayar();
            break;
            case 3:
            return buatorder1();
            break;
            default :
            puts("Pilihan salah");
            return pesanpaket();
    }
    return 0;
}

void pesanunit()
{
    int a,a1;
    puts("=====Pesan Unit=====");
    puts("1.Lihat Menu Paket");
    puts("2.Pesan Menu");
    puts("3.Kembali");
    printf("Masukan Pilihan : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        puts("Menu Unit : ");
            for(i=0; i<b; i++)
            {
                puts(nilai[i].menupisah);
            }
            return pesanunit();
        break;
        case 2:
        printf("Pesan sesuai nomor : ");
        scanf("%d",&a1);
        if(a1-1>jum){
                puts("Pilihan salah");
                return pesanunit();
            }
            puts("Menu pesanan anda : ");
            puts(nilai[a1-1].menupisah);
            total = total + nilai[a1-1].hargapisah;
            bayar();
    }
}

int buatorder1()
{
    int buatorder;
        puts("=====================================================================================================================");
        puts("Buat Order :");
        puts("1.Pesan Paket");
        puts("2.Custom Paket");
        puts("3.Pesan Perunit");
        puts("4.Kembali ke Menu Utama");
        puts("=====================================================================================================================");
        printf("Masukkan Pilihan : ");
        scanf("%d", &buatorder);
        switch(buatorder){
            case 1:
            pesanpaket();
            break;
            case 2:
            bundle();
            break;
            case 3:
            pesanunit();
            break;
            case 4:
            return main();
            break;
            default :
            puts("pilihan salah");
            return buatorder1();
            break;
        }
        return 0;
}

int main()
{
    lihatmenu();
    inputharga();
    system("color 0c");
    int pilih;

//awal :
    system("cls");
    puts("=====================================================================================================================");
    puts("\t\t\t\t  Selamat Datang di Resto Pokimane:V");
    puts("\t\t\tContact Person : Darryl,Yanda,Revi,Bianca,Teguh,Ronaldi");
    puts("=====================================================================================================================");
    puts("1.Lihat Menu");
    puts("2.Buat Order");
    puts("3.Pulang");
    puts("=====================================================================================================================");
    printf("Masukan Pilihan : ");
    scanf("%d",&pilih);
    switch (pilih)
    {
    case 1:
        puts("Menu Paket : ");
            for(i=0; i<jum; i++)
            {
                puts(nilai[i].menupaket);
            }
            puts(" ");
            puts("Menu Unit : ");
            for(i=0; i<b; i++)
            {
                puts(nilai[i].menupisah);
            }
            puts("Tekan enter untuk melanjutkan...");
            getch();
        return main();
    case 2:
    buatorder1();
    case 3:
    exit(0);
    break;
    default :
    puts("Pilihan salah");
    return main();
    }

    return 0;
}

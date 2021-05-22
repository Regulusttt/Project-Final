#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char menu[100];
    float harga;
} data;
data nilai[100];

int n,i,j,jum=0;

int main(void)
{
    system("color 0c");
    int pilih;

//awal :
    system("cls");
    puts("=====================================================================================================================");
    puts("\t\t\t\t  Selamat Datang di Resto Pokimane:V");
    puts("\t\t\tContact Person : darryl,yanda,revi,bianca,teguh,ronaldi");
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
    {
        int pilihmenu;
        puts("=====================================================================================================================");
        puts("Apakah costumer ingin memesan menu per unit atau bundle?");
        puts("1.Per unit");
        puts("2.Bundle");
        puts("=====================================================================================================================");
        printf("Masukan Pilihan : ");
        scanf("%d", &pilihmenu);
        if(pilihmenu==1)
        {
            FILE*fptr;
            fptr = fopen("MENU TERPISAH.txt","r");
            if(fptr == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            while(!feof(fptr))
            {
                fgets(nilai[i].menu,100,fptr);
                i++;
                jum++;
            }
            for(i=0; i<jum; i++)
            {
                puts(nilai[i].menu);
            }
            fclose(fptr);
            fflush(stdin);
        }
        else
        {
          FILE*fptr1;
          fptr1 = fopen("MENU PAKET.txt","r");
           if(fptr1 == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }

            while(!feof(fptr1))
            {
                fgets(nilai[i].menu,100,fptr1);
                i++;
                jum++;
            }
            for(i=0; i<jum; i++)
            {
                puts(nilai[i].menu);
            }
            fclose(fptr1);
            fflush(stdin);
        }
    }
    case 2:
    {
        int buatorder;
        puts("=====================================================================================================================");
        puts("Buat Order :");
        puts("1.Pesan Bundle");
        puts("2.Custom Bundle");
        puts("3.Pesan Perunit");
        puts("4.Kembali ke Menu Utama");
        puts("=====================================================================================================================");
        printf("Masukkan Pilihan : ");
        scanf("%d", &buatorder);
        if(buatorder==1)
        {

        }
        else if(buatorder==2)
        {

        }
        else if(buatorder==3)
        {

        }
        else if(buatorder==4)
        {

        }
    }
    case 3:
    {

    }
    }

}

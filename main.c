#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char menupaket[100];
    char menupisah[100];
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
        int a;
            FILE *fptr,*fptr1;
            fptr = fopen("MENU PAKET.txt","r");
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
            puts("Menu Paket : ");
            for(i=0; i<jum; i++)
            {
                puts(nilai[i].menupaket);
            }
            fclose(fptr);
            fflush(stdin);
          fptr1 = fopen("MENU TERPISAH.txt","r");
           if(fptr1 == NULL)
            {
                printf("MAAF FILE TIDAK DITEMUKAN");
            }
            i=0;
            while(!feof(fptr1))
            {
                fgets(nilai[i].menupisah,100,fptr1);
                i++;
                a++;
            }
            puts("Menu Unit");
            for(i=0; i<a; i++)
            {
                puts(nilai[i].menupisah);
            }
            fclose(fptr1);
            fflush(stdin);
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

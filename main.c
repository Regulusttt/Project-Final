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
    printf("=====================================================================================================================\n");
    printf("\t\t\t\t  Selamat Datang di Resto Pokimane:V\n");
    printf("\t\t\tContact Person : darryl,yanda,revi,bianca,teguh,ronaldi\n");
    printf("=====================================================================================================================\n");
    printf("\n1.Lihat Menu\n");
    printf("2.Buat Order\n");
    printf("3.Pulang\n\n");
    printf("=====================================================================================================================\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&pilih);
    switch (pilih)
    {
    case 1:
    {
        FILE*fptr;

        fptr = fopen("MENU TERPISAH.txt""HARGA MENU TERPISAH.txt", "r");

        if(fptr == NULL)
        {
            printf("MAAF FILE TIDAK DITEMUKAN");
        }

        while(!feof(fptr))
        {
            fgets(nilai[i].harga,nilai[i].menu,100,fptr);
            i++;
            jum++;
        }

        for(i=0; i<jum; i++)
        {
            printf("%s %.1f\n", nilai[i].menu,nilai[i].harga);
        }
        fclose(fptr);
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
//        if(buatorder==1)
//        {
//
//        }
//        }
    }
    }
}
//        //}
//        //else if(buatorder==2)
//        {
//
//        }
//        else if(buatorder==3)
//        {
//
//        }
//        else if(buatorder==4)
//        {
//
//        }
//    }
//    case 3:
//    {
//
//    }
//    }


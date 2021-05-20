#include <stdio.h>
#include <stdlib.h>

struct database {
    char menu[100];
    char harga[100];
} data[100];

int i;

void lihatmenu()
{
    FILE *flm;
    flm = fopen("listmenu.txt","r");
    while(!feof(flm)){
        fgets(data[i].menu,100,flm);
        i++;
    }
    fclose(flm);
    for(i=0;i<29;i++){
    puts(data[i].menu);
    }
}

void main()
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
        lihatmenu();
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
    return 0;
}
    

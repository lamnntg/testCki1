#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct nhahang //luu y them typedef
{
  char  name[50];
  char  cacmonan[50];
  int   danhgia;
  char  diachi[50];
} nhahang_t;  //dat ten struct cho de khai bao

int main()
{
  int n,s=0,a=0;
  int i; // cho i len day cho do bi loi

  //khai bao tren nay
  nhahang_t nh[50];  //ko can struct

  printf("--------------------------------------\n");
  printf("=============MENU=====================\n");
  printf("1.Nhap thong tin nha hang\n");
  printf("2.In thong tin cac nha hang\n");
  printf("3.Tim kiem theo ten nha hang\n");
  printf("4.Tim kiem theo mo ta\n");
  printf("5.Sap xep thu tu nha hang\n");
  printf("6.Thoat khoi chuong trinh\n");
  printf("--------------------------------------\n");
          int *c = &a;
  do{
    printf("CHON CHUC NANG BAN MUON SU DUNG (1,2,3,4,5,6):\n");
    scanf("%d",&n);

    switch(n)
    {
      case 1:
      {
        printf("Nhap thong tin nha hang\n");
        printf("So luong nha hang them \n");
        scanf("%d",&s);
        fflush(stdin);

        for(int i=*c+1 ; i<= (*c+s); i++ )
        {
          printf("----------------------------------------------\n");
          printf("nhap thong tin nha hang thu %d \n",i);
          printf("nhap ten nha hang :\n");
          // cach anh luu string vao bien, nhin hoi ngu ti
          fgets(nh[i].name,100,stdin);
          nh[i].name[strcspn(nh[i].name,"\n")]='\0';

          printf("----------------------------------------------\n");
          printf("nhap thuc don nha hang\n");
          // cach anh luu string vao bien, nhin hoi ngu ti
          fgets(nh[i].cacmonan,100,stdin);
          nh[i].cacmonan[strcspn(nh[i].cacmonan,"\n")]='\0';

          printf("----------------------------------------------\n");
          printf("nhap danh gia :\n");
          scanf("%d",&nh[i].danhgia);
          fflush(stdin);

          printf("----------------------------------------------\n");
          printf("nhap dia chi nha hang : \n");
          // cach anh luu string vao bien, nhin hoi ngu ti
          fgets(nh[i].diachi,100,stdin);
          nh[i].diachi[strcspn(nh[i].diachi,"\n")]='\0';

        }
        *c=*c+s;
        break;// dung de thoat switch

      }

      case 2:
      {
        printf("2.In thong tin cac nha hang\n");
        printf("----------------------------------------------\n");
        printf("cac nha hang co thong tin trong co so du lieu : %d\n",*c);
        for(i=1; i<=*c; i++)
        {
          printf("----------------------------------------------\n");
          printf("thong tin nha hang thu %d\n",i);
          printf("----------------------------------------------\n");
          printf("  ten nha hang: ");
          printf("%s\n",nh[i].name);
          printf("  thuc don nha hang: ");
          printf("%s\n",nh[i].cacmonan);
          printf("  danh gia: ");
          printf("%d\n",nh[i].danhgia);
          printf("Dia chi nha hang");
          printf("%s\n",nh[i].diachi);

        }
        break; //thoat case2
      } //end case 2


      case 3:
        {
            char t[100];
            printf("Tim Kiem Nha Hang \n");
            printf("Nhap ten nha hang can tim \n");
            fgets(t,100,stdin);
            for(int i=1 ; i <= *c; i++ )
            {
                 if (strcasecmp(t,nh[i].name)==0)
                 {
                      printf("Nha hang duoc tim thay la\n");
                      printf("  ten nha hang: ");
                      printf("%s\n",nh[i].name);
                      printf("  thuc don nha hang: ");
                      printf("%s\n",nh[i].cacmonan);
                      printf("  danh gia: ");
                      printf("%d\n",nh[i].danhgia);
                      printf("Dia chi nha hang");
                      printf("%s\n",nh[i].diachi);
                      printf("----------------------------------\n");
                 }
                 else printf("Ko ton tai nha hang tren ");
            }

        }//end case 2
      case 4:
        {

        }
} //end switch
  } //end do
  while ((n > 0)&& (n<7));
  printf("chon lai chuc nang ");
}

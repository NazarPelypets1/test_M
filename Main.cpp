#include "Karkasi.h"



int main(){

	setlocale(LC_ALL, "Ukrainian");

	
		while (true){
			int n=7;
            int m[100][100]= {
		{0 , 90 , 10, 40, 60 , 0  , 0   },
		{90, 0  , 80, 0 , 100, 0  , 0   },
		{10, 80 , 0 , 30, 0  , 70 , 0   },
		{40, 0  , 30, 0 , 0  , 50 , 0   },
		{60, 100, 0 , 0 , 0  , 20 , 0   },
		{0 , 0  , 70, 50, 20 , 0  , 110 },
		{0 , 0  , 0 , 0 , 0  , 110, 0   }},p[100];
			cout<<"�������� �������� - 1\n"
				<<"�������� �����    - 2\n"
				<<"�����             - 3\n";
			int ch,c;
			cin>>ch;
			if(ch!=3){
			cout<<"������ ����� �������� - 1\n"
				<<"������� � ���������    - 2\n";
			cin>>c;
			switch (c)
			{
			case 1:{
				 cout<<"������ ������� ����� �������:";
				 cin>>n;
				 cout<<"������ ����� ��� �������:\n";
				 for(int i=0;i<n;i++)
					 for(int j=0;j<n;j++)
						 cin>>m[i][j];
				   }break;
			case 2:{break;
				   }break;
			default:
				break;
			}}
			switch (ch)
			{
			case 1:{

                Kraskala(n,m);

				   }break;
			case 2:{

                Pryma(n,m);
				   }break;
			case 3:{
				return 0;
				///break;
				   }break;
			default:
				break;
			}

		}
	return 0;
}
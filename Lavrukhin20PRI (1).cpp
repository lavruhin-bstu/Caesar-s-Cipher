#include<iostream>//��������� ���������� ��� ������ ���� ������
#include <fstream>
using namespace std;
void kodirowka()//������� ��������� �����
{
	int i = 0, n = 0, key,vyborWyvod,WyborWwoda;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";// ���������� �������
	char kod[100];
	
	cout << "�������� ������ �����" << endl << "1.���� �� �����" << endl << "2.���� � ����������" << endl;//�������� ������ ���� � ���������� ��� �� �����
	cin >> WyborWwoda;
	if (WyborWwoda == 1)
	{
		ifstream fin("input.txt");//���� ���������� �� �����
		fin >> kod;
		fin.close();
	}
	if (WyborWwoda == 2)//���� � ���������� 
	{
		cout << "������� ����� ��� �����������" << endl;
	    cin >> kod;
     }
	
	cout << "������� ���� ����������" << endl;
	cin >> key;

	for (n = 0; n < 100; n++)// ������� ���������
	{
		for (i = 0; i < 26; i++)
		{
			if (kod[n] == abc[i])
			{
				if (i >= 26)
					kod[n] = abc[i - 26];
				else
					kod[n] = abc[i + key];
				break;
			}
		}
	}
	cout << "�������� ������ ������" <<endl<< "1.����� � ����" << endl << "2.����� �� �����" << endl;//���������� ������� ��������� �� ����� ��� � ����
	cin >> vyborWyvod;//����� �� �����
	if (vyborWyvod == 2)
		cout << kod << endl;
	if (vyborWyvod == 1)//����� � ����
	{
		ofstream fout("result.txt");
		fout << kod;
		fout.close();
	}
}
void ras()//������ �����������
{
	int i = 0, n = 0, key, vyborWyvod, wyborWwod;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";// ���������� �������
	char dekod[100];
	cout << "�������� ������ �����" << endl << "1.���� �� �����" << endl << "2.���� � ����������" << endl;//�������� ������ ���� � ���������� ��� �� �����
	cin >> wyborWwod;
	if (wyborWwod == 1)
	{
		ifstream fin("input.txt");//���� ���������� �� �����
		fin >> dekod;
		fin.close();
	}
	if (wyborWwod == 2)//���� � ���������� 
	{
		cout << "������� ����� ��� �����������" << endl;
	    cin >> dekod;
     }
	cout << "������� ���� ����������"<<endl;
	cin >> key;

	for (n = 0; n < 100; n++)//������ ���������� 
	{
		for (i = 0; i < 26; i++)
		{
			if (dekod[n] == abc[i])
			{
				if (i >= 26)
					dekod[n] = abc[i - 26];
				else
					dekod[n] = abc[i - key];
				break;
			}
		}
	}
	cout << "�������� ������ ������" <<endl<< "1.����� � ����" << endl << "2.����� �� �����" << endl;//���������� ������ �� ����� ��� � ����
	cin >> vyborWyvod;//����� �� �����
	if (vyborWyvod == 2)
		cout << dekod << endl;
	if (vyborWyvod == 1)//����� ���������� � ����
	{
		ofstream fout("result.txt");
		fout << dekod;
		fout.close();
	}
}
int main()
{
 setlocale(0, "");
 int n;
  n = 1;
  while (n)//����������������  ���� � ������� ����������� ��� ���������
{
	cout << "1.������������ �����" << endl << "2.������������ �����" << endl << "0.�����" << endl;
	cin >> n;
	switch (n) 
	{
	case 1:	kodirowka(); break;
	case 2: ras(); break;
	case 0:cout << "�����"; break;
	default:cout << "������"; break;

	}
}
 return 0;
}

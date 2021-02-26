#include<iostream>//Программа шифрования при помощи кода Цезаря
#include <fstream>
using namespace std;
void kodirowka()//функция кодировки слова
{
	int i = 0, n = 0, key,vyborWyvod,WyborWwoda;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";// допустимый алфавит
	char kod[100];
	
	cout << "выбирите способ ввода" << endl << "1.ввод из файла" << endl << "2.ввод с клавиатуры" << endl;//реалицая выбора вода с клавиатуры или из файла
	cin >> WyborWwoda;
	if (WyborWwoda == 1)
	{
		ifstream fin("input.txt");//ввод информации из файла
		fin >> kod;
		fin.close();
	}
	if (WyborWwoda == 2)//ввод с клавиатуры 
	{
		cout << "Введите слово для расшифровки" << endl;
	    cin >> kod;
     }
	
	cout << "введите ключ шифрования" << endl;
	cin >> key;

	for (n = 0; n < 100; n++)// процесс кодировки
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
	cout << "выберите способ вывода" <<endl<< "1.вывод в файл" << endl << "2.вывод на экран" << endl;//реализация ввывода резултата на экран или в файл
	cin >> vyborWyvod;//вывод на экран
	if (vyborWyvod == 2)
		cout << kod << endl;
	if (vyborWyvod == 1)//вывод в фаил
	{
		ofstream fout("result.txt");
		fout << kod;
		fout.close();
	}
}
void ras()//функия расшифрофки
{
	int i = 0, n = 0, key, vyborWyvod, wyborWwod;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";// допустимый алфавит
	char dekod[100];
	cout << "выбирите способ ввода" << endl << "1.ввод из файла" << endl << "2.ввод с клавиатуры" << endl;//реалицая выбора вода с клавиатуры или из файла
	cin >> wyborWwod;
	if (wyborWwod == 1)
	{
		ifstream fin("input.txt");//ввод информации из файла
		fin >> dekod;
		fin.close();
	}
	if (wyborWwod == 2)//ввод с клавиатуры 
	{
		cout << "Введите слово для расшифровки" << endl;
	    cin >> dekod;
     }
	cout << "Введите ключ шифрования"<<endl;
	cin >> key;

	for (n = 0; n < 100; n++)//процес дешифорвки 
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
	cout << "Выберите способ вывода" <<endl<< "1.вывод в файл" << endl << "2.вывод на экран" << endl;//реализация вывода на экран или в файл
	cin >> vyborWyvod;//вывод на экран
	if (vyborWyvod == 2)
		cout << dekod << endl;
	if (vyborWyvod == 1)//вывод результата в фаил
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
  while (n)//пользовательское  меню с выбором расшифровки или кодировки
{
	cout << "1.Закодировать слово" << endl << "2.Расшифровать слово" << endl << "0.выход" << endl;
	cin >> n;
	switch (n) 
	{
	case 1:	kodirowka(); break;
	case 2: ras(); break;
	case 0:cout << "выход"; break;
	default:cout << "ошибка"; break;

	}
}
 return 0;
}

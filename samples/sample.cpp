#include "polinom.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		cout << "\t\t***ЛР 4. Арифметические операции с полиномами***\n\n";
		cout << "Правила ввода:"<< endl;
		cout << "1) Вводимый полином состоит из мономов от 3-х переменных" << endl
			<< "2) Степени должны быть в промежутке от 0 до 9 включительно" << endl
			<< "3) Допустимые операции: умножение на константу, +, -, *" << endl<<endl;
		int f(0),count(0);
		cout << "Введите полином p1" <<endl;
		Polinom p1;
		cin>>p1;
		p1.Sort();
		cout << "Введите полином p2" <<endl;
		Polinom p2;
		cin>>p2;
		p2.Sort();
		cout<<"Выберите операцию:"<<endl;
		cout<<"1. p1 + p2"<<endl;
		cout<<"2. p1 - p2"<<endl;
		cout<<"3. p2 - p1"<<endl;
		cout<<"4. p1 * p2"<<endl;
		cout<<"5. p1 * const"<<endl;
		cout<<"6. p2 * const"<<endl;
		cout<<"7. Выход"<<endl<<endl;
		cout<<"Если хотите выйти, введите 7"<<endl;
		cin >> count;
		Polinom result;
		while (count!=7)
		{
			bool flag = true;
			switch (count)
			{
			case 1: 
				{
					cout<< "Результат операции: "<<p1 + p2<<endl; 
					break;
				}
			case 2: 
				{
					cout<< "Результат операции: "<<p1 - p2<<endl; 
					break;
				}
			case 3: 
				{
					cout<< "Результат операции: "<<p2 - p1<<endl; 
					break;
				}
			case 4: 
				{
					cout<< "Результат операции: "<<p1 * p2<<endl;
					break;
				}
			case 5:
				{
					double k(0);
					cout << "Введите константу:"<<endl;
					cin>>k;
					cout<< "Результат операции: "<< p1*k<<endl;
					break;
				}	
			case 6:
				{
					double k(0);
					cout << "Введите константу:";
					cin>>k;
					cout<< "Резултат операции: "<< p2*k<<endl;
					break;
				}	
			default: 
				{
					cout <<"Неправильный ввод" << endl;
					//flag = false;
					break;	
				}
			}
			/*
			if (flag==true)
			{
				result.Sort();
				cout << "Резултат операции: ";
				cout<<result;
				cout << "Выберите операцию или введите 7" << endl;
			}
			*/
			cout << "Выберите операцию или введите 7" << endl;
			cin >> count;
		}
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}
}
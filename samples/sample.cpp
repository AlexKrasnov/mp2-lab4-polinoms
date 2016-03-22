#include "polinom.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		cout << "\t\t***�� 4. �������������� �������� � ����������***\n\n";
		cout << "������� �����:"<< endl;
		cout << "1) �������� ������� ������� �� ������� �� 3-� ����������" << endl
			<< "2) ������� ������ ���� � ���������� �� 0 �� 9 ������������" << endl
			<< "3) ���������� ��������: ��������� �� ���������, +, -, *" << endl<<endl;
		int f(0),count(0);
		cout << "������� ������� p1" <<endl;
		Polinom p1;
		cin>>p1;
		p1.Sort();
		cout << "������� ������� p2" <<endl;
		Polinom p2;
		cin>>p2;
		p2.Sort();
		cout<<"�������� ��������:"<<endl;
		cout<<"1. p1 + p2"<<endl;
		cout<<"2. p1 - p2"<<endl;
		cout<<"3. p2 - p1"<<endl;
		cout<<"4. p1 * p2"<<endl;
		cout<<"5. p1 * const"<<endl;
		cout<<"6. p2 * const"<<endl;
		cout<<"7. �����"<<endl<<endl;
		cout<<"���� ������ �����, ������� 7"<<endl;
		cin >> count;
		Polinom result;
		while (count!=7)
		{
			bool flag = true;
			switch (count)
			{
			case 1: 
				{
					result = p1 + p2; 
					break;
				}
			case 2: 
				{
					result = p1 - p2; 
					break;
				}
			case 3: 
				{
					result = p2 - p1; 
					break;
				}
			case 4: 
				{
					result = p1 * p2;
					break;
				}
			case 5:
				{
					int k(0);
					cout << "������� ���������:"<<endl;
					cin>>k;
					result = p1 * k;
					break;
				}	
			case 6:
				{
					int k(0);
					cout << "������� ���������:";
					cin>>k;
					result = p2 * k;
					break;
				}	
			default: 
				{
					cout <<"������������ ����" << endl;
					flag = false;
					break;	
				}
			}
			if (flag==true)
			{
				result.Sort();
				cout << "�������� ��������: ";
				cout<<result;
				cout << "�������� �������� ��� ������� 7" << endl;
			}
			cin >> count;
		}
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}
}
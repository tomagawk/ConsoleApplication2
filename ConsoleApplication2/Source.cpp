//
//#include <iostream>
//using namespace std;
////	9.  ������� ������� �������� ������������ �����.(while).
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	int number = 0, a = 1;
//
//	cout << "����i�� ���������� �����:\t";
//	cin >> number;
//
//	while (a <= number)
//	{
//		if (number % a== 0)
//		{
//		cout << a << endl;
//		}
//		a++;
//	}
//	cout << endl;
//	system("pause");
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
////	8.  ��������� ��������(n!) ��������� ������ �����: n!= 1*2*3*...n
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	
//	long num = 0, a = 1, b = 1;
//	cout << "����i�� ������� �i�� �����:\n";
//	cin >> num;
//	while (a <= num)
//	{
//		b *= a;
//		//cout << "������i�� ����� " << a << " = " << b << endl;
//		a++;
//	}
//	cout << "������i�� ����� " << num << " = " << b << endl << endl;
//	system("pause");
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
////	7.  Ocean Levels. Assuming the ocean�s level is currently rising at about 1.5 millimeters
////	per year, write a program that displays a table showing the number of millimeters that the
////	ocean will have risen each year for the next 25 years.
//
//int main()
//{
//	cout << fixed << setprecision(1);
//	setlocale(LC_ALL, "");
//	int start_year = 0;
//	// enum year {a = 2017, b, c, d, e, f, g, h, k, l, m, n, o, p, q, r, s, t, u ,v ,w };
//	int num1 = 1, num = 1;
//	const float level = 1.5;
//	
//	cout << "enter start year:\t";  
//	cin >> start_year;
//	while (num <= 25)
//	{
//		cout << endl << num1 << ".\t" << start_year << " year = " << num * level << " mm";
//		start_year++;
//		num++; num1++;
//	}
//	cout << endl << endl;
//	system("pause");
//}


//#include <iostream>
//using namespace std;
////	6.  ���������� ������� �� ��� ��������, ������� �� ����� �� ����� � �����
////		��������.�����������, ��� ���������� �� ������� ��� �������� � ��������� �������.
////			a.������� �� ���� ����� � ��������.
////			b.������� �� ������ ����� � ��������.
////			c.������� �� �����, ����� ����.
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int start_num = 0, finish_num = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
//
//	cout << "����i�� ��������� �����:\t";
//	cin >> start_num;
//	cout << "����i�� �i����� �����:\t\t";
//	cin >> finish_num;
//	//a = start_num;
//
//	if (start_num > finish_num)
//	{
//		b = start_num;
//		start_num = finish_num;
//		//finish_num = start_num;
//		//start_num = b;
//		finish_num = b;
//	}
//
//	a = start_num; c = start_num; d = start_num; e = start_num;
//
//	cout << endl << "��i ����� � �i�������: ";
//	while (a <= finish_num)
//	{
//		cout << a << ", ";
//		++a;
//		//������ a) 
//	}
//	cout << endl << endl << "a. ��i ����i ����� � �i�������: ";
//	while (c <= finish_num)
//	{
//		if (c % 2 == 0)
//		{
//			cout << c << ", ";
//		}
//		++c;
//	}
//
//	
//	cout << endl << endl << "b. ��i ������i ����� � �i�������: ";
//	while (d <= finish_num)
//	{
//		if (d % 2 != 0)
//		{
//			cout << d << ", ";
//		}
//		++d;
//	} 
//
//	cout << endl << endl << "c. ��i �����, �����i 7: ";
//	while (e <= finish_num)
//	{
//		if (e % 7 == 0)
//		{
//			cout << e << ", ";
//			
//		}
//		++e;
//	}
//	cout << endl << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//// 5.  ��������� �� ����� ������������� ��� ����� �������. ������� �� �� ������ ��� ���������� �� ������� ����������(while).
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num = 0, c = 0, a = 1;
//	char lan;
//	cout << "����i�� ���� �i�i�:\t";
//	cin >> lan;
//	cout << "����i�� �������:\t";
//	cin >> num;
//	
//
//	while (c < num)
//
//	{
//		cout << lan ;
//		++c;
//	}
//	cout << endl << endl;
//	system("pause");
//}

//#include <iostream>
//	using namespace std;
//// 4.�������� ��������, ��� �������� ���� ����� ����� �� � �� 500 (�������� � 	�� ��������� � ���������).
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num = 0, sum = 0, a = 1;
//	cout << "enter number:\t";
//	cin >> num;
//	while (num < 501)
//
//	{
//		cout << num << endl;
//		sum += num;
//		++num;
//	}
//	cout << "sum = " << sum << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//// 3. ������� ����� �� ���. ��������� �� 1 � ������ ��� �����
//
//
//int main()
//{
//	int num, max_num = 0;
//	float sum = 0;
//	cout << "enter max. number:\t";
//	cin >> max_num;
//	num = max_num;
//	while (num > 0)
//
//	{
//		cout << num << endl;
//		sum += num;
//		--num;
//	}
//	cout << "ser = " << sum / max_num << endl;
//	system("pause");
//}


//#include <iostream>
//using namespace std;
//// 2. ������� ����� �� ���������
//
//
//int main()
//{
//	int num = 1, max_num, sum = 0;
//	cout << "enter max. number:\t";
//	cin >> max_num;
//	while (num < max_num)
//	{
//		cout << num << endl;
//		sum += num;
//		num++;
//	}
//	cout << "sum = " << sum << endl; 
//	system("pause");
//}


//#include <iostream>
//using namespace std;
//// 1. �� ����� while
//
////
//int main()
//{
//	setlocale(LC_ALL, "UKR");
//	int day = 1;
//
//	while (day <= 5)
//	{
//
//		cout << endl << "day: " << day;
//		switch (day)
//		{
//		case 1: cout << " �����i���" << endl;
//			break;
//		case 2: cout << " �i������" << endl;
//			break;
//		case 3: cout << " ������" << endl;
//			break;
//		case 4: cout << " ������" << endl;
//			break;
//		case 5: cout << " �'������" << endl;
//			break;
//		}
//		cout << endl << "stand up!\n";
//		cout << "breakfast!\n";
//		cout << "work!\n";
//		cout << "step\n";
//		cout << "sleep\n";
//		day++;
//	}
//	system("pause");
//}
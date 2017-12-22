//#include <iostream>
//using namespace std;
////	11.  На дверях ліфта висіло загрозливе попередження про те, що двері зачиняються,
////	коли зайвий вагою пасажир переступить поріг ліфта.Який за рахунком пасажир
////	постраждає, якщо ліфт витримує вагу не більше як S кг.
//
//// трохи не зрозумів умову, і зробив, мабуть, трохи по-іншому
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	int lift = 0, sum = 0, mas = 0, count = 0;
//
//	cout << "введiть вантажопiд'ємнiсть лiфта:\t";
//	cin >> lift;
//	
//	while (sum <= lift && mas <= lift)
//	{
//		cout << "\nвведiть масу " << count+1 << "-го пасажира:\t";
//		cin >> mas;
//		if (mas <= lift)
//		{		
//		sum += mas;
//		cout << "загальна вага людей в лiфтi =\t" << sum << endl;
//		
//		}
//		count++;
//	}
//
//	cout << "\nПасажир № " << count << " не помiститься!" << endl << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
////	10. Вводиться ціле число.Знайти кількість його цифр. (Підказка: відсікати останню
////	цифру шляхом ділення на 10)
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	int number = 0, a = 1, b = 0;
//
//	cout << "введiть цiле число:\t";
//	cin >> number;
//	b = number;
//	while (number > 0)
//	{
//		number = number/10;
//		if (number > 0)
//		{
//			++a;
//		}
//	}
//		
//	cout << "\nВи ввели " << a << " - цифрове число (" << b << ")" << endl << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
////	9.  Вивести дільники заданого натурального числа.(while).
//
//int main()
//{
//	setlocale(LC_ALL, "");
//
//	int number = 0, a = 1;
//
//	cout << "введiть натуральне число:\t";
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
////	8.  Обчислити факторіал(n!) додатного цілого числа: n!= 1*2*3*...n
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	
//	long num = 0, a = 1, b = 1;
//	cout << "введiть додатне цiле число:\n";
//	cin >> num;
//	while (a <= num)
//	{
//		b *= a;
//		//cout << "факторiал числа " << a << " = " << b << endl;
//		a++;
//	}
//	cout << "факторiал числа " << num << " = " << b << endl << endl;
//	system("pause");
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
////	7.  Ocean Levels. Assuming the ocean’s level is currently rising at about 1.5 millimeters
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
////	6.  Користувач вводить дві межі діапазону, вивести на екран всі числа з цього
////		діапазону.Передбачити, щоб користувач міг вводити межі діапазону в довільному порядку.
////			a.вивести всі парні числа з діапазону.
////			b.вивести всі непарні числа з діапазону.
////			c.вивести всі числа, кратні семи.
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int start_num = 0, finish_num = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
//
//	cout << "введiть початкове число:\t";
//	cin >> start_num;
//	cout << "введiть кiнцеве число:\t\t";
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
//	cout << endl << "всi числа з дiапазону: ";
//	while (a <= finish_num)
//	{
//		cout << a << ", ";
//		++a;
//		//варіант a) 
//	}
//	cout << endl << endl << "a. всi парнi числа з дiапазону: ";
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
//	cout << endl << endl << "b. всi непарнi числа з дiапазону: ";
//	while (d <= finish_num)
//	{
//		if (d % 2 != 0)
//		{
//			cout << d << ", ";
//		}
//		++d;
//	} 
//
//	cout << endl << endl << "c. всi числа, кратнi 7: ";
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
//// 5.  Зобразити на екрані горизонтальну лінію певної довжини. Довжину лінії та символ для зображення лінії вводить користувач(while).
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num = 0, c = 0, a = 1;
//	char lan;
//	cout << "введiть знак лiнiї:\t";
//	cin >> lan;
//	cout << "введiть довжину:\t";
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
//// 4.Напишіть програму, яка обчислює суму цілих чисел від а до 500 (значення а 	має вводиться з клавіатури).
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
//// 3. вивести числа від мах. введеного до 1 і середнє всіх чисел
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
//// 2. вивести числа до введеного
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
//// 1. дні тижня while
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
//		case 1: cout << " понедiлок" << endl;
//			break;
//		case 2: cout << " вiвторок" << endl;
//			break;
//		case 3: cout << " середа" << endl;
//			break;
//		case 4: cout << " четвер" << endl;
//			break;
//		case 5: cout << " п'ятниця" << endl;
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
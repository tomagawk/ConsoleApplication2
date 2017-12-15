

//#include <iostream>
//using namespace std;
////	10. Користувач вводить числовий пароль. Сказати через скільки спроб користувач ввів  правильний пароль.
////	Дати користувачу максимум три спроби.
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int password_number;
//	int number1 = 0, number2 = 0, number3 = 0;
//
//	cout << "введiть числовий пароль:\t";
//	cin >> password_number;
//	cout << endl;
//	cout << "я вгадаю, коли Ви введете Ваш правильний пароль." << endl;
//	cout << "Спробуймо? Маєте три спроби. Вводьте \t";
//	cin >> number1;
//	
//	if (number1 == password_number)
//	{
//		cout << "\nТак не цiкаво! Перша спроба i вiдразу правильно... Так, номер: " << number1 << endl << endl;
//	}
//	else
//	{
//		cout << "\n\t\tГарна спроба! Потужна! Але.... Не правильна. Не " << number1 << endl;
//		cout << "\t\tСпробуйте ще\t";
//		cin >> number2;
//
//		if (number2 == password_number)
//		{
//			cout << "\nБез азарту Ви... а я сподiвався! Правильна спроба. Так, номер: " << number2 << endl << endl;
//		}
//		else
//		{
//			cout << "\nТеж нiчогенька спроба! А Ви з азартом. \nНе забувайте, лише три спроби. Не правильно. Не " << number2 << endl;
//			cout << "\n\t\tЯ вже передбачаю Ваш вибiр. Але ж вводьте:\t";
//			cin >> number3;
//			if (number3 == password_number)
//			{
//				cout << "\nНарештi. Хух.. Аж подих затамував... Правильно. Номер: " << number3 << endl << endl;
//			}
//			else
//			{
//				cout << "\nНажаль, три спроби вичерпано... Ще раз Ctrl +F5" << endl << endl;
//			}
//		}
//	}
//		
//	system("pause");
//}

//
//#include <iostream>
//using namespace std;
////	9. Дано три числа(a, b, c).Впорядкувати їх за зростанням.
//	//Можна використати наступний алгоритм :
//	//якщо a > b, то поміняти місцями     a<->b
//	//якщо b > с, то поміняти місцями     b<->c
//	//якщо a > b, то поміняти місцями     a<->b
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int number1, number2, number3;
//
//	cout << "enter number 1:\t";
//	cin >> number1;
//	cout << "enter number 2:\t";
//	cin >> number2;
//	cout << "enter number 3:\t";
//	cin >> number3;
//	
//	if (number1 < 0 || number2 < 0 || number3 < 0)
//	{
//		cout << "please, enter only positive numbers\n\n";
//	}
//	else if (number1 < number2 && number1 < number3 && number2 < number3)
//	{
//		cout << endl << number1 << endl;
//		cout << number2 << endl;
//		cout << number3 << endl << endl;
//	}
//	else if (number1 < number2 && number1 < number3 && number2 < number3)
//	{
//		cout << endl << number1 << endl;
//		cout << number3 << endl;
//		cout << number2 << endl << endl;
//	}
//	else if (number2 < number1 && number2 < number3 && number1 < number3)
//	{
//		cout << endl << number2 << endl;
//		cout << number1 << endl;
//		cout << number3 << endl << endl;
//	}
//	else if (number2 <number1 && number2 < number3 && number3 < number1)
//	{
//		cout << endl << number2 << endl;
//		cout << number3 << endl;
//		cout << number1 << endl << endl;
//	}
//	else if (number3 < number1 && number3 < number2 && number1 < number2)
//	{
//		cout << endl << number3 << endl;
//		cout << number1 << endl;
//		cout << number2 << endl << endl;
//	}
//	else if (number3 < number1 && number3 < number2 && number2 < number1)
//	{
//		cout << endl << number3 << endl;
//		cout << number2 << endl;
//		cout << number1 << endl << endl;
//	}
//
//	system("pause");
//}

//#include <iostream>
//#include <string>
//using namespace std;
////8. Running the Race
////Write a program that asks for the names of three runners and the time it took each of
//// them to finish a race.The program should display who came in first, second, and third place.
////Input Validation : Only accept positive numbers for the times.
////Для введення імен використати тип даних string.Потрібно підключити відповідну бібліотек(#include <string>)
//
//int main()
//{
//
//	//setlocale(LC_ALL, "");
//	string name1, name2, name3;
//	int time1 = 0, time2 = 0, time3 = 0;
//
//	cout << "enter name 1:\t";
//	cin >> name1;
//	cout << "enter name 2:\t";
//	cin >> name2;
//	cout << "enter name 3:\t";
//	cin >> name3;
//	cout << "\nenter time of " << name1 << " in sec:\t";
//	cin >> time1;
//	cout << "enter time of " << name2 << " in sec:\t";
//	cin >> time2;
//	cout << "enter time of " << name3 << " in sec:\t";
//	cin >> time3;
//
//	if (time1 < 0 || time2 < 0 || time3 < 0)
//	{
//		cout << "please, enter only positive numbers for the time\n\n";
//	}
//	else if (time1 < time2 && time1 < time3 && time2 < time3)
//	{
//		cout << "\nfirst place = \t" << name1 << endl;
//		cout << "second place = \t" << name2 << endl;
//		cout << "third place = \t" << name3 << endl << endl;
//	}
//	else if (time1 < time2 && time1 < time3 && time2 < time3)
//	{
//		cout << "\nfirst place = \t" << name1 << endl;
//		cout << "second place = \t" << name3 << endl;
//		cout << "third place = \t" << name2 << endl << endl;
//	}
//	else if (time2 < time1 && time2 < time3 && time1 < time3)
//	{
//		cout << "\nfirst place = \t" << name2 << endl;
//		cout << "second place = \t" << name1 << endl;
//		cout << "third place = \t" << name3 << endl << endl;
//	}
//	else if (time2 < time1 && time2 < time3 && time3 < time1)
//	{
//		cout << "\nfirst place = \t" << name2 << endl;
//		cout << "second place = \t" << name3 << endl;
//		cout << "third place = \t" << name1 << endl << endl;
//	}
//	else if (time3 < time1 && time3 < time2 && time1 < time2)
//	{
//		cout << "\nfirst place = \t" << name3 << endl;
//		cout << "second place = \t" << name1 << endl;
//		cout << "third place = \t" << name2 << endl << endl;
//	}
//	else if (time3 < time1 && time3 < time2 && time2 < time1)
//	{
//		cout << "\nfirst place = \t" << name3 << endl;
//		cout << "second place = \t" << name2 << endl;
//		cout << "third place = \t" << name1 << endl << endl;
//	}
//
//	system("pause");
//}

//
//
//#include <iostream>
//using namespace std;
////7. Internet Service Provider
////An Internet service provider has three different subscription packages for its customers :
////Package A : For $9.95 per month 10 hours of access are provided.Additional hours
////are $2.00 per hour.
////Package B : For $14.95 per month 20 hours of access are provided.Additional
////hours are $1.00 per hour.
////Package C : For $19.95 per month unlimited access is provided.
////Write a program that calculates a customer s monthly bill.It should ask which package
////the customer has purchased and how many hours were used.It should then display
////the total amount due.
//
//int main()
//{
//
//	setlocale(LC_ALL, "");
//	double packA = 9.95, packB = 14.95, packC = 19.95, hours = 0;
//	int pack = 0;
//
//	cout << "package A = 1\npackage B = 2\npackage C = 3\nenter your package:\t";
//	cin >> pack;
//	cout << "enter used hours:\t";
//	cin >> hours;
//
//	if (pack != 1 && pack != 2 && pack != 3 || hours < 0)
//	{
//		cout << endl << "please, enter correct data" << endl << endl;
//	}
//	else if (pack == 1)
//	{
//		if (hours <= 10)
//		{
//			cout << endl << "your bill is " << packA << " USD" << endl << endl;
//		}
//		else
//		{
//			cout << endl << "your bill is " << packA + (hours - 10) * 2 << " USD" << endl << endl;
//		}
//	}
//	else if (pack == 2)
//	{
//		if (hours <= 20)
//		{
//			cout << endl << "your bill is " << packB << " USD" << endl << endl;
//		}
//		else
//		{
//			cout << endl << "your bill is " << packB + hours - 20 << " USD" << endl << endl;
//		}
//	}
//	else if (pack == 3)
//	{
//		cout << endl << "your bill is " << packC << " USD" << endl << endl;
//	}
//
//	system("pause");
//}

//#include <iostream>
//using namespace std;
// //6. Дано рік(номер року). Визначити чи рік високосний. Рік високосний, якщо число року року ділиться націло на 4 і не ділиться на 100
// //(наприклад високосними є 1996, 1992 роки).
// //Серед років, число яких має дві останн і цифри нулі(тобто рік ділиться на 100), високосними є ті що діляться на 400
// //(н - д, 1600, 1200 – високосні, а 1700, 1900 - ні)
//
//int main()
//{
//
//	setlocale(LC_ALL, "");
//	int year = 0;
//
//	cout << "enter year:\t";
//	cin >> year;
//	
//	year % 4== 0 && year %100 || year % 100 == 0 && year % 400 == 0 ? (cout << "рiк " << year << " - високосний!" << endl ) : cout << "рiк " << year << " - не високосний!" << endl;
//		
//	
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//// 5. Дано три числа.Визначити чи  всі вони не нулі.
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num1 = 0, num2 = 0, num3 = 0;
//
//	cout << "введiть число 1:\t";
//	cin >> num1;
//	cout << "введiть число 2:\t";
//	cin >> num2;
//	cout << "введiть число 3:\t";
//	cin >> num3;
//
//	if (num1 /*!=0*/ || num2 /*!=0*/ || num3/*!=0*/)
//	{
//		cout << "тут не всi нулi" << endl << endl;
//	}
//
//	else cout << "це всi нулi" << endl << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//// 4. Дано два числа. Визначити чи  серед них є 0.
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num1, num2;
//
//	cout << "введiть число 1:\t";
//	cin >> num1;
//	cout << "введiть число 2:\t";
//	cin >> num2;
//
//
//	if (num1 /*!=0*/ && num2 /*!=0*/)
//	{
//		cout << "тут немає 0" << endl << endl;
//	}
//
//	else cout << "тут є 0" << endl << endl;
//	system("pause");
//}


//#include <iostream>
//using namespace std;
//// 3. Дано два числа. Визначити чи їх сума  рівна 0.
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num1 = 0, num2=0;
//
//	cout << "введiть число 1:\t";
//	cin >> num1;
//	cout << "введіть число 2:\t";
//	cin >> num2;
//
//
//	if (num1 + num2 /*!=0*/)
//	{
//		cout << "сума не = 0" << endl << endl;
//	}
//
//	else cout << "сума = 0" << endl << endl;
//	system("pause");
//}


//#include <iostream>
//using namespace std;
//// 2. Вводиться число.Визначити чи число ділиться на 5, але не ділиться на 3
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num = 0;
//
//	cout << "enter number:\t";
//	cin >> num;
//	if (num % 5 == 0 && num % 3/* !=0*/)
//	{
//		cout << "дiлиться на 5, не дiлиться на 3" << endl << endl;
//	}
//
//	else cout << "не дiлиться на 5 або дiлиться на 3!" << endl << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//// 1. Вводиться число. Перевірити чи   число не ділиться на 11.
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num = 0;
//
//	cout << "введiть число:\t";
//	cin >> num;
//	if (num %11/* != 0 */)
//	{
//		cout << "число " << num << " не дiлиться на 11" << endl << endl;
//	}
//
//	else cout << "число " << num << " дiлиться на 11" << endl << endl;
//	system("pause");
//}

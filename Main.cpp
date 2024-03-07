#include <iostream>
#include <map>

using namespace std;

void Welcome() {
	cout << "==================================================\n";
	cout << "\t\tCURRENCY CONVERTER\n";
	cout << "==================================================\n";
}

void DisplayCurrencies() {
	cout << "1. USD\n";
	cout << "2. EUR\n";
	cout << "3. GBP\n";
	cout << "4. AUD\n";
	cout << "5. CAD\n";
}

string CurrencyType(int currency) {
	map<int, string> conversion;

	conversion[1] = "USD";
	conversion[2] = "EUR";
	conversion[3] = "GBP";
	conversion[4] = "AUD";
	conversion[5] = "CAD";
	
	if (currency == 1) {
		return conversion[1];
	}
	else if (currency == 2) {
		return conversion[2];
	}
	else if (currency == 3) {
		return conversion[3];
	}
	else if (currency == 4) {
		return conversion[4];
	}
	else if (currency == 5) {
		return conversion[5];
	}

}


int main() {
	double userValue;
	int optionCurrency;
	int optionCurrencyConversion;

	Welcome();
	cout << "\n";
	DisplayCurrencies();
	cout << "\n";
	cout << "What's your currency? (Choose a number) ";
	cin >> optionCurrency;
	if (optionCurrency <= 5 && optionCurrency > 0) {
		system("cls");
		cout << "How many " << CurrencyType(optionCurrency) << " do you want to convert: ";
		cin >> userValue;
		system("cls");
		DisplayCurrencies();
		cout << "You want to convert " << userValue << " " << CurrencyType(optionCurrency) << " to... \n";
		cin >> optionCurrencyConversion;
		if (optionCurrency != optionCurrencyConversion) {
			if (optionCurrency == 1 && optionCurrencyConversion == 2) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 0.92 << " EUR\n";
			}
			else if (optionCurrency == 1 && optionCurrencyConversion == 3) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 0.79 << " GBP\n";
			}
			else if (optionCurrency == 1 && optionCurrencyConversion == 4) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.52 << " AUD\n";
			}
			else if (optionCurrency == 1 && optionCurrencyConversion == 5) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.35 << " CAD\n";
			}
			else if (optionCurrency == 2 && optionCurrencyConversion == 1) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.09 << " USD\n";
			}
			else if (optionCurrency == 2 && optionCurrencyConversion == 3) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 0.86 << " GBP\n";
			}
			else if (optionCurrency == 2 && optionCurrencyConversion == 4) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.66 << " AUD\n";
			}
			else if (optionCurrency == 2 && optionCurrencyConversion == 5) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.47 << " CAD\n";
			}
			else if (optionCurrency == 3 && optionCurrencyConversion == 1) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.27 << " USD\n";
			}
			else if (optionCurrency == 3 && optionCurrencyConversion == 2) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.17 << " GBP\n";
			}
			else if (optionCurrency == 3 && optionCurrencyConversion == 4) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.94 << " AUD\n";
			}
			else if (optionCurrency == 3 && optionCurrencyConversion == 5) {
				cout << userValue << " " << CurrencyType(optionCurrency) << " --> " << userValue * 1.72 << " CAD\n";
			}
			else {
				cout << "Invalid entry\n";
			}
		}
		else if (optionCurrency == optionCurrencyConversion) {
			cout << "You already have " << optionCurrency << " converted\n";
		}
		

	}
	else {
		cout << "Invalid entry\n";
	}


	return 0;
}
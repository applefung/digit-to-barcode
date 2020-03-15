/*
 * AssignmentOne.cpp
 *
 *  Created on: 2018¦~10¤ë7¤é
 *      Author: 80411
 */
#include <iostream>
#include <cstring>

using namespace std;

const char NULL_CHAR = '\0';

/*
 * Function: digits_to_barcode
 * To convert the given digit string to a barcode string
 * Return nothing (void)
 */

/* ADD YOUR CODE HERE */
void digits_to_barcode(const char barcodes[][6], char input_string[], char output_barcode[2501])
{
	int length=strlen(input_string);
	for (int i=0; i<length; i++)
	{
		if (input_string[i]=='0')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[0][z];
			}
		}
		else if (input_string[i]=='1')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[1][z];
			}
		}
		else if(input_string[i]=='2')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[2][z];
			}
		}
		else if(input_string[i]=='3')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[3][z];
			}
		}
		else if(input_string[i]=='4')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[4][z];
			}
		}
		else if(input_string[i]=='5')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[5][z];
			}
		}
		else if(input_string[i]=='6')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[6][z];
			}
		}
		else if(input_string[i]=='7')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[7][z];
			}
		}
		else if(input_string[i]=='8')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[8][z];
			}
		}
		else if(input_string[i]=='9')
		{
			for(int z=0; z<5; z++)
			{
				output_barcode[z+5*i]=barcodes[9][z];
			}
		}
	}
	int sum=0;
	for (int j=0; j<length; j++)
	{
		sum+=(static_cast<int>(input_string[j])-'0');
	}
	int difference=10-sum%10;
	if (difference==10)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[0][z];
		}
	}
	else if (difference==1)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[1][z];
		}
	}
	if (difference==2)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[2][z];
		}
	}
	if (difference==3)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[3][z];
		}
	}
	if (difference==4)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[4][z];
		}
	}
	if (difference==5)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[5][z];
		}
	}
	if (difference==6)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[6][z];
		}
	}
	if (difference==7)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[7][z];
		}
	}
	if (difference==8)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[8][z];
		}
	}
	if (difference==9)
	{
		for(int z=0; z<5; z++)
		{
			output_barcode[5*length+z]=barcodes[9][z];
		}
	}
	output_barcode[5*length+5]='\0';
}


/*
 * Function: barcode_to_digits
 * Return true and store the digits in digit_string if barcode is valid;
 * Return false otherwise
 */

/* ADD YOUR CODE HERE */
bool barcode_to_digits(const char barcodes[][6], char input_string[], char digit_string[])
{
	int length=strlen(input_string);
	if (length%5 !=0)
	{
		return false;
	}
	for (int i=0; i<(length/5); i++)
	{
		int a=0;
		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[0][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='0';
			continue;
		}

		for(; a<5; a++)
		{
			if (input_string[a+5*i]!= barcodes[1][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='1';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[2][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='2';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[3][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='3';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[4][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='4';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[5][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='5';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[6][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='6';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[7][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='7';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[8][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='8';
			continue;
		}


		for(; a<5; a++)
		{
			if (input_string[a+5*i]!=barcodes[9][a])
			{
				break;
			}
		}
		if (a==5)
		{
			digit_string[i]='9';
			continue;
		}
	}
		digit_string[(length/5)]='\0';
		int sum=0;
		for (int b=0; b<(length/5-1); b++)
		{
			sum+=static_cast<int>(digit_string[b]-'0');
		}
		if ((((sum%10)+digit_string[length/5])%10!=0))
		{
			return false;
		}
		else
		{
			digit_string[(length/5-1)]='\0';
			return true;
		}
}



/*
 * Function: main
 * You are NOT ALLOWED to change ANY CODE in this function
 */
int main()
{
	const char barcodes[][6]=
		{
			"'''||",
			"||'''",
			"|'|''",
			"|''|'",
			"|'''|",
			"'||''",
			"'|'|'",
			"'|''|",
			"''||'",
			"''|'|"
		};

	int option;
	char input_string[501];		// a barcode or digit string

	do {
		cout << endl;
		cout << "Welcome to the barcode program!" << endl;
		cout << "Please select an option to proceed:" << endl;
		cout << "1. Convert digits to barcode" << endl;
		cout << "2. Revert digits from barcode" << endl;
		cout << "3. Exit" << endl << endl;

		cout << "Your option: ";
		cin >> option;

		switch(option)
		{
			case 1:
				cout << "Please enter the digit sequence: ";
				cin >> input_string;

				char output_barcode[2506];		// barcode string
				digits_to_barcode(barcodes, input_string, output_barcode);
				cout << "The barcode is: " << output_barcode << endl;
				break;

			case 2:
				cout << "Please enter the barcode: ";
				cin >> input_string;

				char digit_string[101];
				if (barcode_to_digits(barcodes, input_string, digit_string))
					cout << "The digit sequence is: " << digit_string << endl;
				else
					cout << "Invalid barcode." << endl;
				break;

			case 3:
				break;

			default:
				cout << "Invalid option. Please try again." << endl;
				break;
		}

	} while (option != 3);

	return 0;
}




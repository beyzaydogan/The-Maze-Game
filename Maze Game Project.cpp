#include  <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <stdio.h>
#include <time.h>
#include <conio.h>
using namespace std;

void cartypef1(int* f, int j){
	int g = 7;
	*(f + j) = g;

}
void cartypeb1(int* n, int j){
	int k = 8;
	*(n + j) = k;

}

void cartypef2(int* f, int j){
	int g = 7;
	*(f + j) = g;

}
void cartypeb2(int* n, int j){
	int k = 8;
	*(n + j) = k;

}

void gameboard1(int* arr, int m, int n, int x[100], int y[100]) {
	int coordvalue;
	int randomcoordvalue;



	for (int i = 0; i < m*n; i++){

		if (i % 10 != 0 || i == 0){
			coordvalue = *(arr + i);


			if (coordvalue == 3)
				cout << "x";
			else if (coordvalue == 7)
				cout << "f";
			else if (coordvalue == 8)
				cout << "b";


			else if (coordvalue == 4)
				cout << " ";

			else if (coordvalue == 1){
				randomcoordvalue = x[i];
				if (randomcoordvalue == 1){

					cout << char(219);
				}
				else if (randomcoordvalue == 0){
					if (y[i] == 5)
						cout << "t";
					else if (y[i] == 6)
						cout << "$";
					else if (y[i] == 7)
						cout << "#";
					else
						cout << " ";
				}
			}

			else if (coordvalue == 2){
				if (y[i] == 5)
					cout << "t";
				else if (y[i] == 6)
					cout << "$";
				else if (y[i] == 7)
					cout << "#";
				else
					cout << " ";
			}
		}


		else if (i % 10 == 0){
			cout << endl;
			coordvalue = *(arr + i);



			if (coordvalue == 1){
				randomcoordvalue = x[i];
				if (randomcoordvalue == 1){

					cout << char(219);
				}

				else if (randomcoordvalue == 0){

					if (y[i] == 5)
						cout << "t";
					else if (y[i] == 6)
						cout << "$";
					else if (y[i] == 7)
						cout << "#";
					else
						cout << " ";
				}
			}
			else if (coordvalue == 7)
				cout << "f";
			else if (coordvalue == 8)
				cout << "b";

			else if (coordvalue == 2){
				if (y[i] == 5)
					cout << "t";
				else if (y[i] == 6)
					cout << "$";
				else if (y[i] == 7)
					cout << "#";
				else
					cout << " ";
			}

			else if (coordvalue == 4)
				cout << " ";

			else if (coordvalue == 3)
				cout << "x";

		}
	}
}

void gameboard2(int* arr, int m, int n, int x[200], int y[200]) {
	int coordvalue;
	int randomcoordvalue;



	for (int i = 0; i < m*n; i++){

		if (i % 20 != 0 || i == 0){
			coordvalue = *(arr + i);


			if (coordvalue == 3)
				cout << "x";
			else if (coordvalue == 7)
				cout << "f";
			else if (coordvalue == 8)
				cout << "b";


			else if (coordvalue == 4)
				cout << " ";

			else if (coordvalue == 1){
				randomcoordvalue = x[i];
				if (randomcoordvalue == 1){

					cout << char(219);
				}
				else if (randomcoordvalue == 0){
					if (y[i] == 5)
						cout << "t";
					else if (y[i] == 6)
						cout << "$";
					else if (y[i] == 7)
						cout << "#";
					else
						cout << " ";
				}
			}

			else if (coordvalue == 2){
				if (y[i] == 5)
					cout << "t";
				else if (y[i] == 6)
					cout << "$";
				else if (y[i] == 7)
					cout << "#";
				else
					cout << " ";
			}
		}


		else if (i % 20 == 0){
			cout << endl;
			coordvalue = *(arr + i);



			if (coordvalue == 1){
				randomcoordvalue = x[i];
				if (randomcoordvalue == 1){

					cout << char(219);
				}

				else if (randomcoordvalue == 0){

					if (y[i] == 5)
						cout << "t";
					else if (y[i] == 6)
						cout << "$";
					else if (y[i] == 7)
						cout << "#";
					else
						cout << " ";
				}
			}
			else if (coordvalue == 7)
				cout << "f";
			else if (coordvalue == 8)
				cout << "b";

			else if (coordvalue == 2){
				if (y[i] == 5)
					cout << "t";
				else if (y[i] == 6)
					cout << "$";
				else if (y[i] == 7)
					cout << "#";
				else
					cout << " ";
			}

			else if (coordvalue == 4)
				cout << " ";

			else if (coordvalue == 3)
				cout << "x";

		}
	}
}

int main(){
	int gametype;
	cout << "1-GAME WITH COMPUTER CONTROL AND SAME RANDOM VALUE" << endl << "2-GAME WITH USER CONTROL AND DIFFERENT RANDOM VALUE" << endl << "CHOOSE GAME TYPE";
	cin >> gametype;
	switch (gametype){

	case 1:{
		srand(time(NULL));

		time_t start1, finish1;
		start1 = time(NULL);


		int firstlvl[10][10];

		for (int i = 0; i<10; i++){
			for (int j = 0; j<10; j++){
				firstlvl[i][j] = 1;
			}
		}
		firstlvl[0][7] = 3;
		for (int i = 1; i<5; i++){
			firstlvl[i][7] = 2;
		}
		for (int i = 2; i<7; i++){
			firstlvl[4][i] = 2;
		}
		for (int i = 5; i<10; i++){
			firstlvl[i][2] = 2;
		}
		firstlvl[9][2] = 4;



		int time1 = 15;
		int* arraystart1;
		int* coord1;
		int row1 = 10;
		int column1 = 10;
		arraystart1 = &firstlvl[0][0];
		coord1 = &firstlvl[0][7];
		bool game1 = true;
		bool game2 = true;
		int randomcoord1[100];
		for (int i = 0; i < row1*column1; i++){
			if (*(arraystart1 + i) == 1)
				randomcoord1[i] = rand() % 2;
			else
				randomcoord1[i] = 0;
		}
		int randombonus1[100];
		for (int i = 0; i < row1*column1; i++){
			if (*(arraystart1 + i) == 2 || randomcoord1[i] == 0 &&*(arraystart1+i)!=4){
				randombonus1[i] = (rand() % 35) + 1;

			}
		}




		int i1 = 7;
		int score1 = 0;

		while (game1){



			system("cls");


			gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);



			int move1 = (rand() % 4) + 1;
			if (move1 == 1){

				int temp = 0;


				if (randombonus1[i1 - column1] == 5){

					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					randombonus1[i1 - column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - column1;
					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;
					}
				}
				else if (randombonus1[i1 - column1] == 6){

					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					randombonus1[i1 - column1] = 2;
					if ((i1 - column1) % 2 == 0){
						cartypef1(arraystart1, i1 - column1);
					}
					else
					{
						cartypeb1(arraystart1, i1 - column1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - column1;
					score1 = score1 + 100;

					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - column1] == 7){
					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					randombonus1[i1 - column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - column1;
					score1 = score1 - 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 - column1) == 1 && randomcoord1[i1 - column1] == 0 || *(coord1 - column1) == 2){
					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					i1 = i1 - column1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}




			}

			else if (move1 == 3){


				int temp = 0;


				if (randombonus1[i1 + column1] == 5){

					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					randombonus1[i1 + column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + column1;
					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + column1] == 6){
					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					randombonus1[i1 + column1] = 2;
					if ((i1 + column1) % 2 == 0){
						cartypef1(arraystart1, i1 + column1);
					}
					else
					{
						cartypeb1(arraystart1, i1 + column1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + column1;
					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + column1] == 7){
					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					randombonus1[i1 + column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + column1;
					score1 = score1 - 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 + column1) == 1 && randomcoord1[i1 + column1] == 0 || *(coord1 + column1) == 2){
					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					i1 = i1 + column1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}


				else if (*(coord1 + column1) == 4){

					*(coord1 + column1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 + column1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}

			}

			else if (move1 == 4)
			{

				int temp = 0;
				if ((1 + i1) % 10 == 0){
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}

				}
				else if (randombonus1[i1 + 1] == 5){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					randombonus1[i1 + 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + 1;
					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + 1] == 6){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					randombonus1[i1 + 1] = 2;
					if ((i1 + 1) % 2 == 0){
						cartypef1(arraystart1, i1 + 1);
					}
					else
					{
						cartypeb1(arraystart1, i1 + 1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + 1;
					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + 1] == 7){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					randombonus1[i1 + 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + 1;
					score1 = score1 - 100;

					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}

				else if (*(coord1 + 1) == 1 && randomcoord1[i1 + 1] == 0 || *(coord1 + 1) == 2){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					i1 = i1 + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}

				}

				else if (*(coord1 + 1) == 4){
					*(coord1 + 1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 + 1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}

			}

			else if (move1 == 2){

				int temp = 0;
				if (i1 % 10 == 0 && i1 != 0){

					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - 1] == 5){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - 1;
					randombonus1[i1 - 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - 1;
					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - 1] == 6){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - 1;
					randombonus1[i1 - 1] = 2;
					if ((i1 - 1) % 2 == 0){
						cartypef1(arraystart1, i1 - 1);
					}
					else
					{
						cartypeb1(arraystart1, i1 - 1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - 1;

					score1 = score1 + 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - 1] == 7){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - 1;
					randombonus1[i1 - 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - 1;
					score1 = score1 - 100;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}

				else if (*(coord1 - 1) == 1 && randomcoord1[i1 - 1] == 0 || *(coord1 - 1) == 2){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = (coord1 - 1);
					i1 = i1 - 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 - 1) == 4){
					*(coord1 - 1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 - 1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}

			}


		}

		Sleep(3000);

		time_t start2, finish2;
		start2 = time(NULL);

		int secondlvl[10][20];

		for (int i = 0; i<10; i++){
			for (int j = 0; j<20; j++){
				secondlvl[i][j] = 1;
			}
		}
		secondlvl[0][3] = 3;
		for (int i = 1; i<7; i++){
			secondlvl[i][3] = 2;
		}
		for (int i = 4; i<14; i++){
			secondlvl[6][i] = 2;
		}
		for (int i = 7; i<10; i++){
			secondlvl[i][13] = 2;
		}
		secondlvl[9][13] = 4;

		int time2 = 35;

		int* arraystart2;
		int* coord2;
		int row2 = 10;
		int column2 = 20;
		arraystart2 = &secondlvl[0][0];
		coord2 = &secondlvl[0][3];
		int randomcoord2[200];
		for (int i = 0; i < row2*column2; i++){
			if (*(arraystart2 + i) == 1)
				randomcoord2[i] = rand() % 2;
			else
				randomcoord2[i] = 0;
		}
		int randombonus2[200];
		for (int i = 0; i < row2*column2; i++){
			if (*(arraystart2 + i) == 2 || randomcoord2[i] == 0 && *(arraystart2+i)!=4){
				randombonus2[i] = (rand() % 30) + 1;

			}
		}




		int i2 = 3;
		int score2 = 0;

		while (game2){



			system("cls");


			gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);



			int move2 = (rand() % 4) + 1;
			if (move2 == 1){

				int temp = 0;


				if (randombonus2[i2 - column2] == 5){

					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					randombonus2[i2 - column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - column2;
					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - column2] == 6){

					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					randombonus2[i2 - column2] = 2;
					if ((i2 - column2) % 2 == 0){
						cartypef2(arraystart2, i2 - column2);
					}
					else
					{
						cartypeb2(arraystart2, i2 - column2);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - column2;
					score2 = score2 + 100;

					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - column2] == 7){
					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					randombonus2[i2 - column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - column2;
					score2 = score2 - 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (*(coord2 - column2) == 1 && randomcoord2[i2 - column2] == 0 || *(coord2 - column2) == 2){
					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					i2 = i2 - column2;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}




			}

			else if (move2 == 3){


				int temp = 0;


				if (randombonus2[i2 + column2] == 5){

					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					randombonus2[i2 + column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + column2;
					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + column2] == 6){
					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					randombonus2[i2 + column2] = 2;
					if ((i2 + column2) % 2 == 0){
						cartypef2(arraystart2, i2 + column2);
					}
					else
					{
						cartypeb2(arraystart2, i2 + column2);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + column2;
					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + column2] == 7){
					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					randombonus2[i2 + column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + column2;
					score2 = score2 - 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (*(coord2 + column2) == 1 && randomcoord2[i2 + column2] == 0 || *(coord2 + column2) == 2){
					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					i2 = i2 + column2;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}


				else if (*(coord2 + column2) == 4){

					*(coord2 + column2) = *coord2;

					*coord2 = 2;
					coord2 = coord2 + column2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}

			}

			else if (move2 == 4)
			{

				int temp = 0;
				if ((1 + i2) % 20 == 0){
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}

				}
				else if (randombonus2[i2 + 1] == 5){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					randombonus2[i2 + 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + 1;
					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + 1] == 6){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					randombonus2[i2 + 1] = 2;
					if ((i2 + 1) % 2 == 0){
						cartypef2(arraystart2, i2 + 1);
					}
					else
					{
						cartypeb2(arraystart2, i2 + 1);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + 1;
					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + 1] == 7){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					randombonus2[i2 + 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + 1;
					score2 = score2 - 100;

					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}

				else if (*(coord2 + 1) == 1 && randomcoord2[i2 + 1] == 0 || *(coord2 + 1) == 2){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					i2 = i2 + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}

				}

				else if (*(coord2 + 1) == 4){
					*(coord2 + 1) = *coord2;

					*coord2 = 2;
					coord2 = coord2 + 1;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}

			}

			else if (move2 == 2){

				int temp = 0;
				if (i2 % 20 == 0 && i2 != 0){

					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - 1] == 5){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - 1;
					randombonus2[i2 - 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - 1;
					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - 1] == 6){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - 1;
					randombonus2[i2 - 1] = 2;
					if ((i2 - 1) % 2 == 0){
						cartypef2(arraystart2, i2 - 1);
					}
					else
					{
						cartypeb2(arraystart2, i2 - 1);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - 1;

					score2 = score2 + 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - 1] == 7){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - 1;
					randombonus2[i2 - 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - 1;
					score2 = score2 - 100;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}

				else if (*(coord2 - 1) == 1 && randomcoord2[i2 - 1] == 0 || *(coord2 - 1) == 2){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = (coord2 - 1);
					i2 = i2 - 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (*(coord2 - 1) == 4){
					*(coord2 - 1) = *coord2;

					*coord2 = 2;
					coord2 = coord2 - 1;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}

			}


		}
		break;
	}

	case 2:{
		srand(time(NULL));

		time_t start1, finish1;
		start1 = time(NULL);

		int firstlvl[10][10];

		for (int i = 0; i<10; i++){
			for (int j = 0; j<10; j++){
				firstlvl[i][j] = 1;
			}
		}
		firstlvl[0][7] = 3;
		for (int i = 1; i<5; i++){
			firstlvl[i][7] = 2;
		}
		for (int i = 2; i<7; i++){
			firstlvl[4][i] = 2;
		}
		for (int i = 5; i<10; i++){
			firstlvl[i][2] = 2;
		}
		firstlvl[9][2] = 4;

		int time1 = 15;
		int* arraystart1;
		int* coord1;
		int row1 = 10;
		int column1 = 10;
		arraystart1 = &firstlvl[0][0];
		coord1 = &firstlvl[0][7];
		bool game1 = true;
		bool game2 = true;
		int randomcoord1[100];
		for (int i = 0; i < row1*column1; i++){
			if (*(arraystart1 + i) == 1)
				randomcoord1[i] = rand() % 2;
			else
				randomcoord1[i] = 0;
		}
		int randombonus1[100];
		for (int i = 0; i < row1*column1; i++){
			if (*(arraystart1 + i) == 2 || randomcoord1[i] == 0 && *(arraystart1 + i) != 4){
				randombonus1[i] = (rand() % 35) + 1;

			}
		}


		char move1;

		int i1 = 7;
		int score1 = 0;

		while (game1){



			system("cls");


			gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
			move1 = _getch();




			if (move1 == 'w'){

				int temp = 0;


				if (randombonus1[i1 - column1] == 5){

					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					randombonus1[i1 - column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - column1;
					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;
					}
				}
				else if (randombonus1[i1 - column1] == 6){

					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					randombonus1[i1 - column1] = 2;
					if ((i1 - column1) % 2 == 0){
						cartypef1(arraystart1, i1 - column1);
					}
					else
					{
						cartypeb1(arraystart1, i1 - column1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - column1;
					score1 = score1 + (rand() % 100) + 1;

					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - column1] == 7){
					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					randombonus1[i1 - column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - column1;
					score1 = score1 - (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 - column1) == 1 && randomcoord1[i1 - column1] == 0 || *(coord1 - column1) == 2){
					temp = *(coord1 - column1);
					*(coord1 - column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - column1;
					i1 = i1 - column1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 - column1) == 4){

					*(coord1 - column1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 - column1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}




			}

			else if (move1 == 's'){


				int temp = 0;


				if (randombonus1[i1 + column1] == 5){

					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					randombonus1[i1 + column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + column1;
					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + column1] == 6){
					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					randombonus1[i1 + column1] = 2;
					if ((i1 + column1) % 2 == 0){
						cartypef1(arraystart1, i1 + column1);
					}
					else
					{
						cartypeb1(arraystart1, i1 + column1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + column1;
					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + column1] == 7){
					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					randombonus1[i1 + column1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + column1;
					score1 = score1 - (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 + column1) == 1 && randomcoord1[i1 + column1] == 0 || *(coord1 + column1) == 2){
					temp = *(coord1 + column1);
					*(coord1 + column1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + column1;
					i1 = i1 + column1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}


				else if (*(coord1 + column1) == 4){

					*(coord1 + column1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 + column1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}

			}

			else if (move1 == 'd')
			{

				int temp = 0;
				if ((1 + i1) % 10 == 0){
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}

				}
				else if (randombonus1[i1 + 1] == 5){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					randombonus1[i1 + 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + 1;
					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + 1] == 6){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					randombonus1[i1 + 1] = 2;
					if ((i1 + 1) % 2 == 0){
						cartypef1(arraystart1, i1 + 1);
					}
					else
					{
						cartypeb1(arraystart1, i1 + 1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + 1;
					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 + 1] == 7){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					randombonus1[i1 + 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 + 1;
					score1 = score1 - (rand() % 100) + 1;

					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}

				else if (*(coord1 + 1) == 1 && randomcoord1[i1 + 1] == 0 || *(coord1 + 1) == 2){
					temp = *(coord1 + 1);
					*(coord1 + 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 + 1;
					i1 = i1 + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}

				}

				else if (*(coord1 + 1) == 4){
					*(coord1 + 1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 + 1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}

			}

			else if (move1 == 'a'){

				int temp = 0;
				if (i1 % 10 == 0 && i1 != 0){

					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - 1] == 5){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - 1;
					randombonus1[i1 - 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - 1;
					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - 1] == 6){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - 1;
					randombonus1[i1 - 1] = 2;
					if ((i1 - 1) % 2 == 0){
						cartypef1(arraystart1, i1 - 1);
					}
					else
					{
						cartypeb1(arraystart1, i1 - 1);
					}
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - 1;

					score1 = score1 + (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (randombonus1[i1 - 1] == 7){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = coord1 - 1;
					randombonus1[i1 - 1] = 2;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					i1 = i1 - 1;
					score1 = score1 - (rand() % 100) + 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}

				else if (*(coord1 - 1) == 1 && randomcoord1[i1 - 1] == 0 || *(coord1 - 1) == 2){
					temp = *(coord1 - 1);
					*(coord1 - 1) = *coord1;
					*coord1 = temp;
					coord1 = (coord1 - 1);
					i1 = i1 - 1;
					finish1 = time(NULL);
					if (difftime(finish1, start1) > time1){
						if (score1 < 0){
							score1 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score1;
						game1 = false;
						game2 = false;

					}
				}
				else if (*(coord1 - 1) == 4){
					*(coord1 - 1) = *coord1;

					*coord1 = 2;
					coord1 = coord1 - 1;
					system("cls");
					gameboard1(arraystart1, row1, column1, randomcoord1, randombonus1);
					game1 = false;
					if (score1 < 0){
						score1 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score1;


				}

			}


		}

		Sleep(3000);

		time_t start2, finish2;
		start2 = time(NULL);

		int secondlvl[10][20];

		for (int i = 0; i<10; i++){
			for (int j = 0; j<20; j++){
				secondlvl[i][j] = 1;
			}
		}
		secondlvl[0][3] = 3;
		for (int i = 1; i<7; i++){
			secondlvl[i][3] = 2;
		}
		for (int i = 4; i<14; i++){
			secondlvl[6][i] = 2;
		}
		for (int i = 7; i<10; i++){
			secondlvl[i][13] = 2;
		}
		secondlvl[9][13] = 4;

		int time2 = 35;

		int* arraystart2;
		int* coord2;
		int row2 = 10;
		int column2 = 20;
		arraystart2 = &secondlvl[0][0];
		coord2 = &secondlvl[0][3];
		int randomcoord2[200];
		for (int i = 0; i < row2*column2; i++){
			if (*(arraystart2 + i) == 1)
				randomcoord2[i] = rand() % 2;
			else
				randomcoord2[i] = 0;
		}
		int randombonus2[200];
		for (int i = 0; i < row2*column2; i++){
			if (*(arraystart2 + i) == 2 || randomcoord2[i] == 0 && *(arraystart2+i)!=4){
				randombonus2[i] = (rand() % 30) + 1;


			}
		}

		char move2;


		int i2 = 3;
		int score2 = 0;

		while (game2){



			system("cls");


			gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);




			move2 = _getch();
			if (move2 == 'w'){

				int temp = 0;


				if (randombonus2[i2 - column2] == 5){

					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					randombonus2[i2 - column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - column2;
					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - column2] == 6){

					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					randombonus2[i2 - column2] = 2;
					if ((i2 - column2) % 2 == 0){
						cartypef2(arraystart2, i2 - column2);
					}
					else
					{
						cartypeb2(arraystart2, i2 - column2);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - column2;
					score2 = score2 + (rand() % 100) + 1;

					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - column2] == 7){
					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					randombonus2[i2 - column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - column2;
					score2 = score2 - (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (*(coord2 - column2) == 1 && randomcoord2[i2 - column2] == 0 || *(coord2 - column2) == 2){
					temp = *(coord2 - column2);
					*(coord2 - column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - column2;
					i2 = i2 - column2;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}

				else if (*(coord2 - column2) == 4){
					*(coord2 - column2) = *coord2;

					*coord2 = 2;
					coord2 = coord2 - column2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}


			}

			else if (move2 == 's'){


				int temp = 0;


				if (randombonus2[i2 + column2] == 5){

					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					randombonus2[i2 + column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + column2;
					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + column2] == 6){
					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					randombonus2[i2 + column2] = 2;
					if ((i2 + column2) % 2 == 0){
						cartypef2(arraystart2, i2 + column2);
					}
					else
					{
						cartypeb2(arraystart2, i2 + column2);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + column2;
					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + column2] == 7){
					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					randombonus2[i2 + column2] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + column2;
					score2 = score2 - (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (*(coord2 + column2) == 1 && randomcoord2[i2 + column2] == 0 || *(coord2 + column2) == 2){
					temp = *(coord2 + column2);
					*(coord2 + column2) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + column2;
					i2 = i2 + column2;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}


				else if (*(coord2 + column2) == 4){

					*(coord2 + column2) = *coord2;

					*coord2 = 2;
					coord2 = coord2 + column2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}

			}

			else if (move2 == 'd')
			{

				int temp = 0;
				if ((1 + i2) % 20 == 0){
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}

				}
				else if (randombonus2[i2 + 1] == 5){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					randombonus2[i2 + 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + 1;
					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + 1] == 6){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					randombonus2[i2 + 1] = 2;
					if ((i2 + 1) % 2 == 0){
						cartypef2(arraystart2, i2 + 1);
					}
					else
					{
						cartypeb2(arraystart2, i2 + 1);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + 1;
					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 + 1] == 7){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					randombonus2[i2 + 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 + 1;
					score2 = score2 - (rand() % 100) + 1;

					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}

				else if (*(coord2 + 1) == 1 && randomcoord2[i2 + 1] == 0 || *(coord2 + 1) == 2){
					temp = *(coord2 + 1);
					*(coord2 + 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 + 1;
					i2 = i2 + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}

				}

				else if (*(coord2 + 1) == 4){
					*(coord2 + 1) = *coord2;

					*coord2 = 2;
					coord2 = coord2 + 1;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}

			}

			else if (move2 == 'a'){

				int temp = 0;
				if (i2 % 20 == 0 && i2 != 0){

					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - 1] == 5){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - 1;
					randombonus2[i2 - 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - 1;
					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - 1] == 6){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - 1;
					randombonus2[i2 - 1] = 2;
					if ((i2 - 1) % 2 == 0){
						cartypef2(arraystart2, i2 - 1);
					}
					else
					{
						cartypeb2(arraystart2, i2 - 1);
					}
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - 1;

					score2 = score2 + (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (randombonus2[i2 - 1] == 7){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = coord2 - 1;
					randombonus2[i2 - 1] = 2;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					i2 = i2 - 1;
					score2 = score2 - (rand() % 100) + 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}

				else if (*(coord2 - 1) == 1 && randomcoord2[i2 - 1] == 0 || *(coord2 - 1) == 2){
					temp = *(coord2 - 1);
					*(coord2 - 1) = *coord2;
					*coord2 = temp;
					coord2 = (coord2 - 1);
					i2 = i2 - 1;
					finish2 = time(NULL);
					if (difftime(finish2, start2) > time2){
						if (score2 < 0){
							score2 = 0;
						}
						cout << endl << "TIME IS UP!" << endl << "SCORE=" << score2;
						cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;
						game2 = false;
					}
				}
				else if (*(coord2 - 1) == 4){
					*(coord2 - 1) = *coord2;

					*coord2 = 2;
					coord2 = coord2 - 1;
					system("cls");
					gameboard2(arraystart2, row2, column2, randomcoord2, randombonus2);
					game2 = false;
					if (score2 < 0){
						score2 = 0;
					}
					cout << endl << "GAME OVER!" << endl << "SCORE=" << score2;
					cout << endl << "LEVEL 1 SCORE=" << score1 << endl << "LEVEL 2 SCORE=" << score2 << endl << "TOTAL SCORE=" << score1 + score2;


				}

			}


		}

		break;
	}
	}


	return 0;
}
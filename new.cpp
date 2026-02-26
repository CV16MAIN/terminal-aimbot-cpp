#include <cstdlib>   // rand, srand
#include <ctime>     // time
#include <iostream>
//A=player
//*=empty space
#include <random>

#include <random>

int randomValueForEnemy(int size)
{
	static std::mt19937 generator{ std::random_device{}() };
	std::uniform_int_distribution<int> distribution(0, size - 1);

	return distribution(generator);
}

int arrPinter(char arr[]) {
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";

	}
	
	std::cout << '\n';

	return 0; 
	


}



int userMainInput() {
	int wantToPlay{1}; // all are empty rn 
	int enemyPosition{ randomValueForEnemy(5)};


	while (wantToPlay == 1 ) {
		char enemyArr[5]{ '*','*','*','*','*' };

		std::cout << "\033[32m" << enemyPosition<<'\n';
		int won{};
		while (won==0) {
			enemyArr[enemyPosition] = 'A';
			std::cout << "Enter Which Place To Shoot (0-4)-";
			int userPossitionToShoot{};
			std::cin >> userPossitionToShoot;
			if (userPossitionToShoot==enemyPosition)
			{
				std::cout << "You Won\n";

				std::cout << "Your Enemy Possition In The Arr - ";
				arrPinter(enemyArr);
				won = 1; 
			

			}else if  (userPossitionToShoot!=enemyPosition) {
				std::cout << "Try Again!";

			}
			else 
			{
				std::clog << "Some Thing Went Wrong!!!!!";
				break; 


				

			}

		

		}
		std::cout << "Want To Play More ? (Yes-1 / No-0) -"; 
		enemyPosition = randomValueForEnemy(5);
		std::cin >> wantToPlay;
		


		 
	}

	return 0; 

}

# include <iostream>
# include <vector>

int main()
{
	using namespace std;
	vector <int> vectorOne;
	vector <int> vectorTwo;

	int tempOne {0}, tempTwo {0};

	cout << "Two elements for V1 : ";

	cin >> tempOne;
	cin >> tempTwo;

	vectorOne.push_back(tempOne);
	vectorOne.push_back(tempTwo);

	cout << vectorOne.at(0) << endl;
	cout << vectorOne.at(1) << endl;
	cout << "Vector 1  has " <<vectorOne.size() << " Elements " << endl;
	

	cout << "Two elements: ";

	cin >> tempOne;
	cin >> tempTwo;

	vectorTwo.push_back(tempOne);
	vectorTwo.push_back(tempTwo);

	cout << vectorTwo.at(0) << endl;
	cout << vectorTwo.at(1) << endl;
	cout << "Vector 2  has " <<vectorTwo.size() << " Elements " << endl;

	vector < vector <int>> vector2D;

	vector2D.push_back(vectorOne);
	vector2D.push_back(vectorTwo);

	cout << "Vector 2D elements " << endl;
	cout << vector2D.at(0).at(0) << " " << vector2D.at(0).at(1) << " " << endl;
	cout << vector2D.at(1).at(0) << " " << vector2D.at(1).at(1) << " " << endl;

	vectorOne.at(0) = 1000;
	
	vector2D.push_back(vectorOne);
	cout << "Vector 2D elements " << endl;
	cout << vector2D.at(0).at(0) << " " << vector2D.at(0).at(1) << " " << endl;
	cout << vector2D.at(1).at(0) << " " << vector2D.at(1).at(1) << " " << endl;
	cout << vector2D.at(2).at(0) << " " << vector2D.at(2).at(1) << " " << endl;

	
	cout << vectorOne.at(0) << endl;
	cout << vectorOne.at(1) << endl;
	cout << "Vector 1  has " <<vectorOne.size() << " Elements " << endl;
	
}
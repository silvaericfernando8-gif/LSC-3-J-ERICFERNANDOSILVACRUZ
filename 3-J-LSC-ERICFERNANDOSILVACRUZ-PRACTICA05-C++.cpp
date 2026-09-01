#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> aves = { "Aguila", "Loro", "Colibri", "Canario" };

	cout << "--- Lista Inicial de Aves ---" << endl;
	for (const string& aves : aves) {
		cout << "- " << aves << endl;
	}


	string nuevaAve;
	cout << "\nIngrese el nombre de una nueva ave para insertar: ";
	getline(cin, nuevaAve);

	aves.push_back(nuevaAve);

	cout << "\n--- Lista Actualizada de Aves ---" << endl;
	for (size_t i = 0; i < aves.size(); i++) {
		cout << i + 1 << ". " << aves[i] << endl;
	}

	return 0;
}
#include"Binary_Tree.h"
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	Binary_Tree<int, vector<int>> tree;
	vector<int> vec = { 1,4,8,9,2,4,6,3,7 };
	cout << "Inputed vector: ";
	copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	cout << endl;
	tree.read(vec);
	cout << "\nResoulting tree:";
	tree.Write();
	tree.insert(5);
	cout << "\nInserted number 5. Resoulting tree:";
	tree.Write();
	auto it = tree.find(6);
	if (it != tree.end()) {
		cout << "Found 6" << endl;
	}
	else
		cout << "Number 6 not found" << endl;
	cout << "Tree size: " << tree.size() << endl;
	cout << "Element " << tree[*it] << endl;
	auto it2 = tree.previous(it);
	cout << "Remove number: " << tree[*it2] << endl;
	tree.remove(it2);
	cout << "\nUpdated tree: ";
	tree.Write();
	system("pause");
	return 0;
}
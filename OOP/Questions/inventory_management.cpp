#include <bits/stdc++.h>
using namespace std;

class Inventory {
public:
	string item_name, item_id;
	int price{}, stock{}, reorder_point{}, minimum_order{};
	int order_amount;

	// Parameterized Constructor
	Inventory(string i_name, string i_id, int i_price, int i_stock, int i_reorder_point, int i_minimum_order) {
		item_name = i_name;
		item_id = i_id;
		price = i_price;
		stock = i_stock;
		reorder_point = i_reorder_point;
		minimum_order = i_minimum_order;
	}

	// Methods
	bool need_ordering() {
		if (stock < reorder_point && stock < reorder_point + minimum_order) {
			return true;
		}
		return false;
	}

	void set_order_amount() {
		order_amount = reorder_point + minimum_order - stock + 1;
	}

	void print_report() {
		if (this->need_ordering()) {
			set_order_amount();
			cout << item_name << endl;
			cout << order_amount << endl;
		}
		else{
			order_amount = 0;
		}
	}
};

int main() {
	int n; // Number of items in the inventory
	cin >> n;
	
	bool flag = false;

	// Create an array of objects
	vector<Inventory> item_data;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			string i_name, i_id;
			int i_price, i_stock, i_reorder_point, i_minimum_order;

			cin >> i_name;
			cin >> i_id;
			cin >> i_price >> i_stock >> i_reorder_point >> i_minimum_order;

			item_data.push_back(Inventory(i_name, i_id, i_price, i_stock, i_reorder_point, i_minimum_order));
		}
	}

	for (int i = 0; i < n; i++) {
		item_data[i].print_report();
		if(item_data[i].order_amount > 0){
			flag = true;
		}
	}
	
	if(flag == false){
		cout << "All items are available" << endl;
	}
}
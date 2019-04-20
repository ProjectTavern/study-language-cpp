struct Complex {
	double real;
	double image;
};
Complex a = { 1.0, 2.0 };
Complex b = { 3.0, 4.0 };

int main() {
	b = a;
}
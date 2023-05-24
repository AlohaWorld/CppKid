import GenericSort;

int main() {
    double x[]{ 3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0 };
    for (auto i : x) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }
    std::cout << std::endl;

    selectionSort(x, 8);

    for (auto i : x) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }

    std::cout << std::endl;
    std::array<double, 8> y{ 6.0, 2.2, 7.2, 4.0, 9.0, 0.8, 5.0, 6.0 };
    for (auto i : y) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }
    std::cout << std::endl;

    selectionSort(y);

    for (auto i : y) {
        std::cout << std::fixed << std::setprecision(2) << i << "  ";
    }
}

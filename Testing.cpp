class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> array;
        return array;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int> array = {100, 1};
        return array;
    }

    static int get_expected_result() {
        return 1;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int> array = {3, 2, 1, 1};
        return array;
    }

    static int get_expected_result() {
        return 2;
    }

};

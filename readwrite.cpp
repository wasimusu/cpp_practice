#include <bits/stdc++.h>

using namespace std;

void readfile(const string &filename) {
    std::ifstream file(filename, std::fstream::binary);
    cout << "Reading from file " << filename << "\t" << endl;
    if (!file) throw std::runtime_error("Could not open file");

    int startPos = 0;
    int length = 0;
    int buffer_size = 80;
//    vector<char> buffer(buffer_size, 0);
//    file.read(buffer.data(), buffer.size());
//    while (file.read(buffer.data(), buffer.size())) {
//        length = buffer.size();
//        startPos += length;
//        cout << buffer.data() << endl;
//    }
//    try {
//        if (startPos % buffer_size == 0) {
//            file.read(buffer.data(), buffer.size());
//            cout << buffer.data() << endl;
//        }
//    } catch (...) {}
//    file.close();

// Works
//    string line;
//    while (file.good()) {
//        getline(file, line);
//        cout << line << endl;
//    }

    char line[80];
    char ch;
    while (!file.good()) {
        file >> ch; //read single character from file
        cout << ch;
    }
}

void read2() {
    std::ifstream file("rw.txt", std::ifstream::binary);
    if (file) {
        // get length of file:
        file.seekg(0, std::ifstream::end);
        int total_chars = file.tellg();
        file.seekg(0, std::ifstream::beg);

        int buffer_size = 50;
        int k = total_chars % buffer_size == 0 ? total_chars / buffer_size : total_chars / buffer_size + 1;
        cout << total_chars << "\t" << k << endl;
        for (int i = 0; i < k; i++) {
            vector<char> buffer(buffer_size, 0);
            file.read(buffer.data(), buffer.size());
            cout << buffer.data() << endl;
        }
    }
}

void writefile(const string &filename, const string &text) {

}

int main() {
//    readfile("rw.txt");
    read2();
    return 0;
}
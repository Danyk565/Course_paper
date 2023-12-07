#pragma once
#include<vector> 
#include <algorithm> 
#include<iostream> 
#include<map> 
#include<chrono> 
#include <string> 
#include <ctime>
#include<fstream>
#include"MyForm.h"
using std::map;
using std::string; 
using std::cout;
using std::endl;
using std::vector;
template <typename T1>
class Type_selection {
public:
    std::vector<T1> Mass_for_Search;
    int Number_el;
    T1 Desired_el;
    int Number_steps;
    Type_selection() {}
    Type_selection(std::vector<T1> Mass_for_Search, int Number_el, T1 Desired_el, int Number_steps) {
        this->Mass_for_Search = Mass_for_Search;
        this->Number_el = Number_el;
        this->Desired_el = Desired_el;
        this->Number_steps = Number_steps;
    }
    int Binary_search() {
        int left = 0;
        int right = Mass_for_Search.size() - 1;
        int mid = 0;
        Number_steps = 0;
        while (true) {
            mid = (left + right) / 2;
            Number_steps++;
            if (Desired_el < Mass_for_Search[mid])
                right = mid - 1;
            else
                if (Desired_el > Mass_for_Search[mid])
                    left = mid + 1;
                else
                    return mid + 1;
            if (left > right)
                return -1;

        }
        return 1;

    }
    int Linear_search() {
        for (int i = 0; i < Number_el; i++) {
            if (Mass_for_Search[i] == Desired_el) {
                Number_steps = i + 1;
                return i + 1;
            }
        }
        return -1;
    }

    int Transposition_search() {
        for (int i = 0; i < Number_el; i++) {
            if (Mass_for_Search[i] == Desired_el) {
                if (i > 0) {
                    std::swap(Mass_for_Search[i], Mass_for_Search[i - 1]);
                }
                Number_steps = i + 1;
                return i + 1;
            }
           
        }

        return -1;
    }

    int Movetofront_search() {
        bool rez = 0;
        for (int i = 0; i < Number_el; i++) {
            if (Mass_for_Search[i] == Desired_el) {
                if (i > 0) {
                    std::swap(Mass_for_Search[i], Mass_for_Search[0]);
                }
                Number_steps = i + 1;
                return i + 1;
                rez = 1;
            }
            if(rez==1)
            break;
        }

        return -1;
    }

    int ApproximateBinary_Search() {
        int left = 0;
        int right = Mass_for_Search.size() - 1;
        int closestElement = Mass_for_Search[left];
        Number_steps = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            Number_steps++;
            if (Mass_for_Search[mid] == Desired_el) {
                return mid;
            }
            if (abs(Mass_for_Search[mid] - Desired_el) < abs(closestElement - Desired_el)) {
                closestElement = Mass_for_Search[mid];
            }
            if (Mass_for_Search[mid] < Desired_el) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return closestElement + 1;
    }

    int indexSequentialSearch() {
        const int GN = 2;
        vector<int>elements;
        vector<int>indices;
        int i;
        int set = 0;
        int j = 0, start, end;
        for (i = 0; i < Mass_for_Search.size(); i += GN) {
            elements.push_back(Mass_for_Search[i]);
            indices.push_back(i);
        }
        if (Mass_for_Search.size() % GN != 0) {
            elements.push_back(Mass_for_Search[Mass_for_Search.size() - 1]);
            indices.push_back(Mass_for_Search.size() - 1);
        }
        if (Desired_el < elements[0]) {
            return -1;
        }
        else {
            for (i = 1; i <= indices.size(); i++)
                if (Desired_el <= elements[i]) {
                    start = indices[i - 1];
                    end = indices[i];
                    set = 1;
                    break;
                }
        }
        if (set == 0) {
            start = indices[GN - 1];
            end = GN;
        }
        for (i = start; i <= end; i++) {
            if (Desired_el == Mass_for_Search[i]) {
                j = 1;
                break;
            }
        }
        Number_steps = i + 1;
        if (j == 1)
            return i + 1;
        else
            return -1;
    }

    /*std::vector<int> friend Test_definition(vector<int>mas_tests, int tests_number, Type_selection A) {
        enum methods {
            Linear_search, Binary_searchc, Transposition_search,
            Movetofront_search, ApproximateBinary_Search, indexSequentialSearch
        };
        std::vector<int>rez(tests_number);
        for (int i = 0; i < mas_tests.size(); i++) {
            if (mas_tests[i] == methods::Linear_search)
                rez[i]= A.Linear_search();
            if (mas_tests[i] == methods::Binary_searchc)
                rez[i] = A.Binary_search();
            if (mas_tests[i] == methods::Transposition_search)
                rez[i] = A.Transposition_search();
            if (mas_tests[i] == methods::Movetofront_search)
                rez[i] = A.Movetofront_search();
            if (mas_tests[i] == methods::ApproximateBinary_Search)
               rez[i] = A.ApproximateBinary_Search();
            if (mas_tests[i] == methods::indexSequentialSearch)
                 rez [i] = A.indexSequentialSearch();
        }
        return rez;
    }*/
        std::string friend Report(vector<int>mas_tests, Type_selection A) {
        enum methods {
            Linear_search, Binary_search, Transposition_search,
            Movetofront_search, ApproximateBinary_Search, indexSequentialSearch
        };
       std::string str_rez="";
        int number_permutations = 0;
        for (int i = 0; i < mas_tests.size(); i++) {
            if (mas_tests[i] == methods::Linear_search) {
                auto start = std::chrono::steady_clock::now();
                int rez=A.Linear_search();
                auto end = std::chrono::steady_clock::now();
                str_rez += "Название метода поиска: Linear_Search \n";
                str_rez += "Номер теста: " + std::to_string((i + 1)) + "\n" "Колличество элементов массива: " +std::to_string( A.Number_el) + "\n";
                str_rez+= "Позиция искомого элемента: " +std::to_string( rez) + "\n";
                str_rez += "Время выполнения поиска: "
                    +std::to_string(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count())+" ns" + "\n";
                    str_rez+= "Число шагов: " + std::to_string(A.Number_steps-1) +"\n";
                str_rez+="Число перестановок: " +std::to_string (number_permutations) +"\n";
                str_rez += "Массив после поиска: ";
                for (int i = 0; i < A.Number_el; i++)
                    str_rez += " " + std::to_string(A.Mass_for_Search[i]);
                str_rez += "\n";
                str_rez += "\n";
                //str_rez.clear();
            }
            if (mas_tests[i] == methods::Binary_search) {
                auto start = std::chrono::steady_clock::now();
                int rez = A.Binary_search();
                auto end = std::chrono::steady_clock::now();
                str_rez += "Название метода поиска: Binary_Search \n";
                str_rez += "Номер теста: " + std::to_string((i + 1)) + "\n" "Колличество элементов массива: " + std::to_string(A.Number_el) + "\n";
                str_rez += "Позиция искомого элемента: " + std::to_string(rez) + "\n";
                str_rez += "Время выполнения поиска: "
                    + std::to_string(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()) + " ns" + "\n";
                str_rez += "Число шагов: " + std::to_string(A.Number_steps) + "\n";
                str_rez += "Число перестановок: " + std::to_string(number_permutations) + "\n";
                str_rez += "Массив после поиска: ";
                for (int i = 0; i < A.Number_el; i++)
                    str_rez += " " + std::to_string(A.Mass_for_Search[i]);
                str_rez += "\n";
                str_rez += "\n";
            }
            if (mas_tests[i] == methods::Transposition_search) {
                number_permutations++;
                auto start = std::chrono::steady_clock::now();
                int rez=A.Transposition_search();
                auto end = std::chrono::steady_clock::now();
                str_rez += "Название метода поиска: Transposition_search  \n";
                str_rez += "Номер теста: " + std::to_string((i + 1)) + "\n" "Колличество элементов массива: " + std::to_string(A.Number_el) + "\n";
                str_rez += "Позиция искомого элемента: " + std::to_string(rez) + "\n";
                str_rez += "Время выполнения поиска: "
                    + std::to_string(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()) + " ns" + "\n";
                str_rez += "Число шагов: " + std::to_string(A.Number_steps) + "\n";
                str_rez += "Число перестановок: " + std::to_string(number_permutations) + "\n";
                str_rez += "Массив после поиска: ";
                for (int i = 0; i < A.Number_el; i++)
                    str_rez += " " + std::to_string(A.Mass_for_Search[i]);
                str_rez += "\n";
                    str_rez+="\n";
               
            }
            if (mas_tests[i] == methods::Movetofront_search) {
                number_permutations++;
                auto start = std::chrono::steady_clock::now();
                int rez = A.Movetofront_search();
                auto end = std::chrono::steady_clock::now();
                str_rez += "Название метода поиска: Movetofront_search  \n";
                str_rez += "Номер теста: " + std::to_string((i + 1)) + "\n" "Колличество элементов массива: " + std::to_string(A.Number_el) + "\n";
                str_rez += "Позиция искомого элемента: " + std::to_string(rez) + "\n";
                str_rez += "Время выполнения поиска: "
                    + std::to_string(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()) + " ns" + "\n";
                str_rez += "Число шагов: " + std::to_string(A.Number_steps) + "\n";
                str_rez += "Число перестановок: " + std::to_string(number_permutations) + "\n";
                str_rez += "Массив после поиска: ";
                for (int i = 0; i < A.Number_el; i++)
                    str_rez += " " + std::to_string(A.Mass_for_Search[i]);
                str_rez += "\n";
                str_rez += "\n";
            }
            if (mas_tests[i] == methods::ApproximateBinary_Search) {
                auto start = std::chrono::steady_clock::now();
                int rez = A.ApproximateBinary_Search();
                auto end = std::chrono::steady_clock::now();
                str_rez += "Название метода поиска: ApproximateBinary_Search  \n";
                str_rez += "Номер теста: " + std::to_string((i + 1)) + "\n" "Колличество элементов массива: " + std::to_string(A.Number_el) + "\n";
                str_rez += "Позиция искомого элемента: " + std::to_string(rez) + "\n";
                str_rez += "Время выполнения поиска: "
                    + std::to_string(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()) + " ns" + "\n";
                str_rez += "Число шагов: " + std::to_string(A.Number_steps) + "\n";
                str_rez += "Число перестановок: " + std::to_string(number_permutations) + "\n";
                str_rez += "Массив после поиска: ";
                for (int i = 0; i < A.Number_el; i++)
                    str_rez += " " + std::to_string(A.Mass_for_Search[i]);
                str_rez += "\n";
                str_rez += "\n";
            }
                 
            if (mas_tests[i] == methods::indexSequentialSearch) {
                auto start = std::chrono::steady_clock::now();
                int rez = A.indexSequentialSearch();
                auto end = std::chrono::steady_clock::now();
                str_rez += "Название метода поиска: indexSequentialSearch \n";
                str_rez += "Номер теста: " + std::to_string((i + 1)) + "\n" "Колличество элементов массива: " + std::to_string(A.Number_el) + "\n";
                str_rez += "Позиция искомого элемента: " + std::to_string(rez) + "\n";
                str_rez += "Время выполнения поиска: "
                    + std::to_string(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()) + " ns" + "\n";
                str_rez += "Число шагов: " + std::to_string(A.Number_steps) + "\n";
                str_rez += "Число перестановок: " + std::to_string(number_permutations) + "\n";
                str_rez += "Массив после поиска: ";
                for (int i = 0; i < A.Number_el; i++)
                    str_rez += " " + std::to_string(A.Mass_for_Search[i]);
                str_rez += "\n";
                str_rez += "\n";
            }
                
        }
        return str_rez;
    }

    void friend Random_filling(Type_selection& A) {
        srand(time(NULL));
        for (int i = 0; i < A.Number_el; i++) {
            A.Mass_for_Search.push_back(rand());
        }
    }
    //void Report(int Test_number, Type_selection A) {
    void friend file_input(std::string File, Type_selection& A) {
        std::ifstream inputFile(File);
        int ind;
        for (int i = 0; i < A.Number_el; i++) {
            inputFile >> ind;
            A.Mass_for_Search.push_back(ind);
        }
        inputFile.close();
    }

    void friend print_mas(Type_selection B) {
        for (int i = 0; i < B.Mass_for_Search.size(); i++)
            cout << B.Mass_for_Search[i] << " ";
    }
    /*void friend Data_collection(Type_selection A) {
        A.Number_el = Convert::ToInt64(textBox2->Text);
        A.Desired_el = Convert::ToInt64(textBox1->Text);
        std::string Mass = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
        for (int i = 0; i < A.Number_el; i += 2) {
            A.Mass_for_Search[i] = Convert::ToInt64(Mass[i]);
        }
    }*/

    /*std::vector<int>  Information_report() {
        String^ Test = textBox3->Text;
        int H_tests = Convert::ToInt64(textBox4->Text);
        vector<int>Tests_number;
        String^ rez;
        for (int i = 0; i < H_tests; i++) {
            rez += Test[i];
            Tests_number.push_back(Convert::ToInt64(rez));
            rez = "";
        }
        return Tests_number;
    }*/

    vector<string> Dividing_line(string str) {
        size_t pos = 0;
        string word;
        vector<string>words;
        while ((pos = str.find(" ")) != string::npos) {
            word = str.substr(0, pos);
            words.push_back(word);
            str.erase(0, pos + 1);
        }
        words.push_back(str);
        return words;
    }

};

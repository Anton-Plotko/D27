#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>


template<typename T>
class SmartPointer
{
public:
    SmartPointer(T*ptr)
    {
        this->ptr = ptr;
    }
    ~SmartPointer()
    {
        delete ptr;
    }

    T& operator*()
    {
        return *ptr;
    }

private:
    T* ptr;
};

int main()
{
    setlocale(LC_ALL, "ru");
    /*std::string a1 = "1";
    std::string a2 = "2";
    std::string a3 = "3";
    std::string a4 = "4";
    std::string a5 = "5";
    std::string a6 = "6";
    std::string a7 = "7";
    std::string a8 = "8";
    std::string a9 = "9";
    std::string a10 = "10";

    std::list<std::string> lst = {a1,a2,a3,a4,a5,a6,a7,a8,a9,a10};
    auto size = lst.size();
    auto it = std::begin(lst);
    int z = 0;
    for (int i = 0; i < size; i++)
    {
        if (i%2!=0)
        {
            lst.erase(it);
            it = std::begin(lst);
        }
        else
        {
            ++z;
            for (int j = 0; j < z; j++)
            {
                ++it;
            }
        }

    }

    for(auto el:lst)
    {
        std::cout << el << " ";
    }*/

    /*std::string a1 = "11436705";
    std::string a2 = "20734";
    std::string a3 = "31";
    std::string a4 = "4";
    std::string a5 = "509712461";
    std::string a6 = "614145";
    std::string a7 = "7";
    std::string a8 = "82";
    std::string a9 = "921";
    std::string a10 = "10135153";

    std::list<std::string> lst = { a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 };
    for (int i = 0; i < lst.size(); i++)
    {
        auto it = lst.begin();
        for (auto el : lst)
        {

            if (strlen(el.c_str()) <= 2)
            {
                lst.erase(it);
                break;
            }

            else
            {
                ++it;
            }
        }
    }

    for (auto el : lst)
    {
        std::cout << el << "\n";
    }*/

    /*std::string a1 = "114367055";
    std::string a2 = "20734";
    std::string a3 = "31";
    std::string a4 = "4";
    std::string a5 = "50971246364";
    std::string a6 = "614145";
    std::string a7 = "756838383888787";
    std::string a8 = "82";
    std::string a9 = "921";
    std::string a10 = "101351533345735";

    std::list<std::string> lst = { a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 };
    int value = 0;
    int a = 0;
    std::string result = " ";
    for(auto el:lst)
    {
        if (value<strlen(el.c_str()))
        {
            value = strlen(el.c_str());
            result = el.c_str();
        }

        else if (value==strlen(el.c_str()))
        {
            ++a;
            std::cout << "Присутствует несколько максимально больших строк !!!"<<"\n";
            break;
        }
    }
    if(a==0)
    {
        std::cout << result << "\n";
    }*/

    /* const int size = 10;
    int arr[size]{66,21,39,10,17,42,58,13,27,88};
    int value=*arr;
    int z=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1+z; j < size; j++)
        {
            if(arr[i]>arr[j])
            {
                value = arr[j];
                arr[j] = arr[i];
                arr[i] = value;
            }

        }
        ++z;
    }
    for(auto el:arr)
    {
        std::cout << el << "\t";
    }*/

    /*std::string a1 = "dflabgjbfgbpig";
    std::string a2 = "hafdha";
    std::string a3 = "adfhdfhafh";
    std::string a4 = "afdhfd";
    std::string a5 = "aaf";
    std::string a6 = "adfohlj";
    std::string a7 = "eselgihowenmvlwnv";
    std::string a8 = "we";
    std::string a9 = "wgwenrtrter";
    std::string a10 = "aghhre";

    std::list<std::string> lst = { a1,a2,a3,a4,a5,a6,a7,a8,a9,a10 };

    int k = 7;
    int result = 0;

    for(auto el:lst)
    {

        if(strlen(el.c_str())>k)
        {
            ++result;
            std::cout << el << "\n";
        }
    }
    std::cout << "Количество элементов = " << result << std::endl;*/

    /*char* a = new char[] {'П', 'р', 'и', 'в', 'е', 'т', '\0'};
    char* b = new char[] {'м', 'а', 'л', 'е', 'н', 'ь', 'к', 'и', 'й', '\0'};
    char* c = new char[] {'ч', 'е', 'р', 'н', 'ы', 'й', '\0'};
    char* d = new char[] {'м', 'а', 'л', 'ь', 'ч', 'и', 'к', '\0'};
    char* e = new char[] {'т', 'е', 'п', 'е', 'р', 'ь', '\0'};
    char* f = new char[] {'т', 'ы', '\0'};
    char* g = new char[] {'р', 'ы', 'ж', 'а', '\0'};
    char* h = new char[] {'м', 'а', 'у', 'п', 'а', '!', '!', '!', '\0'};

    std::vector<char*> vec{ a,b,c,d,e,f,g,h };
    auto value = vec[0];
    for (auto el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < vec.size(); i++)
    {
        if (strlen(vec[i]) > 6)
        {
            value = vec[i];
            int z = i;
            for (int j = 0; j < i; j++)
            {
                vec[z] = vec[z - 1];
                --z;
            }
            vec[0] = value;

        }
    }
    std::cout << std::endl;

    for (auto el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    for (auto del : vec)
    {
        delete[]del;
    }

    return 0;*/

    std::vector<int> vec = { 1,8,-3,17,-9,-11,10,24,4 };
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i]>vec[j])
            {
                std::swap(vec[i], vec[j]);
            }
        }

    }
    for(auto element:vec)
    {
        std::cout << element << '\t';
    }
    return 0;
}



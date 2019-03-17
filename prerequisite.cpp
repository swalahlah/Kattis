#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Fred_course,num_categories;
    int course_code, num_course,requirement;

    cin >> Fred_course;
    while(Fred_course > 0){
        cin >> num_categories;
        vector <int> Fred;
        for(int k = 0; k < Fred_course; k++){
            cin >> course_code;
            Fred.push_back(course_code);
        }
        int fulfiled = 0;
        for(int i = 0; i < num_categories; i++){
            cin >> num_course >> requirement;
            while(num_course--){
                cin >> course_code;
                for(int j = 0; j < Fred_course; j++){
                    if(Fred.at(j) == course_code){
                        --requirement;
                        break;
                    }
                }
            }
            if(requirement <= 0)
                ++fulfiled;
        }
        if(fulfiled == num_categories)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        cin >> Fred_course;
    }
    return 0;
}

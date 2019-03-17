#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int TC;
    cin >> TC;
    int num_grades,grade;
    vector<int>record;

    while(TC--){
        cin >> num_grades;
        double average = 0;
        for(int i = 0; i < num_grades; i++) {
            cin >> grade;
            record.push_back(grade);
            average += grade;
        }
        average /= num_grades;
        int above_avg = 0;
        for(int i = 0; i < num_grades; i++){
            if(record.at(i) > average)
                ++above_avg;
        }
        double percentage = above_avg*100/(double)num_grades;
        cout << fixed << setprecision(3) << percentage << "%" << endl;
        record.clear();
    }
    return 0;
}

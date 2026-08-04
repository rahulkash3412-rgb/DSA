class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int cnt=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i=0;
        while(i<seats.size()){
             cnt = abs(seats[i]-students[i])+cnt;
             ++i;
        }
        return cnt;
    }
};
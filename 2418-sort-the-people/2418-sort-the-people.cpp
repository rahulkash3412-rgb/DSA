class Solution {
public:
    vector<string> sortPeople(vector<string>& name, vector<int>& height) {
       for(int i=0;i<height.size();i++){
          for(int j=i+1;j<height.size();j++) {
            if(height[i]<height[j]){
                swap(height[i],height[j]);
                swap(name[i],name[j]);
            }
          }
       }
       return name;
    }
};
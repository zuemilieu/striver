#include<iostream>
using namesapce std;
class Solution {
public:
 vector<vector<int>> generate(int numsRows) {
   vector<vector<int>>result;
   vector<int> prerow;
   for(int i=0; i<numsRows; i++){
     vector<int> currentRow(i+1, 1);
     for(int j =1; j<i; j++){
       currentRow[j]= prerow[j-1]+prerow[j];
     }
     result.push_back(currentRow);
     prerow = currentRow;
   }
   return result;
}
};

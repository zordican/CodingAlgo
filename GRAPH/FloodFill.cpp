#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void dfs(int i,int j, int initialColor, int newColor, vector<vector<int>>& image){
    if(i<0 || j<0 || i>=image.size() || j>=image[0].size())return;
    if(image[i][j]!=initialColor)return;

    image[i][j] = newColor;
    
    dfs(i+1,j, initialColor, newColor, image);
    dfs(i-1,j, initialColor, newColor, image);
    dfs(i,j+1, initialColor, newColor, image);
    dfs(i,j-1, initialColor, newColor, image);
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        if(initialColor!=color)dfs(sr,sc,initialColor,color,image);
        return image;
    }
};

int main()
{
}

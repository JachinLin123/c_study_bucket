// @author JachinLin
// Created on 2020-04-10-17:23.
//
/**
 *
Anhui -> Henan Hubei Jiangsu Jiangxi Shandong Zhejiang
Beijing -> Hebei Tianjing
Chongqing -> Guizhou Hubei Hunan Shaanxi Sichuan
Fujian -> Guangdong Jiangxi Taiwan Zhejiang
Gansu -> InnerMongoria Ningxia Qinghai Shaanxi Sichuan Xinjiang
Guangdong -> Fujian Guangxi Hainan HongKong Hunan Jiangxi Macao
Guangxi -> Guangdong Guizhou Hunan Yunnan
Guizhou -> Chongqing Guangxi Hunan Sichuan Yunnan
Hainan -> Guangdong
Hebei -> Beijing Henan InnerMongoria Liaoning Shandong Shanxi Tianjing
Heilongjiang -> InnerMongoria Jilin
Henan -> Anhui Hebei Hubei Shaanxi Shandong Shanxi
HongKong -> Guangdong
Hubei -> Anhui Chongqing Henan Hunan Jiangxi Shaanxi
Hunan -> Jiangxi Hubei Chongqing Guizhou Guangxi Guangdong
InnerMongoria -> Gansu Hebei Heilongjiang Jilin Liaoning Ningxia Shaanxi Shanxi
Jiangsu -> Anhui Shandong Shanghai Zhejiang
Jiangxi -> Anhui Fujian Guangdong Hubei Hunan Zhejiang
Jilin -> Heilongjiang InnerMongoria Liaoning
Liaoning -> Hebei InnerMongoria Jilin
Macao -> Guangdong
Ningxia -> Gansu InnerMongoria Shaanxi
Qinghai -> Gansu Sichuan Tibet Xinjiang
Shaanxi -> Chongqing Gansu Henan Hubei InnerMongoria Ningxia Shanxi Sichuan
Shandong -> Anhui Hebei Henan Jiangsu
Shanghai -> Jiangsu Zhejiang
Shanxi -> Hebei InnerMongoria Shaanxi Henan
Sichuan -> Chongqing Gansu Guizhou Qinghai Shaanxi Tibet Yunnan
Taiwan -> Fujian
Tianjing -> Beijing Hebei
Tibet -> Qinghai Sichuan Xinjiang Yunnan
Xinjiang -> Gansu Qinghai Tibet
Yunnan -> Guangxi Guizhou Sichuan Tibet
Zhejiang -> Anhui Fujian Jiangsu Jiangxi Shanghai
 */
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 34;
const int INF = 1000000000;

unordered_map<string, int> indexMap;
string nameMap[MAXN];
int dist[MAXN][MAXN];

int getIndex(const string& name) {
    auto it = indexMap.find(name);
    if (it != indexMap.end()) return it->second;
    int index = indexMap.size();
    nameMap[index] = name;
    indexMap.emplace(name, index);
    return index;
}

int main() {
    for (int i = 0; i < MAXN; ++i) {
        for (int j = 0; j < MAXN; ++j) {
            dist[i][j] = i == j ? 0 : INF;
        }
    }
    ifstream myfile("data.txt");
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        string uName, vName, arrow;
        ss >> uName >> arrow;
        int u = getIndex(uName);
        while (ss >> vName) {
            dist[u][getIndex(vName)] = 1;
        }
    }
    for (int k = 0; k < MAXN; ++k) {
        for (int i = 0; i < MAXN; ++i) {
            for (int j = 0; j < MAXN; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for (int i = 0; i < MAXN; ++i) {
        int maxDist = 0;
        for (int j = 0; j < MAXN; ++j) {
            maxDist = max(maxDist,dist[i][j]);
        }
        if(maxDist == 3) cout << nameMap[i] << endl;
    }
    return 0;
}
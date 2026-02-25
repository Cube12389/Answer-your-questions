#include <bits/stdc++.h>
#include <windows.h>
#include <time.h>

using namespace std;

const int N = 1e5 + 10;
int g[N][2];
string s[N];

void dfs(int u) {
	system("cls");
	string ch;
	cout << s[u] << endl;
	if (g[u][0] == g[u][1] and g[u][1] == -1) return ;
	if (g[u][1] == -1) {
		Sleep(1000);
		dfs(g[u][0]);
		return ;
	} cin >> ch;
	if (ch == "Yes") dfs(g[u][1]);
	if (ch == "No") dfs(g[u][0]);
	return ;
}

int main() {
	
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	string str;
	cout << "你想买什么？" << endl;
	cin >> str;
	system("cls");
	cout << "接下来请用Yes或No回答" << endl;
	Sleep(2000);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	GetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
	wcscpy_s(cfi.FaceName, L"SimSun"); 
	SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
	ifstream in("bin/" + str + ".txt");
	int n;
	in >> n;
	for (int i = 1; i <= n; i++) 
		in >> s[i] >> g[i][0] >> g[i][1];
	dfs(1);
	return 0;
} 

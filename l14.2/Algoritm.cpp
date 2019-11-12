#include "stdafx.h"
#include "Algoritm.h"
using namespace std;

size_t Algoritm::GetCountWordsRegEx( std::string &str, size_t countChar)
{
	setlocale(LC_ALL, "Russian");
	//,std::regex_constants::ECMAScript | std::regex_constants::
	const std::regex re( R"([a-zà-ÿA-Z-À-ß\d-`'":\\/]+)", std::regex_constants::collate);
	size_t prev = 0;
	//size_t next;
	size_t count = 0;
	std::smatch match;

	while (std::regex_search(str, match, re)) {
		for (auto x : match){
			if (x.str().size() < countChar) {
				count++;
			}
		}
		//std::cout << std::endl;
		str = match.suffix().str();
	}
	return count;
}

//vector<std::string> Algoritm::SplitQuery(string str)
//{
//	vector<std::string> words;
//	string delim(" ");
//	size_t prev = 0;
//	size_t next;
//	size_t delta = delim.length();
//
//	while ((next = str.find(delim, prev)) != string::npos) {
//		string tmp = str.substr(prev, next - prev);
//		words.push_back(tmp);
//		prev = next + delta;
//	}
//	return words;
//}

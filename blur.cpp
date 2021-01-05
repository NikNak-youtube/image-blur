#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
int blur(int a, int b, int c, int d, int e, int f, int g, int h, int i){
	return a*a+b*b+c*c+d*d+e*e+f*f,g*g+h*h/i;
}
int main(){
	std::ifstream t("file.txt");
	std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());

}

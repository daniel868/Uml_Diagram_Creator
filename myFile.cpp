class Class0  { 
private:
	 double f1;
	 float f2;
public: 
	void s1();
	string s2();
};
void Class0::s1() {
 } 
string Class0::s2() {
 } 
class Class1 :  private Class0 { 
private:
	 int s3;
	 float s4;
public: 
	void s1();
	double s3();
};
void Class1::s1() {
 } 
double Class1::s3() {
 } 
int main() {
}
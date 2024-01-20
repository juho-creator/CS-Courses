#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int testFstream() {
  std::fstream fs("append.txt", std::ios::in | std::ios::out | std::ios::app);

  // Write to the file
  if (fs.is_open()) {
    fs << "Hello CS106L!" << '\n';

    // moves the get pointer to the beginning of the file
    fs.seekg(0, std::ios::beg);

    std::string line;
    std::getline(fs, line);
    std::cout << "Read from the file: " << line << '\n';

    std::string lineTwo;
    std::getline(fs, lineTwo);
    std::cout << "Read from the file: " << lineTwo << '\n';
  } else {
    std::cout << "Whoops the file is not open!" << '\n';
  }
  // close the file when done!
  fs.close();

  return 0;
}



int inputFileStreamExample() {
    std::ifstream ifs("append.txt");
    if (ifs.is_open()) {
        std::string line;
        std::getline(ifs, line);
        std::cout << "Read from the file: " << line << '\n';
    }
    if (ifs.is_open()) {
        std::string lineTwo;
        std::getline(ifs, lineTwo);
        std::cout << "Read from the file: " << lineTwo << '\n';
    }
    return 0;
}

void ReadUntilNextWhiteSpace(string & s)
{
    /// create a stringstream
    stringstream ss;
    ss << s;
    
    /// data destinations 
    string first;
    string last;
    string language, extracted_quote;
    ss >> first >> last >> language >> extracted_quote;
    cout << first << " "<< last << " said this: " << language << " " << extracted_quote << endl;
}

void ReadUntilBackspace(string &s)
{
    /// create a stringstream
    stringstream sstream(s);

    /// data destinations 
    string first;
    string last;
    string language, extracted_quote;

    sstream >> first >> last >> language;
    getline(sstream, extracted_quote);
    cout << first << " "<< last << " said this: " << language << " " << extracted_quote << endl;
}

void endlflush()
{
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << std::endl;
    }
}


void Noflush()
{
    for (int i = 1; i <= 5; ++i) {
        std::cout << i;
    }
}


void FlushuntilFull()
{
    std::ios::sync_with_stdio(false);
    for (int i = 1; i <= 5; ++i) {
        cout << i << '\n';
    }
}


void OutputStream()
{
    std::ofstream ofs("test.txt"); 

    if (ofs.is_open()) {
        ofs << "Hello CS106L!" << '\n'; // Truncates text
    }

    ofs.close();
    ofs << "this will not get written";
    ofs.open("test.txt",std::ios::app); // Appends text
    ofs << "this will though! It's open again";
}

int main()
{   
    /// partial Bjarne Quote
    string initial_quote = "Bjarne Stroustrup C makes it easy to shoot yourself in the foot";

    /// '>>' READS UNTIL NEXT WHITESPACE
    ReadUntilNextWhiteSpace(initial_quote);

    // 'getline()' READS UNTIL '\n'
    ReadUntilBackspace(initial_quote);

    // endl flushes content inside buffer
    endlflush();

    // buffer is not flushed, and values are added to buffer 
    Noflush();

    // Adds int + '\n' on buffer until memory is full 
    FlushuntilFull();

    /// Associating file on construction (Output File Streams)
    OutputStream(); // data stored in buffer before flushed to be displayed at terminal

    // Input File Streams
    inputFileStreamExample();
}




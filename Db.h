#ifndef DB_H
#define DB_H
#include <string>
#include <vector>
#include <map>
class Db
{
    public:
        Db(std::string filename);
        ~Db();
        void read();
        void update();
        void update(int row, std::string newRow);
        std::string showCols();
        int totalSeparator(std::string str, std::string separator);
        std::vector<int> getSeparators(std::string str, std::string separator);

        std::vector<int> getSeparatorsReverse(std::string str, std::string separator);
        std::string printArr(std::vector<int> arr);
        int getTotalRows();
        std::vector<std::string> getRows(); //no condition just getting all rows
        std::string showRows();
        std::string getRow(int row);
        //std::map<std::string, std::string> getRowKeys(int row);

        std::map<std::string, int> getRowKeys(int row);
        std::vector<std::string> getRowCols(int row);
        std::string getFilename() ;
        void encryptData();
        void unencryptData();
        bool addData(std::string newData);

    private:
        std::string m_filename;
};
#endif // DB_H

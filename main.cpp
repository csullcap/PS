#include <mysql.h>
#include <iostream>
using namespace std;
int main() {
    try{
//HU
        MYSQL* conn;
        MYSQL_ROW row;
        MYSQL_RES *res;
        conn = mysql_init(nullptr);
        conn = mysql_real_connect(conn, "sql10.freemysqlhosting.net", "sql10351188", "FCWP53Cz47", "sql10351188", 3306,
                                  nullptr, 0);
        if (conn) {
            string query = "select * from Hotel";
            const char* q = query.c_str();
            int qstate = mysql_query(conn , q);
            if(!qstate){
                res = mysql_store_result(conn);
                while(row = mysql_fetch_row(res)){
                    printf("id: %s, nomre: %s, direccion: %s, telefono: %s\n",row[0],row[1],row[2],row[3]);
                }
            }
            cout << "gaa";
        } else {
            cout << "no gaaa";
        }
    } catch (exception &e) {
        cout <<e.what();
    }
    return 0;
}

/*
Server: sql10.freemysqlhosting.net
Name: sql10351188
Username: sql10351188
Password: FCWP53Cz47
Port number: 3306
 */



#include <iostream>
#include <string>

using namespace std;

class Computer {
    public:
        Computer(string ip_address) : ip_address(ip_address) {}

        void connect() {
            cout << "Connected to computer." << endl;
        }

    private:
        string ip_address;
};

class Client : public Computer {
    public:
        Client(string ip_address, int port) : Computer(ip_address), port(port) {}

        void connect() {
            cout << "Connected to client." << endl;
        }

    private:
        int port;
};

class Server : public Computer {
    public:
        Server(string ip_address, string domain) : Computer(ip_address), domain(domain) {}

        void connect() {
            cout << "Connected to server." << endl;
        }

    private:
        string domain;
};

int main() {
    Client my_client("192.168.0.1", 8080);
    Server my_server("192.168.0.2", "mydomain.com");

    my_client.connect();  // output: "Connected to client."
    my_server.connect();  // output: "Connected to server."

    return 0;
}

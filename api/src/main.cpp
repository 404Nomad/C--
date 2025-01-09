#include <iostream>
#include <string>
#include <curl/curl.h>
#include <json.hpp>
using namespace std;

//alias json
using json = nlohmann::json;

size_t WriteCallBack(void* contents, size_t size, size_t nmemb, void* userp) {
    ((string*) userp)->append((char*) contents, size * nmemb);

    return size * nmemb;
}

int main() {

    // CURL 
    CURL* curl;
    CURLcode res;

    string readBuffer;
    // https://app.balldontlie.io/
    string apiKey = "1d32e2ea-766d-4e4c-bc50-d029cdb8a99b";

    // Initialisation
    curl = curl_easy_init();

    // URL GET
    if(curl){

        // Ajout des entetes
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, ("Authorization: Bearer " + apiKey).c_str());
        headers = curl_slist_append(headers, "Content-Type: application/json");

        // Options
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.balldontlie.io/v1/teams");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallBack);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Execution commande curl
        res = curl_easy_perform(curl);
        if (res != CURLE_OK){
            cerr << "CURL error: " << curl_easy_strerror(res) << endl;
        } else {
            try
            {
                json response = json::parse(readBuffer);
                cout << "Response json: " << response.dump(4) << endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << " Error parsing JSON: " << e.what() << '\n';
            }

            // nettoyage
            curl_slist_free_all(headers);
            curl_easy_cleanup(curl);
            
            return 0;
        }
        
    }

    
}

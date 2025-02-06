#ifndef CACHE_H
#define CACHE_H

#include <unordered_map>
#include <vector>
#include <string>
#include "node.h"

class Cache {

    public:

        /**
        * @brief Construct a new Cache object with the specified size.
        * 
        * @param size The size of the cache.
        */ 
        Cache(int size);

        /**
        * @brief Destroy the Cache object and release any allocated resources.
        */
        ~Cache();

        /**
        * @brief Check if the given address is present in the cache.
        * 
        * @param address The address to look up in the cache.
        * @return true if the address is found in the cache, false otherwise.
        */
        bool lookup(std::string address) const;

        /**
        * @brief Read the data associated with the given address from the cache.
        * 
        * @param address The address to read data from.
        * @return The data associated with the address.
        */
        std::string read(std::string address);

        /**
        * @brief Insert a new address and its associated data into the cache.
        * 
        * @param address The address to insert into the cache.
        * @param data The data to associate with the address.
        */
        void insert(std::string address, const std::string& data);

        /**
        * @brief Update the data associated with the given address in the cache.
        * 
        * @param address The address to update in the cache.
        * @param data The new data to associate with the address.
        */
        void update (std::string address, const std::string& data);

        /**
        * @brief Display the contents of the cache.
         */
        void display() const;


    private:
        int size; //size of the cache
        Node* head; //pointer to the head of the linked list
        std::unordered_map<std::string, Node*> cacheMap; //map to store cache entries

};

#endif //CACHE_H
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:30:24 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/28 14:30:26 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
    Data myData;
    myData.number = 1337;
    myData.text = "Future is loading";

    // Serialize the pointer
    uintptr_t raw = Serializer::serialize(&myData);

    // Deserialize the raw data back to a pointer
    Data* deserializedData = Serializer::deserialize(raw);

    // Verify that the deserialized pointer matches the original
    if (deserializedData == &myData) {
        std::cout << "Deserialization successful!" << std::endl;
        std::cout << "Number: " << deserializedData->number << std::endl;
        std::cout << "Text: " << deserializedData->text << std::endl;
    }
    else {
        std::cout << "Deserialization failed." << std::endl;
    }

    return 0;
}

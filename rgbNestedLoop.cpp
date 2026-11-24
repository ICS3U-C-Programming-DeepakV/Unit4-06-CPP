// Copyright(c) 2026 Deepak V All rights reserved.
// Created By: Deepak
// Date: 11/24/2026
// This program generates all possible combinations
// of RGB values using nested loops.
#include <iostream>
int main() {
    int red, green, blue;

    for (red = 0; red <= 255; red += 51) {
        for (green = 0; green <= 255; green += 51) {
            for (blue = 0; blue <= 255; blue += 51) {
                std::cout <<
                "RGB(" << red << ", " << green << ", " << blue << ")"
                << std::endl;
            }
        }
    }

    return 0;
}

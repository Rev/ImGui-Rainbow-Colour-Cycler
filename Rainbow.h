//
//  Rainbow.h
//
//  Created by Rev on 8/03/2022.
//

#include "Rendering.h"

bool isRainbow;

    void Render() //Don't forget to call this somewhere.
    {
        auto isFrames = ImGui::GetFrameCount();

        static float isRed = 0.0f, isGreen = 0.01f, isBlue = 0.0f;

        ImVec4 isRGB = ImVec4(isRed, isGreen, isBlue, 1.0f);

        ESP::DrawText2(Display_get_height(Display_get_main()) * 0.021, ImVec2(Display_get_width(Display_get_main()) * 0.375, Display_get_height(Display_get_main()) * 0.9775), isRGB, OBFUSCATE("Developed by Rev - Powered by Polarmods.com"));

        if(isFrames % 1 == 0) //We use modulus to check if it's divisible by 1, and if the remainder equals 0, then we continue. This effect gets called every frame.
        {

            if(isGreen == 0.01f && isBlue == 0.0f)
            {
                isRed += 0.01f;
              
            }

            if(isRed > 0.99f && isBlue == 0.0f)
            {
                isRed = 1.0f;

                isGreen += 0.01f;
              
            }

            if(isGreen > 0.99f && isBlue == 0.0f)
            {
                isGreen = 1.0f;

                isRed -= 0.01f;
              
            }

            if(isRed < 0.01f && isGreen == 1.0f)
            {
                isRed = 0.0f;

                isBlue += 0.01f;

            }

            if(isBlue > 0.99f && isRed == 0.0f)
            {
                isBlue = 1.0f;

                isGreen -= 0.01f;

            }

            if(isGreen < 0.01f && isBlue == 1.0f)
            {
                isGreen = 0.0f;

                isRed += 0.01f;

            }

            if(isRed > 0.99f && isGreen == 0.0f)
            {
                isRed = 1.0f;

                isBlue -= 0.01f;

            }

            if(isBlue < 0.01f && isGreen == 0.0f)
            {
                isBlue = 0.0f;

                isRed -= 0.01f;

                if(isRed < 0.01f)
                    isGreen = 0.01f;

            }

        }

    }

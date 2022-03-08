# ImGui-Rainbow-Colour-Cycler
An easy way to make a cool rainbow colour cycler using ImGui.

I used ImGui::GetFrameCount() to check the amount of frames the ImGui menu has rendered. Each frame it will continue the loop, making the seamless rainbow effect. 

If you don't want to use ImGui::GetFrameCount(), you can also use an engine-based function, such as get_time (UnityEngine.Time) for Unity-based games. But, I wanted something that was universal for all games, hence why I'm using ImGui::GetFrameCount() instead.

Because we only want the "bright" colours, the statement goes as follows:

RGBA;
1) 0.00, 0.01, 0.00, 1.00
2) 1.00, 0.01, 0.00, 1.00
3) 1.00, 1.00, 0.00, 1.00
4) 0.00, 1.00, 0.00, 1.00
5) 0.00, 1.00, 1.00, 1.00
6) 0.00, 0.00, 1.00, 1.00
7) 1.00, 0.00, 1.00, 1.00
8) 1.00, 0.00, 0.00, 1.00
9) 0.00, 0.00, 0.00, 1.00
10) 0.00, 0.01, 0.00, 1.00

Anyway, all of that aside, here's a preview of what it looks like (look at the bottom of the screen);

https://user-images.githubusercontent.com/64957743/157214180-5cd15f05-2e38-41cb-9127-c442cfc3288b.mp4

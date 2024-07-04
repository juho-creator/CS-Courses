# Building Process
- 소스코드를 기계어로 변환하는 과정
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/a34a2352-9ff2-49e7-bbfa-e103252df8fc)


</br></br>
</br></br>




# What is CMake?
Cross platform C/C++ build system that combines the source code and a build script to build a software for multiple system (Linux,Windows, MacOS).
</br></br>



# Compiling wth CMake
CMakeList -- CMake ---> Generate native build script for compiler toolchain (Visual Studio, GCC)
</br></br>


1. Configuration
   - Reads build script
   - Executes build logic
   - Outputs variable cache
</br>


2. Generation
   - Runs toolchain specific generator (Visual Studio)
   - Reads configuration
     Generates build script for target toolchain   
</br>

3. Build
   - toolchain or build system actually builds the file
</br></br></br></br>



# Why use CMake?
To allow the code to be used acrossv various platforms
</br></br></br></br>



## Reference
- [**CMake, How it Works (At Three Different Levels)**](https://www.youtube.com/watch?v=SDX0oYqdv_g)

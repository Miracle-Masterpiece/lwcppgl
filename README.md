# Depended
### <a href="https://github.com/glfw/glfw"> `GLFW` </a>
### <a href="https://github.com/kcat/openal-soft"> `SoftAL` </a>


# How build?

<details>
<summary>Windows</summary>

There should be a library inside the ./lib/ folder. glfw3.dll and soft_oal.dll

`g++ -fPIC -DLWCPPGL_EXPORTS -shared -o liblwcppgl.dll -O2 -I"include" ./src/*.cpp ./src/*.c -L./lib/ -l:glfw3.dll -l:soft_oal.dll`

</details>

<details>
<summary>Linux</summary>
</details>
# Depended
### <a href="https://github.com/glfw/glfw"> `GLFW` </a>
### <a href="https://github.com/kcat/openal-soft"> `SoftAL` </a>


# How build?

<details>
<summary>Windows</summary>

There should be a library inside the ./depended/win folder. glfw3.dll and soft_oal.dll

`g++ -I"include" -DLWCPPGL_EXPORTS -shared -fPIC -o liblwcppgl.dll ./src/*.cpp ./src/*.c -L./depended/ -l:./win/glfw3.dll -l:./win/soft_oal.dll`

</details>

<details>
<summary>Linux</summary>
</details>
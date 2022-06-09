# houmixbox
![](https://i.gyazo.com/2f007f22d29dc7327f9cf3a31ada63f7.gif)  

- mixbox with Houdini

## system
- OS: `Linux fedora 5.17.12-300.fc36.x86_64`
- Houdini: `Houdini 19.0.643.`

# Install
## 1. Clone
- `$ git clone https://github.com/minami110/houmixbox.git`
- `$cd houmixbox` then clone `pigment-mixing` submodule
- `$ git submodule update -i`

## 2. Build mixbox python module using pybind11 (Sorry Linux only)
- Required: `make`, `g++`, `python3.7`, `python-config`
- Required python module: `pybind11`
- `$ make mixbox`

# 3. Open hip
- Enjoy it :)

# LICENSE
- this repository is MIT but pigment-mixing is under original license, please see `LICENSE` file

# houmixbox
![](https://i.gyazo.com/2f007f22d29dc7327f9cf3a31ada63f7.gif)  

- mixbox with Houdini

## system
- OS: `Linux fedora 5.17.12-300.fc36.x86_64`
- Houdini: `Houdini 19.0.643.`

# Install
- `$ git clone `

## 1. Clone pigment-mixing
- `$ git submodule update -i`

## 2. Build mixbox python module using pybind11 (Sorry Linux only)
- install `make`, `g++`, `python3.7` and `python-config`
- pip install `pybind11`
- `$ make mixbox`

# 3. Open hip
- Enjoy it :)

# LICENSE
- pigment-mixing is under original license, please see `LICENSE` file
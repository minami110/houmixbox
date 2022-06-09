#include <stdio.h>
#include <mixbox.h>
using namespace ::std;

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

vector<float> mix(vector<float> a, vector<float> b, float alpha = 0.5)
{
    float _r, _g, _b;
    mixbox_lerp_srgb32f(
        a[0], a[1], a[2],
        b[0], b[1], b[2],
        alpha,
        &_r, &_g, &_b);
    vector<float> result = {_r, _g, _b};
    return result;
}

namespace py = pybind11;
PYBIND11_MODULE(mixbox, m)
{
    m.doc() = "mixbox (pybind11)";
    m.def("mix", &mix);
}

// This file is auto-generated by machinist. Please don't modified it manually.
namespace Interp1Linear_v1
{
    void XWrite(Archive::Store_& dst, const String_& name, const Vector_<double>& x, const Vector_<double>& f) {
        using namespace Archive::Utils;
        dst.SetType("Interp1Linear_v1");
        SetOptional(dst, "name", name);
        Set(dst, "x", x);
        Set(dst, "f", f);
        dst.Done();
    }
}
	
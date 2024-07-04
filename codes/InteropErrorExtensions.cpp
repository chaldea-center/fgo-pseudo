Interop_ErrorInfo_o __fastcall InteropErrorExtensions__Info(int32_t error, const MethodInfo *method)
{
  return (Interop_ErrorInfo_o)(*(_QWORD *)&error | 0xFFFFFFFF00000000LL);
}
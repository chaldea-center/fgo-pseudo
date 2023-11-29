void __fastcall CombineAdjustTarget___ctor(CombineAdjustTarget_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineAdjustTarget__isTerminalExposable(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 12) > 0x13 )
    LOBYTE(v2) = 0;
  else
    return (0x97F0Fu >> (type - 12)) & 1;
  return v2;
}
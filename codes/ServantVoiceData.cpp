void __fastcall ServantVoiceData___ctor(ServantVoiceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall ServantVoiceData__GetFadeTime(ServantVoiceData_o *this, const MethodInfo *method)
{
  int32_t fadeTime; // w8

  fadeTime = this->fields.fadeTime;
  if ( fadeTime < 1 )
    return 0.0;
  else
    return (float)fadeTime / 1000.0;
}
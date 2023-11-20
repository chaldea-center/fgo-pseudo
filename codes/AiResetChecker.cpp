void __fastcall AiResetChecker___ctor(AiResetChecker_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AiResetChecker__IsDead(AiResetChecker_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall AiResetChecker__IsReset(AiResetChecker_o *this, const MethodInfo *method)
{
  int v3; // w0

  v3 = ((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer))this->klass->vtable._5_get_AiResetTiming.method)(
         this,
         this->klass->vtable._6_IsDead.methodPtr);
  if ( v3 == 1 )
    return ((__int64 (__fastcall *)(AiResetChecker_o *, void *))this->klass->vtable._6_IsDead.method)(
             this,
             this->klass[1]._1.image);
  else
    return v3 == 2;
}


int32_t __fastcall AiResetChecker__get_AiResetTiming(AiResetChecker_o *this, const MethodInfo *method)
{
  return 0;
}
void AiResetChecker___ctor(AiResetChecker_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AiResetChecker__IsDead(AiResetChecker_o *this, const MethodInfo *method)
{
  return 0;
}


bool AiResetChecker__IsReset(AiResetChecker_o *this, const MethodInfo *method)
{
  int v3; // w0

  v3 = ((__int64 (__fastcall *)(AiResetChecker_o *, const MethodInfo *))this->klass->vtable._5_get_AiResetTiming.methodPtr)(
         this,
         this->klass->vtable._5_get_AiResetTiming.method);
  if ( v3 == 1 )
    return ((__int64 (__fastcall *)(AiResetChecker_o *, const MethodInfo *))this->klass->vtable._6_IsDead.methodPtr)(
             this,
             this->klass->vtable._6_IsDead.method);
  else
    return v3 == 2;
}


int32_t AiResetChecker__get_AiResetTiming(AiResetChecker_o *this, const MethodInfo *method)
{
  return 0;
}
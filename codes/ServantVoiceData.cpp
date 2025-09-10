void ServantVoiceData___ctor(ServantVoiceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ServantVoiceData__GetFadeTime(ServantVoiceData_o *this, const MethodInfo *method)
{
  int32_t fadeTime; // w8

  fadeTime = this->fields.fadeTime;
  if ( fadeTime < 1 )
    return 0.0;
  else
    return (float)fadeTime / 1000.0;
}


ServantVoicePerformance_ServantVoicePerformanceDetail_o *ServantVoiceData__get_AfterPerformance(
        ServantVoiceData_o *this,
        const MethodInfo *method)
{
  struct ServantVoicePerformance_o *additionalPerformances; // x8

  additionalPerformances = this->fields.additionalPerformances;
  if ( additionalPerformances )
    return additionalPerformances->fields.afterPerformance;
  else
    return 0;
}


ServantVoicePerformance_ServantVoicePerformanceDetail_o *ServantVoiceData__get_BeforePerformance(
        ServantVoiceData_o *this,
        const MethodInfo *method)
{
  struct ServantVoicePerformance_o *additionalPerformances; // x8

  additionalPerformances = this->fields.additionalPerformances;
  if ( additionalPerformances )
    return additionalPerformances->fields.beforePerformance;
  else
    return 0;
}


ServantVoicePerformance_ServantVoicePerformanceDetail_o *ServantVoiceData__get_StartPerformance(
        ServantVoiceData_o *this,
        const MethodInfo *method)
{
  struct ServantVoicePerformance_o *additionalPerformances; // x8

  additionalPerformances = this->fields.additionalPerformances;
  if ( additionalPerformances )
    return additionalPerformances->fields.startPerformance;
  else
    return 0;
}
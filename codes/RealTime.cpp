void RealTime___ctor(RealTime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float RealTime__get_DeltaTimeInActive(const MethodInfo *method)
{
  float timeScale; // s1
  float result; // s0
  float deltaTime; // s8

  timeScale = UnityEngine_Time__get_timeScale(0);
  result = 0.0;
  if ( timeScale > 0.0 )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    return deltaTime / UnityEngine_Time__get_timeScale(0);
  }
  return result;
}


float RealTime__get_deltaTime(const MethodInfo *method)
{
  return UnityEngine_Time__get_unscaledDeltaTime(0);
}


float RealTime__get_time(const MethodInfo *method)
{
  return UnityEngine_Time__get_unscaledTime(0);
}
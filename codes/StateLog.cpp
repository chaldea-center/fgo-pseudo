void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_5972277 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_5972277 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
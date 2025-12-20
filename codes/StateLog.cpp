void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E269 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4D2E269 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
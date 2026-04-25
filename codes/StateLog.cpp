void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4E063A4 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4E063A4 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3B5522C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
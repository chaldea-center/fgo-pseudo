void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFFD5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4CEFFD5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
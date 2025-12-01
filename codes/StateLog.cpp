void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8DCC & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4CC8DCC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
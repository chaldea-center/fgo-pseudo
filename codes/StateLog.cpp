void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4C44960 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4C44960 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
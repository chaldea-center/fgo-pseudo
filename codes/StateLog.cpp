void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_593A09A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_593A09A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7CA3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4CB7CA3 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
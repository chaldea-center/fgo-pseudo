void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4E7904B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4E7904B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3BACB6C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
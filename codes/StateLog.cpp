void StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4C39366 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4C39366 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
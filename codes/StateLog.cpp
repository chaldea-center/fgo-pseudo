void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4C237AE & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4C237AE = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38C8B4C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
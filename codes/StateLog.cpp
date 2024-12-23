void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4B68383 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4B68383 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38291E0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
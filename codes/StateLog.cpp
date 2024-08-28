void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A2C9 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4A0A2C9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36F7AB4 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4B46398 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4B46398 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
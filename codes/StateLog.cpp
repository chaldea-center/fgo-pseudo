void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4BFEF84 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4BFEF84 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38A83A8 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
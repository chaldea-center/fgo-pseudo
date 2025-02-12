void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4BC9298 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4BC9298 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4A0017A & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4A0017A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
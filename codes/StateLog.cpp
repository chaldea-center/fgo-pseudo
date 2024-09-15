void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4A2F5B1 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4A2F5B1 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3712994 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
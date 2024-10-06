void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4A715C0 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4A715C0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CCA8 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
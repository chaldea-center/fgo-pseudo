void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_48E3DB7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_48E3DB7 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_35FC008 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
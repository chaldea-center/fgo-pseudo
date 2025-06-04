void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4B03944 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4B03944 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
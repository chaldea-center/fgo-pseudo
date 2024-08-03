void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_49FDA5E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_49FDA5E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
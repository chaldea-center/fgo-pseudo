void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB59 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_49FFB59 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EE730 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
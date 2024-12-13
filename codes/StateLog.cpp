void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4B38935 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4B38935 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37FE060 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
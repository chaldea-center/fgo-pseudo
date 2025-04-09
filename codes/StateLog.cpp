void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_49BC6DD & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_49BC6DD = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37B4828 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C8AC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4A5C8AC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
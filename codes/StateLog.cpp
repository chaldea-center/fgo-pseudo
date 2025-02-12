void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5EB6 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4BB5EB6 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB74A3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4AB74A3 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_378A644 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
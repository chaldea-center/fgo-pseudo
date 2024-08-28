void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4A2113E & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4A2113E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_370B620 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
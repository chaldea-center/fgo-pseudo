void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1796B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StateLog___ctor__, method, v2);
    byte_4B1796B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
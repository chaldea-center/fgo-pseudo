void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDD42 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4BDDD42 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
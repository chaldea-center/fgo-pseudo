void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4352854 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_4352854 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
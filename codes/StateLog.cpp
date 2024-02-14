void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_42153C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_42153C8 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
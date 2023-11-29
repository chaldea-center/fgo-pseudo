void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_40FAE84 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_40FAE84 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
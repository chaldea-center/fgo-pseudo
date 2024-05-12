void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_438BFD0 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_438BFD0 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
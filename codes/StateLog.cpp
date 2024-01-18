void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_4188C87 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StateLog___ctor__, method);
    byte_4188C87 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
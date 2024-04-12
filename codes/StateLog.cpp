void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  if ( (byte_42B0B3D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StateLog___ctor__);
    byte_42B0B3D = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void __fastcall StateLog___ctor(StateLog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E931C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StateLog___ctor__, (_DWORD)method, v2, v3);
    byte_42E931C = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_StateLog___ctor__);
}
void __fastcall BattleLogicDebug___ctor(BattleLogicDebug_o *this, const MethodInfo *method)
{
  if ( (byte_42B26DA & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
    byte_42B26DA = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
}


void __fastcall BattleLogicDebug__OutputDebugLog(BattleLogicDebug_o *this, const MethodInfo *method)
{
  ;
}
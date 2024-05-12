void __fastcall BattleLogicDebug___ctor(BattleLogicDebug_o *this, const MethodInfo *method)
{
  if ( (byte_438D310 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
    byte_438D310 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
}


void __fastcall BattleLogicDebug__OutputDebugLog(BattleLogicDebug_o *this, const MethodInfo *method)
{
  ;
}
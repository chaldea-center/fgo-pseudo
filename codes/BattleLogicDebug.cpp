void __fastcall BattleLogicDebug___ctor(BattleLogicDebug_o *this, const MethodInfo *method)
{
  if ( (byte_418A74B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__, method);
    byte_418A74B = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
}


void __fastcall BattleLogicDebug__OutputDebugLog(BattleLogicDebug_o *this, const MethodInfo *method)
{
  ;
}
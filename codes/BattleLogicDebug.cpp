void __fastcall BattleLogicDebug___ctor(BattleLogicDebug_o *this, const MethodInfo *method)
{
  if ( (byte_4A01649 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__, method);
    byte_4A01649 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
}


void __fastcall BattleLogicDebug__OutputDebugLog(BattleLogicDebug_o *this, const MethodInfo *method)
{
  ;
}
void __fastcall BattleLogicDebug___ctor(BattleLogicDebug_o *this, const MethodInfo *method)
{
  if ( (byte_4B6984E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__, method);
    byte_4B6984E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38291E0 *)Method_SingletonMonoBehaviour_BattleLogicDebug___ctor__);
}


void __fastcall BattleLogicDebug__OutputDebugLog(BattleLogicDebug_o *this, const MethodInfo *method)
{
  ;
}
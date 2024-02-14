void __fastcall ReactTaskTargetEnemy___ctor(ReactTaskTargetEnemy_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_array *__fastcall ReactTaskTargetEnemy__TargetServants(
        ReactTaskTargetEnemy_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  return BattleData__getFieldEnemyServantList(data, 1, 0LL);
}
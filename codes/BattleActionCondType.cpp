void __fastcall BattleActionCondType___ctor(BattleActionCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionCondType__IsAchieve(
        int32_t condType,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  if ( !actData )
    return 0;
  if ( condType )
  {
    if ( condType == 1 )
      return actData->fields._IsFuncTargetAllDead_k__BackingField;
    return 0;
  }
  return 1;
}
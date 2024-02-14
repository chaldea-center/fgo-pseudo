void __fastcall EnemySimpleHpData___ctor(
        EnemySimpleHpData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0

  SimpleHpData___ctor((SimpleHpData_o *)this, svtData, 0LL);
  if ( !svtData )
    sub_B0D97C(v5);
  this->fields._NextTpTurn_k__BackingField = svtData->fields.nexttpturn;
  this->fields._MaxTpTurn_k__BackingField = svtData->fields.maxtpturn;
}


int32_t __fastcall EnemySimpleHpData__get_MaxTpTurn(EnemySimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._MaxTpTurn_k__BackingField;
}


int32_t __fastcall EnemySimpleHpData__get_NextTpTurn(EnemySimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._NextTpTurn_k__BackingField;
}


void __fastcall EnemySimpleHpData__set_MaxTpTurn(EnemySimpleHpData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxTpTurn_k__BackingField = value;
}


void __fastcall EnemySimpleHpData__set_NextTpTurn(EnemySimpleHpData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._NextTpTurn_k__BackingField = value;
}
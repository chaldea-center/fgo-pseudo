void EnemySimpleHpData___ctor(EnemySimpleHpData_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t maxtpturn; // w9

  SimpleHpData___ctor((SimpleHpData_o *)this, svtData, method);
  if ( !svtData )
    sub_2213CDC(v5, v6);
  maxtpturn = svtData->fields.maxtpturn;
  this->fields._NextTpTurn_k__BackingField = svtData->fields.nexttpturn;
  this->fields._MaxTpTurn_k__BackingField = maxtpturn;
}


int32_t EnemySimpleHpData__get_MaxTpTurn(EnemySimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._MaxTpTurn_k__BackingField;
}


int32_t EnemySimpleHpData__get_NextTpTurn(EnemySimpleHpData_o *this, const MethodInfo *method)
{
  return this->fields._NextTpTurn_k__BackingField;
}


void EnemySimpleHpData__set_MaxTpTurn(EnemySimpleHpData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxTpTurn_k__BackingField = value;
}


void EnemySimpleHpData__set_NextTpTurn(EnemySimpleHpData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._NextTpTurn_k__BackingField = value;
}
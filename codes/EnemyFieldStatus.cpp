void EnemyFieldStatus___ctor(EnemyFieldStatus_o *this, const MethodInfo *method)
{
  BattleFieldStatus___ctor((BattleFieldStatus_o *)this, 0);
}


System_Double_array *EnemyFieldStatus__getAiParam(
        EnemyFieldStatus_o *this,
        BattleData_o *bData,
        int32_t param,
        int32_t turn,
        int32_t actCnt,
        System_Int64_array *checkparams,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  BattleFieldStatus_o *v10; // x19
  int32_t v11; // w0
  int v12; // w19

  v10 = (BattleFieldStatus_o *)this;
  if ( (byte_4CF1649 & 1) == 0 )
  {
    this = (EnemyFieldStatus_o *)sub_1C7BAE8(&double___TypeInfo);
    byte_4CF1649 = 1;
  }
  if ( param == 20 )
  {
    if ( !bData )
      goto LABEL_13;
    v11 = BattleFieldStatus__CommonRestCount(v10, bData->fields.enemy_datalist, 0);
  }
  else
  {
    if ( param != 19 )
      return v10->fields.wkZeroParam;
    if ( !bData )
LABEL_13:
      sub_1C7BD40(this, bData);
    v11 = BattleFieldStatus__CommonAliveCount(v10, bData->fields.enemy_datalist, 0);
  }
  v12 = v11;
  this = (EnemyFieldStatus_o *)sub_1C7BB90(double___TypeInfo, 1);
  if ( !this )
    goto LABEL_13;
  if ( !LODWORD(this[1].klass) )
    sub_1C7BD48(this);
  *(double *)&this[1].monitor = (double)v12;
  return (System_Double_array *)this;
}
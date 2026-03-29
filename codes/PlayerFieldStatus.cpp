void PlayerFieldStatus___ctor(PlayerFieldStatus_o *this, const MethodInfo *method)
{
  BattleFieldStatus___ctor((BattleFieldStatus_o *)this, 0);
}


System_Double_array *PlayerFieldStatus__getAiParam(
        PlayerFieldStatus_o *this,
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
  if ( (byte_4D342C5 & 1) == 0 )
  {
    this = (PlayerFieldStatus_o *)sub_1C93AD4(&double___TypeInfo);
    byte_4D342C5 = 1;
  }
  if ( param == 20 )
  {
    if ( !bData )
      goto LABEL_13;
    v11 = BattleFieldStatus__CommonRestCount(v10, bData->fields.player_datalist, 0);
  }
  else
  {
    if ( param != 19 )
      return v10->fields.wkZeroParam;
    if ( !bData )
LABEL_13:
      sub_1C93D2C(this, bData);
    v11 = BattleFieldStatus__CommonAliveCount(v10, bData->fields.player_datalist, 0);
  }
  v12 = v11;
  this = (PlayerFieldStatus_o *)sub_1C93B7C(double___TypeInfo, 1);
  if ( !this )
    goto LABEL_13;
  if ( !*((_DWORD *)this + 6) )
    sub_1C93D34(this);
  *((double *)this + 4) = (double)v12;
  return (System_Double_array *)this;
}
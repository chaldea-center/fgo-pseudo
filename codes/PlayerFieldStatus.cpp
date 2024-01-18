void __fastcall PlayerFieldStatus___ctor(PlayerFieldStatus_o *this, const MethodInfo *method)
{
  BattleFieldStatus___ctor((BattleFieldStatus_o *)this, 0LL);
}


System_Double_array *__fastcall PlayerFieldStatus__getAiParam(
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
  __int64 v13; // x0

  v10 = (BattleFieldStatus_o *)this;
  if ( (byte_4186B3D & 1) == 0 )
  {
    this = (PlayerFieldStatus_o *)sub_B2C35C(&double___TypeInfo, bData);
    byte_4186B3D = 1;
  }
  if ( param == 20 )
  {
    if ( !bData )
      goto LABEL_13;
    v11 = BattleFieldStatus__CommonRestCount(v10, bData->fields.player_datalist, 0LL);
  }
  else
  {
    if ( param != 19 )
      return v10->fields.wkZeroParam;
    if ( !bData )
LABEL_13:
      sub_B2C434(this, bData);
    v11 = BattleFieldStatus__CommonAliveCount(v10, bData->fields.player_datalist, 0LL);
  }
  v12 = v11;
  this = (PlayerFieldStatus_o *)sub_B2C374(double___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_13;
  if ( !LODWORD(this[1].klass) )
  {
    v13 = sub_B2C460(this);
    sub_B2C400(v13, 0LL);
  }
  *(double *)&this[1].monitor = (double)v12;
  return (System_Double_array *)this;
}
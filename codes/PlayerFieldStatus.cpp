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
  int32_t v11; // w0
  __int64 v12; // x2
  int v13; // w19
  System_Double_array *result; // x0
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_40F8FA2 & 1) == 0 )
  {
    sub_B16FFC(&double___TypeInfo, bData);
    byte_40F8FA2 = 1;
  }
  if ( param == 20 )
  {
    if ( !bData )
      goto LABEL_13;
    v11 = BattleFieldStatus__CommonRestCount((BattleFieldStatus_o *)this, bData->fields.player_datalist, 0LL);
  }
  else
  {
    if ( param != 19 )
      return this->fields.wkZeroParam;
    if ( !bData )
LABEL_13:
      sub_B170D4();
    v11 = BattleFieldStatus__CommonAliveCount((BattleFieldStatus_o *)this, bData->fields.player_datalist, 0LL);
  }
  v13 = v11;
  result = (System_Double_array *)sub_B17014(double___TypeInfo, 1LL, v12);
  if ( !result )
    goto LABEL_13;
  if ( !result->max_length )
  {
    sub_B17100(result, v15, v16);
    sub_B170A0();
  }
  result->m_Items[0] = (double)v13;
  return result;
}
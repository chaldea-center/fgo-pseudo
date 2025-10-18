BattleLogicTask_array *PlayerComboEndServantAiTask__MakeActionTask(
        PlayerComboEndServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0
  long double inited; // q0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  int max_length; // w8
  int v12; // w9
  BattleLogicTask_o *v13; // x11

  if ( (byte_4C46268 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4C46268 = 1;
  }
  result = BattleLogicServantAiTask__MakeActionTask((BattleLogicServantAiTask_o *)this, logic, method);
  if ( !result )
  {
    v7 = Method_System_Array_Empty_BattleLogicTask___;
    v8 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
    if ( !v8 )
    {
      sub_1C877C8(Method_System_Array_Empty_BattleLogicTask___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8776C(inited);
    result = **(BattleLogicTask_array ***)(v10 + 184);
    if ( !result )
      goto LABEL_19;
  }
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( max_length == v12 )
        sub_1C372BC(result);
      v13 = result->m_Items[v12];
      if ( !v13 )
        break;
      ++v12;
      *(_WORD *)&v13->fields.IsResetPrevAttackInfo = 0;
      v13->fields.checkAlive = 1;
      v13->fields.IsResetFunctionedFunctionIds = 0;
      if ( max_length == v12 )
        return result;
    }
LABEL_19:
    sub_1C372B4(result);
  }
  return result;
}
BattleLogicTask_array *PlayerComboEndServantAiTask__MakeActionTask(
        PlayerComboEndServantAiTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0
  __int64 v6; // x1
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  int max_length; // w8
  int v13; // w9
  BattleLogicTask_o *v14; // x11

  if ( (byte_4C5A05D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4C5A05D = 1;
  }
  result = BattleLogicServantAiTask__MakeActionTask((BattleLogicServantAiTask_o *)this, logic, method);
  if ( !result )
  {
    v8 = Method_System_Array_Empty_BattleLogicTask___;
    v9 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
    if ( !v9 )
    {
      sub_1C8ECD4(Method_System_Array_Empty_BattleLogicTask___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8EC78(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8EC78(inited);
    result = **(BattleLogicTask_array ***)(v11 + 184);
    if ( !result )
      goto LABEL_19;
  }
  max_length = result->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( max_length == v13 )
        sub_1C3E7C8(result, v6);
      v14 = result->m_Items[v13];
      if ( !v14 )
        break;
      ++v13;
      *(_WORD *)&v14->fields.IsResetPrevAttackInfo = 0;
      v14->fields.checkAlive = 1;
      v14->fields.IsResetFunctionedFunctionIds = 0;
      if ( max_length == v13 )
        return result;
    }
LABEL_19:
    sub_1C3E7C0(result, v6);
  }
  return result;
}
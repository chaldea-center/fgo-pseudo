void __fastcall FieldChangeBuffDeleteProcess___ctor(FieldChangeBuffDeleteProcess_o *this, const MethodInfo *method)
{
  BuffDeleteProcess___ctor((BuffDeleteProcess_o *)this, 0LL);
}


void __fastcall FieldChangeBuffDeleteProcess__Exec(
        FieldChangeBuffDeleteProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  BattleFieldEnvironmentData_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UpdateAllViewBattleLogicTask_o *v15; // x22
  BattleFieldEnvironmentData_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleFieldEnvironmentData_o *v21; // x19
  PlayFieldMotionBattleLogicTask_o *v22; // x20

  if ( (byte_40F8E5F & 1) == 0 )
  {
    sub_B16FFC(&PlayFieldMotionBattleLogicTask_TypeInfo, buff);
    sub_B16FFC(&UpdateAllViewBattleLogicTask_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8783/*"MOTION_UPDATE_FIELD"*/, v8);
    byte_40F8E5F = 1;
  }
  if ( !buff )
    goto LABEL_12;
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_12;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff->fields.addOrder, 0LL);
  v10 = this->fields._FieldEnvData_k__BackingField;
  v15 = (UpdateAllViewBattleLogicTask_o *)sub_B170CC(UpdateAllViewBattleLogicTask_TypeInfo, v11, v12, v13, v14);
  UpdateAllViewBattleLogicTask___ctor(v15, 0LL);
  if ( !v10 )
    goto LABEL_12;
  BattleFieldEnvironmentData__AddRemoveProcTask(v10, (BattleLogicTask_o *)v15, 2, 1, 0LL);
  if ( isAddAfterTask )
  {
    v16 = this->fields._FieldEnvData_k__BackingField;
    if ( !v16 )
      goto LABEL_12;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(v16, 0LL) )
    {
      v21 = this->fields._FieldEnvData_k__BackingField;
      v22 = (PlayFieldMotionBattleLogicTask_o *)sub_B170CC(PlayFieldMotionBattleLogicTask_TypeInfo, v17, v18, v19, v20);
      PlayFieldMotionBattleLogicTask___ctor(v22, (System_String_o *)StringLiteral_8783/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v21 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v21, (BattleLogicTask_o *)v22, 1, 1, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
}
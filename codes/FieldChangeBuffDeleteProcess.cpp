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
  FieldChangeBuffDeleteProcess_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UpdateAllViewBattleLogicTask_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  BattleFieldEnvironmentData_o *v15; // x19
  PlayFieldMotionBattleLogicTask_o *v16; // x20

  v6 = this;
  if ( (byte_4213218 & 1) == 0 )
  {
    sub_B0D8A4(&PlayFieldMotionBattleLogicTask_TypeInfo, buff);
    sub_B0D8A4(&UpdateAllViewBattleLogicTask_TypeInfo, v7);
    this = (FieldChangeBuffDeleteProcess_o *)sub_B0D8A4(&StringLiteral_8835/*"MOTION_UPDATE_FIELD"*/, v8);
    byte_4213218 = 1;
  }
  if ( !buff )
    goto LABEL_12;
  this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_12;
  BattleFieldEnvironmentData__RemoveRelateBuff((BattleFieldEnvironmentData_o *)this, buff->fields.addOrder, 0LL);
  FieldEnvData_k__BackingField = v6->fields._FieldEnvData_k__BackingField;
  v12 = (UpdateAllViewBattleLogicTask_o *)sub_B0D974(UpdateAllViewBattleLogicTask_TypeInfo, v10, v11);
  UpdateAllViewBattleLogicTask___ctor(v12, 0LL);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_12;
  BattleFieldEnvironmentData__AddRemoveProcTask(FieldEnvData_k__BackingField, (BattleLogicTask_o *)v12, 2, 1, 0LL);
  if ( isAddAfterTask )
  {
    this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
    if ( !this )
      goto LABEL_12;
    if ( BattleFieldEnvironmentData__IsNeedChangeField((BattleFieldEnvironmentData_o *)this, 0LL) )
    {
      v15 = v6->fields._FieldEnvData_k__BackingField;
      v16 = (PlayFieldMotionBattleLogicTask_o *)sub_B0D974(PlayFieldMotionBattleLogicTask_TypeInfo, v13, v14);
      PlayFieldMotionBattleLogicTask___ctor(v16, (System_String_o *)StringLiteral_8835/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v15 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v15, (BattleLogicTask_o *)v16, 1, 1, 0LL);
        return;
      }
LABEL_12:
      sub_B0D97C(this);
    }
  }
}
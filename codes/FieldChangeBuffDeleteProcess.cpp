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
  UpdateAllViewBattleLogicTask_o *v10; // x22
  BattleFieldEnvironmentData_o *v11; // x19
  PlayFieldMotionBattleLogicTask_o *v12; // x20

  v6 = this;
  if ( (byte_4186971 & 1) == 0 )
  {
    sub_B2C35C(&PlayFieldMotionBattleLogicTask_TypeInfo, buff);
    sub_B2C35C(&UpdateAllViewBattleLogicTask_TypeInfo, v7);
    this = (FieldChangeBuffDeleteProcess_o *)sub_B2C35C(&StringLiteral_8812/*"MOTION_UPDATE_FIELD"*/, v8);
    byte_4186971 = 1;
  }
  if ( !buff )
    goto LABEL_12;
  this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_12;
  BattleFieldEnvironmentData__RemoveRelateBuff((BattleFieldEnvironmentData_o *)this, buff->fields.addOrder, 0LL);
  FieldEnvData_k__BackingField = v6->fields._FieldEnvData_k__BackingField;
  v10 = (UpdateAllViewBattleLogicTask_o *)sub_B2C42C(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v10, 0LL);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_12;
  BattleFieldEnvironmentData__AddRemoveProcTask(FieldEnvData_k__BackingField, (BattleLogicTask_o *)v10, 2, 1, 0LL);
  if ( isAddAfterTask )
  {
    this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
    if ( !this )
      goto LABEL_12;
    if ( BattleFieldEnvironmentData__IsNeedChangeField((BattleFieldEnvironmentData_o *)this, 0LL) )
    {
      v11 = v6->fields._FieldEnvData_k__BackingField;
      v12 = (PlayFieldMotionBattleLogicTask_o *)sub_B2C42C(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v12, (System_String_o *)StringLiteral_8812/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v11 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v11, (BattleLogicTask_o *)v12, 1, 1, 0LL);
        return;
      }
LABEL_12:
      sub_B2C434(this, buff);
    }
  }
}
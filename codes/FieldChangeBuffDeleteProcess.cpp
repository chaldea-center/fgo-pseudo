void FieldChangeBuffDeleteProcess___ctor(FieldChangeBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FieldChangeBuffDeleteProcess__Exec(
        FieldChangeBuffDeleteProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  BattleFieldEnvironmentData_o *v8; // x21
  UpdateAllViewBattleLogicTask_o *v9; // x22
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x1
  BattleFieldEnvironmentData_o *v12; // x19
  PlayFieldMotionBattleLogicTask_o *v13; // x20
  const MethodInfo *v14; // x4

  if ( (byte_4C45AB0 & 1) == 0 )
  {
    sub_1C37058(&PlayFieldMotionBattleLogicTask_TypeInfo);
    sub_1C37058(&UpdateAllViewBattleLogicTask_TypeInfo);
    sub_1C37058(&StringLiteral_8776/*"MOTION_UPDATE_FIELD"*/);
    byte_4C45AB0 = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_11;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff, (const MethodInfo *)isAddAfterTask);
  v8 = this->fields._FieldEnvData_k__BackingField;
  v9 = (UpdateAllViewBattleLogicTask_o *)sub_1C372A4(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v9, 0);
  if ( !v8 )
    goto LABEL_11;
  BattleFieldEnvironmentData__AddRemoveProcTask(v8, (BattleLogicTask_o *)v9, 2, 1, v10);
  if ( isAddAfterTask )
  {
    FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_11;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(FieldEnvData_k__BackingField, v11) )
    {
      v12 = this->fields._FieldEnvData_k__BackingField;
      v13 = (PlayFieldMotionBattleLogicTask_o *)sub_1C372A4(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v13, (System_String_o *)StringLiteral_8776/*"MOTION_UPDATE_FIELD"*/, 0, 0);
      if ( v12 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v12, (BattleLogicTask_o *)v13, 1, 1, v14);
        return;
      }
LABEL_11:
      sub_1C372B4(FieldEnvData_k__BackingField);
    }
  }
}
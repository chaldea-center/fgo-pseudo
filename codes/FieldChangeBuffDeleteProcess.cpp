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
  BattleFieldEnvironmentData_o *v11; // x19
  PlayFieldMotionBattleLogicTask_o *v12; // x20
  const MethodInfo *v13; // x4

  if ( (byte_4C5988D & 1) == 0 )
  {
    sub_1C3E564(&PlayFieldMotionBattleLogicTask_TypeInfo);
    sub_1C3E564(&UpdateAllViewBattleLogicTask_TypeInfo);
    sub_1C3E564(&StringLiteral_8776/*"MOTION_UPDATE_FIELD"*/);
    byte_4C5988D = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_11;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff, (const MethodInfo *)isAddAfterTask);
  v8 = this->fields._FieldEnvData_k__BackingField;
  v9 = (UpdateAllViewBattleLogicTask_o *)sub_1C3E7B0(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v9, 0);
  if ( !v8 )
    goto LABEL_11;
  BattleFieldEnvironmentData__AddRemoveProcTask(v8, (BattleLogicTask_o *)v9, 2, 1, v10);
  if ( isAddAfterTask )
  {
    FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_11;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(FieldEnvData_k__BackingField, (const MethodInfo *)buff) )
    {
      v11 = this->fields._FieldEnvData_k__BackingField;
      v12 = (PlayFieldMotionBattleLogicTask_o *)sub_1C3E7B0(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v12, (System_String_o *)StringLiteral_8776/*"MOTION_UPDATE_FIELD"*/, 0, 0);
      if ( v11 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v11, (BattleLogicTask_o *)v12, 1, 1, v13);
        return;
      }
LABEL_11:
      sub_1C3E7C0(FieldEnvData_k__BackingField, buff);
    }
  }
}
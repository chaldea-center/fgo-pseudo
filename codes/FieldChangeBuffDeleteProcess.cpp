void FieldChangeBuffDeleteProcess___ctor(FieldChangeBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FieldChangeBuffDeleteProcess__Exec(
        FieldChangeBuffDeleteProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  BattleFieldEnvironmentData_o *v8; // x21
  UpdateAllViewBattleLogicTask_o *v9; // x22
  BattleFieldEnvironmentData_o *v10; // x19
  PlayFieldMotionBattleLogicTask_o *v11; // x20

  if ( (byte_4CB8E43 & 1) == 0 )
  {
    sub_1C6BA08(&PlayFieldMotionBattleLogicTask_TypeInfo);
    sub_1C6BA08(&UpdateAllViewBattleLogicTask_TypeInfo);
    sub_1C6BA08(&StringLiteral_8773/*"MOTION_UPDATE_FIELD"*/);
    byte_4CB8E43 = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_11;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff, 0);
  v8 = this->fields._FieldEnvData_k__BackingField;
  v9 = (UpdateAllViewBattleLogicTask_o *)sub_1C6BC54(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v9, 0);
  if ( !v8 )
    goto LABEL_11;
  BattleFieldEnvironmentData__AddRemoveProcTask(v8, (BattleLogicTask_o *)v9, 2, 1, 0);
  if ( isAddAfterTask )
  {
    FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_11;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(FieldEnvData_k__BackingField, 0) )
    {
      v10 = this->fields._FieldEnvData_k__BackingField;
      v11 = (PlayFieldMotionBattleLogicTask_o *)sub_1C6BC54(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v11, (System_String_o *)StringLiteral_8773/*"MOTION_UPDATE_FIELD"*/, 0, 0);
      if ( v10 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v10, (BattleLogicTask_o *)v11, 1, 1, 0);
        return;
      }
LABEL_11:
      sub_1C6BC60(FieldEnvData_k__BackingField, buff);
    }
  }
}
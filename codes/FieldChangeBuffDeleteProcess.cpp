void __fastcall FieldChangeBuffDeleteProcess___ctor(FieldChangeBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  UpdateAllViewBattleLogicTask_o *v11; // x22
  const MethodInfo *v12; // x4
  BattleFieldEnvironmentData_o *v13; // x19
  PlayFieldMotionBattleLogicTask_o *v14; // x20
  const MethodInfo *v15; // x4

  if ( (byte_4A220B4 & 1) == 0 )
  {
    sub_1B715CC(&PlayFieldMotionBattleLogicTask_TypeInfo, buff);
    sub_1B715CC(&UpdateAllViewBattleLogicTask_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_8704/*"MOTION_UPDATE_FIELD"*/, v8);
    byte_4A220B4 = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_11;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff, (const MethodInfo *)isAddAfterTask);
  v10 = this->fields._FieldEnvData_k__BackingField;
  v11 = (UpdateAllViewBattleLogicTask_o *)sub_1B71818(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v11, 0LL);
  if ( !v10 )
    goto LABEL_11;
  BattleFieldEnvironmentData__AddRemoveProcTask(v10, (BattleLogicTask_o *)v11, 2, 1, v12);
  if ( isAddAfterTask )
  {
    FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_11;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(FieldEnvData_k__BackingField, (const MethodInfo *)buff) )
    {
      v13 = this->fields._FieldEnvData_k__BackingField;
      v14 = (PlayFieldMotionBattleLogicTask_o *)sub_1B71818(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v14, (System_String_o *)StringLiteral_8704/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v13 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v13, (BattleLogicTask_o *)v14, 1, 1, v15);
        return;
      }
LABEL_11:
      sub_1B71828(FieldEnvData_k__BackingField, buff);
    }
  }
}
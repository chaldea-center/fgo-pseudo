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
  __int64 v11; // x1
  __int64 v12; // x2
  UpdateAllViewBattleLogicTask_o *v13; // x22
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  BattleFieldEnvironmentData_o *v18; // x19
  PlayFieldMotionBattleLogicTask_o *v19; // x20
  const MethodInfo *v20; // x4

  if ( (byte_49FE9BB & 1) == 0 )
  {
    sub_1B640C8(&PlayFieldMotionBattleLogicTask_TypeInfo, buff);
    sub_1B640C8(&UpdateAllViewBattleLogicTask_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_8694/*"MOTION_UPDATE_FIELD"*/, v8);
    byte_49FE9BB = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_11;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff, (const MethodInfo *)isAddAfterTask);
  v10 = this->fields._FieldEnvData_k__BackingField;
  v13 = (UpdateAllViewBattleLogicTask_o *)sub_1B64314(UpdateAllViewBattleLogicTask_TypeInfo, v11, v12);
  UpdateAllViewBattleLogicTask___ctor(v13, 0LL);
  if ( !v10 )
    goto LABEL_11;
  BattleFieldEnvironmentData__AddRemoveProcTask(v10, (BattleLogicTask_o *)v13, 2, 1, v14);
  if ( isAddAfterTask )
  {
    FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_11;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(FieldEnvData_k__BackingField, v15) )
    {
      v18 = this->fields._FieldEnvData_k__BackingField;
      v19 = (PlayFieldMotionBattleLogicTask_o *)sub_1B64314(PlayFieldMotionBattleLogicTask_TypeInfo, v16, v17);
      PlayFieldMotionBattleLogicTask___ctor(v19, (System_String_o *)StringLiteral_8694/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v18 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v18, (BattleLogicTask_o *)v19, 1, 1, v20);
        return;
      }
LABEL_11:
      sub_1B64324(FieldEnvData_k__BackingField);
    }
  }
}
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x0
  BattleFieldEnvironmentData_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  UpdateAllViewBattleLogicTask_o *v16; // x22
  const MethodInfo *v17; // x4
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleFieldEnvironmentData_o *v21; // x19
  PlayFieldMotionBattleLogicTask_o *v22; // x20
  const MethodInfo *v23; // x4

  if ( (byte_4B1884A & 1) == 0 )
  {
    sub_1BCA7E0(&PlayFieldMotionBattleLogicTask_TypeInfo, buff, isAddAfterTask);
    sub_1BCA7E0(&UpdateAllViewBattleLogicTask_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_8864/*"MOTION_UPDATE_FIELD"*/, v9, v10);
    byte_4B1884A = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_11;
  BattleFieldEnvironmentData__RemoveRelateBuff(FieldEnvData_k__BackingField, buff, (const MethodInfo *)isAddAfterTask);
  v12 = this->fields._FieldEnvData_k__BackingField;
  v16 = (UpdateAllViewBattleLogicTask_o *)sub_1BCAA2C(UpdateAllViewBattleLogicTask_TypeInfo, v13, v14, v15);
  UpdateAllViewBattleLogicTask___ctor(v16, 0LL);
  if ( !v12 )
    goto LABEL_11;
  BattleFieldEnvironmentData__AddRemoveProcTask(v12, (BattleLogicTask_o *)v16, 2, 1, v17);
  if ( isAddAfterTask )
  {
    FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_11;
    if ( BattleFieldEnvironmentData__IsNeedChangeField(FieldEnvData_k__BackingField, (const MethodInfo *)buff) )
    {
      v21 = this->fields._FieldEnvData_k__BackingField;
      v22 = (PlayFieldMotionBattleLogicTask_o *)sub_1BCAA2C(PlayFieldMotionBattleLogicTask_TypeInfo, v18, v19, v20);
      PlayFieldMotionBattleLogicTask___ctor(v22, (System_String_o *)StringLiteral_8864/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v21 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v21, (BattleLogicTask_o *)v22, 1, 1, v23);
        return;
      }
LABEL_11:
      sub_1BCAA3C(FieldEnvData_k__BackingField, buff);
    }
  }
}
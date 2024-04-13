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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  UpdateAllViewBattleLogicTask_o *v14; // x22
  BattleFieldEnvironmentData_o *v15; // x19
  PlayFieldMotionBattleLogicTask_o *v16; // x20

  v6 = this;
  if ( (byte_42E69A1 & 1) == 0 )
  {
    sub_B5D5C4(&PlayFieldMotionBattleLogicTask_TypeInfo, (_DWORD)buff, isAddAfterTask, method);
    sub_B5D5C4(&UpdateAllViewBattleLogicTask_TypeInfo, v7, v8, v9);
    this = (FieldChangeBuffDeleteProcess_o *)sub_B5D5C4(&StringLiteral_8903/*"MOTION_UPDATE_FIELD"*/, v10, v11, v12);
    byte_42E69A1 = 1;
  }
  if ( !buff )
    goto LABEL_12;
  this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_12;
  BattleFieldEnvironmentData__RemoveRelateBuff((BattleFieldEnvironmentData_o *)this, buff->fields.addOrder, 0LL);
  FieldEnvData_k__BackingField = v6->fields._FieldEnvData_k__BackingField;
  v14 = (UpdateAllViewBattleLogicTask_o *)sub_B5D694(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v14, 0LL);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_12;
  BattleFieldEnvironmentData__AddRemoveProcTask(FieldEnvData_k__BackingField, (BattleLogicTask_o *)v14, 2, 1, 0LL);
  if ( isAddAfterTask )
  {
    this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
    if ( !this )
      goto LABEL_12;
    if ( BattleFieldEnvironmentData__IsNeedChangeField((BattleFieldEnvironmentData_o *)this, 0LL) )
    {
      v15 = v6->fields._FieldEnvData_k__BackingField;
      v16 = (PlayFieldMotionBattleLogicTask_o *)sub_B5D694(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v16, (System_String_o *)StringLiteral_8903/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v15 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v15, (BattleLogicTask_o *)v16, 1, 1, 0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(this, buff);
    }
  }
}
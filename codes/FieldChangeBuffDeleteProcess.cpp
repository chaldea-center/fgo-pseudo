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
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  UpdateAllViewBattleLogicTask_o *v8; // x22
  BattleFieldEnvironmentData_o *v9; // x19
  PlayFieldMotionBattleLogicTask_o *v10; // x20

  v6 = this;
  if ( (byte_42AE994 & 1) == 0 )
  {
    sub_B52984(&PlayFieldMotionBattleLogicTask_TypeInfo);
    sub_B52984(&UpdateAllViewBattleLogicTask_TypeInfo);
    this = (FieldChangeBuffDeleteProcess_o *)sub_B52984(&StringLiteral_8866/*"MOTION_UPDATE_FIELD"*/);
    byte_42AE994 = 1;
  }
  if ( !buff )
    goto LABEL_12;
  this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_12;
  BattleFieldEnvironmentData__RemoveRelateBuff((BattleFieldEnvironmentData_o *)this, buff->fields.addOrder, 0LL);
  FieldEnvData_k__BackingField = v6->fields._FieldEnvData_k__BackingField;
  v8 = (UpdateAllViewBattleLogicTask_o *)sub_B52A54(UpdateAllViewBattleLogicTask_TypeInfo);
  UpdateAllViewBattleLogicTask___ctor(v8, 0LL);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_12;
  BattleFieldEnvironmentData__AddRemoveProcTask(FieldEnvData_k__BackingField, (BattleLogicTask_o *)v8, 2, 1, 0LL);
  if ( isAddAfterTask )
  {
    this = (FieldChangeBuffDeleteProcess_o *)v6->fields._FieldEnvData_k__BackingField;
    if ( !this )
      goto LABEL_12;
    if ( BattleFieldEnvironmentData__IsNeedChangeField((BattleFieldEnvironmentData_o *)this, 0LL) )
    {
      v9 = v6->fields._FieldEnvData_k__BackingField;
      v10 = (PlayFieldMotionBattleLogicTask_o *)sub_B52A54(PlayFieldMotionBattleLogicTask_TypeInfo);
      PlayFieldMotionBattleLogicTask___ctor(v10, (System_String_o *)StringLiteral_8866/*"MOTION_UPDATE_FIELD"*/, 0, 0LL);
      if ( v9 )
      {
        BattleFieldEnvironmentData__AddRemoveProcTask(v9, (BattleLogicTask_o *)v10, 1, 1, 0LL);
        return;
      }
LABEL_12:
      sub_B52A5C(this, buff);
    }
  }
}
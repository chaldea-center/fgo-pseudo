void ChangeBgmBuffDeleteProcess___ctor(ChangeBgmBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ChangeBgmBuffDeleteProcess__Exec(
        ChangeBgmBuffDeleteProcess_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  BattleFieldEnvironmentData_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  BattleFieldEnvironmentData_o *v15; // x22
  __int64 v16; // x0

  if ( (byte_4CC9F7F & 1) == 0 )
  {
    sub_1C713B0(&BattleBuffData_BuffData___TypeInfo);
    byte_4CC9F7F = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_1C71458(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_10;
  v15 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_1C714EC(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v16 = sub_1C7162C(0);
      sub_1C714D8(v16, 0);
    }
  }
  if ( !LODWORD(v15->fields._Data_k__BackingField) )
    sub_1C71610(v7);
  v15->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v15->fields._Perf_k__BackingField,
    (int32_t)buff,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !FieldEnvData_k__BackingField
    || (BattleFieldEnvironmentData__RemoveBgmRelateBuff(
          FieldEnvData_k__BackingField,
          (BattleBuffData_BuffData_array *)v15,
          0),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0) )
  {
LABEL_10:
    sub_1C71608(v7, v8);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, 0);
}
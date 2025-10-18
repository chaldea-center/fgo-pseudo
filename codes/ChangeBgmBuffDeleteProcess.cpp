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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleFieldEnvironmentData_o *v10; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x0

  if ( (byte_4C45AB1 & 1) == 0 )
  {
    sub_1C37058(&BattleBuffData_BuffData___TypeInfo);
    byte_4C45AB1 = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_1C37100(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_10;
  v10 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_1C37194(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v13 = sub_1C372D8(0);
      sub_1C37180(v13, 0);
    }
  }
  if ( !LODWORD(v10->fields._Data_k__BackingField) )
    sub_1C372BC(v7);
  v10->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields._Perf_k__BackingField, (int32_t)buff, v8, v9);
  if ( !FieldEnvData_k__BackingField
    || (BattleFieldEnvironmentData__RemoveBgmRelateBuff(
          FieldEnvData_k__BackingField,
          (BattleBuffData_BuffData_array *)v10,
          v11),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0) )
  {
LABEL_10:
    sub_1C372B4(v7);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, v12);
}
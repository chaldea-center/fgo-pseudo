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
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleFieldEnvironmentData_o *v11; // x22
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  if ( (byte_4C5988E & 1) == 0 )
  {
    sub_1C3E564(&BattleBuffData_BuffData___TypeInfo);
    byte_4C5988E = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_1C3E60C(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_10;
  v11 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_1C3E6A0(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v13 = sub_1C3E7E4(0);
      sub_1C3E68C(v13, 0);
    }
  }
  if ( !LODWORD(v11->fields._Data_k__BackingField) )
    sub_1C3E7C8(v7, v8);
  v11->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->fields._Perf_k__BackingField, (int32_t)buff, v9, v10);
  if ( !FieldEnvData_k__BackingField
    || (BattleFieldEnvironmentData__RemoveBgmRelateBuff(
          FieldEnvData_k__BackingField,
          (BattleBuffData_BuffData_array *)v11,
          v12),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(v7, v8);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, v8);
}
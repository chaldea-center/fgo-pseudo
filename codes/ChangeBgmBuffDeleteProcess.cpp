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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  BattleFieldEnvironmentData_o *v15; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  if ( (byte_593B32F & 1) == 0 )
  {
    sub_21FFC50(&BattleBuffData_BuffData___TypeInfo);
    byte_593B32F = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_21FFD10(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !v7 )
    goto LABEL_10;
  v15 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_21FFDA4(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v18 = sub_21FFEF0(0, v16);
      sub_21FFD90(v18, 0);
    }
  }
  if ( !LODWORD(v15->fields._Data_k__BackingField) )
    sub_21FFED4(v7);
  v15->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v15->fields._Perf_k__BackingField,
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
          v17),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0) )
  {
LABEL_10:
    sub_21FFECC(v7, v8);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, v8);
}
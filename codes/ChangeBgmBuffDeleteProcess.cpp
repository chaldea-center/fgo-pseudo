void __fastcall ChangeBgmBuffDeleteProcess___ctor(ChangeBgmBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBgmBuffDeleteProcess__Exec(
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
  BattleFieldEnvironmentData_o *v11; // x22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  __int64 v14; // x0

  if ( (byte_49FE9BC & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_BuffData___TypeInfo, buff);
    byte_49FE9BC = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_1B64170(BattleBuffData_BuffData___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_10;
  v11 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_1B64204(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v14 = sub_1B64348(0LL);
      sub_1B641F0(v14, 0LL);
    }
  }
  if ( !LODWORD(v11->fields._Data_k__BackingField) )
    sub_1B6432C(v7, v8);
  v11->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields._Perf_k__BackingField, (int32_t)buff, v9, v10);
  if ( !FieldEnvData_k__BackingField
    || (BattleFieldEnvironmentData__RemoveBgmRelateBuff(
          FieldEnvData_k__BackingField,
          (BattleBuffData_BuffData_array *)v11,
          v12),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0LL) )
  {
LABEL_10:
    sub_1B64324(v7);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, v13);
}
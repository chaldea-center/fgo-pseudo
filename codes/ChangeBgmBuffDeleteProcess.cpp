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
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattleFieldEnvironmentData_o *v15; // x22
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  if ( (byte_4BFFEDD & 1) == 0 )
  {
    sub_1C2E12C(&BattleBuffData_BuffData___TypeInfo, buff);
    byte_4BFFEDD = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_1C2E1D4(BattleBuffData_BuffData___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_10;
  v15 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_1C2E268(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v17 = sub_1C2E3AC(0LL);
      sub_1C2E254(v17, 0LL);
    }
  }
  if ( !LODWORD(v15->fields._Data_k__BackingField) )
    sub_1C2E390(v7, v8);
  v15->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v15->fields._Perf_k__BackingField,
    (int64_t)buff,
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
          v16),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0LL) )
  {
LABEL_10:
    sub_1C2E388(v7, v8);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, v8);
}
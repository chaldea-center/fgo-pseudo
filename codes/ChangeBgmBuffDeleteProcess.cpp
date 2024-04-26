void __fastcall ChangeBgmBuffDeleteProcess___ctor(ChangeBgmBuffDeleteProcess_o *this, const MethodInfo *method)
{
  FieldBuffDeleteProcess___ctor((FieldBuffDeleteProcess_o *)this, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleFieldEnvironmentData_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4354BB2 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_BuffData___TypeInfo);
    byte_4354BB2 = 1;
  }
  FieldEnvData_k__BackingField = this->fields._FieldEnvData_k__BackingField;
  v7 = (BattleFieldEnvironmentData_o *)sub_B706AC(BattleBuffData_BuffData___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_10;
  v15 = v7;
  if ( buff )
  {
    v7 = (BattleFieldEnvironmentData_o *)sub_B70754(buff, v7->klass->_1.element_class);
    if ( !v7 )
    {
      v17 = sub_B7078C(0LL);
      sub_B70738(v17, 0LL);
    }
  }
  if ( !LODWORD(v15->fields._Data_k__BackingField) )
  {
    v16 = sub_B70798(v7);
    sub_B70738(v16, 0LL);
  }
  v15->fields._Perf_k__BackingField = (struct BattlePerformance_o *)buff;
  sub_B70630(
    (BattleServantConfConponent_o *)&v15->fields._Perf_k__BackingField,
    (System_Int32_array **)buff,
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
          0LL),
        (v7 = this->fields._FieldEnvData_k__BackingField) == 0LL) )
  {
LABEL_10:
    sub_B7076C(v7, v8);
  }
  BattleFieldEnvironmentData__AddUpdateBgmTask(v7, 0LL);
}
void __fastcall FieldBuffDeleteProcess___ctor(FieldBuffDeleteProcess_o *this, const MethodInfo *method)
{
  BuffDeleteProcess___ctor((BuffDeleteProcess_o *)this, 0LL);
}


void __fastcall FieldBuffDeleteProcess__Init(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FieldEnvData_k__BackingField = fieldEnvData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)fieldEnvData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


BattleFieldEnvironmentData_o *__fastcall FieldBuffDeleteProcess__get_FieldEnvData(
        FieldBuffDeleteProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._FieldEnvData_k__BackingField;
}


void __fastcall FieldBuffDeleteProcess__set_FieldEnvData(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FieldEnvData_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
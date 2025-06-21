void __fastcall FieldBuffDeleteProcess___ctor(FieldBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FieldBuffDeleteProcess__Init(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FieldEnvData_k__BackingField = fieldEnvData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)fieldEnvData, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._FieldEnvData_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}
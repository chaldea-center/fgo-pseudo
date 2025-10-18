void FieldBuffDeleteProcess___ctor(FieldBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FieldBuffDeleteProcess__Init(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FieldEnvData_k__BackingField = fieldEnvData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)fieldEnvData, (int32_t)method, v3);
}


BattleFieldEnvironmentData_o *FieldBuffDeleteProcess__get_FieldEnvData(
        FieldBuffDeleteProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._FieldEnvData_k__BackingField;
}


void FieldBuffDeleteProcess__set_FieldEnvData(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FieldEnvData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}
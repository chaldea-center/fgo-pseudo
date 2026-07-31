void FieldBuffDeleteProcess___ctor(FieldBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FieldBuffDeleteProcess__Init(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FieldEnvData_k__BackingField = fieldEnvData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)fieldEnvData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FieldEnvData_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
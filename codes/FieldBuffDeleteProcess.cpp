void __fastcall FieldBuffDeleteProcess___ctor(FieldBuffDeleteProcess_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FieldBuffDeleteProcess__Init(
        FieldBuffDeleteProcess_o *this,
        BattleFieldEnvironmentData_o *fieldEnvData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FieldEnvData_k__BackingField = fieldEnvData;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)fieldEnvData, (int64_t)method, v3, v4, v5, v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FieldEnvData_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}
bool __fastcall NguiLocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__bool__o *containsKeyFunc; // x8

  v2 = key;
  if ( (byte_4BE0D79 & 1) == 0 )
  {
    key = (System_String_o *)sub_1C21E38(&NguiLocalizationManager_TypeInfo);
    byte_4BE0D79 = 1;
  }
  containsKeyFunc = NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc;
  if ( !containsKeyFunc )
    sub_1C22094(key, method);
  return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))containsKeyFunc->fields.m_target)(
           containsKeyFunc->fields.original_method_info,
           v2,
           *(_QWORD *)&containsKeyFunc->fields.extra_arg);
}


System_String_o *__fastcall NguiLocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__string__o *getFunc; // x8

  v2 = key;
  if ( (byte_4BE0D7A & 1) == 0 )
  {
    key = (System_String_o *)sub_1C21E38(&NguiLocalizationManager_TypeInfo);
    byte_4BE0D7A = 1;
  }
  getFunc = NguiLocalizationManager_TypeInfo->static_fields->getFunc;
  if ( !getFunc )
    sub_1C22094(key, method);
  return (System_String_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))getFunc->fields.m_target)(
                              getFunc->fields.original_method_info,
                              v2,
                              *(_QWORD *)&getFunc->fields.extra_arg);
}


void __fastcall NguiLocalizationManager__RegisterContainsKeyFunc(
        System_Func_string__bool__o *containsKeyFunc,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0D77 & 1) == 0 )
  {
    sub_1C21E38(&NguiLocalizationManager_TypeInfo);
    byte_4BE0D77 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = containsKeyFunc;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)NguiLocalizationManager_TypeInfo->static_fields,
    (int64_t)containsKeyFunc,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NguiLocalizationManager__RegisterGetFunc(
        System_Func_string__string__o *getFunc,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct NguiLocalizationManager_StaticFields *static_fields; // x0

  if ( (byte_4BE0D78 & 1) == 0 )
  {
    sub_1C21E38(&NguiLocalizationManager_TypeInfo);
    byte_4BE0D78 = 1;
  }
  static_fields = NguiLocalizationManager_TypeInfo->static_fields;
  static_fields->getFunc = getFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->getFunc, (int64_t)getFunc, v2, v3, v4, v5, v6, v7);
}
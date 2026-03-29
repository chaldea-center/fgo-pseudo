bool NguiLocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__bool__o *containsKeyFunc; // x8

  v2 = key;
  if ( (byte_4D34FF8 & 1) == 0 )
  {
    key = (System_String_o *)sub_1C93AD4(&NguiLocalizationManager_TypeInfo);
    byte_4D34FF8 = 1;
  }
  containsKeyFunc = NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc;
  if ( !containsKeyFunc )
    sub_1C93D2C(key, method);
  return ((bool (__fastcall *)(intptr_t, System_String_o *, intptr_t))containsKeyFunc->fields.invoke_impl)(
           containsKeyFunc->fields.method_code,
           v2,
           containsKeyFunc->fields.method);
}


System_String_o *NguiLocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__string__o *getFunc; // x8

  v2 = key;
  if ( (byte_4D34FF9 & 1) == 0 )
  {
    key = (System_String_o *)sub_1C93AD4(&NguiLocalizationManager_TypeInfo);
    byte_4D34FF9 = 1;
  }
  getFunc = NguiLocalizationManager_TypeInfo->static_fields->getFunc;
  if ( !getFunc )
    sub_1C93D2C(key, method);
  return ((System_String_o *(__fastcall *)(intptr_t, System_String_o *, intptr_t))getFunc->fields.invoke_impl)(
           getFunc->fields.method_code,
           v2,
           getFunc->fields.method);
}


void NguiLocalizationManager__RegisterContainsKeyFunc(
        System_Func_string__bool__o *containsKeyFunc,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D34FF6 & 1) == 0 )
  {
    sub_1C93AD4(&NguiLocalizationManager_TypeInfo);
    byte_4D34FF6 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = containsKeyFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)NguiLocalizationManager_TypeInfo->static_fields,
    (int32_t)containsKeyFunc,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NguiLocalizationManager__RegisterGetFunc(System_Func_string__string__o *getFunc, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct NguiLocalizationManager_StaticFields *static_fields; // x0

  if ( (byte_4D34FF7 & 1) == 0 )
  {
    sub_1C93AD4(&NguiLocalizationManager_TypeInfo);
    byte_4D34FF7 = 1;
  }
  static_fields = NguiLocalizationManager_TypeInfo->static_fields;
  static_fields->getFunc = getFunc;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->getFunc, (int32_t)getFunc, v2, v3, v4, v5, v6, v7);
}
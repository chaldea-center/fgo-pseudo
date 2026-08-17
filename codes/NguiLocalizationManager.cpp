bool NguiLocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__bool__o *containsKeyFunc; // x8

  v2 = key;
  if ( (byte_5974F33 & 1) == 0 )
  {
    key = (System_String_o *)sub_2213A60(&NguiLocalizationManager_TypeInfo);
    byte_5974F33 = 1;
  }
  containsKeyFunc = NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc;
  if ( !containsKeyFunc )
    sub_2213CDC(key, method);
  return ((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))containsKeyFunc->fields.invoke_impl)(
           containsKeyFunc->fields.method_code,
           v2,
           containsKeyFunc->fields.method);
}


System_String_o *NguiLocalizationManager__Get(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__string__o *getFunc; // x8

  v2 = key;
  if ( (byte_5974F34 & 1) == 0 )
  {
    key = (System_String_o *)sub_2213A60(&NguiLocalizationManager_TypeInfo);
    byte_5974F34 = 1;
  }
  getFunc = NguiLocalizationManager_TypeInfo->static_fields->getFunc;
  if ( !getFunc )
    sub_2213CDC(key, method);
  return (System_String_o *)((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))getFunc->fields.invoke_impl)(
                              getFunc->fields.method_code,
                              v2,
                              getFunc->fields.method);
}


void NguiLocalizationManager__RegisterContainsKeyFunc(
        System_Func_string__bool__o *containsKeyFunc,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974F31 & 1) == 0 )
  {
    sub_2213A60(&NguiLocalizationManager_TypeInfo);
    byte_5974F31 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = containsKeyFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)NguiLocalizationManager_TypeInfo->static_fields,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct NguiLocalizationManager_StaticFields *static_fields; // x0

  if ( (byte_5974F32 & 1) == 0 )
  {
    sub_2213A60(&NguiLocalizationManager_TypeInfo);
    byte_5974F32 = 1;
  }
  static_fields = NguiLocalizationManager_TypeInfo->static_fields;
  static_fields->getFunc = getFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->getFunc, (int32_t)getFunc, v2, v3, v4, v5, v6, v7);
}
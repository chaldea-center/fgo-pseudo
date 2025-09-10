bool NguiLocalizationManager__ContainsKey(System_String_o *key, const MethodInfo *method)
{
  System_String_o *v2; // x19
  struct System_Func_string__bool__o *containsKeyFunc; // x8

  v2 = key;
  if ( (byte_4C2B8F9 & 1) == 0 )
  {
    key = (System_String_o *)sub_1C2D490(&NguiLocalizationManager_TypeInfo);
    byte_4C2B8F9 = 1;
  }
  containsKeyFunc = NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc;
  if ( !containsKeyFunc )
    sub_1C2D6EC(key, method);
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
  if ( (byte_4C2B8FA & 1) == 0 )
  {
    key = (System_String_o *)sub_1C2D490(&NguiLocalizationManager_TypeInfo);
    byte_4C2B8FA = 1;
  }
  getFunc = NguiLocalizationManager_TypeInfo->static_fields->getFunc;
  if ( !getFunc )
    sub_1C2D6EC(key, method);
  return (System_String_o *)((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))getFunc->fields.invoke_impl)(
                              getFunc->fields.method_code,
                              v2,
                              getFunc->fields.method);
}


void NguiLocalizationManager__RegisterContainsKeyFunc(
        System_Func_string__bool__o *containsKeyFunc,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2B8F7 & 1) == 0 )
  {
    sub_1C2D490(&NguiLocalizationManager_TypeInfo);
    byte_4C2B8F7 = 1;
  }
  NguiLocalizationManager_TypeInfo->static_fields->containsKeyFunc = containsKeyFunc;
  sub_1C2D434(
    (CGThumbnailListItem_o *)NguiLocalizationManager_TypeInfo->static_fields,
    (int32_t)containsKeyFunc,
    v2,
    v3);
}


void NguiLocalizationManager__RegisterGetFunc(System_Func_string__string__o *getFunc, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct NguiLocalizationManager_StaticFields *static_fields; // x0

  if ( (byte_4C2B8F8 & 1) == 0 )
  {
    sub_1C2D490(&NguiLocalizationManager_TypeInfo);
    byte_4C2B8F8 = 1;
  }
  static_fields = NguiLocalizationManager_TypeInfo->static_fields;
  static_fields->getFunc = getFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->getFunc, (int32_t)getFunc, v2, v3);
}
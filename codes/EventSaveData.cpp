void EventSaveData___ctor(EventSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_array *EventSaveData__GetValueByArray(
        EventSaveData_o *this,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_array *result; // x0

  result = (System_String_array *)this->fields.value;
  if ( result )
    return System_String__Split((System_String_o *)result, separator, 0, 0);
  return result;
}


void EventSaveData__SetValueByArray(
        EventSaveData_o *this,
        System_String_array *valueArray,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  uint16_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = separator;
  if ( valueArray )
  {
    if ( !*(_DWORD *)(qword_594C0B0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C0B0, valueArray, separator);
    v6 = System_Char__ToString((uint16_t)&v14, 0);
    v7 = System_String__Join(v6, valueArray, 0);
    this->fields.value = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.value, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
}
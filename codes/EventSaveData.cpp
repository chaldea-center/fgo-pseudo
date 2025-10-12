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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  uint16_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = separator;
  if ( (byte_4C34C6A & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    byte_4C34C6A = 1;
  }
  if ( valueArray )
  {
    if ( !char_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(char_TypeInfo);
    v6 = System_Char__ToString((uint16_t)&v10, 0);
    v7 = System_String__Join(v6, valueArray, 0);
    this->fields.value = v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.value, (int32_t)v7, v8, v9);
  }
}
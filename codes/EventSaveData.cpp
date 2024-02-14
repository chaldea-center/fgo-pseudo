void __fastcall EventSaveData___ctor(EventSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall EventSaveData__GetValueByArray(
        EventSaveData_o *this,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *value; // x20
  System_Char_array *v6; // x0
  __int64 v8; // x0

  if ( (byte_4217945 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, separator);
    byte_4217945 = 1;
  }
  value = this->fields.value;
  if ( !value )
    return 0LL;
  v6 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v6 )
    sub_B0D97C(0LL);
  if ( !v6->max_length )
  {
    v8 = sub_B0D9A8(v6);
    sub_B0D948(v8, 0LL);
  }
  v6->m_Items[2] = separator;
  return System_String__Split(value, v6, 0LL);
}


void __fastcall EventSaveData__SetValueByArray(
        EventSaveData_o *this,
        System_String_array *valueArray,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  uint16_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = separator;
  if ( valueArray )
  {
    v6 = System_Char__ToString((uint16_t)&v14, 0LL);
    v7 = System_String__Join(v6, valueArray, 0LL);
    this->fields.value = v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.value,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}
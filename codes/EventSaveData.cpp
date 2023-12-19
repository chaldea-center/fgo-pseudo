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
  __int64 v7; // x2

  if ( (byte_40FD13B & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, separator);
    byte_40FD13B = 1;
  }
  value = this->fields.value;
  if ( !value )
    return 0LL;
  v6 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v6 )
    sub_B170D4();
  if ( !v6->max_length )
  {
    sub_B17100(v6, v6, v7);
    sub_B170A0();
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
    sub_B16F98(
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
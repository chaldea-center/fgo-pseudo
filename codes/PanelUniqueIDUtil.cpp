void __fastcall PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12D9B & 1) == 0 )
  {
    sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, v1, v2);
    byte_4B12D9B = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  PanelUniqueIDUtil_c *v5; // x0

  if ( (byte_4B12D99 & 1) == 0 )
  {
    sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex, method);
    byte_4B12D99 = 1;
  }
  v5 = PanelUniqueIDUtil_TypeInfo;
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex);
    v5 = PanelUniqueIDUtil_TypeInfo;
  }
  return hIndex + v5->static_fields->V_INDEX_SHIFT * vIndex;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PanelUniqueIDUtil__HasID(
        int32_t hIndex,
        int32_t vIndex,
        System_Int32_array *uniqueIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t ID; // w0

  if ( (byte_4B12D9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&vIndex, uniqueIds);
    sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, v7, v8);
    byte_4B12D9A = 1;
  }
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex);
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) >= 0;
}
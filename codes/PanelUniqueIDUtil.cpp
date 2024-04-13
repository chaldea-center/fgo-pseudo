void __fastcall PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E638F & 1) == 0 )
  {
    sub_B5D5C4(&PanelUniqueIDUtil_TypeInfo, v1, v2, v3);
    byte_42E638F = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


int32_t __fastcall PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  __int64 v3; // x3
  PanelUniqueIDUtil_c *v6; // x0

  if ( (byte_42E638D & 1) == 0 )
  {
    sub_B5D5C4(&PanelUniqueIDUtil_TypeInfo, vIndex, (_DWORD)method, v3);
    byte_42E638D = 1;
  }
  v6 = PanelUniqueIDUtil_TypeInfo;
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
    v6 = PanelUniqueIDUtil_TypeInfo;
  }
  return hIndex + v6->static_fields->V_INDEX_SHIFT * vIndex;
}


bool __fastcall PanelUniqueIDUtil__HasID(
        int32_t hIndex,
        int32_t vIndex,
        System_Int32_array *uniqueIds,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t ID; // w0

  if ( (byte_42E638E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, vIndex, (_DWORD)uniqueIds, method);
    sub_B5D5C4(&PanelUniqueIDUtil_TypeInfo, v7, v8, v9);
    byte_42E638E = 1;
  }
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  }
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) >= 0;
}
void __fastcall PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  if ( (byte_438A34E & 1) == 0 )
  {
    sub_B775C4(&PanelUniqueIDUtil_TypeInfo);
    byte_438A34E = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


int32_t __fastcall PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  PanelUniqueIDUtil_c *v5; // x0

  if ( (byte_438A34C & 1) == 0 )
  {
    sub_B775C4(&PanelUniqueIDUtil_TypeInfo);
    byte_438A34C = 1;
  }
  v5 = PanelUniqueIDUtil_TypeInfo;
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
    v5 = PanelUniqueIDUtil_TypeInfo;
  }
  return hIndex + v5->static_fields->V_INDEX_SHIFT * vIndex;
}


bool __fastcall PanelUniqueIDUtil__HasID(
        int32_t hIndex,
        int32_t vIndex,
        System_Int32_array *uniqueIds,
        const MethodInfo *method)
{
  int32_t ID; // w0

  if ( (byte_438A34D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&PanelUniqueIDUtil_TypeInfo);
    byte_438A34D = 1;
  }
  if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  }
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) >= 0;
}
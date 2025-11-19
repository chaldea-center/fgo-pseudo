void PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  if ( (byte_4CB2BE9 & 1) == 0 )
  {
    sub_1C6BA08(&PanelUniqueIDUtil_TypeInfo);
    byte_4CB2BE9 = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


int32_t PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  PanelUniqueIDUtil_c *v5; // x0

  if ( (byte_4CB2BE7 & 1) == 0 )
  {
    sub_1C6BA08(&PanelUniqueIDUtil_TypeInfo);
    byte_4CB2BE7 = 1;
  }
  v5 = PanelUniqueIDUtil_TypeInfo;
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
    v5 = PanelUniqueIDUtil_TypeInfo;
  }
  return hIndex + v5->static_fields->V_INDEX_SHIFT * vIndex;
}


bool PanelUniqueIDUtil__HasID(int32_t hIndex, int32_t vIndex, System_Int32_array *uniqueIds, const MethodInfo *method)
{
  int32_t ID; // w0

  if ( (byte_4CB2BE8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_int___);
    sub_1C6BA08(&PanelUniqueIDUtil_TypeInfo);
    byte_4CB2BE8 = 1;
  }
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_324317C *)Method_System_Array_IndexOf_int___) >= 0;
}
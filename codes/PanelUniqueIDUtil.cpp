void PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  if ( (byte_596CF1B & 1) == 0 )
  {
    sub_2213A60(&PanelUniqueIDUtil_TypeInfo);
    byte_596CF1B = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


// local variable allocation has failed, the output may be wrong!
int32_t PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  PanelUniqueIDUtil_c *v5; // x0

  if ( (byte_596CF19 & 1) == 0 )
  {
    sub_2213A60(&PanelUniqueIDUtil_TypeInfo);
    byte_596CF19 = 1;
  }
  v5 = PanelUniqueIDUtil_TypeInfo;
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex, method);
    v5 = PanelUniqueIDUtil_TypeInfo;
  }
  return hIndex + v5->static_fields->V_INDEX_SHIFT * vIndex;
}


// local variable allocation has failed, the output may be wrong!
bool PanelUniqueIDUtil__HasID(int32_t hIndex, int32_t vIndex, System_Int32_array *uniqueIds, const MethodInfo *method)
{
  int32_t ID; // w0

  if ( (byte_596CF1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&PanelUniqueIDUtil_TypeInfo);
    byte_596CF1A = 1;
  }
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex, uniqueIds);
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) >= 0;
}
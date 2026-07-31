void PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  if ( (byte_5934DEC & 1) == 0 )
  {
    sub_21FFC50(&PanelUniqueIDUtil_TypeInfo);
    byte_5934DEC = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


// local variable allocation has failed, the output may be wrong!
int32_t PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  PanelUniqueIDUtil_c *v5; // x0

  if ( (byte_5934DEA & 1) == 0 )
  {
    sub_21FFC50(&PanelUniqueIDUtil_TypeInfo);
    byte_5934DEA = 1;
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

  if ( (byte_5934DEB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_int___);
    sub_21FFC50(&PanelUniqueIDUtil_TypeInfo);
    byte_5934DEB = 1;
  }
  if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex, uniqueIds);
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_39FAFC4 *)Method_System_Array_IndexOf_int___) >= 0;
}
void __fastcall PanelUniqueIDUtil___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB292F & 1) == 0 )
  {
    sub_1BAB41C(&PanelUniqueIDUtil_TypeInfo, v1);
    byte_4AB292F = 1;
  }
  PanelUniqueIDUtil_TypeInfo->static_fields->V_INDEX_SHIFT = 10000;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PanelUniqueIDUtil__GetID(int32_t hIndex, int32_t vIndex, const MethodInfo *method)
{
  PanelUniqueIDUtil_c *v5; // x0

  if ( (byte_4AB292D & 1) == 0 )
  {
    sub_1BAB41C(&PanelUniqueIDUtil_TypeInfo, *(_QWORD *)&vIndex);
    byte_4AB292D = 1;
  }
  v5 = PanelUniqueIDUtil_TypeInfo;
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
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
  int32_t ID; // w0

  if ( (byte_4AB292E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&vIndex);
    sub_1BAB41C(&PanelUniqueIDUtil_TypeInfo, v7);
    byte_4AB292E = 1;
  }
  if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
  ID = PanelUniqueIDUtil__GetID(hIndex, vIndex, (const MethodInfo *)uniqueIds);
  return System_Array__IndexOf_int_(uniqueIds, ID, (const MethodInfo_2FBF4DC *)Method_System_Array_IndexOf_int___) >= 0;
}
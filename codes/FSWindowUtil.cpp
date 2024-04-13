UnityEngine_Vector2_o __fastcall FSWindowUtil__GetSize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int32_t width; // w19
  int32_t height; // w0
  float v6; // s8
  ManagerConfig_c *v7; // x0
  float v8; // s10
  float v9; // s1
  float v10; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E8CB4 & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, v1, v2, v3);
    byte_42E8CB4 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v6 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  v7 = ManagerConfig_TypeInfo;
  if ( v6 >= 1.7778 )
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v7 = ManagerConfig_TypeInfo;
    }
    v8 = v6 * (float)v7->static_fields->HEIGHT;
  }
  else
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v7 = ManagerConfig_TypeInfo;
    }
    v8 = (float)v7->static_fields->WIDTH;
  }
  if ( v6 >= 1.7778 )
  {
    if ( (WORD1(v7->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ManagerConfig_TypeInfo;
    }
    v9 = (float)v7->static_fields->HEIGHT;
  }
  else
  {
    if ( (WORD1(v7->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ManagerConfig_TypeInfo;
    }
    v9 = (float)v7->static_fields->WIDTH / v6;
  }
  v10 = v8;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
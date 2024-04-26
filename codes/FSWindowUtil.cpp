UnityEngine_Vector2_o __fastcall FSWindowUtil__GetSize(const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0
  float v3; // s8
  ManagerConfig_c *v4; // x0
  float v5; // s10
  float v6; // s1
  float v7; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_435222B & 1) == 0 )
  {
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_435222B = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v3 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  v4 = ManagerConfig_TypeInfo;
  if ( v3 >= 1.7778 )
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v4 = ManagerConfig_TypeInfo;
    }
    v5 = v3 * (float)v4->static_fields->HEIGHT;
  }
  else
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v4 = ManagerConfig_TypeInfo;
    }
    v5 = (float)v4->static_fields->WIDTH;
  }
  if ( v3 >= 1.7778 )
  {
    if ( (WORD1(v4->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ManagerConfig_TypeInfo;
    }
    v6 = (float)v4->static_fields->HEIGHT;
  }
  else
  {
    if ( (WORD1(v4->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ManagerConfig_TypeInfo;
    }
    v6 = (float)v4->static_fields->WIDTH / v3;
  }
  v7 = v5;
  result.fields.y = v6;
  result.fields.x = v7;
  return result;
}
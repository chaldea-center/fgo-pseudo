UnityEngine_Vector2_o __fastcall FSWindowUtil__GetSize(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t width; // w19
  int32_t height; // w0
  float v4; // s8
  ManagerConfig_c *v5; // x0
  float v6; // s10
  float v7; // s1
  float v8; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421545D & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, v1);
    byte_421545D = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v4 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
  v5 = ManagerConfig_TypeInfo;
  if ( v4 >= 1.7778 )
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v5 = ManagerConfig_TypeInfo;
    }
    v6 = v4 * (float)v5->static_fields->HEIGHT;
  }
  else
  {
    if ( (WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v5 = ManagerConfig_TypeInfo;
    }
    v6 = (float)v5->static_fields->WIDTH;
  }
  if ( v4 >= 1.7778 )
  {
    if ( (WORD1(v5->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ManagerConfig_TypeInfo;
    }
    v7 = (float)v5->static_fields->HEIGHT;
  }
  else
  {
    if ( (WORD1(v5->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ManagerConfig_TypeInfo;
    }
    v7 = (float)v5->static_fields->WIDTH / v4;
  }
  v8 = v6;
  result.fields.y = v7;
  result.fields.x = v8;
  return result;
}
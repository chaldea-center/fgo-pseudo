UnityEngine_Vector2_o FSWindowUtil__GetSize(const MethodInfo *method)
{
  int32_t width; // w19
  __int64 v2; // x1
  float height; // s1
  ManagerConfig_c *v4; // x0
  float v5; // s0
  float v6; // s1
  int v7; // w8
  float v8; // s9
  float v9; // s8
  int v10; // w8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_59722B6 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59722B6 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  v4 = ManagerConfig_TypeInfo;
  v5 = (float)width / height;
  v6 = 2.3333;
  v7 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  if ( v5 <= 2.3333 )
    v6 = v5;
  if ( v5 >= 1.7778 )
    v8 = v6;
  else
    v8 = 1.7778;
  if ( v8 >= 1.7778 )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v2);
      v4 = ManagerConfig_TypeInfo;
    }
    v9 = v8 * (float)v4->static_fields->HEIGHT;
  }
  else
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v2);
      v4 = ManagerConfig_TypeInfo;
    }
    v9 = (float)v4->static_fields->WIDTH;
  }
  v10 = *(&v4->_2.cctor_finished + 1);
  if ( v8 >= 1.7778 )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(v4, v2);
      v4 = ManagerConfig_TypeInfo;
    }
    result.fields.y = (float)v4->static_fields->HEIGHT;
  }
  else
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(v4, v2);
      v4 = ManagerConfig_TypeInfo;
    }
    result.fields.y = (float)v4->static_fields->WIDTH / v8;
  }
  result.fields.x = v9;
  return result;
}
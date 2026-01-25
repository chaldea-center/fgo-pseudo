UnityEngine_Vector2_o FSWindowUtil__GetSize(const MethodInfo *method)
{
  int32_t width; // w19
  float height; // s1
  ManagerConfig_c *v3; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s9
  struct ManagerConfig_StaticFields *static_fields; // x8
  float v8; // s8
  float v9; // s1
  float v10; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CF0010 & 1) == 0 )
  {
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CF0010 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  height = (float)UnityEngine_Screen__get_height(0);
  v3 = ManagerConfig_TypeInfo;
  v4 = (float)width / height;
  v5 = fminf(v4, 2.3333);
  if ( v4 < 1.7778 )
    v6 = 1.7778;
  else
    v6 = v5;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( v6 >= 1.7778 )
    v8 = v6 * (float)static_fields->HEIGHT;
  else
    v8 = (float)static_fields->WIDTH;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    static_fields = ManagerConfig_TypeInfo->static_fields;
  }
  if ( v6 >= 1.7778 )
    v9 = (float)static_fields->HEIGHT;
  else
    v9 = (float)static_fields->WIDTH / v6;
  v10 = v8;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
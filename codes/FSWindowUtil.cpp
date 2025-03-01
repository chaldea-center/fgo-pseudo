UnityEngine_Vector2_o __fastcall FSWindowUtil__GetSize(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t width; // w19
  float height; // s1
  ManagerConfig_c *v4; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s9
  struct ManagerConfig_StaticFields *static_fields; // x8
  float v9; // s8
  float v10; // s1
  float v11; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BFEFAC & 1) == 0 )
  {
    sub_1C2E12C(&ManagerConfig_TypeInfo, v1);
    byte_4BFEFAC = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  v4 = ManagerConfig_TypeInfo;
  v5 = (float)width / height;
  v6 = fminf(v5, 2.3333);
  if ( v5 < 1.7778 )
    v7 = 1.7778;
  else
    v7 = v6;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( v7 >= 1.7778 )
    v9 = v7 * (float)static_fields->HEIGHT;
  else
    v9 = (float)static_fields->WIDTH;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = ManagerConfig_TypeInfo->static_fields;
  }
  if ( v7 >= 1.7778 )
    v10 = (float)static_fields->HEIGHT;
  else
    v10 = (float)static_fields->WIDTH / v7;
  v11 = v9;
  result.fields.y = v10;
  result.fields.x = v11;
  return result;
}
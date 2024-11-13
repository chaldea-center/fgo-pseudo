UnityEngine_Vector2_o __fastcall FSWindowUtil__GetSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t width; // w19
  __int64 v4; // x1
  float height; // s1
  ManagerConfig_c *v6; // x0
  float v7; // s0
  float v8; // s1
  float v9; // s9
  struct ManagerConfig_StaticFields *static_fields; // x8
  float v11; // s8
  float v12; // s1
  float v13; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B17993 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v1, v2);
    byte_4B17993 = 1;
  }
  width = UnityEngine_Screen__get_width(0LL);
  height = (float)UnityEngine_Screen__get_height(0LL);
  v6 = ManagerConfig_TypeInfo;
  v7 = (float)width / height;
  v8 = fminf(v7, 2.3333);
  if ( v7 < 1.7778 )
    v9 = 1.7778;
  else
    v9 = v8;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v4);
    v6 = ManagerConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( v9 >= 1.7778 )
    v11 = v9 * (float)static_fields->HEIGHT;
  else
    v11 = (float)static_fields->WIDTH;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6, v4);
    static_fields = ManagerConfig_TypeInfo->static_fields;
  }
  if ( v9 >= 1.7778 )
    v12 = (float)static_fields->HEIGHT;
  else
    v12 = (float)static_fields->WIDTH / v9;
  v13 = v11;
  result.fields.y = v12;
  result.fields.x = v13;
  return result;
}
void ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3
  unsigned int v5; // w8
  struct UnityEngine_Vector2_array *v6; // x1
  const MethodInfo *v7; // x3
  unsigned int v8; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4C292CC & 1) == 0 )
  {
    sub_1C2D490(&ScriptPosition_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector2___TypeInfo);
    byte_4C292CC = 1;
  }
  v1 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 7);
  if ( !v1 )
    goto LABEL_17;
  v5 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Vector2_array *)v1;
  if ( !v5
    || (*(_QWORD *)(v1 + 32) = 3279945728LL, v5 == 1)
    || (*(_QWORD *)(v1 + 40) = 0, v5 <= 2)
    || (*(_QWORD *)(v1 + 48) = 1132462080, v5 == 3)
    || (*(_QWORD *)(v1 + 56) = 3285909504LL, v5 <= 4)
    || (*(_QWORD *)(v1 + 64) = 3288334336LL, v5 == 5)
    || (*(_QWORD *)(v1 + 72) = 1138425856, v5 <= 6) )
  {
LABEL_16:
    sub_1C2D6F4(v1, v6, v3);
  }
  *(_QWORD *)(v1 + 80) = 1140850688;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ScriptPosition_TypeInfo->static_fields, v1, v3, v4);
  v1 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
LABEL_17:
    sub_1C2D6EC(v1, v2);
  v8 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Vector2_array *)v1;
  if ( !v8 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v8 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0;
  if ( v8 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->charaOffsetList, (int32_t)v6, v3, v7);
}


void ScriptPosition___ctor(ScriptPosition_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o ScriptPosition__GetCharaOffset(int32_t index, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptPosition_c *v4; // x0
  struct UnityEngine_Vector2_array *charaOffsetList; // x8
  struct UnityEngine_Vector2_array *v6; // x8
  float *v7; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C292CB & 1) == 0 )
  {
    sub_1C2D490(&ScriptPosition_TypeInfo);
    byte_4C292CB = 1;
  }
  v4 = ScriptPosition_TypeInfo;
  if ( index < 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v4 = ScriptPosition_TypeInfo;
  }
  charaOffsetList = v4->static_fields->charaOffsetList;
  if ( !charaOffsetList )
LABEL_14:
    sub_1C2D6EC(v4, method);
  if ( SLODWORD(charaOffsetList->max_length) <= index )
LABEL_8:
    index = 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ScriptPosition_TypeInfo;
  }
  v6 = v4->static_fields->charaOffsetList;
  if ( !v6 )
    goto LABEL_14;
  if ( (unsigned int)index >= LODWORD(v6->max_length) )
    sub_1C2D6F4(v4, method, v2);
  v7 = (float *)(&v6->obj.klass + (unsigned int)index);
  v8 = v7[8];
  v9 = v7[9];
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetCharaOffset_44637732(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetPosition(int32_t index, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptPosition_c *v4; // x0
  struct UnityEngine_Vector2_array *positionList; // x8
  struct UnityEngine_Vector2_array *v6; // x8
  float *v7; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C292CA & 1) == 0 )
  {
    sub_1C2D490(&ScriptPosition_TypeInfo);
    byte_4C292CA = 1;
  }
  v4 = ScriptPosition_TypeInfo;
  if ( index < 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v4 = ScriptPosition_TypeInfo;
  }
  positionList = v4->static_fields->positionList;
  if ( !positionList )
LABEL_14:
    sub_1C2D6EC(v4, method);
  if ( SLODWORD(positionList->max_length) <= index )
LABEL_8:
    index = 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ScriptPosition_TypeInfo;
  }
  v6 = v4->static_fields->positionList;
  if ( !v6 )
    goto LABEL_14;
  if ( (unsigned int)index >= LODWORD(v6->max_length) )
    sub_1C2D6F4(v4, method, v2);
  v7 = (float *)(&v6->obj.klass + (unsigned int)index);
  v8 = v7[8];
  v9 = v7[9];
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetPosition_44637544(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
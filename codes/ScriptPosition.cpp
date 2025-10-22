void ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  unsigned int v5; // w8
  struct UnityEngine_Vector2_array *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  unsigned int v9; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4C58D9B & 1) == 0 )
  {
    sub_1C3E564(&ScriptPosition_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    byte_4C58D9B = 1;
  }
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 7);
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
    sub_1C3E7C8(v1, v6);
  }
  *(_QWORD *)(v1 + 80) = 1140850688;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ScriptPosition_TypeInfo->static_fields, v1, v3, v4);
  v1 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
LABEL_17:
    sub_1C3E7C0(v1, v2);
  v9 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Vector2_array *)v1;
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v9 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0;
  if ( v9 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->charaOffsetList, (int32_t)v6, v7, v8);
}


void ScriptPosition___ctor(ScriptPosition_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o ScriptPosition__GetCharaOffset(int32_t index, const MethodInfo *method)
{
  ScriptPosition_c *v3; // x0
  struct UnityEngine_Vector2_array *charaOffsetList; // x8
  struct UnityEngine_Vector2_array *v5; // x8
  float *v6; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C58D9A & 1) == 0 )
  {
    sub_1C3E564(&ScriptPosition_TypeInfo);
    byte_4C58D9A = 1;
  }
  v3 = ScriptPosition_TypeInfo;
  if ( index < 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v3 = ScriptPosition_TypeInfo;
  }
  charaOffsetList = v3->static_fields->charaOffsetList;
  if ( !charaOffsetList )
LABEL_14:
    sub_1C3E7C0(v3, method);
  if ( SLODWORD(charaOffsetList->max_length) <= index )
LABEL_8:
    index = 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptPosition_TypeInfo;
  }
  v5 = v3->static_fields->charaOffsetList;
  if ( !v5 )
    goto LABEL_14;
  if ( (unsigned int)index >= LODWORD(v5->max_length) )
    sub_1C3E7C8(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetCharaOffset_44931800(float x, float y, const MethodInfo *method)
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
  ScriptPosition_c *v3; // x0
  struct UnityEngine_Vector2_array *positionList; // x8
  struct UnityEngine_Vector2_array *v5; // x8
  float *v6; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C58D99 & 1) == 0 )
  {
    sub_1C3E564(&ScriptPosition_TypeInfo);
    byte_4C58D99 = 1;
  }
  v3 = ScriptPosition_TypeInfo;
  if ( index < 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v3 = ScriptPosition_TypeInfo;
  }
  positionList = v3->static_fields->positionList;
  if ( !positionList )
LABEL_14:
    sub_1C3E7C0(v3, method);
  if ( SLODWORD(positionList->max_length) <= index )
LABEL_8:
    index = 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptPosition_TypeInfo;
  }
  v5 = v3->static_fields->positionList;
  if ( !v5 )
    goto LABEL_14;
  if ( (unsigned int)index >= LODWORD(v5->max_length) )
    sub_1C3E7C8(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetPosition_44931612(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
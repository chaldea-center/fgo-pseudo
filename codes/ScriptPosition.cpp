void ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int v4; // w8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  unsigned int v7; // w8
  struct UnityEngine_Vector2_array *v8; // x1
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4C44FCF & 1) == 0 )
  {
    sub_1C37058(&ScriptPosition_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    byte_4C44FCF = 1;
  }
  v1 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 7);
  if ( !v1 )
    goto LABEL_17;
  v4 = *(_DWORD *)(v1 + 24);
  if ( !v4
    || (*(_QWORD *)(v1 + 32) = 3279945728LL, v4 == 1)
    || (*(_QWORD *)(v1 + 40) = 0, v4 <= 2)
    || (*(_QWORD *)(v1 + 48) = 1132462080, v4 == 3)
    || (*(_QWORD *)(v1 + 56) = 3285909504LL, v4 <= 4)
    || (*(_QWORD *)(v1 + 64) = 3288334336LL, v4 == 5)
    || (*(_QWORD *)(v1 + 72) = 1138425856, v4 <= 6) )
  {
LABEL_16:
    sub_1C372BC(v1);
  }
  *(_QWORD *)(v1 + 80) = 1140850688;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ScriptPosition_TypeInfo->static_fields, v1, v2, v3);
  v1 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
LABEL_17:
    sub_1C372B4(v1);
  v7 = *(_DWORD *)(v1 + 24);
  v8 = (struct UnityEngine_Vector2_array *)v1;
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v7 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0;
  if ( v7 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->charaOffsetList, (int32_t)v8, v5, v6);
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

  if ( (byte_4C44FCE & 1) == 0 )
  {
    sub_1C37058(&ScriptPosition_TypeInfo);
    byte_4C44FCE = 1;
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
    sub_1C372B4(v3);
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
    sub_1C372BC(v3);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetCharaOffset_44875984(float x, float y, const MethodInfo *method)
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

  if ( (byte_4C44FCD & 1) == 0 )
  {
    sub_1C37058(&ScriptPosition_TypeInfo);
    byte_4C44FCD = 1;
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
    sub_1C372B4(v3);
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
    sub_1C372BC(v3);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o ScriptPosition__GetPosition_44875796(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
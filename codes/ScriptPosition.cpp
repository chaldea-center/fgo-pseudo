void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  unsigned int v7; // w8
  struct UnityEngine_Vector2_array *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  unsigned int v11; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4A00127 & 1) == 0 )
  {
    sub_1B64870(&ScriptPosition_TypeInfo, v1);
    sub_1B64870(&UnityEngine_Vector2___TypeInfo, v2);
    byte_4A00127 = 1;
  }
  v3 = sub_1B64918(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v3 )
    goto LABEL_17;
  v7 = *(_DWORD *)(v3 + 24);
  v8 = (struct UnityEngine_Vector2_array *)v3;
  if ( !v7
    || (*(_QWORD *)(v3 + 32) = 3279945728LL, v7 == 1)
    || (*(_QWORD *)(v3 + 40) = 0LL, v7 <= 2)
    || (*(_QWORD *)(v3 + 48) = 1132462080LL, v7 == 3)
    || (*(_QWORD *)(v3 + 56) = 3285909504LL, v7 <= 4)
    || (*(_QWORD *)(v3 + 64) = 3288334336LL, v7 == 5)
    || (*(_QWORD *)(v3 + 72) = 1138425856LL, v7 <= 6) )
  {
LABEL_16:
    sub_1B64AD4(v3, v8);
  }
  *(_QWORD *)(v3 + 80) = 1140850688LL;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v3;
  sub_1B64814((ServantStatusBattleListViewItem_o *)ScriptPosition_TypeInfo->static_fields, v3, v5, v6);
  v3 = sub_1B64918(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v3 )
LABEL_17:
    sub_1B64ACC(v3, v4);
  v11 = *(_DWORD *)(v3 + 24);
  v8 = (struct UnityEngine_Vector2_array *)v3;
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( v11 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( v11 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 48) = 0LL;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = v8;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->charaOffsetList, (int32_t)v8, v9, v10);
}


void __fastcall ScriptPosition___ctor(ScriptPosition_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset(int32_t index, const MethodInfo *method)
{
  ScriptPosition_c *v3; // x0
  struct UnityEngine_Vector2_array *charaOffsetList; // x8
  struct UnityEngine_Vector2_array *v5; // x8
  float *v6; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00126 & 1) == 0 )
  {
    sub_1B64870(&ScriptPosition_TypeInfo, method);
    byte_4A00126 = 1;
  }
  v3 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v3 = ScriptPosition_TypeInfo;
  }
  charaOffsetList = v3->static_fields->charaOffsetList;
  if ( !charaOffsetList )
LABEL_14:
    sub_1B64ACC(v3, method);
  if ( (signed int)charaOffsetList->max_length <= index )
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
  if ( index >= v5->max_length )
    sub_1B64AD4(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_41374984(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition(int32_t index, const MethodInfo *method)
{
  ScriptPosition_c *v3; // x0
  struct UnityEngine_Vector2_array *positionList; // x8
  struct UnityEngine_Vector2_array *v5; // x8
  float *v6; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00125 & 1) == 0 )
  {
    sub_1B64870(&ScriptPosition_TypeInfo, method);
    byte_4A00125 = 1;
  }
  v3 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v3 = ScriptPosition_TypeInfo;
  }
  positionList = v3->static_fields->positionList;
  if ( !positionList )
LABEL_14:
    sub_1B64ACC(v3, method);
  if ( (signed int)positionList->max_length <= index )
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
  if ( index >= v5->max_length )
    sub_1B64AD4(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_41374796(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
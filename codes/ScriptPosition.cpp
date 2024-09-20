void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  unsigned int v5; // w8
  struct UnityEngine_Vector2_array *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  unsigned int v9; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4A5CDB8 & 1) == 0 )
  {
    sub_1B885B0(&ScriptPosition_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector2___TypeInfo);
    byte_4A5CDB8 = 1;
  }
  v1 = sub_1B88658(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v1 )
    goto LABEL_17;
  v5 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Vector2_array *)v1;
  if ( !v5
    || (*(_QWORD *)(v1 + 32) = 3279945728LL, v5 == 1)
    || (*(_QWORD *)(v1 + 40) = 0LL, v5 <= 2)
    || (*(_QWORD *)(v1 + 48) = 1132462080LL, v5 == 3)
    || (*(_QWORD *)(v1 + 56) = 3285909504LL, v5 <= 4)
    || (*(_QWORD *)(v1 + 64) = 3288334336LL, v5 == 5)
    || (*(_QWORD *)(v1 + 72) = 1138425856LL, v5 <= 6) )
  {
LABEL_16:
    sub_1B88814(v1, v6);
  }
  *(_QWORD *)(v1 + 80) = 1140850688LL;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ScriptPosition_TypeInfo->static_fields, v1, v3, v4);
  v1 = sub_1B88658(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v1 )
LABEL_17:
    sub_1B8880C(v1, v2);
  v9 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Vector2_array *)v1;
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0LL;
  if ( v9 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0LL;
  if ( v9 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0LL;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->charaOffsetList, (int32_t)v6, v7, v8);
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

  if ( (byte_4A5CDB7 & 1) == 0 )
  {
    sub_1B885B0(&ScriptPosition_TypeInfo);
    byte_4A5CDB7 = 1;
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
    sub_1B8880C(v3, method);
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
    sub_1B88814(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_41705904(float x, float y, const MethodInfo *method)
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

  if ( (byte_4A5CDB6 & 1) == 0 )
  {
    sub_1B885B0(&ScriptPosition_TypeInfo);
    byte_4A5CDB6 = 1;
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
    sub_1B8880C(v3, method);
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
    sub_1B88814(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_41705716(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
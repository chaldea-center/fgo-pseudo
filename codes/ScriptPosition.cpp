void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  unsigned int v6; // w8
  struct UnityEngine_Vector2_array *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  unsigned int v10; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_49FE02C & 1) == 0 )
  {
    sub_1B640C8(&ScriptPosition_TypeInfo, v1);
    sub_1B640C8(&UnityEngine_Vector2___TypeInfo, v2);
    byte_49FE02C = 1;
  }
  v3 = sub_1B64170(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v3 )
    goto LABEL_17;
  v6 = *(_DWORD *)(v3 + 24);
  v7 = (struct UnityEngine_Vector2_array *)v3;
  if ( !v6
    || (*(_QWORD *)(v3 + 32) = 3279945728LL, v6 == 1)
    || (*(_QWORD *)(v3 + 40) = 0LL, v6 <= 2)
    || (*(_QWORD *)(v3 + 48) = 1132462080LL, v6 == 3)
    || (*(_QWORD *)(v3 + 56) = 3285909504LL, v6 <= 4)
    || (*(_QWORD *)(v3 + 64) = 3288334336LL, v6 == 5)
    || (*(_QWORD *)(v3 + 72) = 1138425856LL, v6 <= 6) )
  {
LABEL_16:
    sub_1B6432C(v3, v7);
  }
  *(_QWORD *)(v3 + 80) = 1140850688LL;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ScriptPosition_TypeInfo->static_fields, v3, v4, v5);
  v3 = sub_1B64170(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v3 )
LABEL_17:
    sub_1B64324(v3);
  v10 = *(_DWORD *)(v3 + 24);
  v7 = (struct UnityEngine_Vector2_array *)v3;
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( v10 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( v10 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 48) = 0LL;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->charaOffsetList, (int32_t)v7, v8, v9);
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

  if ( (byte_49FE02B & 1) == 0 )
  {
    sub_1B640C8(&ScriptPosition_TypeInfo, method);
    byte_49FE02B = 1;
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
    sub_1B64324(v3);
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
    sub_1B6432C(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_41369852(float x, float y, const MethodInfo *method)
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

  if ( (byte_49FE02A & 1) == 0 )
  {
    sub_1B640C8(&ScriptPosition_TypeInfo, method);
    byte_49FE02A = 1;
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
    sub_1B64324(v3);
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
    sub_1B6432C(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_41369664(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
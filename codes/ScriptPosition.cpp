void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  int64_t v1; // x0
  __int64 v2; // x1
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  unsigned int v9; // w8
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  unsigned int v17; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4BDE276 & 1) == 0 )
  {
    sub_1C21E38(&ScriptPosition_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector2___TypeInfo);
    byte_4BDE276 = 1;
  }
  v1 = sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v1 )
    goto LABEL_17;
  v9 = *(_DWORD *)(v1 + 24);
  v10 = v1;
  if ( !v9
    || (*(_QWORD *)(v1 + 32) = 3279945728LL, v9 == 1)
    || (*(_QWORD *)(v1 + 40) = 0LL, v9 <= 2)
    || (*(_QWORD *)(v1 + 48) = 1132462080LL, v9 == 3)
    || (*(_QWORD *)(v1 + 56) = 3285909504LL, v9 <= 4)
    || (*(_QWORD *)(v1 + 64) = 3288334336LL, v9 == 5)
    || (*(_QWORD *)(v1 + 72) = 1138425856LL, v9 <= 6) )
  {
LABEL_16:
    sub_1C2209C(v1, v10);
  }
  *(_QWORD *)(v1 + 80) = 1140850688LL;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)ScriptPosition_TypeInfo->static_fields, v1, v3, v4, v5, v6, v7, v8);
  v1 = sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v1 )
LABEL_17:
    sub_1C22094(v1, v2);
  v17 = *(_DWORD *)(v1 + 24);
  v10 = v1;
  if ( !v17 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0LL;
  if ( v17 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0LL;
  if ( v17 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0LL;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = (struct UnityEngine_Vector2_array *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->charaOffsetList, v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4BDE275 & 1) == 0 )
  {
    sub_1C21E38(&ScriptPosition_TypeInfo);
    byte_4BDE275 = 1;
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
    sub_1C22094(v3, method);
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
    sub_1C2209C(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_43017468(float x, float y, const MethodInfo *method)
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

  if ( (byte_4BDE274 & 1) == 0 )
  {
    sub_1C21E38(&ScriptPosition_TypeInfo);
    byte_4BDE274 = 1;
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
    sub_1C22094(v3, method);
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
    sub_1C2209C(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_43017280(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
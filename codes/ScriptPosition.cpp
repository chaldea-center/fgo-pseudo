void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int64_t v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  unsigned int v11; // w8
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  unsigned int v19; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4BC97CB & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptPosition_TypeInfo, v1);
    sub_1C1ABD4(&UnityEngine_Vector2___TypeInfo, v2);
    byte_4BC97CB = 1;
  }
  v3 = sub_1C1AC7C(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v3 )
    goto LABEL_17;
  v11 = *(_DWORD *)(v3 + 24);
  v12 = v3;
  if ( !v11
    || (*(_QWORD *)(v3 + 32) = 3279945728LL, v11 == 1)
    || (*(_QWORD *)(v3 + 40) = 0LL, v11 <= 2)
    || (*(_QWORD *)(v3 + 48) = 1132462080LL, v11 == 3)
    || (*(_QWORD *)(v3 + 56) = 3285909504LL, v11 <= 4)
    || (*(_QWORD *)(v3 + 64) = 3288334336LL, v11 == 5)
    || (*(_QWORD *)(v3 + 72) = 1138425856LL, v11 <= 6) )
  {
LABEL_16:
    sub_1C1AE38(v3, v12);
  }
  *(_QWORD *)(v3 + 80) = 1140850688LL;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v3;
  sub_1C1AB78((PartyOrganizationUtility_o *)ScriptPosition_TypeInfo->static_fields, v3, v5, v6, v7, v8, v9, v10);
  v3 = sub_1C1AC7C(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v3 )
LABEL_17:
    sub_1C1AE30(v3, v4);
  v19 = *(_DWORD *)(v3 + 24);
  v12 = v3;
  if ( !v19 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( v19 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( v19 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 48) = 0LL;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = (struct UnityEngine_Vector2_array *)v12;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->charaOffsetList, v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BC97CA & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptPosition_TypeInfo, method);
    byte_4BC97CA = 1;
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
    sub_1C1AE30(v3, method);
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
    sub_1C1AE38(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_42964084(float x, float y, const MethodInfo *method)
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

  if ( (byte_4BC97C9 & 1) == 0 )
  {
    sub_1C1ABD4(&ScriptPosition_TypeInfo, method);
    byte_4BC97C9 = 1;
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
    sub_1C1AE30(v3, method);
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
    sub_1C1AE38(v3, method);
  v6 = (float *)(&v5->obj.klass + (unsigned int)index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_42963896(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
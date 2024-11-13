void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int v13; // w8
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  unsigned int v21; // w8
  struct ScriptPosition_StaticFields *static_fields; // x0

  if ( (byte_4B17E82 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptPosition_TypeInfo, v1, v2);
    sub_1BCA7E0(&UnityEngine_Vector2___TypeInfo, v3, v4);
    byte_4B17E82 = 1;
  }
  v5 = sub_1BCA888(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v5 )
    goto LABEL_17;
  v13 = *(_DWORD *)(v5 + 24);
  v14 = v5;
  if ( !v13
    || (*(_QWORD *)(v5 + 32) = 3279945728LL, v13 == 1)
    || (*(_QWORD *)(v5 + 40) = 0LL, v13 <= 2)
    || (*(_QWORD *)(v5 + 48) = 1132462080LL, v13 == 3)
    || (*(_QWORD *)(v5 + 56) = 3285909504LL, v13 <= 4)
    || (*(_QWORD *)(v5 + 64) = 3288334336LL, v13 == 5)
    || (*(_QWORD *)(v5 + 72) = 1138425856LL, v13 <= 6) )
  {
LABEL_16:
    sub_1BCAA44(v5, v14);
  }
  *(_QWORD *)(v5 + 80) = 1140850688LL;
  ScriptPosition_TypeInfo->static_fields->positionList = (struct UnityEngine_Vector2_array *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)ScriptPosition_TypeInfo->static_fields, v5, v7, v8, v9, v10, v11, v12);
  v5 = sub_1BCA888(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v5 )
LABEL_17:
    sub_1BCAA3C(v5, v6);
  v21 = *(_DWORD *)(v5 + 24);
  v14 = v5;
  if ( !v21 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 32) = 0LL;
  if ( v21 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 40) = 0LL;
  if ( v21 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 48) = 0LL;
  static_fields = ScriptPosition_TypeInfo->static_fields;
  static_fields->charaOffsetList = (struct UnityEngine_Vector2_array *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->charaOffsetList, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall ScriptPosition___ctor(ScriptPosition_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset(int32_t index, const MethodInfo *method)
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

  if ( (byte_4B17E81 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptPosition_TypeInfo, method, v2);
    byte_4B17E81 = 1;
  }
  v4 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, method);
    v4 = ScriptPosition_TypeInfo;
  }
  charaOffsetList = v4->static_fields->charaOffsetList;
  if ( !charaOffsetList )
LABEL_14:
    sub_1BCAA3C(v4, method);
  if ( (signed int)charaOffsetList->max_length <= index )
LABEL_8:
    index = 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = ScriptPosition_TypeInfo;
  }
  v6 = v4->static_fields->charaOffsetList;
  if ( !v6 )
    goto LABEL_14;
  if ( index >= v6->max_length )
    sub_1BCAA44(v4, method);
  v7 = (float *)(&v6->obj.klass + (unsigned int)index);
  v8 = v7[8];
  v9 = v7[9];
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_42454284(float x, float y, const MethodInfo *method)
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
  __int64 v2; // x2
  ScriptPosition_c *v4; // x0
  struct UnityEngine_Vector2_array *positionList; // x8
  struct UnityEngine_Vector2_array *v6; // x8
  float *v7; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17E80 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptPosition_TypeInfo, method, v2);
    byte_4B17E80 = 1;
  }
  v4 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_8;
  if ( !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo, method);
    v4 = ScriptPosition_TypeInfo;
  }
  positionList = v4->static_fields->positionList;
  if ( !positionList )
LABEL_14:
    sub_1BCAA3C(v4, method);
  if ( (signed int)positionList->max_length <= index )
LABEL_8:
    index = 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = ScriptPosition_TypeInfo;
  }
  v6 = v4->static_fields->positionList;
  if ( !v6 )
    goto LABEL_14;
  if ( index >= v6->max_length )
    sub_1BCAA44(v4, method);
  v7 = (float *)(&v6->obj.klass + (unsigned int)index);
  v8 = v7[8];
  v9 = v7[9];
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_42454096(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  unsigned int v9; // w8
  System_Int32_array **v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  unsigned int v18; // w8
  System_Int32_array **v19; // x1
  struct ScriptPosition_StaticFields *v20; // x0
  __int64 v21; // x0

  if ( (byte_4390ECC & 1) == 0 )
  {
    sub_B775C4(&ScriptPosition_TypeInfo);
    sub_B775C4(&UnityEngine_Vector2___TypeInfo);
    byte_4390ECC = 1;
  }
  v1 = sub_B775DC(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v1 )
    goto LABEL_17;
  v9 = *(_DWORD *)(v1 + 24);
  v10 = (System_Int32_array **)v1;
  if ( !v9
    || (*(_QWORD *)(v1 + 32) = 3279945728LL, v9 == 1)
    || (*(_QWORD *)(v1 + 40) = 0LL, v9 <= 2)
    || (*(_QWORD *)(v1 + 48) = 1132462080LL, v9 == 3)
    || (*(_QWORD *)(v1 + 56) = 3285909504LL, v9 <= 4)
    || (*(_QWORD *)(v1 + 64) = 3288334336LL, v9 == 5)
    || (*(_QWORD *)(v1 + 72) = 1138425856LL, v9 <= 6) )
  {
LABEL_16:
    v21 = sub_B776C8(v1);
    sub_B77668(v21, 0LL);
  }
  *(_QWORD *)(v1 + 80) = 1140850688LL;
  static_fields = (BattleServantConfConponent_o *)ScriptPosition_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B77560(static_fields, v10, v3, v4, v5, v6, v7, v8);
  v1 = sub_B775DC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v1 )
LABEL_17:
    sub_B7769C(v1, v2);
  v18 = *(_DWORD *)(v1 + 24);
  v19 = (System_Int32_array **)v1;
  if ( !v18 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0LL;
  if ( v18 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0LL;
  if ( v18 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0LL;
  v20 = ScriptPosition_TypeInfo->static_fields;
  v20->charaOffsetList = (struct UnityEngine_Vector2_array *)v19;
  sub_B77560((BattleServantConfConponent_o *)&v20->charaOffsetList, v19, v12, v13, v14, v15, v16, v17);
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
  __int64 v10; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4390ECB & 1) == 0 )
  {
    sub_B775C4(&ScriptPosition_TypeInfo);
    byte_4390ECB = 1;
  }
  v3 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_9;
  if ( (BYTE3(ScriptPosition_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v3 = ScriptPosition_TypeInfo;
  }
  charaOffsetList = v3->static_fields->charaOffsetList;
  if ( !charaOffsetList )
LABEL_16:
    sub_B7769C(v3, method);
  if ( (signed int)charaOffsetList->max_length <= index )
LABEL_9:
    index = 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptPosition_TypeInfo;
  }
  v5 = v3->static_fields->charaOffsetList;
  if ( !v5 )
    goto LABEL_16;
  if ( index >= v5->max_length )
  {
    v10 = sub_B776C8(v3);
    sub_B77668(v10, 0LL);
  }
  v6 = (float *)(&v5->obj.klass + index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_35075304(float x, float y, const MethodInfo *method)
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
  __int64 v10; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4390ECA & 1) == 0 )
  {
    sub_B775C4(&ScriptPosition_TypeInfo);
    byte_4390ECA = 1;
  }
  v3 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_9;
  if ( (BYTE3(ScriptPosition_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v3 = ScriptPosition_TypeInfo;
  }
  positionList = v3->static_fields->positionList;
  if ( !positionList )
LABEL_16:
    sub_B7769C(v3, method);
  if ( (signed int)positionList->max_length <= index )
LABEL_9:
    index = 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = ScriptPosition_TypeInfo;
  }
  v5 = v3->static_fields->positionList;
  if ( !v5 )
    goto LABEL_16;
  if ( index >= v5->max_length )
  {
    v10 = sub_B776C8(v3);
    sub_B77668(v10, 0LL);
  }
  v6 = (float *)(&v5->obj.klass + index);
  v7 = v6[8];
  v8 = v6[9];
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_35075088(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
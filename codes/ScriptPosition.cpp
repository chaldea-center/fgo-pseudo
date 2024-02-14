void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned int v10; // w8
  System_Int32_array **v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  unsigned int v19; // w8
  System_Int32_array **v20; // x1
  struct ScriptPosition_StaticFields *v21; // x0
  __int64 v22; // x0

  if ( (byte_421A03D & 1) == 0 )
  {
    sub_B0D8A4(&ScriptPosition_TypeInfo, v1);
    sub_B0D8A4(&UnityEngine_Vector2___TypeInfo, v2);
    byte_421A03D = 1;
  }
  v3 = sub_B0D8BC(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v3 )
    goto LABEL_17;
  v10 = *(_DWORD *)(v3 + 24);
  v11 = (System_Int32_array **)v3;
  if ( !v10
    || (*(_QWORD *)(v3 + 32) = 3279945728LL, v10 == 1)
    || (*(_QWORD *)(v3 + 40) = 0LL, v10 <= 2)
    || (*(_QWORD *)(v3 + 48) = 1132462080LL, v10 == 3)
    || (*(_QWORD *)(v3 + 56) = 3285909504LL, v10 <= 4)
    || (*(_QWORD *)(v3 + 64) = 3288334336LL, v10 == 5)
    || (*(_QWORD *)(v3 + 72) = 1138425856LL, v10 <= 6) )
  {
LABEL_16:
    v22 = sub_B0D9A8(v3);
    sub_B0D948(v22, 0LL);
  }
  *(_QWORD *)(v3 + 80) = 1140850688LL;
  static_fields = (BattleServantConfConponent_o *)ScriptPosition_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B0D840(static_fields, v11, v4, v5, v6, v7, v8, v9);
  v3 = sub_B0D8BC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v3 )
LABEL_17:
    sub_B0D97C(v3);
  v19 = *(_DWORD *)(v3 + 24);
  v20 = (System_Int32_array **)v3;
  if ( !v19 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( v19 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( v19 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 48) = 0LL;
  v21 = ScriptPosition_TypeInfo->static_fields;
  v21->charaOffsetList = (struct UnityEngine_Vector2_array *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v21->charaOffsetList, v20, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_421A03C & 1) == 0 )
  {
    sub_B0D8A4(&ScriptPosition_TypeInfo, method);
    byte_421A03C = 1;
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
    sub_B0D97C(v3);
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
    v10 = sub_B0D9A8(v3);
    sub_B0D948(v10, 0LL);
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


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_34039136(float x, float y, const MethodInfo *method)
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

  if ( (byte_421A03B & 1) == 0 )
  {
    sub_B0D8A4(&ScriptPosition_TypeInfo, method);
    byte_421A03B = 1;
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
    sub_B0D97C(v3);
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
    v10 = sub_B0D9A8(v3);
    sub_B0D948(v10, 0LL);
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


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_34038920(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
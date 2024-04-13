void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  unsigned int v15; // w8
  System_Int32_array **v16; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  unsigned int v24; // w8
  System_Int32_array **v25; // x1
  struct ScriptPosition_StaticFields *v26; // x0
  __int64 v27; // x0

  if ( (byte_42EE49E & 1) == 0 )
  {
    sub_B5D5C4(&ScriptPosition_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, v4, v5, v6);
    byte_42EE49E = 1;
  }
  v7 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v7 )
    goto LABEL_17;
  v15 = *(_DWORD *)(v7 + 24);
  v16 = (System_Int32_array **)v7;
  if ( !v15
    || (*(_QWORD *)(v7 + 32) = 3279945728LL, v15 == 1)
    || (*(_QWORD *)(v7 + 40) = 0LL, v15 <= 2)
    || (*(_QWORD *)(v7 + 48) = 1132462080LL, v15 == 3)
    || (*(_QWORD *)(v7 + 56) = 3285909504LL, v15 <= 4)
    || (*(_QWORD *)(v7 + 64) = 3288334336LL, v15 == 5)
    || (*(_QWORD *)(v7 + 72) = 1138425856LL, v15 <= 6) )
  {
LABEL_16:
    v27 = sub_B5D6C8(v7);
    sub_B5D668(v27, 0LL);
  }
  *(_QWORD *)(v7 + 80) = 1140850688LL;
  static_fields = (BattleServantConfConponent_o *)ScriptPosition_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, v16, v9, v10, v11, v12, v13, v14);
  v7 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v7 )
LABEL_17:
    sub_B5D69C(v7, v8);
  v24 = *(_DWORD *)(v7 + 24);
  v25 = (System_Int32_array **)v7;
  if ( !v24 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 32) = 0LL;
  if ( v24 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( v24 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 48) = 0LL;
  v26 = ScriptPosition_TypeInfo->static_fields;
  v26->charaOffsetList = (struct UnityEngine_Vector2_array *)v25;
  sub_B5D560((BattleServantConfConponent_o *)&v26->charaOffsetList, v25, v18, v19, v20, v21, v22, v23);
}


void __fastcall ScriptPosition___ctor(ScriptPosition_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset(int32_t index, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptPosition_c *v5; // x0
  struct UnityEngine_Vector2_array *charaOffsetList; // x8
  struct UnityEngine_Vector2_array *v7; // x8
  float *v8; // x8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  __int64 v12; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE49D & 1) == 0 )
  {
    sub_B5D5C4(&ScriptPosition_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE49D = 1;
  }
  v5 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_9;
  if ( (BYTE3(ScriptPosition_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v5 = ScriptPosition_TypeInfo;
  }
  charaOffsetList = v5->static_fields->charaOffsetList;
  if ( !charaOffsetList )
LABEL_16:
    sub_B5D69C(v5, method);
  if ( (signed int)charaOffsetList->max_length <= index )
LABEL_9:
    index = 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = ScriptPosition_TypeInfo;
  }
  v7 = v5->static_fields->charaOffsetList;
  if ( !v7 )
    goto LABEL_16;
  if ( index >= v7->max_length )
  {
    v12 = sub_B5D6C8(v5);
    sub_B5D668(v12, 0LL);
  }
  v8 = (float *)(&v7->obj.klass + index);
  v9 = v8[8];
  v10 = v8[9];
  v11 = 0.0;
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v9;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_34961312(float x, float y, const MethodInfo *method)
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
  int v2; // w2
  __int64 v3; // x3
  ScriptPosition_c *v5; // x0
  struct UnityEngine_Vector2_array *positionList; // x8
  struct UnityEngine_Vector2_array *v7; // x8
  float *v8; // x8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  __int64 v12; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE49C & 1) == 0 )
  {
    sub_B5D5C4(&ScriptPosition_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE49C = 1;
  }
  v5 = ScriptPosition_TypeInfo;
  if ( (index & 0x80000000) != 0 )
    goto LABEL_9;
  if ( (BYTE3(ScriptPosition_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptPosition_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptPosition_TypeInfo);
    v5 = ScriptPosition_TypeInfo;
  }
  positionList = v5->static_fields->positionList;
  if ( !positionList )
LABEL_16:
    sub_B5D69C(v5, method);
  if ( (signed int)positionList->max_length <= index )
LABEL_9:
    index = 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = ScriptPosition_TypeInfo;
  }
  v7 = v5->static_fields->positionList;
  if ( !v7 )
    goto LABEL_16;
  if ( index >= v7->max_length )
  {
    v12 = sub_B5D6C8(v5);
    sub_B5D668(v12, 0LL);
  }
  v8 = (float *)(&v7->obj.klass + index);
  v9 = v8[8];
  v10 = v8[9];
  v11 = 0.0;
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v9;
  return result;
}


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_34961096(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
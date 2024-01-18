void __fastcall ScriptPosition___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int v11; // w8
  System_Int32_array **v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  unsigned int v20; // w8
  System_Int32_array **v21; // x1
  struct ScriptPosition_StaticFields *v22; // x0
  __int64 v23; // x0

  if ( (byte_418D39D & 1) == 0 )
  {
    sub_B2C35C(&ScriptPosition_TypeInfo, v1);
    sub_B2C35C(&UnityEngine_Vector2___TypeInfo, v2);
    byte_418D39D = 1;
  }
  v3 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 7LL);
  if ( !v3 )
    goto LABEL_17;
  v11 = *(_DWORD *)(v3 + 24);
  v12 = (System_Int32_array **)v3;
  if ( !v11
    || (*(_QWORD *)(v3 + 32) = 3279945728LL, v11 == 1)
    || (*(_QWORD *)(v3 + 40) = 0LL, v11 <= 2)
    || (*(_QWORD *)(v3 + 48) = 1132462080LL, v11 == 3)
    || (*(_QWORD *)(v3 + 56) = 3285909504LL, v11 <= 4)
    || (*(_QWORD *)(v3 + 64) = 3288334336LL, v11 == 5)
    || (*(_QWORD *)(v3 + 72) = 1138425856LL, v11 <= 6) )
  {
LABEL_16:
    v23 = sub_B2C460(v3);
    sub_B2C400(v23, 0LL);
  }
  *(_QWORD *)(v3 + 80) = 1140850688LL;
  static_fields = (BattleServantConfConponent_o *)ScriptPosition_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B2C2F8(static_fields, v12, v5, v6, v7, v8, v9, v10);
  v3 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v3 )
LABEL_17:
    sub_B2C434(v3, v4);
  v20 = *(_DWORD *)(v3 + 24);
  v21 = (System_Int32_array **)v3;
  if ( !v20 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( v20 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( v20 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 48) = 0LL;
  v22 = ScriptPosition_TypeInfo->static_fields;
  v22->charaOffsetList = (struct UnityEngine_Vector2_array *)v21;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->charaOffsetList, v21, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_418D39C & 1) == 0 )
  {
    sub_B2C35C(&ScriptPosition_TypeInfo, method);
    byte_418D39C = 1;
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
    sub_B2C434(v3, method);
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
    v10 = sub_B2C460(v3);
    sub_B2C400(v10, 0LL);
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


UnityEngine_Vector3_o __fastcall ScriptPosition__GetCharaOffset_34472768(float x, float y, const MethodInfo *method)
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

  if ( (byte_418D39B & 1) == 0 )
  {
    sub_B2C35C(&ScriptPosition_TypeInfo, method);
    byte_418D39B = 1;
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
    sub_B2C434(v3, method);
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
    v10 = sub_B2C460(v3);
    sub_B2C400(v10, 0LL);
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


UnityEngine_Vector3_o __fastcall ScriptPosition__GetPosition_34472552(float x, float y, const MethodInfo *method)
{
  float v3; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = 0.0;
  result.fields.z = v3;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}
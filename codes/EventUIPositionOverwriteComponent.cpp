void __fastcall EventUIPositionOverwriteComponent___ctor(
        EventUIPositionOverwriteComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventUIPositionOverwriteComponent__ContainsKey(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20

  if ( (byte_42E84E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v15, v16, v17);
    byte_42E84E1 = 1;
  }
  v18 = sub_B5D694(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = key;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)key, v21, v22, v23, v24, v25, v26);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v18,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           overwritePositionDic,
           (System_Func_TSource__bool__o *)v28,
           (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall EventUIPositionOverwriteComponent__GetPosition(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        UnityEngine_Vector2_o defaultPosition,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float y; // s8
  float x; // s9
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x20
  WarBoardData_SquareRangeSearch_o *v32; // x0
  float v33; // s0
  float v34; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_42E84E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      (_DWORD)key,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v18, v19, v20);
    byte_42E84E0 = 1;
  }
  v21 = sub_B5D694(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *)v21,
    0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = key;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)key, v24, v25, v26, v27, v28, v29);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  v32 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          overwritePositionDic,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v32 )
  {
    x = *(float *)&v32[1].klass;
    y = *((float *)&v32[1].klass + 1);
  }
  v33 = x;
  v34 = y;
  result.fields.y = v34;
  result.fields.x = v33;
  return result;
}


void __fastcall EventUIPositionOverwriteComponent_KeyPositionPairData___ctor(
        EventUIPositionOverwriteComponent_KeyPositionPairData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
        EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventUIPositionOverwriteComponent___c__DisplayClass2_0___GetPosition_b__0(
        EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *this,
        EventUIPositionOverwriteComponent_KeyPositionPairData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}


void __fastcall EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
        EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventUIPositionOverwriteComponent___c__DisplayClass3_0___ContainsKey_b__0(
        EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *this,
        EventUIPositionOverwriteComponent_KeyPositionPairData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
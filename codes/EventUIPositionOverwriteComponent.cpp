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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_40F9C20 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_B16FFC(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v9);
    sub_B16FFC(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v10);
    byte_40F9C20 = 1;
  }
  v11 = sub_B170CC(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, key, method, v3, v4);
  EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = key;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)key, v12, v13, v14, v15, v16, v17);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                                                             v19,
                                                                             v20,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v11,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           overwritePositionDic,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall EventUIPositionOverwriteComponent__GetPosition(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        UnityEngine_Vector2_o defaultPosition,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  float y; // s8
  float x; // s9
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  WarBoardData_SquareRangeSearch_o *v27; // x0
  float v28; // s0
  float v29; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_40F9C1F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_B16FFC(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v11);
    sub_B16FFC(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v12);
    sub_B16FFC(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v13);
    byte_40F9C1F = 1;
  }
  v14 = sub_B170CC(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, key, method, v4, v5);
  EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *)v14,
    0LL);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = key;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)key, v15, v16, v17, v18, v19, v20);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                                                             v22,
                                                                             v23,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  v27 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          overwritePositionDic,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v27 )
  {
    x = *(float *)&v27[1].klass;
    y = *((float *)&v27[1].klass + 1);
  }
  v28 = x;
  v29 = y;
  result.fields.y = v29;
  result.fields.x = v28;
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
    sub_B170D4();
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
    sub_B170D4();
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
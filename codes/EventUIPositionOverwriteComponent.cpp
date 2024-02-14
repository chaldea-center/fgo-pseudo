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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20

  if ( (byte_421510D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_B0D8A4(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v7);
    sub_B0D8A4(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v8);
    byte_421510D = 1;
  }
  v9 = sub_B0D974(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, key, method);
  EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = key;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)key, v11, v12, v13, v14, v15, v16);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           overwritePositionDic,
           (System_Func_TSource__bool__o *)v20,
           (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall EventUIPositionOverwriteComponent__GetPosition(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        UnityEngine_Vector2_o defaultPosition,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20
  WarBoardData_SquareRangeSearch_o *v24; // x0
  float v25; // s0
  float v26; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_421510C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_B0D8A4(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v10);
    sub_B0D8A4(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v11);
    byte_421510C = 1;
  }
  v12 = sub_B0D974(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, key, method);
  EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  *(_QWORD *)(v12 + 16) = key;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)key, v14, v15, v16, v17, v18, v19);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  v24 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          overwritePositionDic,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v24 )
  {
    x = *(float *)&v24[1].klass;
    y = *((float *)&v24[1].klass + 1);
  }
  v25 = x;
  v26 = y;
  result.fields.y = v26;
  result.fields.x = v25;
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
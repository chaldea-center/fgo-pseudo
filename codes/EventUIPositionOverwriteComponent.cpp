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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20

  if ( (byte_418829B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_B2C35C(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v7);
    sub_B2C35C(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v8);
    byte_418829B = 1;
  }
  v9 = sub_B2C42C(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = key;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)key, v12, v13, v14, v15, v16, v17);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           overwritePositionDic,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
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
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20
  WarBoardData_SquareRangeSearch_o *v23; // x0
  float v24; // s0
  float v25; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_418829A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_B2C35C(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__, v8);
    sub_B2C35C(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v9);
    sub_B2C35C(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v10);
    sub_B2C35C(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v11);
    byte_418829A = 1;
  }
  v12 = sub_B2C42C(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  *(_QWORD *)(v12 + 16) = key;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)key, v15, v16, v17, v18, v19, v20);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  v23 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          overwritePositionDic,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v23 )
  {
    x = *(float *)&v23[1].klass;
    y = *((float *)&v23[1].klass + 1);
  }
  v24 = x;
  v25 = y;
  result.fields.y = v25;
  result.fields.x = v24;
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
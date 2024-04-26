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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4350FE1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_B70694(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
    sub_B70694(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_B70694(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__);
    sub_B70694(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
    byte_4350FE1 = 1;
  }
  v5 = sub_B70764(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)key, v8, v9, v10, v11, v12, v13);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           overwritePositionDic,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *overwritePositionDic; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20
  WarBoardData_SquareRangeSearch_o *v19; // x0
  float v20; // s0
  float v21; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4350FE0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_B70694(&Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
    sub_B70694(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_B70694(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__);
    sub_B70694(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
    byte_4350FE0 = 1;
  }
  v8 = sub_B70764(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
    (EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B7076C(v9, v10);
  *(_QWORD *)(v8 + 16) = key;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)key, v11, v12, v13, v14, v15, v16);
  overwritePositionDic = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.overwritePositionDic;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool___ctor__);
  v19 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          overwritePositionDic,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v19 )
  {
    x = *(float *)&v19[1].klass;
    y = *((float *)&v19[1].klass + 1);
  }
  v20 = x;
  v21 = y;
  result.fields.y = v21;
  result.fields.x = v20;
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
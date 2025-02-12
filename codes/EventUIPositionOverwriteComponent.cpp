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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4BCB921 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_1C1ABD4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v6);
    sub_1C1ABD4(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v7);
    byte_4BCB921 = 1;
  }
  v8 = sub_1C1AE20(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_QWORD *)(v8 + 16) = key;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)key, v11, v12, v13, v14, v15, v16);
  overwritePositionDic = this->fields.overwritePositionDic;
  v18 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__50081164(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
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
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v21; // x20
  Il2CppObject *v22; // x0
  float v23; // s0
  float v24; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4BCB920 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_1C1ABD4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v8);
    sub_1C1ABD4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v9);
    sub_1C1ABD4(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v10);
    byte_4BCB920 = 1;
  }
  v11 = sub_1C1AE20(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C1AE30(v12, v13);
  *(_QWORD *)(v11 + 16) = key;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)key, v14, v15, v16, v17, v18, v19);
  overwritePositionDic = this->fields.overwritePositionDic;
  v21 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v22 )
  {
    x = *(float *)&v22[1].monitor;
    y = *((float *)&v22[1].monitor + 1);
  }
  v23 = x;
  v24 = y;
  result.fields.y = v24;
  result.fields.x = v23;
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
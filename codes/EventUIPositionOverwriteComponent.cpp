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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_object__bool__o *v25; // x20

  if ( (byte_4B19F97 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key,
      method);
    sub_1BCA7E0(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v8, v9);
    sub_1BCA7E0(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v10, v11);
    byte_4B19F97 = 1;
  }
  v12 = sub_1BCAA2C(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, key, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = key;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)key, v15, v16, v17, v18, v19, v20);
  overwritePositionDic = this->fields.overwritePositionDic;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                         v22,
                                         v23,
                                         v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__49503160(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v25,
           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_object__bool__o *v28; // x20
  Il2CppObject *v29; // x0
  float v30; // s0
  float v31; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4B19F96 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key,
      method);
    sub_1BCA7E0(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v11, v12);
    sub_1BCA7E0(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v13, v14);
    byte_4B19F96 = 1;
  }
  v15 = sub_1BCAA2C(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, key, method, v4);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = key;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)key, v18, v19, v20, v21, v22, v23);
  overwritePositionDic = this->fields.overwritePositionDic;
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                         v25,
                                         v26,
                                         v27);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v15,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v29 )
  {
    x = *(float *)&v29[1].monitor;
    y = *((float *)&v29[1].monitor + 1);
  }
  v30 = x;
  v31 = y;
  result.fields.y = v31;
  result.fields.x = v30;
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
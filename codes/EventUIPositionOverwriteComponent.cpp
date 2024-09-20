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
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4A5EE27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_1B885B0(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_1B885B0(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__);
    sub_1B885B0(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
    byte_4A5EE27 = 1;
  }
  v5 = sub_1B887FC(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)key, v8, v9);
  overwritePositionDic = this->fields.overwritePositionDic;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__48907856(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v14; // x20
  Il2CppObject *v15; // x0
  float v16; // s0
  float v17; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4A5EE26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_1B885B0(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_1B885B0(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__);
    sub_1B885B0(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
    byte_4A5EE26 = 1;
  }
  v8 = sub_1B887FC(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B8880C(v9, v10);
  *(_QWORD *)(v8 + 16) = key;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)key, v11, v12);
  overwritePositionDic = this->fields.overwritePositionDic;
  v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v15 )
  {
    x = *(float *)&v15[1].monitor;
    y = *((float *)&v15[1].monitor + 1);
  }
  v16 = x;
  v17 = y;
  result.fields.y = v17;
  result.fields.x = v16;
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
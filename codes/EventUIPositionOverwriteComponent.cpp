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
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4A0003C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_1B640C8(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__, v6);
    sub_1B640C8(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, v7);
    byte_4A0003C = 1;
  }
  v8 = sub_1B64314(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo, key, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = key;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)key, v10, v11);
  overwritePositionDic = this->fields.overwritePositionDic;
  v15 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                         v13,
                                         v14);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__48617700(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0LL;
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x20
  Il2CppObject *v19; // x0
  float v20; // s0
  float v21; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4A0003B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___,
      key);
    sub_1B640C8(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo, v8);
    sub_1B640C8(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__, v9);
    sub_1B640C8(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, v10);
    byte_4A0003B = 1;
  }
  v11 = sub_1B64314(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo, key, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = key;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)key, v13, v14);
  overwritePositionDic = this->fields.overwritePositionDic;
  v18 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo,
                                         v16,
                                         v17);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v19 )
  {
    x = *(float *)&v19[1].monitor;
    y = *((float *)&v19[1].monitor + 1);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0LL);
}
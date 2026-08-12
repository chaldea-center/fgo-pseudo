void EventUIPositionOverwriteComponent___ctor(EventUIPositionOverwriteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventUIPositionOverwriteComponent__ContainsKey(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_596A4D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_2213A60(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_2213A60(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__);
    sub_2213A60(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
    byte_596A4D3 = 1;
  }
  v5 = sub_2213CCC(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)key, v8, v9, v10, v11, v12, v13);
  overwritePositionDic = this->fields.overwritePositionDic;
  v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__59254852(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0;
}


UnityEngine_Vector2_o EventUIPositionOverwriteComponent__GetPosition(
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v18; // x20
  Il2CppObject *v19; // x0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_596A4D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_2213A60(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_2213A60(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__);
    sub_2213A60(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
    byte_596A4D2 = 1;
  }
  v8 = sub_2213CCC(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    sub_2213CDC(v9, v10);
  *(_QWORD *)(v8 + 16) = key;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)key, v11, v12, v13, v14, v15, v16);
  overwritePositionDic = this->fields.overwritePositionDic;
  v18 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v19 )
  {
    x = *(float *)&v19[1].monitor;
    y = *((float *)&v19[1].monitor + 1);
  }
  result.fields.x = x;
  result.fields.y = y;
  return result;
}


void EventUIPositionOverwriteComponent_KeyPositionPairData___ctor(
        EventUIPositionOverwriteComponent_KeyPositionPairData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventUIPositionOverwriteComponent___c__DisplayClass2_0___ctor(
        EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventUIPositionOverwriteComponent___c__DisplayClass2_0___GetPosition_b__0(
        EventUIPositionOverwriteComponent___c__DisplayClass2_0_o *this,
        EventUIPositionOverwriteComponent_KeyPositionPairData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0);
}


void EventUIPositionOverwriteComponent___c__DisplayClass3_0___ctor(
        EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventUIPositionOverwriteComponent___c__DisplayClass3_0___ContainsKey_b__0(
        EventUIPositionOverwriteComponent___c__DisplayClass3_0_o *this,
        EventUIPositionOverwriteComponent_KeyPositionPairData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0);
}
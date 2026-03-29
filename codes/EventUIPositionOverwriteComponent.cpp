void EventUIPositionOverwriteComponent___ctor(EventUIPositionOverwriteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventUIPositionOverwriteComponent__ContainsKey(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2AA08 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_1C93AD4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_1C93AD4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__);
    sub_1C93AD4(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
    byte_4D2AA08 = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5[1].klass = (Il2CppClass *)key;
  sub_1C93A78(&v5[1], key);
  overwritePositionDic = this->fields.overwritePositionDic;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    v5,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__52221724(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0;
}


UnityEngine_Vector2_o EventUIPositionOverwriteComponent__GetPosition(
        EventUIPositionOverwriteComponent_o *this,
        System_String_o *key,
        UnityEngine_Vector2_o defaultPosition,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v12; // x20
  Il2CppObject *v13; // x0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4D2AA07 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_1C93AD4(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_1C93AD4(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__);
    sub_1C93AD4(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
    byte_4D2AA07 = 1;
  }
  v8 = (Il2CppObject *)sub_1C93D20(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( !v8 )
    sub_1C93D2C(v9, v10);
  v8[1].klass = (Il2CppClass *)key;
  sub_1C93A78(&v8[1], key);
  overwritePositionDic = this->fields.overwritePositionDic;
  v12 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v13 )
  {
    x = *(float *)&v13[1].monitor;
    y = *((float *)&v13[1].monitor + 1);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0);
}
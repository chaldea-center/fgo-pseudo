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
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C31BC9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_1C32C20(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_1C32C20(&Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__);
    sub_1C32C20(&EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
    byte_4C31BC9 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(EventUIPositionOverwriteComponent___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5[1].klass = (Il2CppClass *)key;
  sub_1C32BC4(&v5[1], key);
  overwritePositionDic = this->fields.overwritePositionDic;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    v5,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass3_0__ContainsKey_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51408536(
           (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___) != 0;
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
  struct System_Collections_Generic_List_EventUIPositionOverwriteComponent_KeyPositionPairData__o *overwritePositionDic; // x19
  System_Func_object__bool__o *v11; // x20
  Il2CppObject *v12; // x0
  float v13; // s0
  float v14; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultPosition.fields.y;
  x = defaultPosition.fields.x;
  if ( (byte_4C31BC8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
    sub_1C32C20(&System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
    sub_1C32C20(&Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__);
    sub_1C32C20(&EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
    byte_4C31BC8 = 1;
  }
  v8 = (Il2CppObject *)sub_1C32E6C(EventUIPositionOverwriteComponent___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( !v8 )
    sub_1C32E7C(v9);
  v8[1].klass = (Il2CppClass *)key;
  sub_1C32BC4(&v8[1], key);
  overwritePositionDic = this->fields.overwritePositionDic;
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventUIPositionOverwriteComponent_KeyPositionPairData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    v8,
    Method_EventUIPositionOverwriteComponent___c__DisplayClass2_0__GetPosition_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwritePositionDic,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventUIPositionOverwriteComponent_KeyPositionPairData___);
  if ( v12 )
  {
    x = *(float *)&v12[1].monitor;
    y = *((float *)&v12[1].monitor + 1);
  }
  v13 = x;
  v14 = y;
  result.fields.y = v14;
  result.fields.x = v13;
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return System_String__op_Equality(data->fields.key, this->fields.key, 0);
}
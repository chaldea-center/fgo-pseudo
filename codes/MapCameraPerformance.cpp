void __fastcall MapCameraPerformance___ctor(
        MapCameraPerformance_o *this,
        MapCamera_o *mapCamera,
        float second,
        System_Nullable_Vector2__o position,
        System_Nullable_float__o size,
        int32_t easeType,
        const MethodInfo *method)
{
  float y; // w21
  __int64 v11; // x22
  ServantStatusBattleListViewItem_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3

  y = position.fields.value.fields.y;
  v11 = *(_QWORD *)&position.fields.hasValue;
  v13 = (ServantStatusBattleListViewItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13->fields.sortValue2 = (int64_t)mapCamera;
  v13 = (ServantStatusBattleListViewItem_o *)((char *)v13 + 72);
  sub_1B88554(v13, (int32_t)mapCamera, v14, v15);
  *((float *)&v13[-1].fields.isMine + 1) = second;
  *(_QWORD *)&v13[-1].fields.dispLimitCount.fields.inited = v11;
  *(float *)(&v13[-1].fields.isCanSelect + 3) = y;
  v13[-1].fields.name = (struct System_String_o *)size;
  *(_DWORD *)&v13[-1].fields.isMine = easeType;
}


System_Collections_IEnumerator_o *__fastcall MapCameraPerformance__Execute(
        MapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5CB50 & 1) == 0 )
  {
    sub_1B885B0(&MapCameraPerformance__Execute_d__6_TypeInfo);
    byte_4A5CB50 = 1;
  }
  v3 = sub_1B887FC(MapCameraPerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall MapCameraPerformance__Execute_d__6___ctor(
        MapCameraPerformance__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MapCameraPerformance__Execute_d__6__MoveNext(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  const MethodInfo_361E548 *v9; // x2
  bool result; // w0
  MapCamera_o *v11; // x21
  float v12; // s8
  __int64 v13; // x22
  __int64 v14; // x23
  System_Nullable_float__o v15; // x24
  int32_t value_low; // w25
  System_Action_o *v17; // x26
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitUntil_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // [xsp+0h] [xbp-60h] BYREF
  __int64 v24; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v25; // 0:x3.8
  System_Nullable_Vector3__o v26; // 0:x0.16
  System_Nullable_Vector3__o v27; // 0:x1.16
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CB51 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1B885B0(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__);
    sub_1B885B0(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__);
    sub_1B885B0(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5CB51 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v5 = sub_1B887FC(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !_4__this )
      goto LABEL_17;
    v8 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
    if ( v6 )
      return 0;
    if ( !v5 )
      goto LABEL_17;
    *(_BYTE *)(v5 + 16) = 0;
    v11 = *(MapCamera_o **)&_4__this->fields.second;
    v12 = *(float *)&_4__this->fields.easeType;
    if ( *(&_4__this->fields._IsPause_k__BackingField + 3) )
    {
      v28.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
      v28.fields.y = _4__this->fields.position.fields.value.fields.x;
      *(_QWORD *)&v26.fields.hasValue = &v23;
      v28.fields.z = 0.0;
      v23 = 0LL;
      v24 = 0LL;
      *(_QWORD *)&v26.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v26, v28, v9);
      v14 = v23;
      v13 = v24;
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
    }
    v15 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v5, Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, 0LL);
    if ( !v11 )
LABEL_17:
      sub_1B8880C(v6, v7);
    *(_QWORD *)&v27.fields.hasValue = v14;
    *(_QWORD *)&v27.fields.value.fields.y = v13;
    v25 = v15;
    MapCamera__StartAutoWork(v11, v12, v27, v25, value_low, v17, 0LL);
    v18 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0LL);
    v19 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v19, v18, 0LL);
    this->fields.__2__current = (Il2CppObject *)v19;
    p__2__current = &this->fields.__2__current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v19, v21, v22);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return result;
}


Il2CppObject *__fastcall MapCameraPerformance__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MapCameraPerformance__Execute_d__6__System_Collections_IEnumerator_Reset(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall MapCameraPerformance__Execute_d__6__System_Collections_IEnumerator_get_Current(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MapCameraPerformance__Execute_d__6__System_IDisposable_Dispose(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MapCameraPerformance___c__DisplayClass6_0___ctor(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapCameraPerformance___c__DisplayClass6_0___Execute_b__0(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  this->fields.workFinished = 1;
}


bool __fastcall MapCameraPerformance___c__DisplayClass6_0___Execute_b__1(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  return this->fields.workFinished;
}
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
  sub_1B6406C(v13, (int32_t)mapCamera, v14, v15);
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
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FDDC8 & 1) == 0 )
  {
    sub_1B640C8(&MapCameraPerformance__Execute_d__6_TypeInfo, method);
    byte_49FDDC8 = 1;
  }
  v4 = sub_1B64314(MapCameraPerformance__Execute_d__6_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v15; // x20
  _BOOL8 v16; // x0
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x1
  const MethodInfo_35D2010 *v19; // x2
  bool result; // w0
  MapCamera_o *v21; // x21
  float v22; // s8
  __int64 v23; // x22
  __int64 v24; // x23
  System_Nullable_float__o v25; // x24
  int32_t value_low; // w25
  System_Action_o *v27; // x26
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_bool__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_WaitUntil_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // [xsp+0h] [xbp-60h] BYREF
  __int64 v38; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_Vector3__o v40; // 0:x0.16
  System_Nullable_Vector3__o v41; // 0:x1.16
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FDDC9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&Method_System_Nullable_Vector2__GetValueOrDefault__, v5);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v6);
    sub_1B640C8(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v9);
    sub_1B640C8(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v10);
    sub_1B640C8(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v12);
    byte_49FDDC9 = 1;
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
    v15 = sub_1B64314(MapCameraPerformance___c__DisplayClass6_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !_4__this )
      goto LABEL_17;
    v17 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
    if ( v16 )
      return 0;
    if ( !v15 )
      goto LABEL_17;
    *(_BYTE *)(v15 + 16) = 0;
    v21 = *(MapCamera_o **)&_4__this->fields.second;
    v22 = *(float *)&_4__this->fields.easeType;
    if ( *(&_4__this->fields._IsPause_k__BackingField + 3) )
    {
      v42.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
      v42.fields.y = _4__this->fields.position.fields.value.fields.x;
      *(_QWORD *)&v40.fields.hasValue = &v37;
      v42.fields.z = 0.0;
      v37 = 0LL;
      v38 = 0LL;
      *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v40, v42, v19);
      v24 = v37;
      v23 = v38;
    }
    else
    {
      v23 = 0LL;
      v24 = 0LL;
    }
    v25 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v15,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v21 )
LABEL_17:
      sub_1B64324(v16);
    *(_QWORD *)&v41.fields.hasValue = v24;
    *(_QWORD *)&v41.fields.value.fields.y = v23;
    v39 = v25;
    MapCamera__StartAutoWork(v21, v22, v41, v39, value_low, v27, 0LL);
    v30 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v28, v29);
    System_Func_bool____ctor(
      v30,
      (Il2CppObject *)v15,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0LL);
    v33 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v31, v32);
    UnityEngine_WaitUntil___ctor(v33, v30, 0LL);
    this->fields.__2__current = (Il2CppObject *)v33;
    p__2__current = &this->fields.__2__current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v33, v35, v36);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
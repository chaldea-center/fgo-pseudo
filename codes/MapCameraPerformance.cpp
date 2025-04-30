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
  struct ListViewObject_o *v11; // x22
  CGThumbnailListItem_o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  y = position.fields.value.fields.y;
  v11 = *(struct ListViewObject_o **)&position.fields.hasValue;
  v13 = (CGThumbnailListItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13->fields.sortValue2 = (int64_t)mapCamera;
  v13 = (CGThumbnailListItem_o *)((char *)v13 + 72);
  sub_1B8635C(v13, (int32_t)mapCamera, v14, v15);
  *((float *)&v13[-1].fields._ThumbnailSpritePath_k__BackingField + 1) = second;
  *(struct ListViewObject_o **)((char *)&v13[-1].fields.viewObject + 4) = v11;
  *(float *)&v13[-1].fields._Priority_k__BackingField = y;
  *(System_Nullable_float__o *)&v13[-1].fields._Type_k__BackingField = size;
  LODWORD(v13[-1].fields._ThumbnailSpritePath_k__BackingField) = easeType;
}


System_Collections_IEnumerator_o *__fastcall MapCameraPerformance__Execute(
        MapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A50035 & 1) == 0 )
  {
    sub_1B863B8(&MapCameraPerformance__Execute_d__6_TypeInfo, method);
    byte_4A50035 = 1;
  }
  v3 = sub_1B86604(MapCameraPerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x21
  const MethodInfo_37206A0 *v18; // x2
  bool result; // w0
  MapCamera_o *v20; // x21
  float v21; // s8
  __int64 v22; // x22
  __int64 v23; // x23
  System_Nullable_float__o v24; // x24
  int32_t value_low; // w25
  System_Action_o *v26; // x26
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitUntil_o *v28; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // [xsp+0h] [xbp-60h] BYREF
  __int64 v33; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v34; // 0:x3.8
  System_Nullable_Vector3__o v35; // 0:x0.16
  System_Nullable_Vector3__o v36; // 0:x1.16
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A50036 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&System_Func_bool__TypeInfo, v3);
    sub_1B863B8(&Method_System_Nullable_Vector2__GetValueOrDefault__, v4);
    sub_1B863B8(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_1B863B8(&Method_System_Nullable_Vector2__get_HasValue__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v8);
    sub_1B863B8(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v9);
    sub_1B863B8(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v10);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v11);
    byte_4A50036 = 1;
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
    v14 = sub_1B86604(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !_4__this )
      goto LABEL_17;
    v17 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
    if ( v15 )
      return 0;
    if ( !v14 )
      goto LABEL_17;
    *(_BYTE *)(v14 + 16) = 0;
    v20 = *(MapCamera_o **)&_4__this->fields.second;
    v21 = *(float *)&_4__this->fields.easeType;
    if ( *(&_4__this->fields._IsPause_k__BackingField + 3) )
    {
      v37.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
      v37.fields.y = _4__this->fields.position.fields.value.fields.x;
      *(_QWORD *)&v35.fields.hasValue = &v32;
      v37.fields.z = 0.0;
      v32 = 0LL;
      v33 = 0LL;
      *(_QWORD *)&v35.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v35, v37, v18);
      v23 = v32;
      v22 = v33;
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
    }
    v24 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v14,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v20 )
LABEL_17:
      sub_1B86614(v15, v16);
    *(_QWORD *)&v36.fields.hasValue = v23;
    *(_QWORD *)&v36.fields.value.fields.y = v22;
    v34 = v24;
    MapCamera__StartAutoWork(v20, v21, v36, v34, value_low, v26, 0LL);
    v27 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v27,
      (Il2CppObject *)v14,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0LL);
    v28 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v28, v27, 0LL);
    this->fields.__2__current = (Il2CppObject *)v28;
    p__2__current = &this->fields.__2__current;
    sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v28, v30, v31);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
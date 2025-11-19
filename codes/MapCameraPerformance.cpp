void MapCameraPerformance___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  v13->fields.sortValue2 = (int64_t)mapCamera;
  v13 = (CGThumbnailListItem_o *)((char *)v13 + 72);
  sub_1C6B9AC(v13, (int32_t)mapCamera, v14, v15);
  *((float *)&v13[-1].fields._ThumbnailSpritePath_k__BackingField + 1) = second;
  *(struct ListViewObject_o **)((char *)&v13[-1].fields.viewObject + 4) = v11;
  *(float *)&v13[-1].fields._Priority_k__BackingField = y;
  *(System_Nullable_float__o *)&v13[-1].fields._Type_k__BackingField = size;
  LODWORD(v13[-1].fields._ThumbnailSpritePath_k__BackingField) = easeType;
}


System_Collections_IEnumerator_o *MapCameraPerformance__Execute(MapCameraPerformance_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB7F81 & 1) == 0 )
  {
    sub_1C6BA08(&MapCameraPerformance__Execute_d__6_TypeInfo);
    byte_4CB7F81 = 1;
  }
  v3 = sub_1C6BC54(MapCameraPerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void MapCameraPerformance__Execute_d__6___ctor(
        MapCameraPerformance__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MapCameraPerformance__Execute_d__6__MoveNext(MapCameraPerformance__Execute_d__6_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x21
  const MethodInfo_392DB5C *v9; // x2
  bool result; // w0
  MapCamera_o *v11; // x21
  float v12; // s8
  __int64 v13; // x22
  __int64 v14; // x23
  System_Nullable_float__o v15; // x24
  int32_t value_low; // w25
  System_Action_o *v17; // x26
  System_Nullable_float__o v18; // x3
  System_Func_bool__o *v19; // x21
  UnityEngine_WaitUntil_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // [xsp+0h] [xbp-60h] BYREF
  __int64 v25; // [xsp+8h] [xbp-58h]
  System_Nullable_Vector3__o v26; // 0:x0.16
  System_Nullable_Vector3__o v27; // 0:x1.16
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7F82 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_Vector3___ctor__);
    sub_1C6BA08(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__);
    sub_1C6BA08(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__);
    sub_1C6BA08(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CB7F82 = 1;
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
    v5 = sub_1C6BC54(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !_4__this )
      goto LABEL_17;
    v8 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality(v8, 0, 0);
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
      *(_QWORD *)&v26.fields.hasValue = &v24;
      v28.fields.z = 0.0;
      v24 = 0;
      v25 = 0;
      *(_QWORD *)&v26.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v26, v28, v9);
      v14 = v24;
      v13 = v25;
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v17 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v5, Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, 0);
    if ( !v11 )
LABEL_17:
      sub_1C6BC60(v6, v7);
    *(_QWORD *)&v27.fields.hasValue = v14;
    *(_QWORD *)&v27.fields.value.fields.y = v13;
    v18 = v15;
    MapCamera__StartAutoWork(v11, v12, v27, v18, value_low, v17, 0);
    v19 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0);
    v20 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v20, v19, 0);
    this->fields.__2__current = (Il2CppObject *)v20;
    p__2__current = &this->fields.__2__current;
    sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v20, v22, v23);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return result;
}


Il2CppObject *MapCameraPerformance__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MapCameraPerformance__Execute_d__6__System_Collections_IEnumerator_Reset(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MapCameraPerformance__Execute_d__6__System_Collections_IEnumerator_get_Current(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MapCameraPerformance__Execute_d__6__System_IDisposable_Dispose(
        MapCameraPerformance__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}


void MapCameraPerformance___c__DisplayClass6_0___ctor(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapCameraPerformance___c__DisplayClass6_0___Execute_b__0(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  this->fields.workFinished = 1;
}


bool MapCameraPerformance___c__DisplayClass6_0___Execute_b__1(
        MapCameraPerformance___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  return this->fields.workFinished;
}
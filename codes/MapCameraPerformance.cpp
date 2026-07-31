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
  __int64 v11; // x22
  MissionNaviTransitionBoardItem_o *v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  y = position.fields.value.fields.y;
  v11 = *(_QWORD *)&position.fields.hasValue;
  v13 = (MissionNaviTransitionBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v13->fields.sortValue2 = (int64_t)mapCamera;
  v13 = (MissionNaviTransitionBoardItem_o *)((char *)v13 + 72);
  sub_21FFBF4(v13, (int32_t)mapCamera, v14, v15, v16, v17, v18, v19);
  *((float *)&v13[-1].fields._BoardType_k__BackingField + 1) = second;
  *(_QWORD *)&v13[-1].fields._IsNotDisplayQuestInfo_k__BackingField = v11;
  *((float *)&v13[-1].fields._ClosedMessage_k__BackingField + 1) = y;
  v13[-1].fields._NaviAction_k__BackingField = (struct System_Action_o *)size;
  v13[-1].fields._BoardType_k__BackingField = easeType;
}


System_Collections_IEnumerator_o *MapCameraPerformance__Execute(MapCameraPerformance_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593A38E & 1) == 0 )
  {
    sub_21FFC50(&MapCameraPerformance__Execute_d__6_TypeInfo);
    byte_593A38E = 1;
  }
  v3 = sub_21FFEBC(MapCameraPerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  bool result; // w0
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  const MethodInfo_45B5018 *v10; // x2
  int32_t v11; // w8
  MapCamera_o *v12; // x21
  float v13; // s8
  __int64 v14; // x22
  __int64 v15; // x23
  System_Nullable_float__o v16; // x24
  int32_t value_low; // w25
  System_Action_o *v18; // x26
  System_Nullable_float__o v19; // x3
  System_Func_bool__o *v20; // x21
  UnityEngine_WaitUntil_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // [xsp+0h] [xbp-60h] BYREF
  __int64 v29; // [xsp+8h] [xbp-58h]
  System_Nullable_Vector3__o v30; // 0:x0.16
  System_Nullable_Vector3__o v31; // 0:x1.16
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A38F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__);
    sub_21FFC50(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__);
    sub_21FFC50(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593A38F = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_21FFEBC(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !_4__this )
      goto LABEL_19;
    v9 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v7 = UnityEngine_Object__op_Equality(v9, 0, 0);
    if ( v7 )
      return 0;
    if ( !v6 )
      goto LABEL_19;
    *(_BYTE *)(v6 + 16) = 0;
    v12 = *(MapCamera_o **)&_4__this->fields.second;
    v13 = *(float *)&_4__this->fields.easeType;
    if ( *(&_4__this->fields._IsPause_k__BackingField + 3) )
    {
      v32.fields.z = 0.0;
      *(_QWORD *)&v30.fields.hasValue = &v28;
      v32.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
      v32.fields.y = _4__this->fields.position.fields.value.fields.x;
      v28 = 0;
      v29 = 0;
      *(_QWORD *)&v30.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v30, v32, v10);
      v15 = v28;
      v14 = v29;
    }
    else
    {
      v14 = 0;
      v15 = 0;
    }
    v16 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)v6, Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, 0);
    if ( !v12 )
LABEL_19:
      sub_21FFECC(v7, v8);
    *(_QWORD *)&v31.fields.hasValue = v15;
    *(_QWORD *)&v31.fields.value.fields.y = v14;
    v19 = v16;
    MapCamera__StartAutoWork(v12, v13, v31, v19, value_low, v18, 0);
    v20 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v20,
      (Il2CppObject *)v6,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0);
    v21 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v21, v20, 0);
    this->fields.__2__current = (Il2CppObject *)v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
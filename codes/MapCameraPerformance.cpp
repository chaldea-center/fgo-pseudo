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
  struct System_String_o *v11; // x22
  GrandQuestFolderBoardItem_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  y = position.fields.value.fields.y;
  v11 = *(struct System_String_o **)&position.fields.hasValue;
  v13 = (GrandQuestFolderBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v13->fields.sortValue2 = (int64_t)mapCamera;
  v13 = (GrandQuestFolderBoardItem_o *)((char *)v13 + 72);
  sub_1C7BA8C(v13, (int32_t)mapCamera, v14, v15, v16, v17, v18, v19);
  *((float *)&v13[-1].fields._ClosedMessage_k__BackingField + 1) = second;
  *(struct System_String_o **)((char *)&v13[-1].fields._Name_k__BackingField + 4) = v11;
  *((float *)&v13[-1].fields._IconId_k__BackingField + 1) = y;
  v13[-1].fields._ListCreatedTime_k__BackingField = (int64_t)size;
  LODWORD(v13[-1].fields._ClosedMessage_k__BackingField) = easeType;
}


System_Collections_IEnumerator_o *MapCameraPerformance__Execute(MapCameraPerformance_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF02BA & 1) == 0 )
  {
    sub_1C7BAE8(&MapCameraPerformance__Execute_d__6_TypeInfo);
    byte_4CF02BA = 1;
  }
  v3 = sub_1C7BD34(MapCameraPerformance__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  const MethodInfo_3969818 *v9; // x2
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // [xsp+0h] [xbp-60h] BYREF
  __int64 v29; // [xsp+8h] [xbp-58h]
  System_Nullable_Vector3__o v30; // 0:x0.16
  System_Nullable_Vector3__o v31; // 0:x1.16
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF02BB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_Vector3___ctor__);
    sub_1C7BAE8(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__);
    sub_1C7BAE8(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__);
    sub_1C7BAE8(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CF02BB = 1;
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
    v5 = sub_1C7BD34(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
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
      v32.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
      v32.fields.y = _4__this->fields.position.fields.value.fields.x;
      *(_QWORD *)&v30.fields.hasValue = &v28;
      v32.fields.z = 0.0;
      v28 = 0;
      v29 = 0;
      *(_QWORD *)&v30.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v30, v32, v9);
      v14 = v28;
      v13 = v29;
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
    value_low = LODWORD(_4__this->fields.size.fields.value);
    v17 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v5, Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, 0);
    if ( !v11 )
LABEL_17:
      sub_1C7BD40(v6, v7);
    *(_QWORD *)&v31.fields.hasValue = v14;
    *(_QWORD *)&v31.fields.value.fields.y = v13;
    v18 = v15;
    MapCamera__StartAutoWork(v11, v12, v31, v18, value_low, v17, 0);
    v19 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v19,
      (Il2CppObject *)v5,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      0);
    v20 = (UnityEngine_WaitUntil_o *)sub_1C7BD34(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v20, v19, 0);
    this->fields.__2__current = (Il2CppObject *)v20;
    p__2__current = &this->fields.__2__current;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v20, v22, v23, v24, v25, v26, v27);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
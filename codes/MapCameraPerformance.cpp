void __fastcall MapCameraPerformance___ctor(
        MapCameraPerformance_o *this,
        MapCamera_o *mapCamera,
        float second,
        System_Nullable_Vector2__o position,
        System_Nullable_float__o size,
        int32_t easeType,
        const MethodInfo *method)
{
  int v10; // w21
  struct UnityEngine_Vector2_o value; // x22
  BattleServantConfConponent_o *v13; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  v10 = *(_DWORD *)&position.fields.has_value;
  value = position.fields.value;
  v13 = (BattleServantConfConponent_o *)this;
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  v13->fields.atklabel = (struct UILabel_o *)mapCamera;
  v13 = (BattleServantConfConponent_o *)((char *)v13 + 72);
  sub_B70630(v13, (System_Int32_array **)mapCamera, v14, v15, v16, v17, v18, v19);
  *(float *)&v13[-1].fields.adjustHeight = second;
  *(struct UnityEngine_Vector2_o *)((char *)&v13[-1].fields.BattleAssetUIAtlas + 4) = value;
  *((_DWORD *)&v13[-1].fields.isEquip + 1) = v10;
  v13[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)size;
  *(_DWORD *)&v13[-1].fields.isOpenAfter = easeType;
}


System_Collections_IEnumerator_o *__fastcall MapCameraPerformance__Execute(
        MapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43508B4 & 1) == 0 )
  {
    sub_B70694(&MapCameraPerformance__Execute_d__6_TypeInfo);
    byte_43508B4 = 1;
  }
  v3 = sub_B70764(MapCameraPerformance__Execute_d__6_TypeInfo);
  MapCameraPerformance__Execute_d__6___ctor((MapCameraPerformance__Execute_d__6_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  const MethodInfo_243BBB0 *v9; // x2
  bool result; // w0
  MapCamera_o *v11; // x21
  float v12; // s8
  __int64 v13; // x22
  __int64 v14; // x23
  System_Nullable_float__o v15; // x24
  int32_t v16; // w25
  System_Action_o *v17; // x26
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitUntil_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v21; // [xsp+0h] [xbp-60h] BYREF
  __int64 v22; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v23; // 0:x3.8
  System_Nullable_Vector3__o v24; // 0:x0.16
  System_Nullable_Vector3__o v25; // 0:x1.16
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434F386 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_Vector3___ctor__);
    sub_B70694(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__);
    sub_B70694(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__);
    sub_B70694(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_434F386 = 1;
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
    v5 = sub_B70764(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    if ( !_4__this )
      goto LABEL_18;
    v8 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
    if ( v6 )
      return 0;
    if ( !v5 )
      goto LABEL_18;
    *(_BYTE *)(v5 + 16) = 0;
    v11 = *(MapCamera_o **)&_4__this->fields.second;
    v12 = *(float *)&_4__this->fields.easeType;
    if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
    {
      *(_QWORD *)&v24.fields.value.fields.x = &v21;
      v26.fields.z = 0.0;
      LODWORD(v26.fields.x) = *(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3);
      *(_QWORD *)&v24.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      LODWORD(v26.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3));
      v21 = 0LL;
      v22 = 0LL;
      System_Nullable_Vector3____ctor(v24, v26, v9);
      v13 = v21;
      v14 = v22;
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
    }
    v15 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
    v16 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
    v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)v5, Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, 0LL);
    if ( !v11 )
LABEL_18:
      sub_B7076C(v6, v7);
    *(_QWORD *)&v25.fields.value.fields.x = v13;
    *(_QWORD *)&v25.fields.value.fields.z = v14;
    v23 = v15;
    MapCamera__StartAutoWork(v11, v12, v25, v23, v16, v17, 0LL);
    v18 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
    v19 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v19, v18, 0LL);
    this->fields.__2__current = (Il2CppObject *)v19;
    p__2__current = &this->fields.__2__current;
    sub_B70630(p__2__current);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
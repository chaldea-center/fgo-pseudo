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
  sub_B0D840(v13, (System_Int32_array **)mapCamera, v14, v15, v16, v17, v18, v19);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421301F & 1) == 0 )
  {
    sub_B0D8A4(&MapCameraPerformance__Execute_d__6_TypeInfo, method);
    byte_421301F = 1;
  }
  v4 = sub_B0D974(MapCameraPerformance__Execute_d__6_TypeInfo, method, v2);
  MapCameraPerformance__Execute_d__6___ctor((MapCameraPerformance__Execute_d__6_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v16; // x20
  _BOOL8 v17; // x0
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  const MethodInfo_299B944 *v20; // x2
  bool result; // w0
  MapCamera_o *v22; // x21
  float v23; // s8
  __int64 v24; // x22
  __int64 v25; // x23
  System_Nullable_float__o v26; // x24
  int32_t v27; // w25
  System_Action_o *v28; // x26
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_bool__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_WaitUntil_o *v34; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v36; // [xsp+0h] [xbp-60h] BYREF
  __int64 v37; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v38; // 0:x3.8
  System_Nullable_Vector3__o v39; // 0:x0.16
  System_Nullable_Vector3__o v40; // 0:x1.16
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42126C8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v4);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Nullable_Vector2__GetValueOrDefault__, v6);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v7);
    sub_B0D8A4(&Method_System_Nullable_Vector2__get_HasValue__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v10);
    sub_B0D8A4(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v11);
    sub_B0D8A4(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v13);
    byte_42126C8 = 1;
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
    v16 = sub_B0D974(MapCameraPerformance___c__DisplayClass6_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v16, 0LL);
    if ( !_4__this )
      goto LABEL_18;
    v18 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
    if ( v17 )
      return 0;
    if ( !v16 )
      goto LABEL_18;
    *(_BYTE *)(v16 + 16) = 0;
    v22 = *(MapCamera_o **)&_4__this->fields.second;
    v23 = *(float *)&_4__this->fields.easeType;
    if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
    {
      *(_QWORD *)&v39.fields.value.fields.x = &v36;
      v41.fields.z = 0.0;
      LODWORD(v41.fields.x) = *(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3);
      *(_QWORD *)&v39.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      LODWORD(v41.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3));
      v36 = 0LL;
      v37 = 0LL;
      System_Nullable_Vector3____ctor(v39, v41, v20);
      v24 = v36;
      v25 = v37;
    }
    else
    {
      v24 = 0LL;
      v25 = 0LL;
    }
    v26 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
    v27 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
    v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v16,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v22 )
LABEL_18:
      sub_B0D97C(v17);
    *(_QWORD *)&v40.fields.value.fields.x = v24;
    *(_QWORD *)&v40.fields.value.fields.z = v25;
    v38 = v26;
    MapCamera__StartAutoWork(v22, v23, v40, v38, v27, v28, 0LL);
    v31 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v29, v30);
    System_Func_bool____ctor(
      v31,
      (Il2CppObject *)v16,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v34 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v32, v33);
    UnityEngine_WaitUntil___ctor(v34, v31, 0LL);
    this->fields.__2__current = (Il2CppObject *)v34;
    p__2__current = &this->fields.__2__current;
    sub_B0D840(p__2__current, v34);
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
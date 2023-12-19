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
  sub_B16F98(v13, (System_Int32_array **)mapCamera, v14, v15, v16, v17, v18, v19);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB597 & 1) == 0 )
  {
    sub_B16FFC(&MapCameraPerformance__Execute_d__6_TypeInfo, method);
    byte_40FB597 = 1;
  }
  v6 = sub_B170CC(MapCameraPerformance__Execute_d__6_TypeInfo, method, v2, v3, v4);
  MapCameraPerformance__Execute_d__6___ctor((MapCameraPerformance__Execute_d__6_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v18; // x20
  UnityEngine_Object_o *v19; // x21
  __int64 v20; // x1
  const MethodInfo_29CF778 *v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  bool result; // w0
  MapCamera_o *v25; // x21
  float v26; // s8
  __int64 v27; // x22
  __int64 v28; // x23
  System_Nullable_float__o v29; // x24
  int32_t v30; // w25
  System_Action_o *v31; // x26
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Func_bool__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  UnityEngine_WaitUntil_o *v41; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // [xsp+0h] [xbp-60h] BYREF
  __int64 v50; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v51; // 0:x3.8
  System_Nullable_Vector3__o v52; // 0:x0.16
  System_Nullable_Vector3__o v53; // 0:x1.16
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F6916 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v6);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Nullable_Vector2__GetValueOrDefault__, v8);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_B16FFC(&Method_System_Nullable_Vector2__get_HasValue__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v12);
    sub_B16FFC(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v13);
    sub_B16FFC(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v15);
    byte_40F6916 = 1;
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
    v18 = sub_B170CC(MapCameraPerformance___c__DisplayClass6_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( !_4__this )
      goto LABEL_18;
    v19 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
      return 0;
    if ( !v18 )
      goto LABEL_18;
    *(_BYTE *)(v18 + 16) = 0;
    v25 = *(MapCamera_o **)&_4__this->fields.second;
    v26 = *(float *)&_4__this->fields.easeType;
    if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
    {
      *(_QWORD *)&v52.fields.value.fields.x = &v49;
      v54.fields.z = 0.0;
      LODWORD(v54.fields.x) = *(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3);
      *(_QWORD *)&v52.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      LODWORD(v54.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3));
      v49 = 0LL;
      v50 = 0LL;
      System_Nullable_Vector3____ctor(v52, v54, v21);
      v27 = v49;
      v28 = v50;
    }
    else
    {
      v27 = 0LL;
      v28 = 0LL;
    }
    v29 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
    v30 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
    v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v18,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v25 )
LABEL_18:
      sub_B170D4();
    *(_QWORD *)&v53.fields.value.fields.x = v27;
    *(_QWORD *)&v53.fields.value.fields.z = v28;
    v51 = v29;
    MapCamera__StartAutoWork(v25, v26, v53, v51, v30, v31, 0LL);
    v36 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v32, v33, v34, v35);
    System_Func_bool____ctor(
      v36,
      (Il2CppObject *)v18,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v41 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v37, v38, v39, v40);
    UnityEngine_WaitUntil___ctor(v41, v36, 0LL);
    this->fields.__2__current = (Il2CppObject *)v41;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v41, v43, v44, v45, v46, v47, v48);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
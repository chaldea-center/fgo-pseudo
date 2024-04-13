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
  sub_B5D560(v13, (System_Int32_array **)mapCamera, v14, v15, v16, v17, v18, v19);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E72ED & 1) == 0 )
  {
    sub_B5D5C4(&MapCameraPerformance__Execute_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E72ED = 1;
  }
  v5 = sub_B5D694(MapCameraPerformance__Execute_d__6_TypeInfo);
  MapCameraPerformance__Execute_d__6___ctor((MapCameraPerformance__Execute_d__6_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x21
  const MethodInfo_234ED3C *v41; // x2
  bool result; // w0
  MapCamera_o *v43; // x21
  float v44; // s8
  __int64 v45; // x22
  __int64 v46; // x23
  System_Nullable_float__o v47; // x24
  int32_t v48; // w25
  System_Action_o *v49; // x26
  System_Func_bool__o *v50; // x21
  UnityEngine_WaitUntil_o *v51; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v53; // [xsp+0h] [xbp-60h] BYREF
  __int64 v54; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v55; // 0:x3.8
  System_Nullable_Vector3__o v56; // 0:x0.16
  System_Nullable_Vector3__o v57; // 0:x1.16
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5EEA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Nullable_Vector2__GetValueOrDefault__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Nullable_Vector2__get_HasValue__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v23, v24, v25);
    sub_B5D5C4(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v26, v27, v28);
    sub_B5D5C4(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v32, v33, v34);
    byte_42E5EEA = 1;
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
    v37 = sub_B5D694(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v37, 0LL);
    if ( !_4__this )
      goto LABEL_18;
    v40 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v38 = UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
    if ( v38 )
      return 0;
    if ( !v37 )
      goto LABEL_18;
    *(_BYTE *)(v37 + 16) = 0;
    v43 = *(MapCamera_o **)&_4__this->fields.second;
    v44 = *(float *)&_4__this->fields.easeType;
    if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
    {
      *(_QWORD *)&v56.fields.value.fields.x = &v53;
      v58.fields.z = 0.0;
      LODWORD(v58.fields.x) = *(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3);
      *(_QWORD *)&v56.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      LODWORD(v58.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3));
      v53 = 0LL;
      v54 = 0LL;
      System_Nullable_Vector3____ctor(v56, v58, v41);
      v45 = v53;
      v46 = v54;
    }
    else
    {
      v45 = 0LL;
      v46 = 0LL;
    }
    v47 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
    v48 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
    v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)v37,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v43 )
LABEL_18:
      sub_B5D69C(v38, v39);
    *(_QWORD *)&v57.fields.value.fields.x = v45;
    *(_QWORD *)&v57.fields.value.fields.z = v46;
    v55 = v47;
    MapCamera__StartAutoWork(v43, v44, v57, v55, v48, v49, 0LL);
    v50 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v50,
      (Il2CppObject *)v37,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v51 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v51, v50, 0LL);
    this->fields.__2__current = (Il2CppObject *)v51;
    p__2__current = &this->fields.__2__current;
    sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
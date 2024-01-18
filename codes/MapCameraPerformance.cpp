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
  sub_B2C2F8(v13, (System_Int32_array **)mapCamera, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_418633D & 1) == 0 )
  {
    sub_B2C35C(&MapCameraPerformance__Execute_d__6_TypeInfo, method);
    byte_418633D = 1;
  }
  v3 = sub_B2C42C(MapCameraPerformance__Execute_d__6_TypeInfo);
  MapCameraPerformance__Execute_d__6___ctor((MapCameraPerformance__Execute_d__6_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct MapCameraPerformance_o *_4__this; // x25
  __int64 v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  const MethodInfo_2155668 *v19; // x2
  bool result; // w0
  MapCamera_o *v21; // x21
  float v22; // s8
  __int64 v23; // x22
  __int64 v24; // x23
  System_Nullable_float__o v25; // x24
  int32_t v26; // w25
  System_Action_o *v27; // x26
  System_Func_bool__o *v28; // x21
  UnityEngine_WaitUntil_o *v29; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v31; // [xsp+0h] [xbp-60h] BYREF
  __int64 v32; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v33; // 0:x3.8
  System_Nullable_Vector3__o v34; // 0:x0.16
  System_Nullable_Vector3__o v35; // 0:x1.16
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418422D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_System_Nullable_Vector2__GetValueOrDefault__, v5);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v6);
    sub_B2C35C(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__, v9);
    sub_B2C35C(&Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__, v10);
    sub_B2C35C(&MapCameraPerformance___c__DisplayClass6_0_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v12);
    byte_418422D = 1;
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
    v15 = sub_B2C42C(MapCameraPerformance___c__DisplayClass6_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !_4__this )
      goto LABEL_18;
    v18 = *(UnityEngine_Object_o **)&_4__this->fields.second;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
    if ( v16 )
      return 0;
    if ( !v15 )
      goto LABEL_18;
    *(_BYTE *)(v15 + 16) = 0;
    v21 = *(MapCamera_o **)&_4__this->fields.second;
    v22 = *(float *)&_4__this->fields.easeType;
    if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
    {
      *(_QWORD *)&v34.fields.value.fields.x = &v31;
      v36.fields.z = 0.0;
      LODWORD(v36.fields.x) = *(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3);
      *(_QWORD *)&v34.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      LODWORD(v36.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._IsPause_k__BackingField + 3));
      v31 = 0LL;
      v32 = 0LL;
      System_Nullable_Vector3____ctor(v34, v36, v19);
      v23 = v31;
      v24 = v32;
    }
    else
    {
      v23 = 0LL;
      v24 = 0LL;
    }
    v25 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
    v26 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
    v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v15,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__0__,
      0LL);
    if ( !v21 )
LABEL_18:
      sub_B2C434(v16, v17);
    *(_QWORD *)&v35.fields.value.fields.x = v23;
    *(_QWORD *)&v35.fields.value.fields.z = v24;
    v33 = v25;
    MapCamera__StartAutoWork(v21, v22, v35, v33, v26, v27, 0LL);
    v28 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v28,
      (Il2CppObject *)v15,
      Method_MapCameraPerformance___c__DisplayClass6_0__Execute_b__1__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v29 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v29, v28, 0LL);
    this->fields.__2__current = (Il2CppObject *)v29;
    p__2__current = &this->fields.__2__current;
    sub_B2C2F8(p__2__current, v29);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MapCameraPerformance__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
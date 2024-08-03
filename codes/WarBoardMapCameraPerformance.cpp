void __fastcall WarBoardMapCameraPerformance___ctor(
        WarBoardMapCameraPerformance_o *this,
        float second,
        System_Nullable_Vector2__o position,
        System_Nullable_float__o size,
        int32_t easeType,
        bool skipCloseDistance,
        bool isChangeSize,
        const MethodInfo *method)
{
  float y; // w21
  __int64 v11; // x22
  bool v14; // w24
  bool v15; // w25

  y = position.fields.value.fields.y;
  v11 = *(_QWORD *)&position.fields.hasValue;
  v14 = skipCloseDistance;
  v15 = isChangeSize;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&position.fields.hasValue);
  *(float *)&this->fields.easeType = second;
  *(_QWORD *)(&this->fields._isPause_k__BackingField + 3) = v11;
  this->fields.position.fields.value.fields.x = y;
  *(System_Nullable_float__o *)&this->fields.position.fields.value.fields.y = size;
  LODWORD(this->fields.size.fields.value) = easeType;
  LOBYTE(this->fields.second) = v14;
  BYTE1(this->fields.second) = v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMapCameraPerformance__CheckCloseDistance(
        WarBoardMapCameraPerformance_o *this,
        UnityEngine_Vector3_o a,
        UnityEngine_Vector3_o b,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s11
  float v7; // s10
  float v8; // s12
  float v9; // s13
  float v10; // s11
  float v11; // s9
  float v12; // s8

  z = b.fields.z;
  y = b.fields.y;
  x = b.fields.x;
  v7 = a.fields.z;
  v8 = a.fields.y;
  v9 = a.fields.x;
  if ( !byte_49F7113 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F7113 = 1;
  }
  v10 = v9 - x;
  v11 = v8 - y;
  v12 = v7 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return sqrtf((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11))) < 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardMapCameraPerformance__Execute(
        WarBoardMapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA32C & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method);
    byte_49FA32C = 1;
  }
  v4 = sub_1B64314(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_49FA32D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA32D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  Il2CppObject *Instance; // x0

  if ( (byte_49FA32B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA32B = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
}


void __fastcall WarBoardMapCameraPerformance__Execute_d__9___ctor(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMapCameraPerformance__Execute_d__9__MoveNext(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
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
  __int64 v14; // x1
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x25
  __int64 v17; // x20
  void *Instance; // x0
  const MethodInfo_35D2010 *v19; // x2
  MapCamera_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  bool result; // w0
  System_Nullable_float__o v24; // x24
  __int64 v25; // x1
  const MethodInfo_35D2010 *v26; // x2
  char *v27; // x22
  const MethodInfo *v28; // x1
  int v29; // s0
  float ZoomSize; // s0
  float v33; // s8
  __int64 v34; // x22
  __int64 v35; // x23
  System_Nullable_float__o v36; // x24
  int32_t value_low; // w25
  System_Action_o *v38; // x26
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_bool__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_WaitUntil_o *v44; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // [xsp+0h] [xbp-60h] BYREF
  __int64 v49; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v50; // 0:x0.8
  System_Nullable_float__o v51; // 0:x3.8
  System_Nullable_float__o v52; // 0:x3.8
  System_Nullable_Vector3__o v53; // 0:x0.16
  System_Nullable_Vector3__o v54; // 0:x0.16
  System_Nullable_Vector3__o v55; // 0:x1.16
  System_Nullable_Vector3__o v56; // 0:x1.16
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA32E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&MapCameraViewAdjusterUtil_TypeInfo, v5);
    sub_1B640C8(&Method_System_Nullable_Vector2__GetValueOrDefault__, v6);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v7);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v8);
    sub_1B640C8(&Method_System_Nullable_Vector2__get_HasValue__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B640C8(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v11);
    sub_1B640C8(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v12);
    sub_1B640C8(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v13);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v14);
    byte_49FA32E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
    return result;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v17 = sub_1B64314(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !v17 )
    goto LABEL_29;
  v20 = (MapCamera_o *)*((_QWORD *)Instance + 6);
  *(_BYTE *)(v17 + 16) = 0;
  if ( !_4__this )
    goto LABEL_29;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v57.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v57.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v53.fields.hasValue = &v48;
    v57.fields.z = 0.0;
    v48 = 0LL;
    v49 = 0LL;
    *(_QWORD *)&v53.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v53, v57, v19);
    v22 = v48;
    v21 = v49;
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  v24 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  *(_QWORD *)&v55.fields.hasValue = v22;
  *(_QWORD *)&v55.fields.value.fields.y = v21;
  v51 = v24;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v20, v55, v51, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v20 )
      goto LABEL_29;
    v27 = (char *)Instance;
    Instance = v20->fields.mScrl;
    if ( !Instance )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)&v29 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v27 )
      goto LABEL_29;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         (WarBoardMapCameraPerformance_o *)Instance,
                         *(UnityEngine_Vector3_o *)&v29,
                         *(UnityEngine_Vector3_o *)(v27 + 16),
                         v28);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 0;
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !v20 )
      goto LABEL_29;
    Instance = v20->fields.mZoom;
    if ( !Instance )
      goto LABEL_29;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v50 = (System_Nullable_float__o)&v48;
    v48 = 0LL;
    System_Nullable_float____ctor(v50, ZoomSize, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.value.fields.y = v48;
  }
  v33 = *(float *)&_4__this->fields.easeType;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v58.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v58.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v54.fields.hasValue = &v48;
    v58.fields.z = 0.0;
    v48 = 0LL;
    v49 = 0LL;
    *(_QWORD *)&v54.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v54, v58, v26);
    v35 = v48;
    v34 = v49;
  }
  else
  {
    v34 = 0LL;
    v35 = 0LL;
  }
  v36 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  value_low = LODWORD(_4__this->fields.size.fields.value);
  v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v17,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v20 )
LABEL_29:
    sub_1B64324(Instance);
  *(_QWORD *)&v56.fields.hasValue = v35;
  *(_QWORD *)&v56.fields.value.fields.y = v34;
  v52 = v36;
  MapCamera__StartAutoWork(v20, v33, v56, v52, value_low, v38, 0LL);
  v41 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v39, v40);
  System_Func_bool____ctor(
    v41,
    (Il2CppObject *)v17,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    0LL);
  v44 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v42, v43);
  UnityEngine_WaitUntil___ctor(v44, v41, 0LL);
  this->fields.__2__current = (Il2CppObject *)v44;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v44, v46, v47);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardMapCameraPerformance__Execute_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardMapCameraPerformance__Execute_d__9__System_Collections_IEnumerator_Reset(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
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
  v6 = sub_1B640DC(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall WarBoardMapCameraPerformance__Execute_d__9__System_Collections_IEnumerator_get_Current(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardMapCameraPerformance__Execute_d__9__System_IDisposable_Dispose(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardMapCameraPerformance___c__DisplayClass9_0___ctor(
        WarBoardMapCameraPerformance___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMapCameraPerformance___c__DisplayClass9_0___Execute_b__0(
        WarBoardMapCameraPerformance___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  this->fields.workFinished = 1;
}


bool __fastcall WarBoardMapCameraPerformance___c__DisplayClass9_0___Execute_b__1(
        WarBoardMapCameraPerformance___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  return this->fields.workFinished;
}
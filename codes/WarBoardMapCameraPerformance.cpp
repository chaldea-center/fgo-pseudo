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
  if ( !byte_4B16193 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, method);
    byte_4B16193 = 1;
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
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1A1F6 & 1) == 0 )
  {
    sub_1BCAFF8(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method);
    byte_4B1A1F6 = 1;
  }
  v3 = sub_1BCB244(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B1A1F7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B1A1F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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
  __int64 v5; // x1

  if ( (byte_4B1A1F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B1A1F5 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v5);
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
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x25
  __int64 v16; // x20
  void *Instance; // x0
  const MethodInfo *v18; // x1
  const MethodInfo_37DD510 *v19; // x2
  MapCamera_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  bool result; // w0
  System_Nullable_float__o v24; // x24
  const MethodInfo_37DD510 *v25; // x2
  char *v26; // x22
  int v27; // s0
  float ZoomSize; // s0
  float v31; // s8
  __int64 v32; // x22
  __int64 v33; // x23
  System_Nullable_float__o v34; // x24
  int32_t value_low; // w25
  System_Action_o *v36; // x26
  System_Func_bool__o *v37; // x21
  UnityEngine_WaitUntil_o *v38; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // [xsp+0h] [xbp-60h] BYREF
  __int64 v43; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v44; // 0:x0.8
  System_Nullable_float__o v45; // 0:x3.8
  System_Nullable_float__o v46; // 0:x3.8
  System_Nullable_Vector3__o v47; // 0:x0.16
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x1.16
  System_Nullable_Vector3__o v50; // 0:x1.16
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A1F8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&System_Func_bool__TypeInfo, v3);
    sub_1BCAFF8(&MapCameraViewAdjusterUtil_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Nullable_Vector2__GetValueOrDefault__, v5);
    sub_1BCAFF8(&Method_System_Nullable_Vector3___ctor__, v6);
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, v7);
    sub_1BCAFF8(&Method_System_Nullable_Vector2__get_HasValue__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1BCAFF8(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v10);
    sub_1BCAFF8(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v11);
    sub_1BCAFF8(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v12);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v13);
    byte_4B1A1F8 = 1;
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
  v16 = sub_1BCB244(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !v16 )
    goto LABEL_29;
  v20 = (MapCamera_o *)*((_QWORD *)Instance + 6);
  *(_BYTE *)(v16 + 16) = 0;
  if ( !_4__this )
    goto LABEL_29;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v51.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v51.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v47.fields.hasValue = &v42;
    v51.fields.z = 0.0;
    v42 = 0LL;
    v43 = 0LL;
    *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v47, v51, v19);
    v22 = v42;
    v21 = v43;
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  v24 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  *(_QWORD *)&v49.fields.hasValue = v22;
  *(_QWORD *)&v49.fields.value.fields.y = v21;
  v45 = v24;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v20, v49, v45, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v20 )
      goto LABEL_29;
    v26 = (char *)Instance;
    Instance = v20->fields.mScrl;
    if ( !Instance )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)&v27 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v26 )
      goto LABEL_29;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         (WarBoardMapCameraPerformance_o *)Instance,
                         *(UnityEngine_Vector3_o *)&v27,
                         *(UnityEngine_Vector3_o *)(v26 + 16),
                         v18);
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
    v44 = (System_Nullable_float__o)&v42;
    v42 = 0LL;
    System_Nullable_float____ctor(v44, ZoomSize, (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.value.fields.y = v42;
  }
  v31 = *(float *)&_4__this->fields.easeType;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v52.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v52.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v48.fields.hasValue = &v42;
    v52.fields.z = 0.0;
    v42 = 0LL;
    v43 = 0LL;
    *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v48, v52, v25);
    v33 = v42;
    v32 = v43;
  }
  else
  {
    v32 = 0LL;
    v33 = 0LL;
  }
  v34 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  value_low = LODWORD(_4__this->fields.size.fields.value);
  v36 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v16,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v20 )
LABEL_29:
    sub_1BCB254(Instance, v18);
  *(_QWORD *)&v50.fields.hasValue = v33;
  *(_QWORD *)&v50.fields.value.fields.y = v32;
  v46 = v34;
  MapCamera__StartAutoWork(v20, v31, v50, v46, value_low, v36, 0LL);
  v37 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v37,
    (Il2CppObject *)v16,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    0LL);
  v38 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v38, v37, 0LL);
  this->fields.__2__current = (Il2CppObject *)v38;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v38, v40, v41);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
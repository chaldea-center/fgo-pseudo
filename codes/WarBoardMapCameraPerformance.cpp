void WarBoardMapCameraPerformance___ctor(
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


bool WarBoardMapCameraPerformance__CheckCloseDistance(
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
  if ( !byte_4CE7E5B )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E5B = 1;
  }
  v10 = v9 - x;
  v11 = v8 - y;
  v12 = v7 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return sqrtf((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11))) < 1.0;
}


System_Collections_IEnumerator_o *WarBoardMapCameraPerformance__Execute(
        WarBoardMapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEC255 & 1) == 0 )
  {
    sub_1C7BAE8(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
    byte_4CEC255 = 1;
  }
  v3 = sub_1C7BD34(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4CEC256 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC256 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CEC254 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CEC254 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0);
}


void WarBoardMapCameraPerformance__Execute_d__9___ctor(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardMapCameraPerformance__Execute_d__9__MoveNext(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x25
  __int64 v5; // x20
  void *Instance; // x0
  const MethodInfo *v7; // x1
  const MethodInfo_3969818 *v8; // x2
  MapCamera_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  bool result; // w0
  System_Nullable_float__o v13; // x24
  System_Nullable_float__o v14; // x3
  const MethodInfo_3969818 *v15; // x2
  char *v16; // x22
  float ZoomSize; // s0
  System_Nullable_float__o v18; // x0
  float v19; // s8
  __int64 v20; // x22
  __int64 v21; // x23
  System_Nullable_float__o v22; // x24
  int32_t value_low; // w25
  System_Action_o *v24; // x26
  System_Nullable_float__o v25; // x3
  System_Func_bool__o *v26; // x21
  UnityEngine_WaitUntil_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // [xsp+0h] [xbp-60h] BYREF
  __int64 v36; // [xsp+8h] [xbp-58h]
  System_Nullable_Vector3__o v37; // 0:x0.16
  System_Nullable_Vector3__o v38; // 0:x0.16
  System_Nullable_Vector3__o v39; // 0:x1.16
  System_Nullable_Vector3__o v40; // 0:x1.16
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEC257 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_Vector3___ctor__);
    sub_1C7BAE8(&Method_System_Nullable_float___ctor__);
    sub_1C7BAE8(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C7BAE8(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__);
    sub_1C7BAE8(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__);
    sub_1C7BAE8(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CEC257 = 1;
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
  v5 = sub_1C7BD34(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !v5 )
    goto LABEL_29;
  v9 = (MapCamera_o *)*((_QWORD *)Instance + 6);
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_29;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v41.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v41.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v37.fields.hasValue = &v35;
    v41.fields.z = 0.0;
    v35 = 0;
    v36 = 0;
    *(_QWORD *)&v37.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v37, v41, v8);
    v11 = v35;
    v10 = v36;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v13 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  *(_QWORD *)&v39.fields.hasValue = v11;
  *(_QWORD *)&v39.fields.value.fields.y = v10;
  v14 = v13;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v9, v39, v14, 0);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v9 )
      goto LABEL_29;
    v16 = (char *)Instance;
    Instance = v9->fields.mScrl;
    if ( !Instance )
      goto LABEL_29;
    ScrlPosVec3 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0);
    if ( !v16 )
      goto LABEL_29;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         (WarBoardMapCameraPerformance_o *)Instance,
                         ScrlPosVec3,
                         *(UnityEngine_Vector3_o *)(v16 + 16),
                         v7);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 0;
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !v9 )
      goto LABEL_29;
    Instance = v9->fields.mZoom;
    if ( !Instance )
      goto LABEL_29;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
    v18 = (System_Nullable_float__o)&v35;
    v35 = 0;
    System_Nullable_float____ctor(v18, ZoomSize, (const MethodInfo_3967354 *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.value.fields.y = v35;
  }
  v19 = *(float *)&_4__this->fields.easeType;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v43.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v43.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v38.fields.hasValue = &v35;
    v43.fields.z = 0.0;
    v35 = 0;
    v36 = 0;
    *(_QWORD *)&v38.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v38, v43, v15);
    v21 = v35;
    v20 = v36;
  }
  else
  {
    v20 = 0;
    v21 = 0;
  }
  v22 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  value_low = LODWORD(_4__this->fields.size.fields.value);
  v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0);
  if ( !v9 )
LABEL_29:
    sub_1C7BD40(Instance, v7);
  *(_QWORD *)&v40.fields.hasValue = v21;
  *(_QWORD *)&v40.fields.value.fields.y = v20;
  v25 = v22;
  MapCamera__StartAutoWork(v9, v19, v40, v25, value_low, v24, 0);
  v26 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    0);
  v27 = (UnityEngine_WaitUntil_o *)sub_1C7BD34(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v27, v26, 0);
  this->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = &this->fields.__2__current;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *WarBoardMapCameraPerformance__Execute_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardMapCameraPerformance__Execute_d__9__System_Collections_IEnumerator_Reset(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *WarBoardMapCameraPerformance__Execute_d__9__System_Collections_IEnumerator_get_Current(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardMapCameraPerformance__Execute_d__9__System_IDisposable_Dispose(
        WarBoardMapCameraPerformance__Execute_d__9_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardMapCameraPerformance___c__DisplayClass9_0___ctor(
        WarBoardMapCameraPerformance___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMapCameraPerformance___c__DisplayClass9_0___Execute_b__0(
        WarBoardMapCameraPerformance___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  this->fields.workFinished = 1;
}


bool WarBoardMapCameraPerformance___c__DisplayClass9_0___Execute_b__1(
        WarBoardMapCameraPerformance___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  return this->fields.workFinished;
}
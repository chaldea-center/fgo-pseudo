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
  struct UnityEngine_Vector2_o value; // x24
  float v13; // w23

  value = position.fields.value;
  v13 = *(float *)&position.fields.has_value;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  *(float *)&this->fields.easeType = second;
  *(struct UnityEngine_Vector2_o *)(&this->fields._isPause_k__BackingField + 3) = value;
  this->fields.position.fields.value.fields.y = v13;
  *(System_Nullable_float__o *)&this->fields.position.fields.has_value = size;
  *(_DWORD *)&this->fields.size.fields.has_value = easeType;
  LOBYTE(this->fields.second) = skipCloseDistance;
  BYTE1(this->fields.second) = isChangeSize;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMapCameraPerformance__CheckCloseDistance(
        WarBoardMapCameraPerformance_o *this,
        UnityEngine_Vector3_o a,
        UnityEngine_Vector3_o b,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v5; // [xsp+0h] [xbp-10h] BYREF

  a.fields.x = a.fields.x - b.fields.x;
  a.fields.y = a.fields.y - b.fields.y;
  a.fields.z = a.fields.z - b.fields.z;
  v5 = a;
  return UnityEngine_Vector3__get_magnitude(a, (const MethodInfo *)&v5) < 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardMapCameraPerformance__Execute(
        WarBoardMapCameraPerformance_o *this,
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

  if ( (byte_438AE7F & 1) == 0 )
  {
    sub_B775C4(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
    byte_438AE7F = 1;
  }
  v3 = sub_B77694(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
  WarBoardMapCameraPerformance__Execute_d__9___ctor((WarBoardMapCameraPerformance__Execute_d__9_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438AE80 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AE80 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438AE7E & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AE7E = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
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
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x21
  __int64 v5; // x20
  void *Instance; // x0
  __int64 v7; // x1
  const MethodInfo_247A004 *v8; // x2
  MapCamera_o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  bool result; // w0
  System_Nullable_float__o v13; // x25
  const MethodInfo_247A004 *v14; // x2
  char *v15; // x23
  int v16; // s0
  float ZoomSize; // s0
  float v20; // s8
  __int64 v21; // x23
  __int64 v22; // x24
  System_Nullable_float__o v23; // x25
  int32_t v24; // w21
  System_Action_o *v25; // x26
  System_Func_bool__o *v26; // x21
  UnityEngine_WaitUntil_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // [xsp+0h] [xbp-60h] BYREF
  __int64 v36; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v37; // 0:x0.8
  System_Nullable_float__o v38; // 0:x3.8
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_Vector3__o v40; // 0:x0.16
  System_Nullable_Vector3__o v41; // 0:x0.16
  System_Nullable_Vector3__o v42; // 0:x1.16
  System_Nullable_Vector3__o v43; // 0:x1.16
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4389254 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__);
    sub_B775C4(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__);
    sub_B775C4(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    byte_4389254 = 1;
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
  v5 = sub_B77694(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !v5 )
    goto LABEL_30;
  v9 = (MapCamera_o *)*((_QWORD *)Instance + 5);
  *(_BYTE *)(v5 + 16) = 0;
  if ( !_4__this )
    goto LABEL_30;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v40.fields.value.fields.x = &v35;
    v44.fields.z = 0.0;
    LODWORD(v44.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v40.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v44.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v35 = 0LL;
    v36 = 0LL;
    System_Nullable_Vector3____ctor(v40, v44, v8);
    v10 = v35;
    v11 = v36;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  v13 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(_QWORD *)&v42.fields.value.fields.x = v10;
  *(_QWORD *)&v42.fields.value.fields.z = v11;
  v38 = v13;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v9, v42, v38, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v9 )
      goto LABEL_30;
    v15 = (char *)Instance;
    Instance = v9->fields.mScrl;
    if ( !Instance )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)&v16 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v15 )
      goto LABEL_30;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         _4__this,
                         *(UnityEngine_Vector3_o *)&v16,
                         *(UnityEngine_Vector3_o *)(v15 + 16),
                         0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 0;
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !v9 )
      goto LABEL_30;
    Instance = v9->fields.mZoom;
    if ( !Instance )
      goto LABEL_30;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v37 = (System_Nullable_float__o)&v35;
    v35 = 0LL;
    System_Nullable_float____ctor(v37, ZoomSize, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.has_value = v35;
  }
  v20 = *(float *)&_4__this->fields.easeType;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v41.fields.value.fields.x = &v35;
    v45.fields.z = 0.0;
    LODWORD(v45.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v41.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v45.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v35 = 0LL;
    v36 = 0LL;
    System_Nullable_Vector3____ctor(v41, v45, v14);
    v21 = v35;
    v22 = v36;
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  v23 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  v24 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
  v25 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v9 )
LABEL_30:
    sub_B7769C(Instance, v7);
  *(_QWORD *)&v43.fields.value.fields.x = v21;
  *(_QWORD *)&v43.fields.value.fields.z = v22;
  v39 = v23;
  MapCamera__StartAutoWork(v9, v20, v43, v39, v24, v25, 0LL);
  v26 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v27 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v27, v26, 0LL);
  this->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = &this->fields.__2__current;
  sub_B77560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
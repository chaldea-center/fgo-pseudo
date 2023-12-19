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

  if ( (byte_40F8557 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method);
    byte_40F8557 = 1;
  }
  v6 = sub_B170CC(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method, v2, v3, v4);
  WarBoardMapCameraPerformance__Execute_d__9___ctor((WarBoardMapCameraPerformance__Execute_d__9_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40F8558 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8558 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40F8556 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8556 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x21
  __int64 v20; // x20
  WebViewManager_o *Instance; // x0
  const MethodInfo_29CF778 *v22; // x2
  MapCamera_o *webViewBase; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  bool result; // w0
  System_Nullable_float__o v27; // x25
  MapCameraViewAdjusterUtil_CameraDestinationInfo_o *SafeCameraDestination; // x0
  __int64 v29; // x1
  const MethodInfo_29CF778 *v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  MapCameraViewAdjusterUtil_CameraDestinationInfo_o *v33; // x23
  MapScroll_o *mScrl; // x0
  int v35; // s0
  MapZoom_o *mZoom; // x0
  float ZoomSize; // s0
  float v40; // s8
  __int64 v41; // x23
  __int64 v42; // x24
  System_Nullable_float__o v43; // x25
  int32_t v44; // w21
  System_Action_o *v45; // x26
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Func_bool__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  UnityEngine_WaitUntil_o *v55; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // [xsp+0h] [xbp-60h] BYREF
  __int64 v64; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v65; // 0:x0.8
  System_Nullable_float__o v66; // 0:x3.8
  System_Nullable_float__o v67; // 0:x3.8
  System_Nullable_Vector3__o v68; // 0:x0.16
  System_Nullable_Vector3__o v69; // 0:x0.16
  System_Nullable_Vector3__o v70; // 0:x1.16
  System_Nullable_Vector3__o v71; // 0:x1.16
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7845 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v6);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&MapCameraViewAdjusterUtil_TypeInfo, v8);
    sub_B16FFC(&Method_System_Nullable_Vector2__GetValueOrDefault__, v9);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v10);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v11);
    sub_B16FFC(&Method_System_Nullable_Vector2__get_HasValue__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B16FFC(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v14);
    sub_B16FFC(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v15);
    sub_B16FFC(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v17);
    byte_40F7845 = 1;
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
  v20 = sub_B170CC(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !v20 )
    goto LABEL_30;
  webViewBase = (MapCamera_o *)Instance->fields.webViewBase;
  *(_BYTE *)(v20 + 16) = 0;
  if ( !_4__this )
    goto LABEL_30;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v68.fields.value.fields.x = &v63;
    v72.fields.z = 0.0;
    LODWORD(v72.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v68.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v72.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v63 = 0LL;
    v64 = 0LL;
    System_Nullable_Vector3____ctor(v68, v72, v22);
    v24 = v63;
    v25 = v64;
  }
  else
  {
    v24 = 0LL;
    v25 = 0LL;
  }
  v27 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(_QWORD *)&v70.fields.value.fields.x = v24;
  *(_QWORD *)&v70.fields.value.fields.z = v25;
  v66 = v27;
  SafeCameraDestination = MapCameraViewAdjusterUtil__GetSafeCameraDestination(webViewBase, v70, v66, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !webViewBase )
      goto LABEL_30;
    v33 = SafeCameraDestination;
    mScrl = webViewBase->fields.mScrl;
    if ( !mScrl )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)&v35 = MapScroll__GetScrlPosVec3(mScrl, 0LL);
    if ( !v33 )
      goto LABEL_30;
    if ( WarBoardMapCameraPerformance__CheckCloseDistance(
           _4__this,
           *(UnityEngine_Vector3_o *)&v35,
           v33->fields._position_k__BackingField,
           0LL) )
    {
      return 0;
    }
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !webViewBase )
      goto LABEL_30;
    mZoom = webViewBase->fields.mZoom;
    if ( !mZoom )
      goto LABEL_30;
    ZoomSize = MapZoom__GetZoomSize(mZoom, 0LL);
    v65 = (System_Nullable_float__o)&v63;
    v63 = 0LL;
    System_Nullable_float____ctor(v65, ZoomSize, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.has_value = v63;
  }
  v40 = *(float *)&_4__this->fields.easeType;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v69.fields.value.fields.x = &v63;
    v73.fields.z = 0.0;
    LODWORD(v73.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v69.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v73.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v63 = 0LL;
    v64 = 0LL;
    System_Nullable_Vector3____ctor(v69, v73, v30);
    v41 = v63;
    v42 = v64;
  }
  else
  {
    v41 = 0LL;
    v42 = 0LL;
  }
  v43 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  v44 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
  v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v20,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !webViewBase )
LABEL_30:
    sub_B170D4();
  *(_QWORD *)&v71.fields.value.fields.x = v41;
  *(_QWORD *)&v71.fields.value.fields.z = v42;
  v67 = v43;
  MapCamera__StartAutoWork(webViewBase, v40, v71, v67, v44, v45, 0LL);
  v50 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v46, v47, v48, v49);
  System_Func_bool____ctor(
    v50,
    (Il2CppObject *)v20,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v55 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v51, v52, v53, v54);
  UnityEngine_WaitUntil___ctor(v55, v50, 0LL);
  this->fields.__2__current = (Il2CppObject *)v55;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v55, v57, v58, v59, v60, v61, v62);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
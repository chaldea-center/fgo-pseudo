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
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42132C0 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method);
    byte_42132C0 = 1;
  }
  v4 = sub_B0D974(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method, v2);
  WarBoardMapCameraPerformance__Execute_d__9___ctor((WarBoardMapCameraPerformance__Execute_d__9_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_42132C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42132C1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_42132BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42132BF = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v15; // x1
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x21
  __int64 v18; // x20
  void *Instance; // x0
  const MethodInfo_299B944 *v20; // x2
  MapCamera_o *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x24
  bool result; // w0
  System_Nullable_float__o v25; // x25
  __int64 v26; // x1
  const MethodInfo_299B944 *v27; // x2
  char *v28; // x23
  int v29; // s0
  float ZoomSize; // s0
  float v33; // s8
  __int64 v34; // x23
  __int64 v35; // x24
  System_Nullable_float__o v36; // x25
  int32_t v37; // w21
  System_Action_o *v38; // x26
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_bool__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_WaitUntil_o *v44; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // [xsp+0h] [xbp-60h] BYREF
  __int64 v53; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v54; // 0:x0.8
  System_Nullable_float__o v55; // 0:x3.8
  System_Nullable_float__o v56; // 0:x3.8
  System_Nullable_Vector3__o v57; // 0:x0.16
  System_Nullable_Vector3__o v58; // 0:x0.16
  System_Nullable_Vector3__o v59; // 0:x1.16
  System_Nullable_Vector3__o v60; // 0:x1.16
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421386C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v4);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&MapCameraViewAdjusterUtil_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Nullable_Vector2__GetValueOrDefault__, v7);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v8);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_B0D8A4(&Method_System_Nullable_Vector2__get_HasValue__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v12);
    sub_B0D8A4(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v13);
    sub_B0D8A4(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v15);
    byte_421386C = 1;
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
  v18 = sub_B0D974(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !v18 )
    goto LABEL_30;
  v21 = (MapCamera_o *)*((_QWORD *)Instance + 5);
  *(_BYTE *)(v18 + 16) = 0;
  if ( !_4__this )
    goto LABEL_30;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v57.fields.value.fields.x = &v52;
    v61.fields.z = 0.0;
    LODWORD(v61.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v57.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v61.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v52 = 0LL;
    v53 = 0LL;
    System_Nullable_Vector3____ctor(v57, v61, v20);
    v22 = v52;
    v23 = v53;
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v25 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(_QWORD *)&v59.fields.value.fields.x = v22;
  *(_QWORD *)&v59.fields.value.fields.z = v23;
  v55 = v25;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v21, v59, v55, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v21 )
      goto LABEL_30;
    v28 = (char *)Instance;
    Instance = v21->fields.mScrl;
    if ( !Instance )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)&v29 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v28 )
      goto LABEL_30;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         _4__this,
                         *(UnityEngine_Vector3_o *)&v29,
                         *(UnityEngine_Vector3_o *)(v28 + 16),
                         0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 0;
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !v21 )
      goto LABEL_30;
    Instance = v21->fields.mZoom;
    if ( !Instance )
      goto LABEL_30;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v54 = (System_Nullable_float__o)&v52;
    v52 = 0LL;
    System_Nullable_float____ctor(v54, ZoomSize, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.has_value = v52;
  }
  v33 = *(float *)&_4__this->fields.easeType;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v58.fields.value.fields.x = &v52;
    v62.fields.z = 0.0;
    LODWORD(v62.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v58.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v62.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v52 = 0LL;
    v53 = 0LL;
    System_Nullable_Vector3____ctor(v58, v62, v27);
    v34 = v52;
    v35 = v53;
  }
  else
  {
    v34 = 0LL;
    v35 = 0LL;
  }
  v36 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  v37 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
  v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v18,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v21 )
LABEL_30:
    sub_B0D97C(Instance);
  *(_QWORD *)&v60.fields.value.fields.x = v34;
  *(_QWORD *)&v60.fields.value.fields.z = v35;
  v56 = v36;
  MapCamera__StartAutoWork(v21, v33, v60, v56, v37, v38, 0LL);
  v41 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v39, v40);
  System_Func_bool____ctor(
    v41,
    (Il2CppObject *)v18,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v44 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v42, v43);
  UnityEngine_WaitUntil___ctor(v44, v41, 0LL);
  this->fields.__2__current = (Il2CppObject *)v44;
  p__2__current = &this->fields.__2__current;
  sub_B0D840((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
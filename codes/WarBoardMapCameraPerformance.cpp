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

  if ( (byte_418650E & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method);
    byte_418650E = 1;
  }
  v3 = sub_B2C42C(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
  WarBoardMapCameraPerformance__Execute_d__9___ctor((WarBoardMapCameraPerformance__Execute_d__9_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418650F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418650F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418650D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418650D = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v14; // x1
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x21
  __int64 v17; // x20
  void *Instance; // x0
  __int64 v19; // x1
  const MethodInfo_2155668 *v20; // x2
  MapCamera_o *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x24
  bool result; // w0
  System_Nullable_float__o v25; // x25
  const MethodInfo_2155668 *v26; // x2
  char *v27; // x23
  int v28; // s0
  float ZoomSize; // s0
  float v32; // s8
  __int64 v33; // x23
  __int64 v34; // x24
  System_Nullable_float__o v35; // x25
  int32_t v36; // w21
  System_Action_o *v37; // x26
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitUntil_o *v39; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // [xsp+0h] [xbp-60h] BYREF
  __int64 v48; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v49; // 0:x0.8
  System_Nullable_float__o v50; // 0:x3.8
  System_Nullable_float__o v51; // 0:x3.8
  System_Nullable_Vector3__o v52; // 0:x0.16
  System_Nullable_Vector3__o v53; // 0:x0.16
  System_Nullable_Vector3__o v54; // 0:x1.16
  System_Nullable_Vector3__o v55; // 0:x1.16
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41866F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&MapCameraViewAdjusterUtil_TypeInfo, v5);
    sub_B2C35C(&Method_System_Nullable_Vector2__GetValueOrDefault__, v6);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v7);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B2C35C(&Method_System_Nullable_Vector2__get_HasValue__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v11);
    sub_B2C35C(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v12);
    sub_B2C35C(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v14);
    byte_41866F1 = 1;
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
  v17 = sub_B2C42C(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !v17 )
    goto LABEL_30;
  v21 = (MapCamera_o *)*((_QWORD *)Instance + 5);
  *(_BYTE *)(v17 + 16) = 0;
  if ( !_4__this )
    goto LABEL_30;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v52.fields.value.fields.x = &v47;
    v56.fields.z = 0.0;
    LODWORD(v56.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v52.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v56.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v47 = 0LL;
    v48 = 0LL;
    System_Nullable_Vector3____ctor(v52, v56, v20);
    v22 = v47;
    v23 = v48;
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
  *(_QWORD *)&v54.fields.value.fields.x = v22;
  *(_QWORD *)&v54.fields.value.fields.z = v23;
  v50 = v25;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v21, v54, v50, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v21 )
      goto LABEL_30;
    v27 = (char *)Instance;
    Instance = v21->fields.mScrl;
    if ( !Instance )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)&v28 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v27 )
      goto LABEL_30;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         _4__this,
                         *(UnityEngine_Vector3_o *)&v28,
                         *(UnityEngine_Vector3_o *)(v27 + 16),
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
    v49 = (System_Nullable_float__o)&v47;
    v47 = 0LL;
    System_Nullable_float____ctor(v49, ZoomSize, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.has_value = v47;
  }
  v32 = *(float *)&_4__this->fields.easeType;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v53.fields.value.fields.x = &v47;
    v57.fields.z = 0.0;
    LODWORD(v57.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v53.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v57.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v47 = 0LL;
    v48 = 0LL;
    System_Nullable_Vector3____ctor(v53, v57, v26);
    v33 = v47;
    v34 = v48;
  }
  else
  {
    v33 = 0LL;
    v34 = 0LL;
  }
  v35 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  v36 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
  v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v17,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v21 )
LABEL_30:
    sub_B2C434(Instance, v19);
  *(_QWORD *)&v55.fields.value.fields.x = v33;
  *(_QWORD *)&v55.fields.value.fields.z = v34;
  v51 = v35;
  MapCamera__StartAutoWork(v21, v32, v55, v51, v36, v37, 0LL);
  v38 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v38,
    (Il2CppObject *)v17,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v39 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v39, v38, 0LL);
  this->fields.__2__current = (Il2CppObject *)v39;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
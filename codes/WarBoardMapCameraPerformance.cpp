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

  if ( (byte_42E7594 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7594 = 1;
  }
  v5 = sub_B5D694(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
  WarBoardMapCameraPerformance__Execute_d__9___ctor((WarBoardMapCameraPerformance__Execute_d__9_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7595 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7595 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardMapCameraPerformance__OnStart(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7593 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7593 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x21
  __int64 v43; // x20
  void *Instance; // x0
  __int64 v45; // x1
  const MethodInfo_234ED3C *v46; // x2
  MapCamera_o *v47; // x22
  __int64 v48; // x23
  __int64 v49; // x24
  bool result; // w0
  System_Nullable_float__o v51; // x25
  const MethodInfo_234ED3C *v52; // x2
  char *v53; // x23
  int v54; // s0
  float ZoomSize; // s0
  float v58; // s8
  __int64 v59; // x23
  __int64 v60; // x24
  System_Nullable_float__o v61; // x25
  int32_t v62; // w21
  System_Action_o *v63; // x26
  System_Func_bool__o *v64; // x21
  UnityEngine_WaitUntil_o *v65; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // [xsp+0h] [xbp-60h] BYREF
  __int64 v74; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v75; // 0:x0.8
  System_Nullable_float__o v76; // 0:x3.8
  System_Nullable_float__o v77; // 0:x3.8
  System_Nullable_Vector3__o v78; // 0:x0.16
  System_Nullable_Vector3__o v79; // 0:x0.16
  System_Nullable_Vector3__o v80; // 0:x1.16
  System_Nullable_Vector3__o v81; // 0:x1.16
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E76CC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MapCameraViewAdjusterUtil_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Nullable_Vector2__GetValueOrDefault__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Nullable_Vector2__get_HasValue__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v32, v33, v34);
    sub_B5D5C4(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v38, v39, v40);
    byte_42E76CC = 1;
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
  v43 = sub_B5D694(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !v43 )
    goto LABEL_30;
  v47 = (MapCamera_o *)*((_QWORD *)Instance + 5);
  *(_BYTE *)(v43 + 16) = 0;
  if ( !_4__this )
    goto LABEL_30;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v78.fields.value.fields.x = &v73;
    v82.fields.z = 0.0;
    LODWORD(v82.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v78.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v82.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v73 = 0LL;
    v74 = 0LL;
    System_Nullable_Vector3____ctor(v78, v82, v46);
    v48 = v73;
    v49 = v74;
  }
  else
  {
    v48 = 0LL;
    v49 = 0LL;
  }
  v51 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(_QWORD *)&v80.fields.value.fields.x = v48;
  *(_QWORD *)&v80.fields.value.fields.z = v49;
  v76 = v51;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v47, v80, v76, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v47 )
      goto LABEL_30;
    v53 = (char *)Instance;
    Instance = v47->fields.mScrl;
    if ( !Instance )
      goto LABEL_30;
    *(UnityEngine_Vector3_o *)&v54 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v53 )
      goto LABEL_30;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         _4__this,
                         *(UnityEngine_Vector3_o *)&v54,
                         *(UnityEngine_Vector3_o *)(v53 + 16),
                         0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 0;
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !v47 )
      goto LABEL_30;
    Instance = v47->fields.mZoom;
    if ( !Instance )
      goto LABEL_30;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v75 = (System_Nullable_float__o)&v73;
    v73 = 0LL;
    System_Nullable_float____ctor(v75, ZoomSize, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.has_value = v73;
  }
  v58 = *(float *)&_4__this->fields.easeType;
  if ( LOBYTE(_4__this->fields.position.fields.value.fields.y) )
  {
    *(_QWORD *)&v79.fields.value.fields.x = &v73;
    v83.fields.z = 0.0;
    LODWORD(v83.fields.x) = *(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    *(_QWORD *)&v79.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    LODWORD(v83.fields.y) = HIDWORD(*(_QWORD *)(&_4__this->fields._isPause_k__BackingField + 3));
    v73 = 0LL;
    v74 = 0LL;
    System_Nullable_Vector3____ctor(v79, v83, v52);
    v59 = v73;
    v60 = v74;
  }
  else
  {
    v59 = 0LL;
    v60 = 0LL;
  }
  v61 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.has_value;
  v62 = *(_DWORD *)&_4__this->fields.size.fields.has_value;
  v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v43,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v47 )
LABEL_30:
    sub_B5D69C(Instance, v45);
  *(_QWORD *)&v81.fields.value.fields.x = v59;
  *(_QWORD *)&v81.fields.value.fields.z = v60;
  v77 = v61;
  MapCamera__StartAutoWork(v47, v58, v81, v77, v62, v63, 0LL);
  v64 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v64,
    (Il2CppObject *)v43,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v65 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v65, v64, 0LL);
  this->fields.__2__current = (Il2CppObject *)v65;
  p__2__current = &this->fields.__2__current;
  sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v65, v67, v68, v69, v70, v71, v72);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
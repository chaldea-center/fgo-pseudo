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
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s11
  float v8; // s10
  float v9; // s12
  float v10; // s13
  float v11; // s11
  float v12; // s9
  float v13; // s8

  z = b.fields.z;
  y = b.fields.y;
  x = b.fields.x;
  v8 = a.fields.z;
  v9 = a.fields.y;
  v10 = a.fields.x;
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v4);
    byte_4B109C3 = 1;
  }
  v11 = v10 - x;
  v12 = v9 - y;
  v13 = v8 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  return sqrtf((float)(v13 * v13) + (float)((float)(v11 * v11) + (float)(v12 * v12))) < 1.0;
}


System_Collections_IEnumerator_o *__fastcall WarBoardMapCameraPerformance__Execute(
        WarBoardMapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14075 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method, v2);
    byte_4B14075 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B14076 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B14076 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B14074 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B14074 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t _1__state; // w8
  struct WarBoardMapCameraPerformance_o *_4__this; // x25
  __int64 v29; // x20
  void *Instance; // x0
  const MethodInfo *v31; // x1
  const MethodInfo_36C2D28 *v32; // x2
  MapCamera_o *v33; // x21
  __int64 v34; // x22
  __int64 v35; // x23
  bool result; // w0
  System_Nullable_float__o v37; // x24
  const MethodInfo_36C2D28 *v38; // x2
  __int64 v39; // x3
  char *v40; // x22
  int v41; // s0
  float ZoomSize; // s0
  float v45; // s8
  __int64 v46; // x22
  __int64 v47; // x23
  System_Nullable_float__o v48; // x24
  int32_t value_low; // w25
  System_Action_o *v50; // x26
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Func_bool__o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  UnityEngine_WaitUntil_o *v58; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // [xsp+0h] [xbp-60h] BYREF
  __int64 v67; // [xsp+8h] [xbp-58h]
  System_Nullable_float__o v68; // 0:x0.8
  System_Nullable_float__o v69; // 0:x3.8
  System_Nullable_float__o v70; // 0:x3.8
  System_Nullable_Vector3__o v71; // 0:x0.16
  System_Nullable_Vector3__o v72; // 0:x0.16
  System_Nullable_Vector3__o v73; // 0:x1.16
  System_Nullable_Vector3__o v74; // 0:x1.16
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14077 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&MapCameraViewAdjusterUtil_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Nullable_Vector2__GetValueOrDefault__, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Nullable_Vector2__get_HasValue__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__, v19, v20);
    sub_1BCA7E0(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__, v21, v22);
    sub_1BCA7E0(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v25, v26);
    byte_4B14077 = 1;
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
  v29 = sub_1BCAA2C(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !v29 )
    goto LABEL_29;
  v33 = (MapCamera_o *)*((_QWORD *)Instance + 6);
  *(_BYTE *)(v29 + 16) = 0;
  if ( !_4__this )
    goto LABEL_29;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v75.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v75.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v71.fields.hasValue = &v66;
    v75.fields.z = 0.0;
    v66 = 0LL;
    v67 = 0LL;
    *(_QWORD *)&v71.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v71, v75, v32);
    v35 = v66;
    v34 = v67;
  }
  else
  {
    v34 = 0LL;
    v35 = 0LL;
  }
  v37 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v31);
  *(_QWORD *)&v73.fields.hasValue = v35;
  *(_QWORD *)&v73.fields.value.fields.y = v34;
  v69 = v37;
  Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v33, v73, v69, 0LL);
  if ( LOBYTE(_4__this->fields.second) )
  {
    if ( !v33 )
      goto LABEL_29;
    v40 = (char *)Instance;
    Instance = v33->fields.mScrl;
    if ( !Instance )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)&v41 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0LL);
    if ( !v40 )
      goto LABEL_29;
    Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                         (WarBoardMapCameraPerformance_o *)Instance,
                         *(UnityEngine_Vector3_o *)&v41,
                         *(UnityEngine_Vector3_o *)(v40 + 16),
                         v31);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return 0;
  }
  if ( !BYTE1(_4__this->fields.second) )
  {
    if ( !v33 )
      goto LABEL_29;
    Instance = v33->fields.mZoom;
    if ( !Instance )
      goto LABEL_29;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v68 = (System_Nullable_float__o)&v66;
    v66 = 0LL;
    System_Nullable_float____ctor(v68, ZoomSize, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    *(_QWORD *)&_4__this->fields.position.fields.value.fields.y = v66;
  }
  v45 = *(float *)&_4__this->fields.easeType;
  if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    v76.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
    v76.fields.y = _4__this->fields.position.fields.value.fields.x;
    *(_QWORD *)&v72.fields.hasValue = &v66;
    v76.fields.z = 0.0;
    v66 = 0LL;
    v67 = 0LL;
    *(_QWORD *)&v72.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v72, v76, v38);
    v47 = v66;
    v46 = v67;
  }
  else
  {
    v46 = 0LL;
    v47 = 0LL;
  }
  v48 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
  value_low = LODWORD(_4__this->fields.size.fields.value);
  v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v38, v39);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v29,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
    0LL);
  if ( !v33 )
LABEL_29:
    sub_1BCAA3C(Instance, v31);
  *(_QWORD *)&v74.fields.hasValue = v47;
  *(_QWORD *)&v74.fields.value.fields.y = v46;
  v70 = v48;
  MapCamera__StartAutoWork(v33, v45, v74, v70, value_low, v50, 0LL);
  v54 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v51, v52, v53);
  System_Func_bool____ctor(
    v54,
    (Il2CppObject *)v29,
    Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
    0LL);
  v58 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v55, v56, v57);
  UnityEngine_WaitUntil___ctor(v58, v54, 0LL);
  this->fields.__2__current = (Il2CppObject *)v58;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v58, v60, v61, v62, v63, v64, v65);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
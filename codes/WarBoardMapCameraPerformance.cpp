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
  float y; // w23
  __int64 v13; // x24

  y = position.fields.value.fields.y;
  v13 = *(_QWORD *)&position.fields.hasValue;
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&position.fields.hasValue);
  *(float *)&this->fields.easeType = second;
  *(_QWORD *)(&this->fields._isPause_k__BackingField + 3) = v13;
  this->fields.position.fields.value.fields.x = y;
  *(System_Nullable_float__o *)&this->fields.position.fields.value.fields.y = size;
  LODWORD(this->fields.size.fields.value) = easeType;
  LOBYTE(this->fields.second) = skipCloseDistance;
  BYTE1(this->fields.second) = isChangeSize;
}


bool WarBoardMapCameraPerformance__CheckCloseDistance(
        WarBoardMapCameraPerformance_o *this,
        UnityEngine_Vector3_o a,
        UnityEngine_Vector3_o b,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float z; // s8
  float y; // s11
  float x; // s10
  float v8; // s9
  float v9; // s12
  float v10; // s13

  z = b.fields.z;
  y = b.fields.y;
  x = b.fields.x;
  v8 = a.fields.z;
  v9 = a.fields.y;
  v10 = a.fields.x;
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v4);
  return sqrtf(
           (float)((float)(v8 - z) * (float)(v8 - z))
         + (float)((float)((float)(v10 - x) * (float)(v10 - x)) + (float)((float)(v9 - y) * (float)(v9 - y)))) < 1.0;
}


System_Collections_IEnumerator_o *WarBoardMapCameraPerformance__Execute(
        WarBoardMapCameraPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E39F & 1) == 0 )
  {
    sub_2213A60(&WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
    byte_596E39F = 1;
  }
  v3 = sub_2213CCC(WarBoardMapCameraPerformance__Execute_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardMapCameraPerformance__OnEnd(WarBoardMapCameraPerformance_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_596E3A0 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E3A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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

  if ( (byte_596E39E & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E39E = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
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
  bool result; // w0
  struct WarBoardMapCameraPerformance_o *_4__this; // x25
  __int64 v6; // x20
  void *Instance; // x0
  const MethodInfo *v8; // x1
  const MethodInfo_45E9150 *v9; // x2
  MapCamera_o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w8
  System_Nullable_float__o v14; // x24
  System_Nullable_float__o v15; // x3
  const MethodInfo_45E9150 *v16; // x2
  char *v17; // x22
  float ZoomSize; // s0
  System_Nullable_float__o v19; // x0
  float v20; // s8
  __int64 v21; // x22
  __int64 v22; // x23
  System_Nullable_float__o v23; // x24
  int32_t value_low; // w25
  System_Action_o *v25; // x26
  System_Nullable_float__o v26; // x3
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitUntil_o *v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // [xsp+0h] [xbp-60h] BYREF
  __int64 v36; // [xsp+8h] [xbp-58h]
  System_Nullable_Vector3__o v37; // 0:x0.16
  System_Nullable_Vector3__o v38; // 0:x0.16
  System_Nullable_Vector3__o v39; // 0:x1.16
  System_Nullable_Vector3__o v40; // 0:x1.16
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E3A1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector2__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__);
    sub_2213A60(&Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__);
    sub_2213A60(&WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596E3A1 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_2213CCC(WarBoardMapCameraPerformance___c__DisplayClass9_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      if ( v6 )
      {
        v10 = (MapCamera_o *)*((_QWORD *)Instance + 6);
        *(_BYTE *)(v6 + 16) = 0;
        if ( _4__this )
        {
          if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
          {
            v41.fields.z = 0.0;
            *(_QWORD *)&v37.fields.hasValue = &v35;
            v41.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
            v41.fields.y = _4__this->fields.position.fields.value.fields.x;
            v35 = 0;
            v36 = 0;
            *(_QWORD *)&v37.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            System_Nullable_Vector3____ctor(v37, v41, v9);
            v12 = v35;
            v11 = v36;
          }
          else
          {
            v11 = 0;
            v12 = 0;
          }
          v14 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
          if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v8, v9);
          *(_QWORD *)&v39.fields.hasValue = v12;
          *(_QWORD *)&v39.fields.value.fields.y = v11;
          v15 = v14;
          Instance = MapCameraViewAdjusterUtil__GetSafeCameraDestination(v10, v39, v15, 0);
          if ( LOBYTE(_4__this->fields.second) )
          {
            if ( !v10 )
              goto LABEL_31;
            v17 = (char *)Instance;
            Instance = v10->fields.mScrl;
            if ( !Instance )
              goto LABEL_31;
            ScrlPosVec3 = MapScroll__GetScrlPosVec3((MapScroll_o *)Instance, 0);
            if ( !v17 )
              goto LABEL_31;
            Instance = (void *)WarBoardMapCameraPerformance__CheckCloseDistance(
                                 (WarBoardMapCameraPerformance_o *)Instance,
                                 ScrlPosVec3,
                                 *(UnityEngine_Vector3_o *)(v17 + 16),
                                 v8);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              return 0;
          }
          if ( !BYTE1(_4__this->fields.second) )
          {
            if ( !v10 )
              goto LABEL_31;
            Instance = v10->fields.mZoom;
            if ( !Instance )
              goto LABEL_31;
            ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
            v19 = (System_Nullable_float__o)&v35;
            v35 = 0;
            System_Nullable_float____ctor(
              v19,
              ZoomSize,
              (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&_4__this->fields.position.fields.value.fields.y = v35;
          }
          v20 = *(float *)&_4__this->fields.easeType;
          if ( *(&_4__this->fields._isPause_k__BackingField + 3) )
          {
            v43.fields.z = 0.0;
            *(_QWORD *)&v38.fields.hasValue = &v35;
            v43.fields.x = *(float *)&_4__this->fields.position.fields.hasValue;
            v43.fields.y = _4__this->fields.position.fields.value.fields.x;
            v35 = 0;
            v36 = 0;
            *(_QWORD *)&v38.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            System_Nullable_Vector3____ctor(v38, v43, v16);
            v22 = v35;
            v21 = v36;
          }
          else
          {
            v21 = 0;
            v22 = 0;
          }
          v23 = *(System_Nullable_float__o *)&_4__this->fields.position.fields.value.fields.y;
          value_low = LODWORD(_4__this->fields.size.fields.value);
          v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v6,
            Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__0__,
            0);
          if ( v10 )
          {
            *(_QWORD *)&v40.fields.hasValue = v22;
            *(_QWORD *)&v40.fields.value.fields.y = v21;
            v26 = v23;
            MapCamera__StartAutoWork(v10, v20, v40, v26, value_low, v25, 0);
            v27 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v27,
              (Il2CppObject *)v6,
              Method_WarBoardMapCameraPerformance___c__DisplayClass9_0__Execute_b__1__,
              0);
            v28 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v28, v27, 0);
            this->fields.__2__current = (Il2CppObject *)v28;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
              (int32_t)v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            v13 = 1;
            result = 1;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_31:
    sub_2213CDC(Instance, v8);
  }
  v13 = -1;
LABEL_29:
  this->fields.__1__state = v13;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardMapCameraPerformance__Execute_d__9_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
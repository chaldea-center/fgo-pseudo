void MapGimmickComponent___ctor(MapGimmickComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596D10D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D10D = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.mDepthBase = 30;
  this->fields.mEasingType = 17;
  *(_QWORD *)&this->fields.mScaleBase = 0x3ECCCCCD3F800000LL;
  this->fields.mHideSeName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mHideSeName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.mDispSeName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mDispSeName, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MapGimmickComponent__Awake(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MapGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_596D0F1 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_MapGimmickComponent___ctor__);
    sub_2213A60(&Method_CStateManager_MapGimmickComponent__add__);
    sub_2213A60(&CStateManager_MapGimmickComponent__TypeInfo);
    sub_2213A60(&MapGimmickComponent_StateDispAnim_TypeInfo);
    sub_2213A60(&MapGimmickComponent_StateHideAnim_TypeInfo);
    sub_2213A60(&MapGimmickComponent_StateMapMain_TypeInfo);
    sub_2213A60(&MapGimmickComponent_StateNone_TypeInfo);
    byte_596D0F1 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_2213CCC(CStateManager_MapGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E83D54 *)Method_CStateManager_MapGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MapGimmickComponent__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_2213CCC(MapGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MapGimmickComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_2213CCC(MapGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MapGimmickComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_2213CCC(MapGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_3E83E04 *)Method_CStateManager_MapGimmickComponent__add__),
          v19 = (CStateManager_T__o *)*p_mFSM,
          v20 = (Il2CppObject *)sub_2213CCC(MapGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v20, 0),
          !v19) )
    {
LABEL_9:
      sub_2213CDC(v13, v14);
    }
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MapGimmickComponent__add__);
    MapGimmickComponent__SetState(this, 1, 0, v21);
  }
}


void MapGimmickComponent__BeginGimmickFocus(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        CommonEffectComponent_o *touchEffectComponent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mMapCamera; // x22
  bool v8; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  MapScroll_o *mScrl; // x0
  UnityEngine_Coroutine_o *mFocusCoroutine; // x1
  struct MapCamera_o *v13; // x8
  struct MapCamera_o *v14; // x8
  struct MapZoom_o *mZoom; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v19; // x2
  float orthographicSize; // s11
  TerminalSceneComponent_c *v21; // x0
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *v23; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D109 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D109 = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mapGimmickEntity, touchEffectComponent);
  v8 = UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  if ( mapGimmickEntity && !v8 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    mScrl = (MapScroll_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)touchEffectComponent, 0, 0);
    if ( ((unsigned __int8)mScrl & 1) == 0 )
    {
      mFocusCoroutine = this->fields.mFocusCoroutine;
      if ( mFocusCoroutine )
        UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, mFocusCoroutine, 0);
      v13 = this->fields.mMapCamera;
      if ( v13 )
      {
        mScrl = v13->fields.mScrl;
        if ( mScrl )
        {
          ScrlPosVec3 = MapScroll__GetScrlPosVec3(mScrl, (const MethodInfo *)mFocusCoroutine);
          v14 = this->fields.mMapCamera;
          if ( v14 )
          {
            mZoom = v14->fields.mZoom;
            if ( mZoom )
            {
              mScrl = (MapScroll_o *)mZoom->fields.mCamera;
              if ( mScrl )
              {
                x = ScrlPosVec3.fields.x;
                y = ScrlPosVec3.fields.y;
                z = ScrlPosVec3.fields.z;
                orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mScrl, 0);
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, mFocusCoroutine, v19);
                if ( !byte_596A090 )
                {
                  sub_2213A60(&TerminalSceneComponent_TypeInfo);
                  byte_596A090 = 1;
                }
                v21 = TerminalSceneComponent_TypeInfo;
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, mFocusCoroutine, v19);
                  v21 = TerminalSceneComponent_TypeInfo;
                }
                mScrl = (MapScroll_o *)v21->static_fields->mInstance;
                if ( mScrl )
                {
                  TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)mScrl, 1, 0, 0);
                  v32.fields.x = x;
                  v32.fields.y = y;
                  v32.fields.z = z;
                  v23 = MapGimmickComponent__CoWaitGimmickFocusEnd(
                          this,
                          mapGimmickEntity,
                          touchEffectComponent,
                          v32,
                          orthographicSize,
                          v22);
                  started = UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                              (UnityEngine_MonoBehaviour_o *)this,
                              v23,
                              0);
                  this->fields.mFocusCoroutine = started;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.mFocusCoroutine,
                    (int32_t)started,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_31;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  mScrl = (MapScroll_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)touchEffectComponent, 0, 0);
  if ( ((unsigned __int8)mScrl & 1) != 0 )
  {
    if ( touchEffectComponent )
    {
      touchEffectComponent->fields.isTouched = 0;
      return;
    }
LABEL_31:
    sub_2213CDC(mScrl, mFocusCoroutine);
  }
}


float MapGimmickComponent__CalcMoveTimeByDistance(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        UnityEngine_Vector3_o targetPos,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mMapCamera; // x21
  MapScroll_o *mScrl; // x0
  const MethodInfo *v10; // x1
  float result; // s0
  struct MapCamera_o *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  float v15; // s10
  float v16; // s11
  float v17; // s0
  float v18; // s1
  float v19; // s8
  UnityEngine_Vector3_o ScrlPosVec3; // 0:s0.4,4:s1.4,8:s2.4

  y = targetPos.fields.y;
  x = targetPos.fields.x;
  if ( (byte_596D10C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D10C = 1;
  }
  mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mapGimmickEntity, method);
  mScrl = (MapScroll_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
  result = 0.0;
  if ( ((unsigned __int8)mScrl & 1) == 0 && mapGimmickEntity )
  {
    v12 = this->fields.mMapCamera;
    if ( !v12 || (mScrl = v12->fields.mScrl) == 0 )
      sub_2213CDC(mScrl, v10);
    ScrlPosVec3 = MapScroll__GetScrlPosVec3(mScrl, v10);
    v15 = ScrlPosVec3.fields.x;
    v16 = ScrlPosVec3.fields.y;
    if ( !byte_59699BF )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_59699BF = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v14);
    v17 = MapGimmickEntity__GetTouchFocusCameraMoveBaseDistance(mapGimmickEntity, 0)
        / fmaxf(sqrtf((float)((float)(v15 - x) * (float)(v15 - x)) + (float)((float)(v16 - y) * (float)(v16 - y))), 1.0);
    v18 = 1.5;
    if ( v17 <= 1.5 )
      v18 = v17;
    if ( v17 >= 0.5 )
      v19 = v18;
    else
      v19 = 0.5;
    return MapGimmickEntity__GetTouchFocusCameraMoveBaseDuration(mapGimmickEntity, 0) * v19;
  }
  return result;
}


void MapGimmickComponent__CameraMoveTouchGimmick(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *mMapCamera; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *ComponentInChildren_object; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *parent; // x23
  UnityEngine_Transform_o *v21; // x21
  float TouchFocusCameraZoomSize; // s12
  const MethodInfo *v23; // x2
  float v24; // s11
  int32_t TouchFocusCameraEasingType; // w0
  int32_t v26; // w20
  MapCamera_o *v27; // x19
  const MethodInfo_45E9150 *v28; // x2
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v30; // x3
  System_Nullable_Vector3__o v31; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v33; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D10A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_TouchFocusTargetComponent___);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D10A = 1;
  }
  if ( mapGimmickEntity )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mapGimmickEntity, targetObject);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, 0, 0) )
    {
      mMapCamera = (UnityEngine_Object_o *)this->fields.mMapCamera;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(mMapCamera, 0, 0);
      if ( ((unsigned __int8)transform & 1) == 0 )
      {
        if ( targetObject )
        {
          transform = UnityEngine_GameObject__get_transform(targetObject, 0);
          if ( transform )
          {
            localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
            x = localPosition.fields.x;
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                           targetObject,
                                           (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_TouchFocusTargetComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
            {
              transform = UnityEngine_GameObject__get_transform(targetObject, 0);
              if ( !transform )
                goto LABEL_31;
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
              transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
              if ( ((unsigned __int8)transform & 1) != 0 )
              {
                transform = UnityEngine_GameObject__get_transform(targetObject, 0);
                if ( !transform )
                  goto LABEL_31;
                transform = UnityEngine_Transform__get_parent(transform, 0);
                if ( !ComponentInChildren_object )
                  goto LABEL_31;
                v21 = transform;
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0);
                if ( !transform )
                  goto LABEL_31;
                position = UnityEngine_Transform__get_position(transform, 0);
                if ( !v21 )
                  goto LABEL_31;
                v36 = UnityEngine_Transform__InverseTransformPoint(v21, position, 0);
              }
              else
              {
                if ( !ComponentInChildren_object )
                  goto LABEL_31;
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0);
                if ( !transform )
                  goto LABEL_31;
                v36 = UnityEngine_Transform__get_position(transform, 0);
              }
              x = v36.fields.x;
              y = v36.fields.y;
              z = v36.fields.z;
            }
            TouchFocusCameraZoomSize = MapGimmickEntity__GetTouchFocusCameraZoomSize(mapGimmickEntity, 0);
            v37.fields.x = x;
            v37.fields.y = y;
            v37.fields.z = z;
            v24 = MapGimmickComponent__CalcMoveTimeByDistance(this, mapGimmickEntity, v37, v23);
            TouchFocusCameraEasingType = MapGimmickEntity__GetTouchFocusCameraEasingType(mapGimmickEntity, 0);
            v38.fields.x = x;
            v38.fields.y = y;
            v38.fields.z = z;
            v26 = TouchFocusCameraEasingType;
            v27 = this->fields.mMapCamera;
            *(_QWORD *)&v33.fields.hasValue = &v31;
            *(_QWORD *)&v31.fields.hasValue = 0;
            *(_QWORD *)&v31.fields.value.fields.y = 0;
            *(_QWORD *)&v33.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            System_Nullable_Vector3____ctor(v33, v38, v28);
            p_size = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(
              p_size,
              TouchFocusCameraZoomSize,
              (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
            if ( v27 )
            {
              v30 = size;
              MapCamera__StartAutoWork(v27, v24, v31, v30, v26, 0, 0);
              return;
            }
          }
        }
LABEL_31:
        sub_2213CDC(transform, v11);
      }
    }
  }
}


void MapGimmickComponent__ClearTouchedState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct CommonEffectComponent_o *v7; // x8

  if ( (byte_596D0F7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0F7 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.commonEffectComponent;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    v7->fields.isTouched = 0;
  }
}


System_Collections_IEnumerator_o *MapGimmickComponent__CoWaitGimmickFocusEnd(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        CommonEffectComponent_o *touchEffectComponent,
        UnityEngine_Vector3_o beforePosition,
        float beforeZoomSize,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_IEnumerator_o *result; // x0

  z = beforePosition.fields.z;
  y = beforePosition.fields.y;
  x = beforePosition.fields.x;
  if ( (byte_596D10B & 1) == 0 )
  {
    sub_2213A60(&MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_TypeInfo);
    byte_596D10B = 1;
  }
  v13 = sub_2213CCC(MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 40) = mapGimmickEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)mapGimmickEntity, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v13 + 48) = touchEffectComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v13 + 48),
    (int32_t)touchEffectComponent,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(float *)(v13 + 56) = x;
  *(float *)(v13 + 60) = y;
  result = (System_Collections_IEnumerator_o *)v13;
  *(float *)(v13 + 64) = z;
  *(float *)(v13 + 68) = beforeZoomSize;
  return result;
}


float MapGimmickComponent__GetAnimTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  void *mMapCtrl_MapGimmickInfo; // x0
  int v4; // w8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo
    || (mMapCtrl_MapGimmickInfo = MapControl_MapGimmickInfo__GetMine(
                                    (MapControl_MapGimmickInfo_o *)mMapCtrl_MapGimmickInfo,
                                    method)) == 0 )
  {
    sub_2213CDC(mMapCtrl_MapGimmickInfo, method);
  }
  v4 = *((_DWORD *)mMapCtrl_MapGimmickInfo + 24);
  if ( v4 < 0 )
    return this->fields.mAnimTime;
  else
    return (float)v4 / 1000.0;
}


CommonEffectComponent_o *MapGimmickComponent__GetCommonEffectComponent(
        MapGimmickComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        MapCamera_o *mapCamera,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  MapEffectComponent_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_596D0FC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    this = (MapGimmickComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0FC = 1;
  }
  if ( !prefab )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MapEffectComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      Component_object,
                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_MapEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      LODWORD(this[1].fields.mDispSeName) = 1141899264;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0);
      MapEffectComponent__Setup(v12, gameObject, mapCamera, v14);
      return (CommonEffectComponent_o *)v12;
    }
LABEL_19:
    sub_2213CDC(this, prefab);
  }
  v17 = UnityEngine_GameObject__GetComponent_object_(
          prefab,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  v12 = 0;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    this = (MapGimmickComponent_o *)UnityEngine_Object__Instantiate_object_(
                                      v17,
                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    if ( this )
    {
      v12 = (MapEffectComponent_o *)this;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v21 = UnityEngine_Component__get_gameObject(v6, 0);
      GameObjectExtensions__SafeSetParent_42897308(v20, v21, 0);
      return (CommonEffectComponent_o *)v12;
    }
    goto LABEL_19;
  }
  return (CommonEffectComponent_o *)v12;
}


UnityEngine_GameObject_o *MapGimmickComponent__GetEffectPrefab(
        MapGimmickComponent_o *this,
        System_String_o *effectPrefabName,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Object_object__58532980; // x21
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596D0FB & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (MapGimmickComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0FB = 1;
  }
  if ( !assetData )
    sub_2213CDC(this, effectPrefabName);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              effectPrefabName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
  {
    if ( !multiAssetData )
      return 0;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                multiAssetData,
                                effectPrefabName,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
      return 0;
  }
  return (UnityEngine_GameObject_o *)Object_object__58532980;
}


System_String_o *MapGimmickComponent__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_596D0F0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9284/*"MapGimmick_"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    byte_596D0F0 = 1;
  }
  v2 = System_Int32__ToString_77138656((int32_t)&v4, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_9284/*"MapGimmick_"*/, v2, 0);
}


MapControl_MapGimmickInfo_o *MapGimmickComponent__GetMapCtrl_MapGimmickInfo(
        MapGimmickComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_MapGimmickInfo;
}


MapGimmickRandomEffectElementComponent_o *MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_596D0FD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0FD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0);
  if ( v4 )
    return 0;
  if ( !prefab )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       prefab,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickRandomEffectComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
    return 0;
  if ( !Component_object )
LABEL_13:
    sub_2213CDC(v4, v5);
  return MapGimmickRandomEffectComponent__GetRandomElement((MapGimmickRandomEffectComponent_o *)Component_object, v5);
}


int32_t MapGimmickComponent__GetState(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapGimmickComponent_o *v2; // x19
  struct CStateManager_MapGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_596D0FE & 1) == 0 )
  {
    this = (MapGimmickComponent_o *)sub_2213A60(&Method_CStateManager_MapGimmickComponent__getState__);
    byte_596D0FE = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


bool MapGimmickComponent__HasTouchedLoopAnimation(
        MapGimmickComponent_o *this,
        CommonEffectComponent_o *commonEffectComponent,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_596D0FA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0FA = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, commonEffectComponent, method);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)commonEffectComponent, 0, 0);
  if ( v4 )
    return 0;
  if ( !commonEffectComponent )
    sub_2213CDC(v4, v5);
  return CommonEffectComponent__HasTouchedLoopAnimation(commonEffectComponent, 0);
}


void MapGimmickComponent__HideNowWithoutEffect(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *mSprite; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_596D100 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D100 = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(actionEffect, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(mSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !gameObject )
      goto LABEL_22;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))gameObject->klass[1]._1.element_class)(
      gameObject,
      gameObject->klass[1]._1.castClass,
      0.0);
  }
  MapGimmickComponent__SetTouchEnable(this, 0, v11);
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
LABEL_22:
    sub_2213CDC(gameObject, v5);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  MapGimmickComponent__SetState(this, 0, 0, v12);
}


void MapGimmickComponent__InitDefaultParam(MapGimmickComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v14; // x8
  struct System_String_o **v15; // x8
  struct System_String_o *v16; // x1
  struct System_String_o **v17; // x8
  struct System_String_o *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_c *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  struct UISprite_o *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596D0F4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UISprite___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&StringLiteral_13556/*"Sprite"*/);
    byte_596D0F4 = 1;
  }
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.mDepthBase = 0;
  this->fields.mEasingType = 9;
  v14 = qword_5984390;
  *(_QWORD *)&this->fields.mScaleBase = _D0;
  v15 = *(struct System_String_o ***)(v14 + 184);
  v16 = *v15;
  this->fields.mHideSeName = *v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mHideSeName, (int32_t)v16, v2, v3, v4, v5, v6, v7);
  v17 = *(struct System_String_o ***)(qword_5984390 + 184);
  v18 = *v17;
  this->fields.mDispSeName = *v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mDispSeName, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = UnityEngine_GameObject_TypeInfo;
  *(_WORD *)&this->fields.isForceLoop = 0;
  v26 = (UnityEngine_GameObject_o *)sub_2213CCC(v25);
  UnityEngine_GameObject___ctor(v26, (System_String_o *)StringLiteral_13556/*"Sprite"*/, 0);
  GameObjectExtensions__SetParent(v26, (UnityEngine_Component_o *)this, 0);
  if ( !v26
    || (v27 = UnityEngine_GameObject__AddComponent_object_(
                v26,
                (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UISprite___)) == 0 )
  {
    sub_2213CDC(v27, v28);
  }
  v29 = (struct UISprite_o *)v27;
  UIWidget__SetDimensions((UIWidget_o *)v27, 64, 64, 0);
  this->fields.mSprite = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, (int32_t)v29, v30, v31, v32, v33, v34, v35);
}


bool MapGimmickComponent__IsEventOverEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *Mine; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x2
  int32_t v7; // w19

  if ( (byte_596D107 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D107 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v4 = **((_QWORD **)Mine + 23);
  if ( !v4 )
    goto LABEL_20;
  v5 = *(_QWORD *)(v4 + 264);
  if ( !v5 )
    goto LABEL_20;
  Mine = *(void **)(v5 + 344);
  if ( !Mine )
    goto LABEL_20;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, method);
  if ( !Mine )
    goto LABEL_20;
  v7 = *((_DWORD *)Mine + 24);
  if ( v7 < 1 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v6);
  Mine = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Mine )
LABEL_20:
    sub_2213CDC(Mine, method);
  return !EventMaster__IsEnableEvent((EventMaster_o *)Mine, v7, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool MapGimmickComponent__IsGimmickTouchedOnServer(
        MapGimmickComponent_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  int v4; // w8
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  void *Mine; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  UserEventMapGimmickEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D0F9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMapGimmickMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D0F9 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gimmickId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMapGimmickMaster___);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Mine = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
    Mine = TerminalSceneComponent_TypeInfo;
  }
  v9 = **((_QWORD **)Mine + 23);
  if ( !v9 )
    goto LABEL_21;
  v10 = *(_QWORD *)(v9 + 264);
  if ( !v10 )
    goto LABEL_21;
  Mine = *(void **)(v10 + 344);
  if ( !Mine )
    goto LABEL_21;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Mine, v5);
  if ( !Mine || !Master_object )
    goto LABEL_21;
  if ( !UserEventMapGimmickMaster__TryGetEntity(
          (UserEventMapGimmickMaster_o *)Master_object,
          &entity,
          *((_DWORD *)Mine + 24),
          0) )
    return 0;
  Mine = entity;
  if ( !entity )
LABEL_21:
    sub_2213CDC(Mine, v5);
  return UserEventMapGimmickEntity__IsTouchedGimmick(entity, gimmickId, 0);
}


bool MapGimmickComponent__IsTouched(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *commonEffectComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct CommonEffectComponent_o *v7; // x8

  if ( (byte_596D0F6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D0F6 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0);
  if ( !v5 )
    return 0;
  v7 = this->fields.commonEffectComponent;
  if ( !v7 )
    sub_2213CDC(v5, v6);
  return v7->fields.isTouched;
}


void MapGimmickComponent__OnDestroy(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_mFocusCoroutine; // x19
  struct UnityEngine_Coroutine_o *mFocusCoroutine; // t1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalSceneComponent_c *v10; // x0
  TerminalSceneComponent_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D0F3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D0F3 = 1;
  }
  mFocusCoroutine = this->fields.mFocusCoroutine;
  p_mFocusCoroutine = (MissionNaviTransitionBoardItem_o *)&this->fields.mFocusCoroutine;
  if ( mFocusCoroutine )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v9);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v10 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v9);
        v10 = TerminalSceneComponent_TypeInfo;
      }
      v11 = v10->static_fields->mInstance;
      if ( !v11 )
        sub_2213CDC(0, v8);
      TerminalSceneComponent__SetActionBGColl(v11, 0, 0, 0);
      p_mFocusCoroutine->klass = 0;
      sub_2213A04(p_mFocusCoroutine, 0, v12, v13, v14, v15, v16, v17);
    }
  }
}


void MapGimmickComponent__OnGimmickTouched(
        MapGimmickComponent_o *this,
        MapGimmickEntity_o *mapGimmickEntity,
        CommonEffectComponent_o *touchEffectComponent,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  MapGimmickComponent_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  Il2CppObject *Instance; // x21
  UISprite_c *klass; // x8
  __int64 v15; // x8

  v8 = this;
  if ( (byte_596D0F8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    this = (MapGimmickComponent_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D0F8 = 1;
  }
  if ( !mapGimmickEntity )
    goto LABEL_26;
  if ( !MapGimmickComponent__IsGimmickTouchedOnServer(
          this,
          mapGimmickEntity->fields.id,
          (const MethodInfo *)touchEffectComponent) )
  {
    if ( MapGimmickEntity__HasTouchFocusCameraInfo(mapGimmickEntity, 0) )
      MapGimmickComponent__BeginGimmickFocus(v8, mapGimmickEntity, touchEffectComponent, v11);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, mapGimmickEntity, v12);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    this = (MapGimmickComponent_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, mapGimmickEntity, v12);
      this = (MapGimmickComponent_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = this[1].fields.mSprite->klass;
    if ( klass )
    {
      v15 = *(_QWORD *)&klass->_2.static_fields_size;
      if ( v15 )
      {
        this = *(MapGimmickComponent_o **)(v15 + 344);
        if ( this )
        {
          this = (MapGimmickComponent_o *)MapControl_WarInfo__GetMine(
                                            (MapControl_WarInfo_o *)this,
                                            (const MethodInfo *)mapGimmickEntity);
          if ( this )
          {
            if ( Instance )
            {
              ClientMissionManager__OnClickMapGimmick(
                (ClientMissionManager_o *)Instance,
                (int32_t)this->fields.commonEffectComponent,
                mapGimmickEntity->fields.id,
                0);
              this = (MapGimmickComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
              if ( this )
              {
                ClientMissionManager__SendRequest((ClientMissionManager_o *)this, touchCallback, 0);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  this = (MapGimmickComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)touchEffectComponent, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( touchEffectComponent )
    {
      touchEffectComponent->fields.isTouched = 0;
      return;
    }
LABEL_26:
    sub_2213CDC(this, mapGimmickEntity);
  }
}


void MapGimmickComponent__ResetOldDispTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.mOldDispTime = 0;
}


void MapGimmickComponent__ResetOldQuickHideCheckTime(MapGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.mOldQuickHideCheckTime = 0;
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickComponent__SetDispAnim(MapGimmickComponent_o *this, bool is_disp, const MethodInfo *method)
{
  float AnimTime; // s0
  const MethodInfo *v6; // x3

  AnimTime = MapGimmickComponent__GetAnimTime(this, (const MethodInfo *)is_disp);
  MapGimmickComponent__SetDispAnim_42961028(this, is_disp, AnimTime, 1, v6);
}


void MapGimmickComponent__SetDispAnimQuick(MapGimmickComponent_o *this, bool is_disp, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MapGimmickComponent__SetDispAnim_42961028(this, is_disp, 0.0, 0, v3);
}


void MapGimmickComponent__SetDispAnim_42961028(
        MapGimmickComponent_o *this,
        bool is_disp,
        float time,
        bool is_play_se,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_Component_o *mSprite; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *commonEffectComponent; // x23
  struct CommonEffectComponent_o *v23; // x20
  System_Action_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  float v33; // s0
  __int64 v34; // x9
  System_String_o *v35; // x21
  System_Action_o *v36; // x23
  EasingObject_o *v37; // x24
  System_Action_o *v38; // x25
  struct CommonEffectComponent_o *v39; // x20
  System_Action_o *v40; // x21
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  const MethodInfo *v43; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  if ( (byte_596D102 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_MapGimmickComponent_SetDispAnim__);
    sub_2213A60(&Method_MapGimmickComponent_StateDispAnimEnd__);
    sub_2213A60(&Method_MapGimmickComponent_StateHideAnimEnd__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass49_0__SetDispAnim_b__0__);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass49_0__SetDispAnim_b__1__);
    sub_2213A60(&MapGimmickComponent___c__DisplayClass49_0_TypeInfo);
    byte_596D102 = 1;
  }
  v9 = sub_2213CCC(MapGimmickComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_36;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  MapGimmickComponent__StartActionEffect(this, v18);
  MapGimmickComponent__SetTouchEnable(this, is_disp, v19);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  mSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0);
  if ( ((unsigned __int8)mSprite & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    Component_object = GameObjectExtensions__SafeGetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    *(_QWORD *)(v9 + 32) = Component_object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)Component_object, v27, v28, v29, v30, v31, v32);
    mSprite = (UnityEngine_Component_o *)this->fields.mSprite;
    if ( !mSprite )
      goto LABEL_36;
    v33 = ((float (__fastcall *)(UnityEngine_Component_o *, _QWORD))mSprite->klass[1]._1.this_arg.data)(
            mSprite,
            *(_QWORD *)&mSprite->klass[1]._1.this_arg.bits);
    v34 = 56;
    *(float *)(v9 + 28) = v33;
    if ( is_disp )
      v34 = 64;
    *(_DWORD *)(v9 + 24) = is_disp;
    v35 = *(System_String_o **)((char *)&this->klass + v34);
    v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v9,
      Method_MapGimmickComponent___c__DisplayClass49_0__SetDispAnim_b__0__,
      0);
    if ( time <= 0.0 )
    {
      ActionExtensions__Call(v36, 0);
      if ( !is_play_se )
        return;
    }
    else
    {
      v37 = *(EasingObject_o **)(v9 + 32);
      v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v9,
        Method_MapGimmickComponent___c__DisplayClass49_0__SetDispAnim_b__1__,
        0);
      if ( !v37 )
        goto LABEL_36;
      EasingObject__Play(v37, time, v38, v36, 0.0, this->fields.mEasingType, 0);
      if ( !is_play_se )
        return;
    }
    if ( !System_String__IsNullOrEmpty(v35, 0) )
    {
      v41 = Method_MapGimmickComponent_SetDispAnim__;
      if ( (*((_BYTE *)Method_MapGimmickComponent_SetDispAnim__ + 83) & 2) != 0 )
        v41 = (_QWORD *)sub_2213A78(Method_MapGimmickComponent_SetDispAnim__);
      v42 = (System_Reflection_MethodBase_o *)sub_2213A44(v41, v41[4]);
      OverwriteAssetSoundName__PlaySe(v42, v35, 0, 0);
    }
    return;
  }
  if ( is_disp )
  {
    mSprite = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !mSprite )
      goto LABEL_36;
    mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mSprite, 0);
    if ( !mSprite )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 1, 0);
    v23 = this->fields.commonEffectComponent;
    if ( time > 0.0 )
    {
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_MapGimmickComponent_StateDispAnimEnd__, 0);
      if ( v23 )
      {
        ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, const MethodInfo *))v23->klass->vtable._6_ForceStart.methodPtr)(
          v23,
          1,
          v24,
          v23->klass->vtable._6_ForceStart.method);
        return;
      }
LABEL_36:
      sub_2213CDC(mSprite, v11);
    }
    if ( !v23 )
      goto LABEL_36;
    CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0);
  }
  else
  {
    v39 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v39 )
        goto LABEL_36;
      mSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                             0);
      if ( !mSprite )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mSprite, 0, 0);
      MapGimmickComponent__StateHideAnimEnd(this, v43);
    }
    else
    {
      v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_MapGimmickComponent_StateHideAnimEnd__, 0);
      if ( !v39 )
        goto LABEL_36;
      mSprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v39->klass->vtable._8_Stop.methodPtr)(
                                             v39,
                                             0,
                                             v40,
                                             v39->klass->vtable._8_Stop.method);
    }
    mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
    if ( !mMapCtrl_MapGimmickInfo )
      goto LABEL_36;
    mMapCtrl_MapGimmickInfo->fields.dispType = 0;
  }
}


void MapGimmickComponent__SetDisplayByRaidProgress(MapGimmickComponent_o *this, const MethodInfo *method)
{
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  struct MapControl_MapGimmickInfo_o *v6; // x8
  int32_t dispType; // w8
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3
  MapGimmickComponent_o *v10; // x0
  int32_t v11; // w1

  if ( (byte_596D106 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__57_0__);
    sub_2213A60(&Method_MapGimmickComponent__SetDisplayByRaidProgress_b__57_1__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596D106 = 1;
  }
  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_15;
  mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)MapControl_MapGimmickInfo__GetMine(
                                                             mMapCtrl_MapGimmickInfo,
                                                             method);
  if ( !mMapCtrl_MapGimmickInfo )
    goto LABEL_15;
  v4 = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)mMapCtrl_MapGimmickInfo, 0);
  if ( v4 && !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)v4, v5) )
  {
    mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( mMapCtrl_MapGimmickInfo )
    {
      mMapCtrl_MapGimmickInfo = (MapControl_MapGimmickInfo_o *)QuestTree__CheckMapGimmickCond_43439552(
                                                                 (QuestTree_o *)mMapCtrl_MapGimmickInfo,
                                                                 this->fields.mMapCtrl_MapGimmickInfo,
                                                                 0);
      v6 = this->fields.mMapCtrl_MapGimmickInfo;
      if ( v6 )
      {
        dispType = v6->fields.dispType;
        if ( dispType != 0 || ((unsigned __int8)mMapCtrl_MapGimmickInfo & 1) == 0 )
        {
          if ( (dispType != 1) | (unsigned __int8)mMapCtrl_MapGimmickInfo & 1 )
            return;
          v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__57_1__,
            0);
          v10 = this;
          v11 = 2;
        }
        else
        {
          v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v8,
            (Il2CppObject *)this,
            Method_MapGimmickComponent__SetDisplayByRaidProgress_b__57_0__,
            0);
          v10 = this;
          v11 = 3;
        }
        MapGimmickComponent__SetState(v10, v11, v8, v9);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(mMapCtrl_MapGimmickInfo, method);
  }
}


void MapGimmickComponent__SetMapGimmickInfo(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mMapCtrl_MapGimmickInfo = mapGimmickInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int32_t)mapGimmickInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapGimmickComponent__SetMoveAnim(
        MapGimmickComponent_o *this,
        UnityEngine_Vector3_o posTo,
        float time,
        int32_t easeType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s11
  __int64 v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_c *v36; // x0
  System_Action_o *v37; // x21
  EasingObject_o *v38; // x22
  System_Action_o *v39; // x23
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = posTo.fields.z;
  y = posTo.fields.y;
  x = posTo.fields.x;
  if ( (byte_596D103 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass50_0__SetMoveAnim_b__0__);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass50_0__SetMoveAnim_b__1__);
    sub_2213A60(&MapGimmickComponent___c__DisplayClass50_0_TypeInfo);
    byte_596D103 = 1;
  }
  v13 = sub_2213CCC(MapGimmickComponent___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(float *)(v13 + 24) = x;
  *(float *)(v13 + 28) = y;
  *(float *)(v13 + 32) = z;
  *(_QWORD *)(v13 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 64), (int32_t)Component_object, v30, v31, v32, v33, v34, v35);
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_10;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_10;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  v36 = System_Action_TypeInfo;
  *(UnityEngine_Vector3_o *)(v13 + 48) = localPosition;
  v37 = (System_Action_o *)sub_2213CCC(v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v13,
    Method_MapGimmickComponent___c__DisplayClass50_0__SetMoveAnim_b__0__,
    0);
  if ( time > 0.0 )
  {
    v38 = *(EasingObject_o **)(v13 + 64);
    v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v13,
      Method_MapGimmickComponent___c__DisplayClass50_0__SetMoveAnim_b__1__,
      0);
    if ( v38 )
    {
      EasingObject__Play(v38, time, v39, v37, 0.0, easeType, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(transform, v15);
  }
  ActionExtensions__Call(v37, 0);
}


void MapGimmickComponent__SetState(
        MapGimmickComponent_o *this,
        int32_t state,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_596D0FF & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_MapGimmickComponent__setState__);
    byte_596D0FF = 1;
  }
  this->fields.mStateEndAct = end_act;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_mStateEndAct,
    (int32_t)end_act,
    (System_String_o *)end_act,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_mStateEndAct - 9);
  if ( !v13 )
    sub_2213CDC(0, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_MapGimmickComponent__setState__);
}


void MapGimmickComponent__SetTouchEnable(MapGimmickComponent_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596D105 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D105 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, enabled, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickComponent__SetUseAnimNum(
        MapGimmickComponent_o *this,
        int32_t num,
        bool isUpdateName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x22
  __int64 v8; // x1
  CommonEffectComponent_o *v9; // x0

  if ( (byte_596D108 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D108 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&num, isUpdateName);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    v9 = this->fields.commonEffectComponent;
    if ( !v9 )
      sub_2213CDC(0, v8);
    CommonEffectComponent__SetUseAnimNum(v9, num, isUpdateName, 0);
  }
}


void MapGimmickComponent__Setup(
        MapGimmickComponent_o *this,
        MapControl_MapGimmickInfo_o *mg_inf,
        MapCamera_o *mapCamera,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        AssetData_o *assetData,
        AssetData_o *multiAssetData,
        NetworkManager_ResultCallbackFunc_o *touchCallback,
        const MethodInfo *method)
{
  __int64 v15; // x23
  MapGimmickEntity_o *IsMonoColorRect; // x0
  const MethodInfo *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  MapGimmickEntity_o *Mine; // x0
  __int64 v43; // x22
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x2
  UISprite_o *mSprite; // x26
  System_String_o *v52; // x27
  __int64 v53; // x2
  System_String_o *v54; // x0
  UISprite_o *v55; // x28
  UnityEngine_Behaviour_o *v56; // x26
  UnityEngine_Object_o *monitor; // x28
  bool v58; // w0
  System_String_o *v59; // x26
  bool v60; // w8
  struct UITexture_o *mMapBg; // x8
  System_String_o *v62; // x0
  MapGimmickComponent_o *v63; // x0
  const MethodInfo *v64; // x4
  __int64 v65; // x1
  __int64 v66; // x2
  UnityEngine_GameObject_o *EffectPrefab; // x26
  __int64 v68; // x1
  __int64 v69; // x2
  UnityEngine_Object_o *MapGimmickRandomEffectElementComponent; // x27
  const MethodInfo *v71; // x3
  struct CommonEffectComponent_o *CommonEffectComponent; // x0
  CommonEffectComponent_o **p_commonEffectComponent; // x25
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Object_o *v82; // x26
  __int64 v83; // x2
  System_Action_c *v84; // x8
  __int64 v85; // x8
  int32_t actionAnimTime; // w26
  UnityEngine_GameObject_o *v87; // x26
  bool v88; // w1
  float v89; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  long double v91; // q0
  float y; // s9
  float x; // s8
  float z; // s10
  __int64 v95; // x1
  __int64 v96; // x2
  Il2CppObject *Component_object; // x24
  __int64 v98; // x1
  __int64 v99; // x2
  UnityEngine_Object_o *v100; // x24
  __int64 v101; // x25
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  __int64 v108; // x2
  System_Action_c *v109; // x8
  __int64 v110; // x8
  int32_t v111; // w26
  DataManager_o *v112; // x23
  Il2CppObject *v113; // x0
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  __int64 v120; // x8
  EventMissionMaster_o *v121; // x23
  EventMissionEntity_array *EventMissionList_49055168; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_Collections_Generic_List_EventDelegate__o *v129; // x23
  EventDelegate_Callback_o *v130; // x24
  __int64 v131; // x1
  __int64 v132; // x2
  int32_t v133; // w0
  int actionEffectId; // t1
  System_String_o *v135; // x0
  MapGimmickComponent_o *v136; // x0
  const MethodInfo *v137; // x4
  __int64 v138; // x1
  __int64 v139; // x2
  UnityEngine_Object_o *v140; // x20
  __int64 v141; // x1
  __int64 v142; // x2
  Il2CppObject *v143; // x20
  __int64 v144; // x1
  __int64 v145; // x2
  Il2CppObject *v146; // x0
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  UnityEngine_GameObject_o *v153; // x20
  UnityEngine_GameObject_o *v154; // x0
  int32_t UseAnimFromScript; // w0
  MapGimmickComponent_o *v156; // x0
  const MethodInfo *v157; // x2
  _BOOL8 HasTouchedLoopAnimation; // x0
  const MethodInfo *v159; // x2
  CommonEffectComponent_o *v160; // x24
  System_Action_o *v161; // x26
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  UnityEngine_Color_o v168; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o TouchSize; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D0F5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass30_0__Setup_b__0__);
    sub_2213A60(&MapGimmickComponent___c__DisplayClass30_0_TypeInfo);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__1__);
    sub_2213A60(&MapGimmickComponent___c__DisplayClass30_1_TypeInfo);
    sub_2213A60(&StringLiteral_26193/*"white00"*/);
    sub_2213A60(&StringLiteral_1209/*"000000"*/);
    sub_2213A60(&StringLiteral_20809/*"gimmick_"*/);
    sub_2213A60(&StringLiteral_9266/*"MapGimmickEffect_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9265/*"MapGimmickActionEffect_"*/);
    byte_596D0F5 = 1;
  }
  *(_QWORD *)&v168.fields.r = 0;
  *(_QWORD *)&v168.fields.b = 0;
  entity = 0;
  v15 = sub_2213CCC(MapGimmickComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_140;
  *(_QWORD *)(v15 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 32) = touchCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)touchCallback, v24, v25, v26, v27, v28, v29);
  this->fields.mMapCtrl_MapGimmickInfo = mg_inf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCtrl_MapGimmickInfo,
    (int32_t)mg_inf,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.mMapCamera = mapCamera;
  *(_WORD *)&this->fields.isForceLoop = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCamera,
    (int32_t)mapCamera,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !mg_inf )
    goto LABEL_140;
  Mine = MapControl_MapGimmickInfo__GetMine(mg_inf, v17);
  *(_QWORD *)(v15 + 24) = Mine;
  v43 = v15 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)Mine, v44, v45, v46, v47, v48, v49);
  IsMonoColorRect = *(MapGimmickEntity_o **)(v15 + 24);
  if ( !IsMonoColorRect )
    goto LABEL_140;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, 0);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    mSprite = this->fields.mSprite;
    v52 = (System_String_o *)StringLiteral_26193/*"white00"*/;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v50);
    AtlasManager__SetCommon(mSprite, 0);
  }
  else
  {
    if ( !*(_QWORD *)v43 )
      goto LABEL_140;
    v54 = System_Int32__ToString_77138656((unsigned int)*(_QWORD *)v43 + 24, (System_String_o *)StringLiteral_1209/*"000000"*/, 0);
    v52 = System_String__Concat_75651716((System_String_o *)StringLiteral_20809/*"gimmick_"*/, v54, 0);
    v55 = this->fields.mSprite;
    IsMonoColorRect = (MapGimmickEntity_o *)UIAtlas__GetUIAtlasBySpriteName(atlases, v52, 0);
    if ( !v55 )
      goto LABEL_140;
    UISprite__set_atlas(v55, (UIAtlas_o *)IsMonoColorRect, 0);
  }
  v56 = (UnityEngine_Behaviour_o *)this->fields.mSprite;
  if ( !v56 )
    goto LABEL_140;
  monitor = (UnityEngine_Object_o *)v56[19].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v53);
  v58 = UnityEngine_Object__op_Inequality(monitor, 0, 0);
  UnityEngine_Behaviour__set_enabled(v56, v58, 0);
  IsMonoColorRect = *(MapGimmickEntity_o **)v43;
  if ( !*(_QWORD *)v43 )
    goto LABEL_140;
  IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetColorCodeFromScript(IsMonoColorRect, 0);
  if ( !this->fields.mSprite )
    goto LABEL_140;
  v59 = (System_String_o *)IsMonoColorRect;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Behaviour__get_enabled(
                                            (UnityEngine_Behaviour_o *)this->fields.mSprite,
                                            0);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_140;
    UISprite__set_spriteName((UISprite_o *)IsMonoColorRect, v52, 0);
    IsMonoColorRect = *(MapGimmickEntity_o **)v43;
    if ( !*(_QWORD *)v43 )
      goto LABEL_140;
    v60 = MapGimmickEntity__IsMonoColorRect(IsMonoColorRect, 0);
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( v60 )
    {
      if ( !mapCamera )
        goto LABEL_140;
      mMapBg = mapCamera->fields.mMapBg;
      if ( !mMapBg || !IsMonoColorRect )
        goto LABEL_140;
      UIWidget__SetDimensions((UIWidget_o *)IsMonoColorRect, mMapBg->fields.mWidth, mMapBg->fields.mHeight, 0);
    }
    else
    {
      if ( !IsMonoColorRect )
        goto LABEL_140;
      IsMonoColorRect = (MapGimmickEntity_o *)((__int64 (__fastcall *)(MapGimmickEntity_o *, void *))IsMonoColorRect->klass[2]._1.namespaze)(
                                                IsMonoColorRect,
                                                IsMonoColorRect->klass[2]._1.byval_arg.data);
    }
    if ( !*(_QWORD *)v43 )
      goto LABEL_140;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_140;
    UIWidget__set_depth((UIWidget_o *)IsMonoColorRect, *(_DWORD *)(*(_QWORD *)v43 + 36LL) + this->fields.mDepthBase, 0);
    if ( !*(_QWORD *)v43 )
      goto LABEL_140;
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_140;
    v89 = this->fields.mScaleBase * (float)((float)*(int *)(*(_QWORD *)v43 + 80LL) / 1000.0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0);
    GameObjectExtensions__SetLocalScale_42893524(gameObject, v89, 0);
    if ( !System_String__IsNullOrEmpty(v59, 0) )
    {
      UnityEngine_ColorUtility__TryParseHtmlString(v59, &v168, 0);
      IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
      if ( !IsMonoColorRect )
        goto LABEL_140;
      UIWidget__set_color((UIWidget_o *)IsMonoColorRect, v168, 0);
    }
    IsMonoColorRect = (MapGimmickEntity_o *)this->fields.mSprite;
    if ( !IsMonoColorRect )
      goto LABEL_140;
    *(_QWORD *)&v91 = 0;
    if ( mg_inf->fields.dispType )
      *(float *)&v91 = 1.0;
    ((void (__fastcall *)(long double))IsMonoColorRect->klass[1]._1.byval_arg.data)(v91);
  }
  else
  {
    if ( !*(_QWORD *)v43 )
      goto LABEL_140;
    v62 = System_Int32__ToString((unsigned int)*(_QWORD *)v43 + 24, 0);
    v63 = (MapGimmickComponent_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_9266/*"MapGimmickEffect_"*/, v62, 0);
    EffectPrefab = MapGimmickComponent__GetEffectPrefab(v63, (System_String_o *)v63, assetData, multiAssetData, v64);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65, v66);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffectPrefab, 0, 0) )
    {
      MapGimmickRandomEffectElementComponent = (UnityEngine_Object_o *)MapGimmickComponent__GetMapGimmickRandomEffectElementComponent(
                                                                         EffectPrefab,
                                                                         v17);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68, v69);
      IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(
                                                MapGimmickRandomEffectElementComponent,
                                                0,
                                                0);
      if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
      {
        if ( !MapGimmickRandomEffectElementComponent )
          goto LABEL_140;
        EffectPrefab = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)MapGimmickRandomEffectElementComponent,
                         0);
      }
      CommonEffectComponent = MapGimmickComponent__GetCommonEffectComponent(this, EffectPrefab, mapCamera, v71);
      this->fields.commonEffectComponent = CommonEffectComponent;
      p_commonEffectComponent = &this->fields.commonEffectComponent;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.commonEffectComponent,
        (int32_t)CommonEffectComponent,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      v82 = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80, v81);
      if ( UnityEngine_Object__op_Inequality(v82, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17, v83);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17, v83);
          IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
        }
        v84 = **(System_Action_c ***)&IsMonoColorRect[1].fields.scale;
        if ( !v84 )
          goto LABEL_140;
        v85 = *(_QWORD *)&v84->_2.static_fields_size;
        if ( !v85 )
          goto LABEL_140;
        IsMonoColorRect = *(MapGimmickEntity_o **)(v85 + 344);
        if ( !IsMonoColorRect )
          goto LABEL_140;
        IsMonoColorRect = (MapGimmickEntity_o *)MapControl_WarInfo__GetMine(
                                                  (MapControl_WarInfo_o *)IsMonoColorRect,
                                                  v17);
        if ( !IsMonoColorRect )
          goto LABEL_140;
        actionAnimTime = IsMonoColorRect->fields.actionAnimTime;
        IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsMonoColorRect )
          goto LABEL_140;
        IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)IsMonoColorRect,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !IsMonoColorRect )
          goto LABEL_140;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
          &entity,
          actionAnimTime,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( entity && EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)entity, 0) )
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0);
          IsMonoColorRect = (MapGimmickEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !IsMonoColorRect )
            goto LABEL_140;
          IsMonoColorRect = (MapGimmickEntity_o *)QuestTree__CheckMapGimmickCond_43439552(
                                                    (QuestTree_o *)IsMonoColorRect,
                                                    mg_inf,
                                                    0);
          if ( !v87 )
            goto LABEL_140;
          v88 = (unsigned __int8)IsMonoColorRect & 1;
          IsMonoColorRect = (MapGimmickEntity_o *)v87;
        }
        else
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsMonoColorRect,
                                                    0);
          if ( !IsMonoColorRect )
            goto LABEL_140;
          v88 = mg_inf->fields.dispType != 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, v88, 0);
        IsMonoColorRect = *(MapGimmickEntity_o **)v43;
        if ( !*(_QWORD *)v43 )
          goto LABEL_140;
        UseAnimFromScript = MapGimmickEntity__GetUseAnimFromScript(IsMonoColorRect, 0);
        if ( UseAnimFromScript >= 1 )
        {
          v17 = (const MethodInfo *)(unsigned int)UseAnimFromScript;
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsMonoColorRect, (int32_t)v17, 0, 0);
        }
        IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
        if ( !*p_commonEffectComponent )
          goto LABEL_140;
        CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsMonoColorRect, 0);
        HasTouchedLoopAnimation = MapGimmickComponent__HasTouchedLoopAnimation(v156, *p_commonEffectComponent, v157);
        if ( HasTouchedLoopAnimation
          && MapGimmickComponent__IsGimmickTouchedOnServer(
               (MapGimmickComponent_o *)HasTouchedLoopAnimation,
               mg_inf->fields.mapGimmickId,
               v159) )
        {
          IsMonoColorRect = (MapGimmickEntity_o *)*p_commonEffectComponent;
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          CommonEffectComponent__ForceTouchedLoop((CommonEffectComponent_o *)IsMonoColorRect, 0);
        }
        v160 = *p_commonEffectComponent;
        v161 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v161,
          (Il2CppObject *)v15,
          Method_MapGimmickComponent___c__DisplayClass30_0__Setup_b__0__,
          0);
        if ( !v160 )
          goto LABEL_140;
        v160->fields.touchCallback = v161;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v160->fields.touchCallback,
          (int32_t)v161,
          v162,
          v163,
          v164,
          v165,
          v166,
          v167);
        IsMonoColorRect = *(MapGimmickEntity_o **)v43;
        if ( !*(_QWORD *)v43 )
          goto LABEL_140;
        IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__HasTouchFocusCameraInfo(IsMonoColorRect, 0);
        if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
        {
          if ( !*p_commonEffectComponent )
            goto LABEL_140;
          (*p_commonEffectComponent)->fields.isDelayTouchAnimation = 1;
        }
      }
    }
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v43;
  if ( !*(_QWORD *)v43 )
    goto LABEL_140;
  TouchSize = MapGimmickEntity__GetTouchSize(IsMonoColorRect, 0);
  if ( TouchSize.fields.x <= 0.0 )
    goto LABEL_107;
  y = TouchSize.fields.y;
  if ( TouchSize.fields.y <= 0.0 )
    goto LABEL_107;
  x = TouchSize.fields.x;
  z = TouchSize.fields.z;
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsMonoColorRect )
    goto LABEL_140;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)IsMonoColorRect,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95, v96);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_GameObject__AddComponent_object_(
                                              (UnityEngine_GameObject_o *)IsMonoColorRect,
                                              (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    Component_object = (Il2CppObject *)IsMonoColorRect;
  }
  if ( !Component_object )
    goto LABEL_140;
  v171.fields.x = x;
  v171.fields.y = y;
  v171.fields.z = z;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v171, 0);
  IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsMonoColorRect )
    goto LABEL_140;
  v100 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)IsMonoColorRect,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98, v99);
  if ( UnityEngine_Object__op_Equality(v100, 0, 0) )
  {
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    v100 = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                     (UnityEngine_GameObject_o *)IsMonoColorRect,
                                     (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIButton___);
  }
  IsMonoColorRect = *(MapGimmickEntity_o **)v43;
  if ( !*(_QWORD *)v43 )
LABEL_140:
    sub_2213CDC(IsMonoColorRect, v17);
  if ( MapGimmickEntity__IsEventMissionScript(IsMonoColorRect, 0) )
  {
    v101 = sub_2213CCC(MapGimmickComponent___c__DisplayClass30_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v101, 0);
    if ( !v101 )
      goto LABEL_140;
    *(_QWORD *)(v101 + 32) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v101 + 32), v15, v102, v103, v104, v105, v106, v107);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17, v108);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17, v108);
      IsMonoColorRect = (MapGimmickEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    v109 = **(System_Action_c ***)&IsMonoColorRect[1].fields.scale;
    if ( !v109 )
      goto LABEL_140;
    v110 = *(_QWORD *)&v109->_2.static_fields_size;
    if ( !v110 )
      goto LABEL_140;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v110 + 344);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    IsMonoColorRect = (MapGimmickEntity_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)IsMonoColorRect, v17);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    v111 = IsMonoColorRect->fields.actionAnimTime;
    IsMonoColorRect = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    v112 = (DataManager_o *)IsMonoColorRect;
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)IsMonoColorRect,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    v113 = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)IsMonoColorRect,
             v111,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    *(_QWORD *)(v101 + 16) = v113;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v101 + 16), (int32_t)v113, v114, v115, v116, v117, v118, v119);
    IsMonoColorRect = (MapGimmickEntity_o *)DataManager__GetMasterData_object_(
                                              v112,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v120 = *(_QWORD *)(v101 + 32);
    if ( !v120 )
      goto LABEL_140;
    v121 = (EventMissionMaster_o *)IsMonoColorRect;
    IsMonoColorRect = *(MapGimmickEntity_o **)(v120 + 24);
    if ( !IsMonoColorRect )
      goto LABEL_140;
    IsMonoColorRect = (MapGimmickEntity_o *)MapGimmickEntity__GetEventMissionIdList(IsMonoColorRect, 0);
    if ( !v121 )
      goto LABEL_140;
    EventMissionList_49055168 = EventMissionMaster__getEventMissionList_49055168(
                                  v121,
                                  (System_Collections_Generic_List_int__o *)IsMonoColorRect,
                                  0);
    *(_QWORD *)(v101 + 24) = EventMissionList_49055168;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v101 + 24),
      (int32_t)EventMissionList_49055168,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
    if ( !v100 )
      goto LABEL_140;
    v129 = (System_Collections_Generic_List_EventDelegate__o *)v100[8].monitor;
    v130 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v130,
      (Il2CppObject *)v101,
      (intptr_t)Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__1__,
      0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v131, v132);
    EventDelegate__Add(v129, v130, 0);
  }
LABEL_107:
  IsMonoColorRect = *(MapGimmickEntity_o **)v43;
  if ( !*(_QWORD *)v43 )
    goto LABEL_140;
  actionEffectId = IsMonoColorRect->fields.actionEffectId;
  v133 = (_DWORD)IsMonoColorRect + 100;
  if ( actionEffectId >= 1 )
  {
    v135 = System_Int32__ToString(v133, 0);
    v136 = (MapGimmickComponent_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_9265/*"MapGimmickActionEffect_"*/, v135, 0);
    v140 = (UnityEngine_Object_o *)MapGimmickComponent__GetEffectPrefab(
                                     v136,
                                     (System_String_o *)v136,
                                     assetData,
                                     multiAssetData,
                                     v137);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v138, v139);
    IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Object__op_Inequality(v140, 0, 0);
    if ( ((unsigned __int8)IsMonoColorRect & 1) != 0 )
    {
      if ( !v140 )
        goto LABEL_140;
      v143 = UnityEngine_GameObject__GetComponent_object_(
               (UnityEngine_GameObject_o *)v140,
               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v141, v142);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v143, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v144, v145);
        v146 = UnityEngine_Object__Instantiate_object_(
                 v143,
                 (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_CommonEffectComponent___);
        this->fields.actionEffect = (struct CommonEffectComponent_o *)v146;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.actionEffect,
          (int32_t)v146,
          v147,
          v148,
          v149,
          v150,
          v151,
          v152);
        IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
        if ( IsMonoColorRect )
        {
          v153 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsMonoColorRect, 0);
          v154 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SafeSetParent_42897308(v153, v154, 0);
          IsMonoColorRect = (MapGimmickEntity_o *)this->fields.actionEffect;
          if ( IsMonoColorRect )
          {
            IsMonoColorRect = (MapGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)IsMonoColorRect,
                                                      0);
            if ( IsMonoColorRect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsMonoColorRect, 0, 0);
              return;
            }
          }
        }
        goto LABEL_140;
      }
    }
  }
}


void MapGimmickComponent__StartActionEffect(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *actionEffect; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596D101 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D101 = 1;
  }
  actionEffect = (UnityEngine_Object_o *)this->fields.actionEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(actionEffect, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.actionEffect;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.actionEffect) == 0) )
    {
      sub_2213CDC(gameObject, v5);
    }
    CommonEffectComponent__ForceStart((CommonEffectComponent_o *)gameObject, 0);
  }
}


void MapGimmickComponent__StateDispAnimEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  MapGimmickComponent__SetState(this, 1, 0, v3);
}


void MapGimmickComponent__StateHideAnimEnd(MapGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x2

  if ( (byte_596D104 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D104 = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    MapGimmickComponent__SetTouchEnable(this, 0, v9);
  }
  MapGimmickComponent__SetState(this, 0, 0, v7);
}


void MapGimmickComponent__Update(MapGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D0F2 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_MapGimmickComponent__update__);
    byte_596D0F2 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E83E6C *)Method_CStateManager_MapGimmickComponent__update__);
}


void MapGimmickComponent___SetDisplayByRaidProgress_b__57_0(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_2213CDC(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void MapGimmickComponent___SetDisplayByRaidProgress_b__57_1(MapGimmickComponent_o *this, const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mMapCtrl_MapGimmickInfo = this->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    sub_2213CDC(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void MapGimmickComponent_StateDispAnim___ctor(MapGimmickComponent_StateDispAnim_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateDispAnim__begin(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  int32_t dispType; // w8
  float AnimTime; // s0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_2213CDC(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    MapGimmickComponent__SetState(that, 1, 0, v8);
  }
  else if ( !dispType )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_42961028(that, 1, AnimTime, 1, v7);
  }
}


void MapGimmickComponent_StateDispAnim__end(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateDispAnim__update(
        MapGimmickComponent_StateDispAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateHideAnim___ctor(MapGimmickComponent_StateHideAnim_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateHideAnim__begin(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  int32_t dispType; // w8
  float AnimTime; // s0
  const MethodInfo *v7; // x3

  if ( !that || (mMapCtrl_MapGimmickInfo = that->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_2213CDC(this, that);
  dispType = mMapCtrl_MapGimmickInfo->fields.dispType;
  if ( dispType == 1 )
  {
    AnimTime = MapGimmickComponent__GetAnimTime(that, (const MethodInfo *)that);
    MapGimmickComponent__SetDispAnim_42961028(that, 0, AnimTime, 1, v7);
  }
  else if ( !dispType )
  {
    MapGimmickComponent__StateHideAnimEnd(that, (const MethodInfo *)that);
  }
}


void MapGimmickComponent_StateHideAnim__end(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateHideAnim__update(
        MapGimmickComponent_StateHideAnim_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateMapMain___cctor(const MethodInfo *method)
{
  if ( (byte_596D110 & 1) == 0 )
  {
    sub_2213A60(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_596D110 = 1;
  }
  MapGimmickComponent_StateMapMain_TypeInfo->static_fields->CHECK_DISP_ITVL_SEC = 60;
}


void MapGimmickComponent_StateMapMain___ctor(MapGimmickComponent_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateMapMain__CheckDispTime(
        MapGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  __int64 v6; // x2
  struct MapGimmickComponent_o *mThat; // x8
  int64_t v8; // x20
  int64_t mOldDispTime; // x21
  struct MapGimmickComponent_o *v10; // x8
  const MethodInfo *v11; // x3
  struct MapGimmickComponent_o *v12; // x8
  bool v13; // w8
  int32_t v14; // w1
  __int64 v15; // x8

  if ( (byte_596D10E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&MapGimmickComponent_StateMapMain_TypeInfo);
    byte_596D10E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( !*(_QWORD *)(Instance + 64) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Instance = NetworkManager__getTime(0);
    mThat = this->fields.mThat;
    if ( !mThat )
      goto LABEL_31;
    v8 = Instance;
    mOldDispTime = mThat->fields.mOldDispTime;
    Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    if ( !*(&MapGimmickComponent_StateMapMain_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MapGimmickComponent_StateMapMain_TypeInfo, v4, v6);
      Instance = (int64_t)MapGimmickComponent_StateMapMain_TypeInfo;
    }
    if ( v8 - mOldDispTime >= **(int **)(Instance + 184) )
    {
      v10 = this->fields.mThat;
      if ( !v10 )
        goto LABEL_31;
      Instance = (int64_t)v10->fields.mMapCtrl_MapGimmickInfo;
      v10->fields.mOldDispTime = v8;
      if ( !Instance )
        goto LABEL_31;
      Instance = (int64_t)MapControl_MapGimmickInfo__GetMine((MapControl_MapGimmickInfo_o *)Instance, v4);
      if ( !Instance )
        goto LABEL_31;
      Instance = MapGimmickEntity__IsCheckRaidProgress((MapGimmickEntity_o *)Instance, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_17;
      if ( !this->fields.mThat )
        goto LABEL_31;
      if ( !MapGimmickComponent__IsEventOverEnd((MapGimmickComponent_o *)Instance, v4) )
      {
LABEL_17:
        Instance = (int64_t)this->fields.mThat;
        if ( !Instance )
          goto LABEL_31;
        if ( !*(_BYTE *)(Instance + 113) )
        {
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          v12 = this->fields.mThat;
          if ( !v12 || !Instance )
            goto LABEL_31;
          v13 = QuestTree__CheckMapGimmickCond_43439552((QuestTree_o *)Instance, v12->fields.mMapCtrl_MapGimmickInfo, 0);
          Instance = (int64_t)this->fields.mThat;
          if ( v13 )
          {
            if ( Instance )
            {
              v14 = 3;
LABEL_30:
              MapGimmickComponent__SetState((MapGimmickComponent_o *)Instance, v14, 0, v11);
              return;
            }
            goto LABEL_31;
          }
          if ( !Instance )
            goto LABEL_31;
        }
        if ( !*(_BYTE *)(Instance + 112) )
        {
          v14 = 2;
          goto LABEL_30;
        }
        v15 = *(_QWORD *)(Instance + 136);
        if ( !v15 )
LABEL_31:
          sub_2213CDC(Instance, v4);
        *(_DWORD *)(v15 + 16) = 0;
      }
    }
  }
}


void MapGimmickComponent_StateMapMain__CheckQuickHideOnTimeEnd(
        MapGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct MapGimmickComponent_o *mThat; // x8
  MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x0
  MapGimmickEntity_o *Mine; // x0
  MapGimmickEntity_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  struct MapGimmickComponent_o *v11; // x8
  int64_t endedAt; // x9

  if ( (byte_596D10F & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_596D10F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( *(_QWORD *)(Instance + 64) )
    return;
  mThat = this->fields.mThat;
  if ( !mThat )
    goto LABEL_19;
  mMapCtrl_MapGimmickInfo = mThat->fields.mMapCtrl_MapGimmickInfo;
  if ( !mMapCtrl_MapGimmickInfo )
    return;
  if ( !mMapCtrl_MapGimmickInfo->fields.dispType )
    return;
  Mine = MapControl_MapGimmickInfo__GetMine(mMapCtrl_MapGimmickInfo, v4);
  if ( !Mine )
    return;
  v8 = Mine;
  if ( MapGimmickEntity__IsCheckRaidProgress(Mine, 0)
    || !MapGimmickEntity__IsQuickHideOnTimeEnd(v8, 0)
    || v8->fields.endedAt < 1 )
  {
    return;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  Instance = NetworkManager__getTime(0);
  v11 = this->fields.mThat;
  if ( !v11 )
LABEL_19:
    sub_2213CDC(Instance, v4);
  if ( Instance - v11->fields.mOldQuickHideCheckTime >= 1 )
  {
    endedAt = v8->fields.endedAt;
    v11->fields.mOldQuickHideCheckTime = Instance;
    if ( Instance >= endedAt )
      MapGimmickComponent__HideNowWithoutEffect(v11, v4);
  }
}


void MapGimmickComponent_StateMapMain__begin(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mThat = that;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)that,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MapGimmickComponent_StateMapMain__end(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateMapMain__update(
        MapGimmickComponent_StateMapMain_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  MapGimmickComponent_StateMapMain__CheckDispTime(this, (const MethodInfo *)that);
  MapGimmickComponent_StateMapMain__CheckQuickHideOnTimeEnd(this, v4);
}


void MapGimmickComponent_StateNone___ctor(MapGimmickComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent_StateNone__begin(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateNone__end(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent_StateNone__update(
        MapGimmickComponent_StateNone_o *this,
        MapGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent__CoWaitGimmickFocusEnd_d__63___ctor(
        MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MapGimmickComponent__CoWaitGimmickFocusEnd_d__63__MoveNext(
        MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  UnityEngine_Component_o *touchEffectComponent; // x0
  struct MapGimmickComponent_o *_4__this; // x20
  MapGimmickEntity_o *mapGimmickEntity; // x21
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *mMapCamera; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject **p__2__current; // x19
  UnityEngine_Object_o *v17; // x21
  MapGimmickEntity_o *v18; // x0
  float TouchFocusCameraAfterAnimWaitTime; // s0
  float v20; // s8
  UnityEngine_WaitForSeconds_o *v21; // x20
  Il2CppObject **v22; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int v29; // w8
  UnityEngine_Object_o *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UnityEngine_Object_o *v37; // x21
  MethodInfo *v38; // x2
  float v39; // s0
  float v40; // s8
  int32_t TouchFocusCameraEasingType; // w21
  MapCamera_o *v42; // x22
  const MethodInfo_45E9150 *v43; // x2
  System_Nullable_float__o p_size; // x0
  float beforeZoomSize; // s0
  System_Nullable_float__o v46; // x3
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  TerminalSceneComponent_c *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_Object_o *v55; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct CommonEffectComponent_o *v62; // x8
  System_Nullable_Vector3__o v64; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v66; // 0:x0.16
  UnityEngine_Vector3_o beforePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D113 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596D113 = 1;
  }
  _1__state = this->fields.__1__state;
  touchEffectComponent = 0;
  _4__this = this->fields.__4__this;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)touchEffectComponent;
      this->fields.__1__state = -1;
      if ( !_4__this )
LABEL_64:
        sub_2213CDC(touchEffectComponent, method);
    }
    else
    {
      touchEffectComponent = (UnityEngine_Component_o *)this->fields.touchEffectComponent;
      this->fields.__1__state = -1;
      if ( !touchEffectComponent )
        goto LABEL_64;
      mapGimmickEntity = this->fields.mapGimmickEntity;
      touchEffectComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touchEffectComponent, 0);
      if ( !_4__this )
        goto LABEL_64;
      MapGimmickComponent__CameraMoveTouchGimmick(
        _4__this,
        mapGimmickEntity,
        (UnityEngine_GameObject_o *)touchEffectComponent,
        v8);
    }
    mMapCamera = (UnityEngine_Object_o *)_4__this->fields.mMapCamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(mMapCamera, 0, 0) )
    {
      touchEffectComponent = (UnityEngine_Component_o *)_4__this->fields.mMapCamera;
      if ( !touchEffectComponent )
        goto LABEL_64;
      if ( MapCamera__IsAutoWork((MapCamera_o *)touchEffectComponent, 0) )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v10, v11, v12, v13, v14, v15);
        LOBYTE(touchEffectComponent) = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return (char)touchEffectComponent;
      }
    }
    v17 = (UnityEngine_Object_o *)this->fields.touchEffectComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v10);
    if ( !UnityEngine_Object__op_Inequality(v17, 0, 0) )
      goto LABEL_32;
    v18 = this->fields.mapGimmickEntity;
    if ( v18 )
    {
      TouchFocusCameraAfterAnimWaitTime = MapGimmickEntity__GetTouchFocusCameraAfterAnimWaitTime(v18, 0);
      if ( TouchFocusCameraAfterAnimWaitTime > 0.0 )
      {
        v20 = TouchFocusCameraAfterAnimWaitTime;
        v21 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v21, v20, 0);
        this->fields.__2__current = (Il2CppObject *)v21;
        v22 = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)v22, (int32_t)v21, v23, v24, v25, v26, v27, v28);
        v29 = 2;
LABEL_49:
        *((_DWORD *)v22 - 2) = v29;
        LOBYTE(touchEffectComponent) = 1;
        return (char)touchEffectComponent;
      }
    }
LABEL_30:
    touchEffectComponent = (UnityEngine_Component_o *)this->fields.touchEffectComponent;
    if ( !touchEffectComponent )
      goto LABEL_64;
    CommonEffectComponent__PlayDelayedTouchAnimation((CommonEffectComponent_o *)touchEffectComponent, 0);
    goto LABEL_32;
  }
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    goto LABEL_30;
  }
  if ( _1__state != 3 )
  {
    if ( _1__state != 4 )
      return (char)touchEffectComponent;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_64;
    goto LABEL_46;
  }
  this->fields.__1__state = -1;
LABEL_32:
  v30 = (UnityEngine_Object_o *)this->fields.touchEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  touchEffectComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)touchEffectComponent & 1) != 0 )
  {
    touchEffectComponent = (UnityEngine_Component_o *)this->fields.touchEffectComponent;
    if ( !touchEffectComponent )
      goto LABEL_64;
    touchEffectComponent = (UnityEngine_Component_o *)CommonEffectComponent__IsTouchAnimating(
                                                        (CommonEffectComponent_o *)touchEffectComponent,
                                                        0);
    if ( ((unsigned __int8)touchEffectComponent & 1) != 0 )
    {
      this->fields.__2__current = 0;
      v22 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v22, 0, v31, v32, v33, v34, v35, v36);
      v29 = 3;
      goto LABEL_49;
    }
  }
  if ( !_4__this )
    goto LABEL_64;
  v37 = (UnityEngine_Object_o *)_4__this->fields.mMapCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v31);
  if ( !UnityEngine_Object__op_Inequality(v37, 0, 0) )
    goto LABEL_50;
  method = (const MethodInfo *)this->fields.mapGimmickEntity;
  if ( !method )
    goto LABEL_50;
  v39 = MapGimmickComponent__CalcMoveTimeByDistance(
          _4__this,
          (MapGimmickEntity_o *)method,
          this->fields.beforePosition,
          v38);
  touchEffectComponent = (UnityEngine_Component_o *)this->fields.mapGimmickEntity;
  if ( !touchEffectComponent )
    goto LABEL_64;
  v40 = v39;
  TouchFocusCameraEasingType = MapGimmickEntity__GetTouchFocusCameraEasingType(
                                 (MapGimmickEntity_o *)touchEffectComponent,
                                 0);
  *(_QWORD *)&v66.fields.hasValue = &v64;
  beforePosition = this->fields.beforePosition;
  v42 = _4__this->fields.mMapCamera;
  *(_QWORD *)&v64.fields.hasValue = 0;
  *(_QWORD *)&v64.fields.value.fields.y = 0;
  *(_QWORD *)&v66.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v66, beforePosition, v43);
  p_size = (System_Nullable_float__o)&size;
  beforeZoomSize = this->fields.beforeZoomSize;
  size = 0;
  System_Nullable_float____ctor(
    p_size,
    beforeZoomSize,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  if ( !v42 )
    goto LABEL_64;
  v46 = size;
  MapCamera__StartAutoWork(v42, v40, v64, v46, TouchFocusCameraEasingType, 0, 0);
LABEL_46:
  touchEffectComponent = (UnityEngine_Component_o *)_4__this->fields.mMapCamera;
  if ( !touchEffectComponent )
    goto LABEL_64;
  if ( MapCamera__IsAutoWork((MapCamera_o *)touchEffectComponent, 0) )
  {
    this->fields.__2__current = 0;
    v22 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v22, 0, (System_String_o *)v38, v47, v48, v49, v50, v51);
    v29 = 4;
    goto LABEL_49;
  }
LABEL_50:
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v38);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v52 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v38);
    v52 = TerminalSceneComponent_TypeInfo;
  }
  touchEffectComponent = (UnityEngine_Component_o *)v52->static_fields->mInstance;
  if ( !touchEffectComponent )
    goto LABEL_64;
  TerminalSceneComponent__SetActionBGColl((TerminalSceneComponent_o *)touchEffectComponent, 0, 0, 0);
  v55 = (UnityEngine_Object_o *)this->fields.touchEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
  touchEffectComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v55, 0, 0);
  if ( ((unsigned __int8)touchEffectComponent & 1) != 0 )
  {
    v62 = this->fields.touchEffectComponent;
    if ( !v62 )
      goto LABEL_64;
    v62->fields.isTouched = 0;
  }
  _4__this->fields.mFocusCoroutine = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.mFocusCoroutine, 0, v56, v57, v58, v59, v60, v61);
  LOBYTE(touchEffectComponent) = 0;
  return (char)touchEffectComponent;
}


Il2CppObject *MapGimmickComponent__CoWaitGimmickFocusEnd_d__63__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MapGimmickComponent__CoWaitGimmickFocusEnd_d__63__System_Collections_IEnumerator_Reset(
        MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *MapGimmickComponent__CoWaitGimmickFocusEnd_d__63__System_Collections_IEnumerator_get_Current(
        MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MapGimmickComponent__CoWaitGimmickFocusEnd_d__63__System_IDisposable_Dispose(
        MapGimmickComponent__CoWaitGimmickFocusEnd_d__63_o *this,
        const MethodInfo *method)
{
  ;
}


void MapGimmickComponent___c__DisplayClass30_0___ctor(
        MapGimmickComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass30_0___Setup_b__0(
        MapGimmickComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct MapGimmickComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  MapGimmickComponent__OnGimmickTouched(
    this->fields.__4__this,
    this->fields.mg_ent,
    _4__this->fields.commonEffectComponent,
    this->fields.touchCallback,
    v2);
}


void MapGimmickComponent___c__DisplayClass30_1___ctor(
        MapGimmickComponent___c__DisplayClass30_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass30_1___Setup_b__1(
        MapGimmickComponent___c__DisplayClass30_1_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MapGimmickEntity_o *Instance; // x0
  __int64 v6; // x1
  struct MapGimmickComponent___c__DisplayClass30_0_o *CS___8__locals1; // x8
  CommonUI_o *v8; // x20
  struct MapGimmickComponent___c__DisplayClass30_0_o *v9; // x8
  System_String_o *v10; // x21
  System_String_o *v11; // x24
  System_Action_o *_9__2; // x25
  EventDetailEntity_o *eventDetailEnt; // x22
  EventMissionEntity_array *eventMissionEntList; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596D111 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__1__);
    sub_2213A60(&Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__2__);
    byte_596D111 = 1;
  }
  v3 = Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__1__;
  if ( (*((_BYTE *)Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__1__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__1__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (MapGimmickEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_13;
  v8 = (CommonUI_o *)Instance;
  Instance = CS___8__locals1->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetTitleFromScript(Instance, 0);
  v9 = this->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_13;
  v10 = (System_String_o *)Instance;
  Instance = v9->fields.mg_ent;
  if ( !Instance )
    goto LABEL_13;
  Instance = (MapGimmickEntity_o *)MapGimmickEntity__GetSubTitleFromScript(Instance, 0);
  v11 = (System_String_o *)Instance;
  _9__2 = this->fields.__9__2;
  eventDetailEnt = this->fields.eventDetailEnt;
  eventMissionEntList = this->fields.eventMissionEntList;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)this, Method_MapGimmickComponent___c__DisplayClass30_1__Setup_b__2__, 0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v15, v16, v17, v18, v19, v20);
  }
  if ( !v8 )
LABEL_13:
    sub_2213CDC(Instance, v6);
  CommonUI__OpenEventMissionListDialog(v8, v10, v11, eventDetailEnt, eventMissionEntList, _9__2, 0);
}


void MapGimmickComponent___c__DisplayClass30_1___Setup_b__2(
        MapGimmickComponent___c__DisplayClass30_1_o *this,
        const MethodInfo *method)
{
  MapGimmickComponent___c__DisplayClass30_1_o *v2; // x19
  struct EventMissionEntity_array *eventMissionEntList; // x9
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  EventMissionEntity_o *v5; // x9
  int32_t id; // w21
  struct EventDetailEntity_o *eventDetailEnt; // x9
  struct EventDetailEntity_o *v8; // x8
  int v9; // w8
  MapGimmickComponent___c__DisplayClass30_1_o *v10; // x21
  __int64 v11; // x23
  __int64 v12; // x22
  int32_t v13; // w21
  struct EventDetailEntity_o *v14; // x8
  struct EventDetailEntity_o *v15; // x8
  int32_t eventId; // w20
  SceneJumpInfo_o *v17; // x19

  v2 = this;
  if ( (byte_596D112 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventRewardSceneMaster___);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (MapGimmickComponent___c__DisplayClass30_1_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D112 = 1;
  }
  if ( !byte_596A15C )
  {
    this = (MapGimmickComponent___c__DisplayClass30_1_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A15C = 1;
  }
  eventMissionEntList = v2->fields.eventMissionEntList;
  static_fields = EventRewardSaveData_TypeInfo->static_fields;
  static_fields->_FilterId_k__BackingField = 0;
  if ( !eventMissionEntList )
    goto LABEL_30;
  if ( !LODWORD(eventMissionEntList->max_length) )
LABEL_31:
    sub_2213CE4(this);
  v5 = eventMissionEntList->m_Items[0];
  if ( !v5 )
    goto LABEL_30;
  id = v5->fields.id;
  if ( !byte_596A748 )
  {
    this = (MapGimmickComponent___c__DisplayClass30_1_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A748 = 1;
    static_fields = EventRewardSaveData_TypeInfo->static_fields;
  }
  eventDetailEnt = v2->fields.eventDetailEnt;
  static_fields->_MissionId_k__BackingField = id;
  if ( !eventDetailEnt )
    goto LABEL_30;
  EventRewardSaveData__SaveMissionData(eventDetailEnt->fields.eventId, 0);
  this = (MapGimmickComponent___c__DisplayClass30_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass30_1_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRewardSceneMaster___);
  v8 = v2->fields.eventDetailEnt;
  if ( !v8 )
    goto LABEL_30;
  if ( !this )
    goto LABEL_30;
  this = (MapGimmickComponent___c__DisplayClass30_1_o *)EventRewardSceneMaster__GetEntityList(
                                                          (EventRewardSceneMaster_o *)this,
                                                          v8->fields.eventId,
                                                          0);
  if ( !this )
    goto LABEL_30;
  v9 = (int)this->fields.eventMissionEntList;
  v10 = this;
  if ( v9 < 1 )
  {
LABEL_21:
    v13 = 0;
  }
  else
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= v9 )
        goto LABEL_31;
      v12 = *((_QWORD *)&v10->fields.CS___8__locals1 + v11);
      if ( !v12 )
        goto LABEL_30;
      this = (MapGimmickComponent___c__DisplayClass30_1_o *)EventRewardSceneEntity__IsEventMission(
                                                              *((EventRewardSceneEntity_o **)&v10->fields.CS___8__locals1
                                                              + v11),
                                                              0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v9 = (int)v10->fields.eventMissionEntList;
      if ( (int)++v11 >= v9 )
        goto LABEL_21;
    }
    v13 = *(_DWORD *)(v12 + 20);
  }
  if ( !byte_596A83E )
  {
    this = (MapGimmickComponent___c__DisplayClass30_1_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A83E = 1;
  }
  v14 = v2->fields.eventDetailEnt;
  EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField = v13;
  if ( !v14
    || (EventRewardSaveData__SaveCurrentEventData(v14->fields.eventId, 0), (v15 = v2->fields.eventDetailEnt) == 0)
    || (eventId = v15->fields.eventId,
        v17 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_48464916(v17, (System_String_o *)StringLiteral_1/*""*/, eventId, 0),
        !v17)
    || (SceneJumpInfo__SetReturnNowScene(v17, 0),
        (this = (MapGimmickComponent___c__DisplayClass30_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
LABEL_30:
    sub_2213CDC(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 72, 1, (Il2CppObject *)v17, 0);
}


void MapGimmickComponent___c__DisplayClass49_0___ctor(
        MapGimmickComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass49_0___SetDispAnim_b__0(
        MapGimmickComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *_4__this; // x8
  MapGimmickComponent___c__DisplayClass49_0_o *v3; // x19
  MapGimmickComponent_o *v4; // x19
  const MethodInfo *v5; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MapGimmickComponent___c__DisplayClass49_0_o *)_4__this->fields.mSprite) == 0)
    || (this = (MapGimmickComponent___c__DisplayClass49_0_o *)((__int64 (__fastcall *)(MapGimmickComponent___c__DisplayClass49_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                                                this,
                                                                this->klass[1]._1.castClass,
                                                                (float)v3->fields.to),
        (v4 = v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  ActionExtensions__Call(v4->fields.mStateEndAct, 0);
  MapGimmickComponent__SetState(v4, 1, 0, v5);
}


void MapGimmickComponent___c__DisplayClass49_0___SetDispAnim_b__1(
        MapGimmickComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x9
  struct MapGimmickComponent_o *_4__this; // x8
  struct UISprite_o *mSprite; // x8

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0 || (mSprite = _4__this->fields.mSprite) == 0 )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(struct UISprite_o *__return_ptr, struct UISprite_o *, const MethodInfo *, float))mSprite->klass->vtable._8_set_alpha.methodPtr)(
    mSprite,
    mSprite,
    mSprite->klass->vtable._8_set_alpha.method,
    this->fields.from + (float)(eo->fields.mNow * (float)((float)this->fields.to - this->fields.from)));
}


void MapGimmickComponent___c__DisplayClass50_0___ctor(
        MapGimmickComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapGimmickComponent___c__DisplayClass50_0___SetMoveAnim_b__0(
        MapGimmickComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)_4__this,
                                                0)) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, this->fields.posTo, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


// local variable allocation has failed, the output may be wrong!
void MapGimmickComponent___c__DisplayClass50_0___SetMoveAnim_b__1(
        MapGimmickComponent___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  struct EasingObject_o *eo; // x8
  float v5; // s0
  float mNow; // s1
  float z; // s3
  float v8; // s4
  unsigned __int64 v9; // d0 OVERLAPPED
  float v10; // s2
  int v11; // s1

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)_4__this,
                                                0),
        (eo = this->fields.eo) == 0)
    || !_4__this )
  {
    sub_2213CDC(_4__this, method);
  }
  v5 = 1.0;
  mNow = eo->fields.mNow;
  if ( mNow <= 1.0 )
    v5 = eo->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  z = this->fields.posFrom.fields.z;
  v8 = (float)(this->fields.posTo.fields.z - z) * v5;
  v9 = vadd_f32(
         *(float32x2_t *)&this->fields.posFrom.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.posTo.fields.x, *(float32x2_t *)&this->fields.posFrom.fields.x),
           v5)).n64_u64[0];
  v10 = z + v8;
  v11 = HIDWORD(v9);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)_4__this, *(UnityEngine_Vector3_o *)&v9, 0);
}
void CylinderCore___cctor(const MethodInfo *method)
{
  CylinderCore_c *v1; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v3; // x10
  struct CylinderCore_StaticFields *v4; // x8

  if ( (byte_5934D93 & 1) == 0 )
  {
    sub_21FFC50(&CylinderCore_TypeInfo);
    byte_5934D93 = 1;
  }
  v1 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_ROT_X = xmmword_E92AA0;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v3 = v1->static_fields;
  v3->FOCUS_OUT_POS.fields.z = 94.0;
  *(_QWORD *)&v3->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v4 = v1->static_fields;
  *(_QWORD *)&v4->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v4->ZOOM_IN_POS.fields.z = -624.0;
}


void CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934D92 & 1) == 0 )
  {
    sub_21FFC50(&CylinderCore_StateMain_TypeInfo);
    byte_5934D92 = 1;
  }
  v3 = (Il2CppObject *)sub_21FFEBC(CylinderCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.mStateMain = (struct CylinderCore_StateMain_o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mStateMain, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseCore___ctor((BaseCore_o *)this, 0);
}


void CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *mEarthRoot; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934D8D & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_CylinderCore___ctor__);
    sub_21FFC50(&Method_CStateManager_CylinderCore__add__);
    sub_21FFC50(&CStateManager_CylinderCore__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_21FFC50(&CylinderCore_StateNone_TypeInfo);
    sub_21FFC50(&CylinderCore_StateZoomIn_TypeInfo);
    sub_21FFC50(&CylinderCore_StateZoomOut_TypeInfo);
    byte_5934D8D = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v5 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_CylinderCore__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E505AC *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    v12 = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_21FFEBC(CylinderCore_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_13;
    CStateManager_object___add(
      v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E5065C *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_object___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_3E5065C *)Method_CStateManager_CylinderCore__add__);
    v16 = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_21FFEBC(CylinderCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16
      || (CStateManager_object___add(
            v16,
            2,
            (IState_T__o *)v17,
            (const MethodInfo_3E5065C *)Method_CStateManager_CylinderCore__add__),
          v18 = (CStateManager_T__o *)*p_mFSM,
          v19 = (Il2CppObject *)sub_21FFEBC(CylinderCore_StateZoomOut_TypeInfo),
          System_Object___ctor(v19, 0),
          !v18) )
    {
LABEL_13:
      sub_21FFECC(mEarthRoot, v15);
    }
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_3E5065C *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_42878128(gameObject, 1.0, 0);
  mEarthRoot = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)mEarthRoot,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMeshRenderer,
    (int32_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  mEarthRoot = (CStateManager_T__o *)this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_13;
  mEarthRoot = (CStateManager_T__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mEarthRoot, 0);
  if ( !mEarthRoot )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)mEarthRoot, 0);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(CylinderCore_o *, __int64, const MethodInfo *))klass->vtable._12_SetDisp.methodPtr)(
    this,
    1,
    klass->vtable._12_SetDisp.method);
}


// local variable allocation has failed, the output may be wrong!
void CylinderCore__FocusInOut(CylinderCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  CylinderCore_c *v8; // x0
  int v9; // w8
  __int64 p_FOCUS_IN_POS; // x8
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  int32_t v18; // w1
  float v19; // s8
  System_Func_T__T__float__T__o *v20; // x20
  float x; // s11
  float y; // s12
  float v23; // s9
  float z; // s13
  float v25; // s10
  float v26; // s14
  TransitionCalculator_Vector3__o *v27; // x0
  struct TransitionCalculator_Vector3__o *v28; // x21
  float v29; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_5934D8C & 1) == 0 )
  {
    sub_21FFC50(&CylinderCore_TypeInfo);
    sub_21FFC50(&Method_TransitionCalculator_Vector3___ctor__);
    sub_21FFC50(&TransitionCalculator_Vector3__TypeInfo);
    byte_5934D8C = 1;
  }
  v8 = CylinderCore_TypeInfo;
  v9 = *(&CylinderCore_TypeInfo->_2.cctor_finished + 1);
  this->fields.mIsFocusIn = v7;
  if ( isFocusIn )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v8, isFocusIn, isForce);
      v8 = CylinderCore_TypeInfo;
    }
    p_FOCUS_IN_POS = (__int64)&v8->static_fields->FOCUS_IN_POS;
  }
  else
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v8, isFocusIn, isForce);
      v8 = CylinderCore_TypeInfo;
    }
    p_FOCUS_IN_POS = (__int64)&v8->static_fields->FOCUS_OUT_POS;
  }
  v29 = *(float *)(p_FOCUS_IN_POS + 8);
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = *(_QWORD *)p_FOCUS_IN_POS;
  this->fields.mFocusTgtPos.fields.z = v29;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0);
    this->fields.focusInOutPositionCalculator = 0;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v18 = 0;
  }
  else
  {
    v19 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0);
    v20 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    v23 = LocalPosition.fields.x;
    z = this->fields.mFocusTgtPos.fields.z;
    v25 = LocalPosition.fields.y;
    v26 = LocalPosition.fields.z;
    v27 = (TransitionCalculator_Vector3__o *)sub_21FFEBC(TransitionCalculator_Vector3__TypeInfo);
    v31.fields.x = v23;
    v31.fields.y = v25;
    v31.fields.z = v26;
    v32.fields.x = x;
    v32.fields.y = y;
    v32.fields.z = z;
    v28 = v27;
    TransitionCalculator_Vector3____ctor(
      v27,
      v31,
      v32,
      v19,
      v20,
      (const MethodInfo_3BB5DA4 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v28;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v18 = (int)v28;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_focusInOutPositionCalculator, v18, v11, v12, v13, v14, v15, v16);
}


int32_t CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  CylinderCore_o *v2; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_5934D90 & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_21FFC50(&Method_CStateManager_CylinderCore__getState__);
    byte_5934D90 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
  return mFSM->fields.m_state;
}


CylinderCore_StateMain_o *CylinderCore__GetStateMain(CylinderCore_o *this, const MethodInfo *method)
{
  return this->fields.mStateMain;
}


float CylinderCore__GetStateMainInertialSpdOld(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  if ( !mStateMain )
    sub_21FFECC(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_21FFECC(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
void CylinderCore__SetDisp(CylinderCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0) )
  {
    sub_21FFECC(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, is_disp, 0);
}


// local variable allocation has failed, the output may be wrong!
void CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5934D91 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_CylinderCore__setState__);
    byte_5934D91 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_CylinderCore__setState__);
}


void CylinderCore__Setup(
        CylinderCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v10; // w20
  __int128 v11; // q0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v16; // x23
  int32_t warId; // w21
  __int64 mCoreType; // x24
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v21; // x8
  float v22; // s9
  float v23; // s10
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  CylinderPoint_c *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UnityEngine_Object_o *v29; // x23
  __int64 naturalAligment; // x9
  _BOOL8 v31; // x0
  __int64 v32; // x1
  float v33; // s10
  Il2CppObject *EarthPoint_object; // x0
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-A0h] BYREF
  float cosx; // [xsp+48h] [xbp-78h] BYREF
  float sinx; // [xsp+4Ch] [xbp-74h] BYREF

  if ( (byte_5934D8F & 1) == 0 )
  {
    sub_21FFC50(&Method_BaseCore_CreateEarthPoint_CylinderPoint___);
    sub_21FFC50(&CylinderPoint_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_8590/*"LAST_WAR_ID"*/);
    byte_5934D8F = 1;
  }
  memset(&v39, 0, sizeof(v39));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_35;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0);
  if ( !mEarthRoot )
    goto LABEL_35;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ((void (__fastcall *)(CylinderCore_o *, bool, __int64, const MethodInfo *))this->klass->vtable._4_FocusInOut.methodPtr)(
    this,
    isFocusIn,
    1,
    this->klass->vtable._4_FocusInOut.method);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8590/*"LAST_WAR_ID"*/, 0);
  if ( !warInfoList )
LABEL_35:
    sub_21FFECC(mEarthRoot, v7);
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v11 = *(_OWORD *)&v38.fields._list;
  v38.fields._list = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  v39.fields._current = v38.fields._current;
  *(_OWORD *)&v39.fields._list = v11;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v12 )
      break;
    current = (MapControl_WarInfo_o *)v39.fields._current;
    if ( !v39.fields._current )
      sub_21FFECC(v12, v13);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v39.fields._current, 0);
    v16 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0) && !WarEntity__IsDisplayEarthPointWithoutMap(v16, 0) )
        goto LABEL_20;
      if ( WarEntity__IsEvent(v16, 0) || warId <= v10 )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v16, 0);
        if ( !PrioredCoordinates )
          goto LABEL_20;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_20;
        if ( (unsigned int)mCoreType >= max_length )
          sub_21FFED4(PrioredCoordinates);
        v21 = PrioredCoordinates->m_Items[mCoreType];
        if ( v21 && SLODWORD(v21->max_length) >= 2 )
        {
          v22 = v21->m_Items[0];
          v23 = v21->m_Items[1];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0);
          v29 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            v26 = CylinderPoint_TypeInfo;
            naturalAligment = CylinderPoint_TypeInfo->_2.naturalAligment;
            if ( EarthPoint->klass->_2.naturalAligment < (unsigned int)naturalAligment
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[naturalAligment - 1] != CylinderPoint_TypeInfo )
            {
              sub_220024C(EarthPoint, CylinderPoint_TypeInfo, v27, v28);
LABEL_38:
              sub_21FFECC(EarthPoint_object, v35);
            }
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
          v31 = UnityEngine_Object__op_Equality(v29, 0, 0);
          if ( v31 )
          {
            v33 = (float)(v23 + 192.0) + -90.0;
            sincosf(v33 * 0.017453, &sinx, &cosx);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  cosx * 143.0,
                                  (float)(v22 / 90.0) * 120.0,
                                  sinx * 143.0,
                                  (const MethodInfo_37DB5B4 *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              goto LABEL_38;
            *((float *)&EarthPoint_object[7].klass + 1) = v33;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0);
          }
          else
          {
            if ( !v29 )
              sub_21FFECC(v31, v32);
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0);
            if ( !v36 )
              sub_21FFECC(0, v37);
            UnityEngine_GameObject__SetActive(v36, IsWarOpen, 0);
          }
        }
        else
        {
LABEL_20:
          BaseCore__HideEarthPoint((BaseCore_o *)this, warId, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_5934D8E & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_CylinderCore__update__);
    byte_5934D8E = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E506C4 *)Method_CStateManager_CylinderCore__update__);
  if ( this->fields.mIsReqZoomIn && CylinderCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0);
    this->fields.mIsReqZoomIn = 0;
    CylinderCore__SetState(this, 2, v4);
  }
}


CylinderPoint_o *CylinderCore__get_mFocusCylinderPoint(CylinderCore_o *this, const MethodInfo *method)
{
  struct BaseEarthPoint_o *mFocusEarthPoint; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5934D8B & 1) == 0 )
  {
    sub_21FFC50(&CylinderPoint_TypeInfo);
    byte_5934D8B = 1;
  }
  mFocusEarthPoint = this->fields.mFocusEarthPoint;
  if ( !mFocusEarthPoint )
    return 0;
  naturalAligment = CylinderPoint_TypeInfo->_2.naturalAligment;
  if ( mFocusEarthPoint->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CylinderPoint_c *)mFocusEarthPoint->klass->_2.typeHierarchy[naturalAligment - 1] == CylinderPoint_TypeInfo )
    return (CylinderPoint_o *)this->fields.mFocusEarthPoint;
  return 0;
}


void CylinderCore__mcbfStartMain(CylinderCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CylinderCore__SetState(this, 1, v2);
}


void CylinderCore__mcbfStartZoomIn(CylinderCore_o *this, const MethodInfo *method)
{
  this->fields.mIsReqZoomIn = 1;
}


void CylinderCore__mcbfStartZoomOut(CylinderCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CylinderCore__SetState(this, 3, v2);
}


void CylinderCore_StateMain___ctor(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateMain__begin(CylinderCore_StateMain_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  this->fields.mInertialSpd = 0.0;
}


void CylinderCore_StateMain__end(CylinderCore_StateMain_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  ;
}


float CylinderCore_StateMain__get_InertialSpd(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields.mInertialSpd;
}


float CylinderCore_StateMain__get_InertialSpdOld(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields._InertialSpdOld_k__BackingField;
}


void CylinderCore_StateMain__set_InertialSpdOld(CylinderCore_StateMain_o *this, float value, const MethodInfo *method)
{
  this->fields._InertialSpdOld_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void CylinderCore_StateMain__update(CylinderCore_StateMain_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  CylinderCore_StateMain_o *v4; // x20
  float mInertialSpd; // s8
  float v6; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v8; // s0
  float v9; // s8
  float v10; // s0
  __int64 v11; // x1
  __int64 v12; // x2
  CTouch_c *v13; // x0
  float x; // s8
  float v15; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s8
  UnityEngine_GameObject_o *v18; // x20
  float AutoRotationSpeed; // s0
  __int64 v20; // x1
  __int64 v21; // x2
  CylinderCore_c *v22; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  float v26; // s0 OVERLAPPED
  float y; // s1
  bool v28; // w21
  UnityEngine_GameObject_o *v29; // x20
  float z; // s2
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_5934D94 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&CylinderCore_TypeInfo);
    sub_21FFC50(&Method_TransitionCalculator_Vector3__IsFinished__);
    this = (CylinderCore_StateMain_o *)sub_21FFC50(&Method_TransitionCalculator_Vector3__Update__);
    byte_5934D94 = 1;
  }
  if ( !that )
    goto LABEL_38;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, method);
    if ( CTouch__isDrag(0) )
    {
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11, v12);
      if ( !byte_5934CC5 )
      {
        sub_21FFC50(&CTouch_TypeInfo);
        byte_5934CC5 = 1;
      }
      v13 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11, v12);
        v13 = CTouch_TypeInfo;
      }
      x = v13->static_fields->mScrPosDelta.fields.x;
      if ( !byte_5934CC6 )
      {
        sub_21FFC50(&CTouch_TypeInfo);
        v13 = CTouch_TypeInfo;
        byte_5934CC6 = 1;
      }
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, v11, v12);
        v13 = CTouch_TypeInfo;
      }
      v15 = v13->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v15) )
        v15 = x;
      v4->fields.mInertialSpd = v15 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_5931944 )
    {
      sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
      byte_5931944 = 1;
    }
    v6 = vabds_f32(0.0, mInertialSpd);
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    v8 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    if ( v8 <= (float)(static_fields->Epsilon * 8.0) )
      v8 = static_fields->Epsilon * 8.0;
    if ( v6 >= v8 )
    {
      v9 = v4->fields.mInertialSpd;
      v10 = v9 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      v4->fields.mInertialSpd = v10;
      if ( fabsf(v10) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v17 = v4->fields.mInertialSpd;
  v18 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0);
  GameObjectExtensions__AddLocalEulerAngleY(v18, v17 + AutoRotationSpeed, 0);
  v22 = CylinderCore_TypeInfo;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !*(&CylinderCore_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v20, v21);
    v22 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v22->static_fields->BASE_ROT_X;
  v31.fields.y = 0.0;
  v31.fields.x = *p_BASE_ROT_X;
  v31.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v31, 0);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_3BB5E88 *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v29 = that->fields.mEarthRoot;
      *(UnityEngine_Vector3_o *)&v26 = TransitionCalculator_Vector3___Update(
                                         (TransitionCalculator_Vector3__o *)this,
                                         (const MethodInfo_3BB5E30 *)Method_TransitionCalculator_Vector3__Update__);
      v28 = 1;
      goto LABEL_37;
    }
LABEL_38:
    sub_21FFECC(this, that);
  }
  v26 = that->fields.mFocusTgtPos.fields.x;
  y = that->fields.mFocusTgtPos.fields.y;
  v28 = 0;
  v29 = that->fields.mEarthRoot;
  z = that->fields.mFocusTgtPos.fields.z;
LABEL_37:
  GameObjectExtensions__SetLocalPosition(v29, *(UnityEngine_Vector3_o *)&v26, 0);
  that->fields.mIsFocusMoving = v28;
}


void CylinderCore_StateNone___ctor(CylinderCore_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateNone__begin(CylinderCore_StateNone_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateNone__end(CylinderCore_StateNone_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateNone__update(CylinderCore_StateNone_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateZoomIn___ctor(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateZoomIn__GoNext(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v5; // x8

  if ( (byte_5934D97 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&StringLiteral_7261/*"GO_NEXT"*/);
    byte_5934D97 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v5 = this->fields.mCore) == 0)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0)) == 0 )
  {
    sub_21FFECC(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_78215652(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7261/*"GO_NEXT"*/,
    0);
}


void CylinderCore_StateZoomIn__begin(CylinderCore_StateZoomIn_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Component_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct CylinderCore_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x2
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  __int64 v34; // x2
  TerminalPramsManager_c *v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x8
  __int64 v45; // x2
  intptr_t m_CachedPtr; // x9
  __int64 v47; // x8
  __int64 v48; // x10
  float v49; // s8
  float v50; // s8
  int v51; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  EasingObject_o *v54; // x21
  float mSpdTime; // s8
  System_Action_o *v56; // x22
  System_Action_o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  TerminalPramsManager_c *v60; // x0
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v66; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localEulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934D95 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CylinderCore_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CylinderCore_StateZoomIn_GoNext__);
    sub_21FFC50(&Method_CylinderCore_StateZoomIn_begin__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_21FFC50(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_21FFC50(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_5934D95 = 1;
  }
  v5 = sub_21FFEBC(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_58;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 48);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 88) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 88), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28, v29);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0);
  mCore = this->fields.mCore;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !mCore )
    goto LABEL_58;
  mFocusEarthPoint = (UnityEngine_Object_o *)mCore->fields.mFocusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v30);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v34);
    if ( !byte_5934EA9 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934EA9 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v34);
      v35 = TerminalPramsManager_TypeInfo;
    }
    if ( v35->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    v63 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v63 = (_QWORD *)sub_21FFC68(Method_CylinderCore_StateZoomIn_begin__);
    v64 = (System_Reflection_MethodBase_o *)sub_21FFC34(v63, v63[4]);
    OverwriteAssetSoundName__PlayCommonSe(v64, 23, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v66 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v66, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v66, 0);
      return;
    }
LABEL_58:
    sub_21FFECC(transform, v7);
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v38, v39, v40, v41, v42, v43);
  v44 = *(_QWORD *)(v5 + 48);
  if ( !v44 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v44 + 32);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v5 + 24) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)transform,
                                          0);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !*(&CylinderCore_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v7, v45);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  m_CachedPtr = transform[7].fields.m_CachedPtr;
  v47 = *(_QWORD *)(v5 + 48);
  v48 = *(_QWORD *)(m_CachedPtr + 32);
  LODWORD(m_CachedPtr) = *(_DWORD *)(m_CachedPtr + 40);
  *(_QWORD *)(v5 + 36) = v48;
  *(_DWORD *)(v5 + 44) = m_CachedPtr;
  if ( !v47 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v47 + 80);
  if ( !transform )
    goto LABEL_58;
  v49 = *(float *)(v5 + 40);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_58;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  *(float *)(v5 + 40) = v49 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, v7);
  if ( !transform )
    goto LABEL_58;
  if ( !*v14 )
    goto LABEL_58;
  v50 = *((float *)&transform[4].fields.m_CachedPtr + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v14, 0);
  if ( !transform )
    goto LABEL_58;
  localEulerAngles = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0);
  *(float *)(v5 + 56) = localEulerAngles.fields.y;
  *(float *)(v5 + 60) = v50 + 90.0;
  if ( vabds_f32(localEulerAngles.fields.y, v50) > 180.0 )
    *(float *)(v5 + 56) = localEulerAngles.fields.y + -360.0;
  if ( !*v14 )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)(*v14)[1].monitor;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_58;
  v69 = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0);
  *(float *)(v5 + 64) = v69.fields.x;
  *(float *)(v5 + 68) = v69.fields.y;
  v51 = (unsigned __int8)byte_5931940;
  *(float *)(v5 + 72) = v69.fields.z;
  if ( !v51 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    v69.fields.x = *(float *)(v5 + 64);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 76) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 84) = z;
  if ( v69.fields.x > 180.0 )
  {
    v69.fields.x = v69.fields.x + -360.0;
    *(float *)(v5 + 64) = v69.fields.x;
  }
  if ( *(float *)(v5 + 72) > 180.0 )
    *(float *)(v5 + 64) = v69.fields.x + -360.0;
  v54 = *(EasingObject_o **)(v5 + 16);
  mSpdTime = this->fields.mSpdTime;
  v56 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0);
  v57 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0);
  if ( !v54 )
    goto LABEL_58;
  EasingObject__Play(v54, mSpdTime, v56, v57, 0.0, 0, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58, v59);
  if ( !byte_5934EA9 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934EA9 = 1;
  }
  v60 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v58, v59);
    v60 = TerminalPramsManager_TypeInfo;
  }
  if ( !v60->static_fields->_IsAutoResume_k__BackingField )
  {
    v61 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_21FFC68(Method_CylinderCore_StateZoomIn_begin__);
    v62 = (System_Reflection_MethodBase_o *)sub_21FFC34(v61, v61[4]);
    OverwriteAssetSoundName__PlayCommonSe(v62, 23, 0, 0);
    this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
  }
}


void CylinderCore_StateZoomIn__end(CylinderCore_StateZoomIn_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateZoomIn__update(CylinderCore_StateZoomIn_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  float v4; // s8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_5934D96 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CylinderCore_StateZoomIn_GoNext__);
    byte_5934D96 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0);
      if ( !Instance )
        sub_21FFECC(v7, v8);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v4, v6, 0);
      this->fields.mStartTime = 0.0;
    }
  }
}


void CylinderCore_StateZoomIn__updateFadeTime(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__0(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mNow; // s8
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v4; // x19
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  float v9; // s11
  UnityEngine_GameObject_o *gameObject; // x20
  float v11; // s0
  float v12; // s2
  float v13; // s0
  struct CylinderCore_o *v14; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float v16; // s1
  float v17; // s6
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_20;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = Easing__Func_55915380(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0);
  v6 = Easing__Func_55915380(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0);
  v7 = Easing__Func_55915380(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 1, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_20;
  v9 = v7;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_20;
  v18.fields.x = v5;
  v18.fields.y = v6;
  v18.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.that;
  if ( !this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = mNow <= 1.0 ? mNow : 1.0;
  v12 = mNow >= 0.0 ? v11 : 0.0;
  v13 = Easing__Func_55915380(v4->fields.startRotY, v4->fields.endRotY, v12, 6, 0);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v13, 0);
  v14 = v4->fields.that;
  if ( !v14 )
LABEL_20:
    sub_21FFECC(this, method);
  mEarthRoot = v14->fields.mEarthRoot;
  if ( (float)(mNow * 1.5) <= 1.0 )
    v16 = mNow * 1.5;
  else
    v16 = 1.0;
  if ( (float)(mNow * 1.5) >= 0.0 )
    v17 = v16;
  else
    v17 = 0.0;
  v19 = Easing__Func(v4->fields.startRot, v4->fields.endRot, v17, 3, 0);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v19, 0);
}


void CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v2; // x19
  struct CylinderCore_o *that; // x8
  struct CylinderCore_o *v4; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0

  v2 = this;
  if ( (byte_5934D98 & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934D98 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.endPos, 0);
  v4 = v2->fields.that;
  if ( !v4 )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.mEarthRoot;
  if ( !this )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v2->fields.endRot, 0);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.that;
  if ( !this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v2->fields.endRotY, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v6);
  if ( !byte_5934EA9 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934EA9 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v6);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_IsAutoResume_k__BackingField )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.__4__this;
    if ( this )
    {
      CylinderCore_StateZoomIn__GoNext((CylinderCore_StateZoomIn_o *)this, method);
      return;
    }
LABEL_20:
    sub_21FFECC(this, method);
  }
}


void CylinderCore_StateZoomOut___ctor(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateZoomOut__GoNext(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v5; // x8

  if ( (byte_5934D9A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&StringLiteral_7261/*"GO_NEXT"*/);
    byte_5934D9A = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v5 = this->fields.mCore) == 0)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0)) == 0 )
  {
    sub_21FFECC(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_78215652(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7261/*"GO_NEXT"*/,
    0);
}


void CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  CylinderCore_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct CylinderCore_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x2
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x22
  float v33; // s8
  CylinderCore_StateZoomOut___c_c *v34; // x0
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v37; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x2
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x2
  intptr_t m_CachedPtr; // x9
  __int64 v57; // x8
  __int64 v58; // x10
  float v59; // s9
  __int64 v60; // x2
  __int64 v61; // x8
  CylinderCore_c *v62; // x0
  int v63; // w9
  int v64; // w8
  __int64 p_FOCUS_IN_POS; // x8
  CylinderCore_o *v66; // x8
  UnityEngine_GameObject_o *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  CylinderCore_c *v70; // x0
  struct UnityEngine_Vector3_StaticFields *v71; // x8
  float z; // s1
  int *v73; // x8
  EasingObject_o *v74; // x20
  int v75; // s0
  int v76; // s1
  System_Action_c *v77; // x0
  System_Action_o *v78; // x21
  System_Action_o *v79; // x22
  int v80; // [xsp+8h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934D99 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CylinderCore_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__);
    sub_21FFC50(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_21FFC50(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_21FFC50(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_5934D99 = 1;
  }
  v5 = sub_21FFEBC(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_42;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (CylinderCore_o **)(v5 + 48);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 80) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 80), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28, v29);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0);
  if ( !*v14 )
    goto LABEL_42;
  mTerminalScene = (*v14)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_42;
  v33 = IntpTime_AutoResume;
  *(_WORD *)&mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 256;
  v34 = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( !*(&CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo, v7, v30);
    v34 = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v7, v30);
      static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v37, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0);
    v38 = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    v38->__9__1_0 = _9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__1_0, (int32_t)_9__1_0, v39, v40, v41, v42, v43, v44);
  }
  TerminalSceneComponent__Fadein_WorldDisp_52279112(mTerminalScene, 0.4, _9__1_0, 0);
  if ( !*v14 )
    goto LABEL_42;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v14)->fields.mFocusEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v45);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0, 0) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v49, v50, v51, v52, v53, v54);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !*(&CylinderCore_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v7, v55);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  m_CachedPtr = transform[7].fields.m_CachedPtr;
  v57 = *(_QWORD *)(v5 + 48);
  v58 = *(_QWORD *)(m_CachedPtr + 32);
  LODWORD(m_CachedPtr) = *(_DWORD *)(m_CachedPtr + 40);
  *(_QWORD *)(v5 + 24) = v58;
  *(_DWORD *)(v5 + 32) = m_CachedPtr;
  if ( !v57 )
    goto LABEL_42;
  transform = *(UnityEngine_Component_o **)(v57 + 80);
  if ( !transform )
    goto LABEL_42;
  v59 = *(float *)(v5 + 28);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_42;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  v61 = *(_QWORD *)(v5 + 48);
  *(float *)(v5 + 28) = v59 - localPosition.fields.y;
  if ( !v61 )
    goto LABEL_42;
  v62 = CylinderCore_TypeInfo;
  v63 = *(unsigned __int8 *)(v61 + 144);
  v64 = *(&CylinderCore_TypeInfo->_2.cctor_finished + 1);
  if ( v63 )
  {
    if ( !v64 )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v7, v60);
      v62 = CylinderCore_TypeInfo;
    }
    p_FOCUS_IN_POS = (__int64)&v62->static_fields->FOCUS_IN_POS;
  }
  else
  {
    if ( !v64 )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v7, v60);
      v62 = CylinderCore_TypeInfo;
    }
    p_FOCUS_IN_POS = (__int64)&v62->static_fields->FOCUS_OUT_POS;
  }
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  v80 = *(_DWORD *)(p_FOCUS_IN_POS + 8);
  *(_QWORD *)(v5 + 36) = *(_QWORD *)p_FOCUS_IN_POS;
  *(_DWORD *)(v5 + 44) = v80;
  if ( !transform )
    goto LABEL_42;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  v66 = *v14;
  if ( !*v14 )
    goto LABEL_42;
  v67 = (UnityEngine_GameObject_o *)transform;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint(v66, v7);
  if ( !transform )
    goto LABEL_42;
  GameObjectExtensions__SetLocalEulerAngleY(v67, *((float *)&transform[4].fields.m_CachedPtr + 1) + 90.0, 0);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v70 = CylinderCore_TypeInfo;
  v71 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v71->zeroVector.fields.z;
  *(_QWORD *)(v5 + 68) = *(_QWORD *)&v71->zeroVector.fields.x;
  *(float *)(v5 + 76) = z;
  if ( !*(&v70->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v70, v68, v69);
    v70 = CylinderCore_TypeInfo;
  }
  v73 = (int *)v70->static_fields;
  v74 = *(EasingObject_o **)(v5 + 16);
  v75 = *v73;
  v76 = v73[1];
  *(_DWORD *)(v5 + 60) = 0;
  v77 = System_Action_TypeInfo;
  *(_DWORD *)(v5 + 56) = v75;
  *(_DWORD *)(v5 + 64) = v76;
  v78 = (System_Action_o *)sub_21FFEBC(v77);
  System_Action___ctor(v78, (Il2CppObject *)v5, Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0);
  v79 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)v5, Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0);
  if ( !v74 )
LABEL_42:
    sub_21FFECC(transform, v7);
  EasingObject__Play(v74, v33, v78, v79, 0.0, 0, 0);
}


void CylinderCore_StateZoomOut__end(CylinderCore_StateZoomOut_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateZoomOut__update(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void CylinderCore_StateZoomOut___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934D9B & 1) == 0 )
  {
    sub_21FFC50(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_5934D9B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CylinderCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CylinderCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CylinderCore_StateZoomOut___c___ctor(CylinderCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateZoomOut___c___begin_b__1_0(CylinderCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  ;
}


void CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__1(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mNow; // s8
  CylinderCore_StateZoomOut___c__DisplayClass1_0_o *v4; // x19
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  float v9; // s11
  struct CylinderCore_o *v10; // x8
  float v11; // s0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float v13; // s1
  float v14; // s6
  UnityEngine_GameObject_o *gameObject; // x19
  float v16; // s0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_13;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = Easing__Func_55915380(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0);
  v6 = Easing__Func_55915380(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0);
  v7 = Easing__Func_55915380(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 2, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_13;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_13;
  v9 = v7;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_13;
  v17.fields.x = v5;
  v17.fields.y = v6;
  v17.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_13;
  v11 = 1.0;
  mEarthRoot = v10->fields.mEarthRoot;
  v13 = (float)(1.0 - mNow) * 1.5;
  if ( v13 <= 1.0 )
    v11 = (float)(1.0 - mNow) * 1.5;
  v14 = v13 >= 0.0 ? v11 : 0.0;
  v18 = Easing__Func(v4->fields.endRot, v4->fields.startRot, v14, 3, 0);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v18, 0);
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.that;
  if ( !this )
LABEL_13:
    sub_21FFECC(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v16 = Easing__Func_55915380(0.0, 1.0, mNow, 5, 0);
  GameObjectExtensions__AddLocalEulerAngleY(gameObject, v16 * -0.4, 0);
}


void CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct CylinderCore_o *that; // x8
  CylinderCore_StateZoomOut___c__DisplayClass1_0_o *v3; // x19
  struct CylinderCore_o *v4; // x8

  that = this->fields.that;
  if ( !that )
    goto LABEL_9;
  v3 = this;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0)) == 0
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.endPos, 0),
        (v4 = v3->fields.that) == 0)
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.mEarthRoot) == 0
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0)) == 0
    || (UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v3->fields.endRot, 0),
        (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.__4__this) == 0) )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, method);
}
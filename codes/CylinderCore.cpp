void CylinderCore___cctor(const MethodInfo *method)
{
  CylinderCore_c *v1; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v3; // x9
  struct CylinderCore_StaticFields *v4; // x8

  if ( (byte_4D2D202 & 1) == 0 )
  {
    sub_1C93AD4(&CylinderCore_TypeInfo);
    byte_4D2D202 = 1;
  }
  v1 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_ROT_X = xmmword_D00230;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v3 = v1->static_fields;
  *(_QWORD *)&v3->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v3->FOCUS_OUT_POS.fields.z = 94.0;
  v4 = v1->static_fields;
  *(_QWORD *)&v4->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v4->ZOOM_IN_POS.fields.z = -624.0;
}


void CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D201 & 1) == 0 )
  {
    sub_1C93AD4(&CylinderCore_StateMain_TypeInfo);
    byte_4D2D201 = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(CylinderCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.mStateMain = (struct CylinderCore_StateMain_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mStateMain, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseCore___ctor((BaseCore_o *)this, 0);
}


void CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:kr00_16.16

  if ( (byte_4D2D1FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_CylinderCore___ctor__);
    sub_1C93AD4(&Method_CStateManager_CylinderCore__add__);
    sub_1C93AD4(&CStateManager_CylinderCore__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C93AD4(&CylinderCore_StateNone_TypeInfo);
    sub_1C93AD4(&CylinderCore_StateZoomIn_TypeInfo);
    sub_1C93AD4(&CylinderCore_StateZoomOut_TypeInfo);
    byte_4D2D1FC = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v5 = (CStateManager_T__o *)sub_1C93D20(CStateManager_CylinderCore__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_33EE80C *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    v12 = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_1C93D20(CylinderCore_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_13;
    CStateManager_object___add(
      v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_object___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_CylinderCore__add__);
    v16 = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1C93D20(CylinderCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16
      || (CStateManager_object___add(
            v16,
            2,
            (IState_T__o *)v17,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_CylinderCore__add__),
          v18 = (CStateManager_T__o *)*p_mFSM,
          v19 = (Il2CppObject *)sub_1C93D20(CylinderCore_StateZoomOut_TypeInfo),
          System_Object___ctor(v19, 0),
          !v18) )
    {
LABEL_13:
      sub_1C93D2C(mEarthRoot, v15);
    }
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36747176(gameObject, 1.0, 0);
  mEarthRoot = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)mEarthRoot,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMeshRenderer,
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


void CylinderCore__FocusInOut(CylinderCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  __int64 v8; // x9
  float *v9; // x8
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  int32_t v17; // w1
  float v18; // s8
  System_Func_T__T__float__T__o *v19; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  TransitionCalculator_Vector3__o *v23; // x0
  struct TransitionCalculator_Vector3__o *v24; // x21
  float v25; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4D2D1FB & 1) == 0 )
  {
    sub_1C93AD4(&CylinderCore_TypeInfo);
    sub_1C93AD4(&Method_TransitionCalculator_Vector3___ctor__);
    sub_1C93AD4(&TransitionCalculator_Vector3__TypeInfo);
    byte_4D2D1FB = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
  v8 = 20;
  if ( isFocusIn )
    v8 = 8;
  v9 = (float *)((char *)&CylinderCore_TypeInfo->static_fields->BASE_ROT_X + v8);
  v25 = v9[2];
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = *(_QWORD *)v9;
  this->fields.mFocusTgtPos.fields.z = v25;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0);
    this->fields.focusInOutPositionCalculator = 0;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v17 = 0;
  }
  else
  {
    v18 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0);
    v19 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v23 = (TransitionCalculator_Vector3__o *)sub_1C93D20(TransitionCalculator_Vector3__TypeInfo);
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v24 = v23;
    TransitionCalculator_Vector3____ctor(
      v23,
      LocalPosition,
      v27,
      v18,
      v19,
      (const MethodInfo_3B67974 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v24;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v17 = (int)v24;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_focusInOutPositionCalculator, v17, v10, v11, v12, v13, v14, v15);
}


int32_t CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  CylinderCore_o *v2; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D2D1FF & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_1C93AD4(&Method_CStateManager_CylinderCore__getState__);
    byte_4D2D1FF = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1C93D2C(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
void CylinderCore__SetDisp(CylinderCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0
  bool v5; // w20

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (v5 = is_disp,
        UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0) )
  {
    sub_1C93D2C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D200 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_CylinderCore__setState__);
    byte_4D2D200 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_CylinderCore__setState__);
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
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v15; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x26
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v21; // x8
  float v22; // s9
  float v23; // s10
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Object_o *v26; // x23
  __int64 naturalAligment; // x9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  float v30; // s10
  Il2CppObject *EarthPoint_object; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-A0h] BYREF
  float cosx; // [xsp+48h] [xbp-78h] BYREF
  float sinx; // [xsp+4Ch] [xbp-74h] BYREF

  if ( (byte_4D2D1FE & 1) == 0 )
  {
    sub_1C93AD4(&Method_BaseCore_CreateEarthPoint_CylinderPoint___);
    sub_1C93AD4(&CylinderPoint_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_8303/*"LAST_WAR_ID"*/);
    byte_4D2D1FE = 1;
  }
  memset(&v36, 0, sizeof(v36));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_36;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0);
  if ( !mEarthRoot )
    goto LABEL_36;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ((void (__fastcall *)(CylinderCore_o *, bool, __int64, const MethodInfo *))this->klass->vtable._4_FocusInOut.methodPtr)(
    this,
    isFocusIn,
    1,
    this->klass->vtable._4_FocusInOut.method);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8303/*"LAST_WAR_ID"*/, 0);
  if ( !warInfoList )
LABEL_36:
    sub_1C93D2C(mEarthRoot, v7);
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v11 )
      break;
    current = (MapControl_WarInfo_o *)v36.fields._current;
    if ( !v36.fields._current )
      sub_1C93D2C(v11, v12);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v36.fields._current, 0);
    v15 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0) && !WarEntity__IsDisplayEarthPointWithoutMap(v15, 0) )
        goto LABEL_21;
      IsEvent = WarEntity__IsEvent(v15, 0);
      if ( warId <= v10 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v15, 0);
        if ( !PrioredCoordinates )
          goto LABEL_21;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_21;
        if ( (unsigned int)mCoreType >= max_length )
          sub_1C93D34(PrioredCoordinates);
        v21 = PrioredCoordinates->m_Items[mCoreType];
        if ( v21 && SLODWORD(v21->max_length) >= 2 )
        {
          v22 = v21->m_Items[0];
          v23 = v21->m_Items[1];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0);
          v26 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            naturalAligment = CylinderPoint_TypeInfo->_2.naturalAligment;
            if ( EarthPoint->klass->_2.naturalAligment < (unsigned int)naturalAligment
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[naturalAligment - 1] != CylinderPoint_TypeInfo )
            {
              sub_1C940C8(EarthPoint);
LABEL_39:
              sub_1C93D2C(EarthPoint_object, v32);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v28 = UnityEngine_Object__op_Equality(v26, 0, 0);
          if ( v28 )
          {
            v30 = (float)(v23 + 192.0) + -90.0;
            sincosf(v30 * 0.017453, &sinx, &cosx);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  cosx * 143.0,
                                  (float)(v22 / 90.0) * 120.0,
                                  sinx * 143.0,
                                  (const MethodInfo_318C7B8 *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              goto LABEL_39;
            *((float *)&EarthPoint_object[7].klass + 1) = v30;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0);
          }
          else
          {
            if ( !v26 )
              sub_1C93D2C(v28, v29);
            v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
            if ( !v33 )
              sub_1C93D2C(0, v34);
            UnityEngine_GameObject__SetActive(v33, IsWarOpen, 0);
          }
        }
        else
        {
LABEL_21:
          BaseCore__HideEarthPoint((BaseCore_o *)this, warId, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4D2D1FD & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_CylinderCore__update__);
    byte_4D2D1FD = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_33EE91C *)Method_CStateManager_CylinderCore__update__);
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

  if ( (byte_4D2D1FA & 1) == 0 )
  {
    sub_1C93AD4(&CylinderPoint_TypeInfo);
    byte_4D2D1FA = 1;
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


void CylinderCore_StateMain__update(CylinderCore_StateMain_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  CylinderCore_StateMain_o *v4; // x20
  float mInertialSpd; // s8
  float v6; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v8; // s8
  float v9; // s0
  CTouch_c *v10; // x0
  float x; // s8
  float v12; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v14; // s8
  UnityEngine_GameObject_o *v15; // x20
  float AutoRotationSpeed; // s0
  CylinderCore_c *v17; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  UnityEngine_GameObject_o *v21; // x20
  bool v24; // w21
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o mFocusTgtPos; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D2D203 & 1) == 0 )
  {
    sub_1C93AD4(&CTouch_TypeInfo);
    sub_1C93AD4(&CylinderCore_TypeInfo);
    sub_1C93AD4(&Method_TransitionCalculator_Vector3__IsFinished__);
    this = (CylinderCore_StateMain_o *)sub_1C93AD4(&Method_TransitionCalculator_Vector3__Update__);
    byte_4D2D203 = 1;
  }
  if ( !that )
    goto LABEL_38;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4D2D070 )
      {
        sub_1C93AD4(&CTouch_TypeInfo);
        byte_4D2D070 = 1;
      }
      v10 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
      }
      x = v10->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4D2D071 )
      {
        sub_1C93AD4(&CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
        byte_4D2D071 = 1;
      }
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = CTouch_TypeInfo;
      }
      v12 = v10->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v12) )
        v12 = x;
      v4->fields.mInertialSpd = v12 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_4D2A13D )
    {
      sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
      byte_4D2A13D = 1;
    }
    v6 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v6 <= (float)(static_fields->Epsilon * 8.0) )
      v6 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v6 )
    {
      v8 = v4->fields.mInertialSpd;
      v9 = v8 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      v4->fields.mInertialSpd = v9;
      if ( fabsf(v9) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v14 = v4->fields.mInertialSpd;
  v15 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0);
  GameObjectExtensions__AddLocalEulerAngleY(v15, v14 + AutoRotationSpeed, 0);
  v17 = CylinderCore_TypeInfo;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v17 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v17->static_fields->BASE_ROT_X;
  v25.fields.y = 0.0;
  v25.fields.x = *p_BASE_ROT_X;
  v25.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v25, 0);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_3B67A70 *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v21 = that->fields.mEarthRoot;
      mFocusTgtPos = TransitionCalculator_Vector3___Update(
                       (TransitionCalculator_Vector3__o *)this,
                       (const MethodInfo_3B67A00 *)Method_TransitionCalculator_Vector3__Update__);
      v24 = 1;
      goto LABEL_37;
    }
LABEL_38:
    sub_1C93D2C(this, that);
  }
  v21 = that->fields.mEarthRoot;
  mFocusTgtPos = that->fields.mFocusTgtPos;
  v24 = 0;
LABEL_37:
  GameObjectExtensions__SetLocalPosition(v21, mFocusTgtPos, 0);
  that->fields.mIsFocusMoving = v24;
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

  if ( (byte_4D2D206 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C93AD4(&StringLiteral_7014/*"GO_NEXT"*/);
    byte_4D2D206 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v5 = this->fields.mCore) == 0)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0)) == 0 )
  {
    sub_1C93D2C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_67247360(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7014/*"GO_NEXT"*/,
    0);
}


void CylinderCore_StateZoomIn__begin(CylinderCore_StateZoomIn_o *this, CylinderCore_o *that, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Component_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct CylinderCore_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  TerminalPramsManager_c *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x8
  intptr_t m_CachedPtr; // x9
  __int64 v42; // x8
  __int64 v43; // x10
  float v44; // s8
  float v45; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  EasingObject_o *v48; // x21
  float mSpdTime; // s8
  System_Action_o *v50; // x22
  System_Action_o *v51; // x23
  TerminalPramsManager_c *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v58; // x21
  float v59; // s1
  float y; // s1
  float x; // s0
  UnityEngine_Vector3_o localEulerAngles; // 0:kr34_12.12

  if ( (byte_4D2D204 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CylinderCore_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_CylinderCore_StateZoomIn_GoNext__);
    sub_1C93AD4(&Method_CylinderCore_StateZoomIn_begin__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_1C93AD4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_1C93AD4(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_4D2D204 = 1;
  }
  v5 = sub_1C93D20(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_58;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 48);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 88) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 88), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0);
  mCore = this->fields.mCore;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !mCore )
    goto LABEL_58;
  mFocusEarthPoint = (UnityEngine_Object_o *)mCore->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D318 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D318 = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    if ( v31->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    v55 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1C93AEC(Method_CylinderCore_StateZoomIn_begin__);
    v56 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v55, v55[4]);
    OverwriteAssetSoundName__PlayCommonSe(v56, 23, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v58 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v58, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v58, 0);
      return;
    }
LABEL_58:
    sub_1C93D2C(transform, v7);
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v34, v35, v36, v37, v38, v39);
  v40 = *(_QWORD *)(v5 + 48);
  if ( !v40 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v40 + 32);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v5 + 24) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)transform,
                                          0);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  m_CachedPtr = transform[7].fields.m_CachedPtr;
  v42 = *(_QWORD *)(v5 + 48);
  v43 = *(_QWORD *)(m_CachedPtr + 32);
  LODWORD(m_CachedPtr) = *(_DWORD *)(m_CachedPtr + 40);
  *(_QWORD *)(v5 + 36) = v43;
  *(_DWORD *)(v5 + 44) = m_CachedPtr;
  if ( !v42 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v42 + 80);
  if ( !transform )
    goto LABEL_58;
  v44 = *(float *)(v5 + 40);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_58;
  v59 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0).fields.y));
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  *(float *)(v5 + 40) = v44 - v59;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, v7);
  if ( !transform )
    goto LABEL_58;
  if ( !*v14 )
    goto LABEL_58;
  v45 = *((float *)&transform[4].fields.m_CachedPtr + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v14, 0);
  if ( !transform )
    goto LABEL_58;
  y = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0).fields.y;
  *(float *)(v5 + 56) = y;
  *(float *)(v5 + 60) = v45 + 90.0;
  if ( vabds_f32(y, v45) > 180.0 )
    *(float *)(v5 + 56) = y + -360.0;
  if ( !*v14 )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)(*v14)[1].monitor;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_58;
  localEulerAngles = UnityEngine_Transform__get_localEulerAngles((UnityEngine_Transform_o *)transform, 0);
  x = localEulerAngles.fields.x;
  *(UnityEngine_Vector3_o *)(v5 + 64) = localEulerAngles;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
    x = *(float *)(v5 + 64);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 76) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 84) = z;
  if ( x > 180.0 )
  {
    x = x + -360.0;
    *(float *)(v5 + 64) = x;
  }
  if ( *(float *)(v5 + 72) > 180.0 )
    *(float *)(v5 + 64) = x + -360.0;
  v48 = *(EasingObject_o **)(v5 + 16);
  mSpdTime = this->fields.mSpdTime;
  v50 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0);
  v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0);
  if ( !v48 )
    goto LABEL_58;
  EasingObject__Play(v48, mSpdTime, v50, v51, 0.0, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D318 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D318 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  if ( !v52->static_fields->_IsAutoResume_k__BackingField )
  {
    v53 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1C93AEC(Method_CylinderCore_StateZoomIn_begin__);
    v54 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v53, v53[4]);
    OverwriteAssetSoundName__PlayCommonSe(v54, 23, 0, 0);
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

  if ( (byte_4D2D205 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_CylinderCore_StateZoomIn_GoNext__);
    byte_4D2D205 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0);
      if ( !Instance )
        sub_1C93D2C(v7, v8);
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
  UnityEngine_GameObject_o *gameObject; // x0
  float v11; // s2
  UnityEngine_GameObject_o *v12; // x20
  float v13; // s0
  struct CylinderCore_o *v14; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float v16; // s7
  float v17; // s6
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_13;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = Easing__Func_49777208(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0);
  v6 = Easing__Func_49777208(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0);
  v7 = Easing__Func_49777208(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 1, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_13;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_13;
  v9 = v7;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
  if ( !this )
    goto LABEL_13;
  v18.fields.x = v5;
  v18.fields.y = v6;
  v18.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.that;
  if ( !this )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = fminf(mNow, 1.0);
  v12 = gameObject;
  if ( mNow < 0.0 )
    v11 = 0.0;
  v13 = Easing__Func_49777208(v4->fields.startRotY, v4->fields.endRotY, v11, 6, 0);
  GameObjectExtensions__SetLocalEulerAngleY(v12, v13, 0);
  v14 = v4->fields.that;
  if ( !v14 )
LABEL_13:
    sub_1C93D2C(this, method);
  mEarthRoot = v14->fields.mEarthRoot;
  v16 = fminf(mNow * 1.5, 1.0);
  if ( (float)(mNow * 1.5) < 0.0 )
    v17 = 0.0;
  else
    v17 = v16;
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
  TerminalPramsManager_c *v6; // x0

  v2 = this;
  if ( (byte_4D2D207 & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D207 = 1;
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
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D318 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D318 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_IsAutoResume_k__BackingField )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.__4__this;
    if ( this )
    {
      CylinderCore_StateZoomIn__GoNext((CylinderCore_StateZoomIn_o *)this, method);
      return;
    }
LABEL_20:
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2D209 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C93AD4(&StringLiteral_7014/*"GO_NEXT"*/);
    byte_4D2D209 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v5 = this->fields.mCore) == 0)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0)) == 0 )
  {
    sub_1C93D2C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_67247360(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7014/*"GO_NEXT"*/,
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  CylinderCore_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct CylinderCore_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x22
  float v30; // s8
  CylinderCore_StateZoomOut___c_c *v31; // x0
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v33; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  intptr_t m_CachedPtr; // x8
  int v51; // w10
  __int64 v52; // x8
  float v53; // s9
  _BOOL4 mIsFocusIn; // w22
  __int64 v55; // x9
  char *v56; // x8
  CylinderCore_o *v57; // x8
  UnityEngine_GameObject_o *v58; // x20
  struct UnityEngine_Vector3_StaticFields *v59; // x8
  float z; // s1
  CylinderCore_c *v61; // x0
  int *v62; // x8
  EasingObject_o *v63; // x20
  int v64; // s0
  int v65; // s1
  System_Action_o *v66; // x21
  System_Action_o *v67; // x22
  __int64 v68; // [xsp+0h] [xbp-60h]

  if ( (byte_4D2D208 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CylinderCore_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__);
    sub_1C93AD4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_1C93AD4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_1C93AD4(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_1C93AD4(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_4D2D208 = 1;
  }
  v5 = sub_1C93D20(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (CylinderCore_o **)(v5 + 48);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 80) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 80), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0);
  if ( !*v14 )
    goto LABEL_39;
  mTerminalScene = (*v14)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  *(_WORD *)&mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 256;
  v30 = IntpTime_AutoResume;
  v31 = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( !CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo);
    v31 = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v31->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = CylinderCore_StateZoomOut___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v33, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0);
    static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v35, v36, v37, v38, v39, v40);
  }
  TerminalSceneComponent__Fadein_WorldDisp_46028468(mTerminalScene, 0.4, _9__1_0, 0);
  if ( !*v14 )
    goto LABEL_39;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v14)->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0, 0) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v44, v45, v46, v47, v48, v49);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  m_CachedPtr = transform[7].fields.m_CachedPtr;
  v51 = *(_DWORD *)(m_CachedPtr + 40);
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(m_CachedPtr + 32);
  v52 = *(_QWORD *)(v5 + 48);
  *(_DWORD *)(v5 + 32) = v51;
  if ( !v52 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v52 + 80);
  if ( !transform )
    goto LABEL_39;
  v53 = *(float *)(v5 + 28);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !transform )
    goto LABEL_39;
  *(float *)(v5 + 28) = v53
                      - COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0).fields.y));
  if ( !*v14 )
    goto LABEL_39;
  mIsFocusIn = (*v14)->fields.mIsFocusIn;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
  v55 = 8;
  if ( !mIsFocusIn )
    v55 = 20;
  v56 = (char *)CylinderCore_TypeInfo->static_fields + v55;
  v68 = *(_QWORD *)v56;
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  *(_DWORD *)(v5 + 44) = *((_DWORD *)v56 + 2);
  *(_QWORD *)(v5 + 36) = v68;
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  v57 = *v14;
  if ( !*v14 )
    goto LABEL_39;
  v58 = (UnityEngine_GameObject_o *)transform;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint(v57, v7);
  if ( !transform )
    goto LABEL_39;
  GameObjectExtensions__SetLocalEulerAngleY(v58, *((float *)&transform[4].fields.m_CachedPtr + 1) + 90.0, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v59 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v59->zeroVector.fields.z;
  *(_QWORD *)(v5 + 68) = *(_QWORD *)&v59->zeroVector.fields.x;
  *(float *)(v5 + 76) = z;
  v61 = CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v61 = CylinderCore_TypeInfo;
  }
  v62 = (int *)v61->static_fields;
  v63 = *(EasingObject_o **)(v5 + 16);
  v64 = *v62;
  v65 = v62[1];
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 56) = v64;
  *(_DWORD *)(v5 + 64) = v65;
  v66 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)v5, Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0);
  v67 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)v5, Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0);
  if ( !v63 )
LABEL_39:
    sub_1C93D2C(transform, v7);
  EasingObject__Play(v63, v30, v66, v67, 0.0, 0, 0);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D20A & 1) == 0 )
  {
    sub_1C93AD4(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_4D2D20A = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(CylinderCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CylinderCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields,
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
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float v12; // s7
  float v13; // s6
  UnityEngine_GameObject_o *gameObject; // x19
  float v15; // s0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_10;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = Easing__Func_49777208(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0);
  v6 = Easing__Func_49777208(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0);
  v7 = Easing__Func_49777208(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 2, 0);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_10;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_10;
  v9 = v7;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0);
  if ( !this )
    goto LABEL_10;
  v16.fields.x = v5;
  v16.fields.y = v6;
  v16.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_10;
  mEarthRoot = v10->fields.mEarthRoot;
  v12 = (float)(1.0 - mNow) * 1.5;
  v13 = fminf(v12, 1.0);
  if ( v12 < 0.0 )
    v13 = 0.0;
  v17 = Easing__Func(v4->fields.endRot, v4->fields.startRot, v13, 3, 0);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v17, 0);
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.that;
  if ( !this )
LABEL_10:
    sub_1C93D2C(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15 = Easing__Func_49777208(0.0, 1.0, mNow, 5, 0);
  GameObjectExtensions__AddLocalEulerAngleY(gameObject, v15 * -0.4, 0);
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
    sub_1C93D2C(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, method);
}
void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  CylinderCore_c *v1; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v3; // x9
  struct CylinderCore_StaticFields *v4; // x8

  if ( (byte_4BD9016 & 1) == 0 )
  {
    sub_1C21E38(&CylinderCore_TypeInfo);
    byte_4BD9016 = 1;
  }
  v1 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_ROT_X = xmmword_BFDA20;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v3 = v1->static_fields;
  *(_QWORD *)&v3->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v3->FOCUS_OUT_POS.fields.z = 94.0;
  v4 = v1->static_fields;
  *(_QWORD *)&v4->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v4->ZOOM_IN_POS.fields.z = -624.0;
}


void __fastcall CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD9015 & 1) == 0 )
  {
    sub_1C21E38(&CylinderCore_StateMain_TypeInfo);
    byte_4BD9015 = 1;
  }
  v3 = (Il2CppObject *)sub_1C22084(CylinderCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.mStateMain = (struct CylinderCore_StateMain_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mStateMain, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD9010 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_CylinderCore___ctor__);
    sub_1C21E38(&Method_CStateManager_CylinderCore__add__);
    sub_1C21E38(&CStateManager_CylinderCore__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C21E38(&CylinderCore_StateNone_TypeInfo);
    sub_1C21E38(&CylinderCore_StateZoomIn_TypeInfo);
    sub_1C21E38(&CylinderCore_StateZoomOut_TypeInfo);
    byte_4BD9010 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v5 = (CStateManager_T__o *)sub_1C22084(CStateManager_CylinderCore__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31E6A20 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    v12 = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_1C22084(CylinderCore_StateNone_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !v12 )
      goto LABEL_13;
    CStateManager_object___add(
      v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_object___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_CylinderCore__add__);
    v16 = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1C22084(CylinderCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16
      || (CStateManager_object___add(
            v16,
            2,
            (IState_T__o *)v17,
            (const MethodInfo_31E6AC8 *)Method_CStateManager_CylinderCore__add__),
          v18 = (CStateManager_T__o *)*p_mFSM,
          v19 = (Il2CppObject *)sub_1C22084(CylinderCore_StateZoomOut_TypeInfo),
          System_Object___ctor(v19, 0LL),
          !v18) )
    {
LABEL_13:
      sub_1C22094(mEarthRoot, v15);
    }
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34799788(gameObject, 1.0, 0LL);
  mEarthRoot = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)mEarthRoot,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mMeshRenderer,
    (int64_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  mEarthRoot = (CStateManager_T__o *)this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_13;
  mEarthRoot = (CStateManager_T__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)mEarthRoot, 0LL);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(CylinderCore_o *, __int64, Il2CppMethodPointer))klass->vtable._12_SetDisp.method)(
    this,
    1LL,
    klass->vtable._13_GetState.methodPtr);
}


void __fastcall CylinderCore__FocusInOut(CylinderCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  __int64 v8; // x9
  float *v9; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  int64_t v17; // x1
  float v18; // s8
  System_Func_T__T__float__T__o *v19; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v23; // s9
  float v24; // s10
  float v25; // s14
  TransitionCalculator_Vector3__o *v26; // x0
  struct TransitionCalculator_Vector3__o *v27; // x21
  float v28; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4BD900F & 1) == 0 )
  {
    sub_1C21E38(&CylinderCore_TypeInfo);
    sub_1C21E38(&Method_TransitionCalculator_Vector3___ctor__);
    sub_1C21E38(&TransitionCalculator_Vector3__TypeInfo);
    byte_4BD900F = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
  v8 = 20LL;
  if ( isFocusIn )
    v8 = 8LL;
  v9 = (float *)((char *)&CylinderCore_TypeInfo->static_fields->BASE_ROT_X + v8);
  v28 = v9[2];
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = *(_QWORD *)v9;
  this->fields.mFocusTgtPos.fields.z = v28;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v17 = 0LL;
  }
  else
  {
    v18 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0LL);
    v19 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v23 = LocalPosition.fields.x;
    v24 = LocalPosition.fields.y;
    v25 = LocalPosition.fields.z;
    v26 = (TransitionCalculator_Vector3__o *)sub_1C22084(TransitionCalculator_Vector3__TypeInfo);
    v30.fields.x = v23;
    v30.fields.y = v24;
    v30.fields.z = v25;
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v27 = v26;
    TransitionCalculator_Vector3____ctor(
      v26,
      v30,
      v31,
      v18,
      v19,
      (const MethodInfo_390F1C4 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v27;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v17 = (int64_t)v27;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)p_focusInOutPositionCalculator, v17, v10, v11, v12, v13, v14, v15);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  CylinderCore_o *v2; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BD9013 & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_1C21E38(&Method_CStateManager_CylinderCore__getState__);
    byte_4BD9013 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(this, method);
  return mFSM->fields.m_state;
}


CylinderCore_StateMain_o *__fastcall CylinderCore__GetStateMain(CylinderCore_o *this, const MethodInfo *method)
{
  return this->fields.mStateMain;
}


float __fastcall CylinderCore__GetStateMainInertialSpdOld(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  if ( !mStateMain )
    sub_1C22094(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1C22094(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetDisp(CylinderCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0
  bool v5; // w20

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (v5 = is_disp,
        UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0LL),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0LL) )
  {
    sub_1C22094(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BD9014 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_CylinderCore__setState__);
    byte_4BD9014 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_CylinderCore__setState__);
}


void __fastcall CylinderCore__Setup(
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
  __int64 v20; // x1
  int max_length; // w8
  System_Single_array *v22; // x8
  float v23; // s9
  float v24; // s10
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Object_o *v27; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 v29; // x0
  __int64 v30; // x1
  float v31; // s10
  Il2CppObject *EarthPoint_object; // x0
  __int64 v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-A0h] BYREF
  float cosx; // [xsp+48h] [xbp-78h] BYREF
  float sinx; // [xsp+4Ch] [xbp-74h] BYREF

  if ( (byte_4BD9012 & 1) == 0 )
  {
    sub_1C21E38(&Method_BaseCore_CreateEarthPoint_CylinderPoint___);
    sub_1C21E38(&CylinderPoint_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8408/*"LAST_WAR_ID"*/);
    byte_4BD9012 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_36;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_36;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ((void (__fastcall *)(CylinderCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    isFocusIn,
    1LL,
    this->klass->vtable._5_Awake.methodPtr);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8408/*"LAST_WAR_ID"*/, 0LL);
  if ( !warInfoList )
LABEL_36:
    sub_1C22094(mEarthRoot, v7);
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v11 )
      break;
    current = (MapControl_WarInfo_o *)v37.fields._current;
    if ( !v37.fields._current )
      sub_1C22094(v11, v12);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v37.fields._current, 0LL);
    v15 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v15, 0LL) )
        goto LABEL_21;
      IsEvent = WarEntity__IsEvent(v15, 0LL);
      if ( warId <= v10 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v15, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_21;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_21;
        if ( (unsigned int)mCoreType >= max_length )
          sub_1C2209C(PrioredCoordinates, v20);
        v22 = PrioredCoordinates->m_Items[mCoreType];
        if ( v22 && (int)v22->max_length >= 2 )
        {
          v23 = v22->m_Items[1];
          v24 = v22->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v27 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            methodPtr_low = LOBYTE(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(EarthPoint->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[methodPtr_low - 1] != CylinderPoint_TypeInfo )
            {
              sub_1C22354(EarthPoint);
LABEL_39:
              sub_1C22094(EarthPoint_object, v33);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v29 = UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
          if ( v29 )
          {
            v31 = (float)(v24 + 192.0) + -90.0;
            sincosf(v31 * 0.017453, &sinx, &cosx);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  cosx * 143.0,
                                  (float)(v23 / 90.0) * 120.0,
                                  sinx * 143.0,
                                  (const MethodInfo_2F99AF8 *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              goto LABEL_39;
            *((float *)&EarthPoint_object[7].klass + 1) = v31;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !v27 )
              sub_1C22094(v29, v30);
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
            if ( !v34 )
              sub_1C22094(0LL, v35);
            UnityEngine_GameObject__SetActive(v34, IsWarOpen, 0LL);
          }
        }
        else
        {
LABEL_21:
          BaseCore__HideEarthPoint((BaseCore_o *)this, warId, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4BD9011 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_CylinderCore__update__);
    byte_4BD9011 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_31E6B30 *)Method_CStateManager_CylinderCore__update__);
  if ( this->fields.mIsReqZoomIn && CylinderCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    CylinderCore__SetState(this, 2, v4);
  }
}


CylinderPoint_o *__fastcall CylinderCore__get_mFocusCylinderPoint(CylinderCore_o *this, const MethodInfo *method)
{
  struct BaseEarthPoint_o *mFocusEarthPoint; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BD900E & 1) == 0 )
  {
    sub_1C21E38(&CylinderPoint_TypeInfo);
    byte_4BD900E = 1;
  }
  mFocusEarthPoint = this->fields.mFocusEarthPoint;
  if ( !mFocusEarthPoint )
    return 0LL;
  methodPtr_low = LOBYTE(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mFocusEarthPoint->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CylinderPoint_c *)mFocusEarthPoint->klass->_2.typeHierarchy[methodPtr_low - 1] == CylinderPoint_TypeInfo )
    return (CylinderPoint_o *)this->fields.mFocusEarthPoint;
  return 0LL;
}


void __fastcall CylinderCore__mcbfStartMain(CylinderCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CylinderCore__SetState(this, 1, v2);
}


void __fastcall CylinderCore__mcbfStartZoomIn(CylinderCore_o *this, const MethodInfo *method)
{
  this->fields.mIsReqZoomIn = 1;
}


void __fastcall CylinderCore__mcbfStartZoomOut(CylinderCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CylinderCore__SetState(this, 3, v2);
}


void __fastcall CylinderCore_StateMain___ctor(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateMain__begin(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  this->fields.mInertialSpd = 0.0;
}


void __fastcall CylinderCore_StateMain__end(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


float __fastcall CylinderCore_StateMain__get_InertialSpd(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields.mInertialSpd;
}


float __fastcall CylinderCore_StateMain__get_InertialSpdOld(CylinderCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore_StateMain__set_InertialSpdOld(
        CylinderCore_StateMain_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._InertialSpdOld_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateMain__update(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
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
  float v22; // s0
  float y; // s1
  float z; // s2
  bool v25; // w21
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BD9017 & 1) == 0 )
  {
    sub_1C21E38(&CTouch_TypeInfo);
    sub_1C21E38(&CylinderCore_TypeInfo);
    sub_1C21E38(&Method_TransitionCalculator_Vector3__IsFinished__);
    this = (CylinderCore_StateMain_o *)sub_1C21E38(&Method_TransitionCalculator_Vector3__Update__);
    byte_4BD9017 = 1;
  }
  if ( !that )
    goto LABEL_38;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0LL) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4BD8FB0 )
      {
        sub_1C21E38(&CTouch_TypeInfo);
        byte_4BD8FB0 = 1;
      }
      v10 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
      }
      x = v10->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4BD8FB1 )
      {
        sub_1C21E38(&CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
        byte_4BD8FB1 = 1;
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
    if ( !byte_4BD6BB5 )
    {
      sub_1C21E38(&UnityEngine_Mathf_TypeInfo);
      byte_4BD6BB5 = 1;
    }
    v6 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v6 <= (float)(static_fields->Epsilon * 8.0) )
      v6 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v6 )
    {
      v8 = v4->fields.mInertialSpd;
      v9 = v8 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      v4->fields.mInertialSpd = v9;
      if ( fabsf(v9) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v14 = v4->fields.mInertialSpd;
  v15 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(v15, v14 + AutoRotationSpeed, 0LL);
  v17 = CylinderCore_TypeInfo;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v17 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v17->static_fields->BASE_ROT_X;
  v26.fields.y = 0.0;
  v26.fields.x = *p_BASE_ROT_X;
  v26.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v26, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_390F2C0 *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v21 = that->fields.mEarthRoot;
      *(UnityEngine_Vector3_o *)&v22 = TransitionCalculator_Vector3___Update(
                                         (TransitionCalculator_Vector3__o *)this,
                                         (const MethodInfo_390F250 *)Method_TransitionCalculator_Vector3__Update__);
      v25 = 1;
      goto LABEL_37;
    }
LABEL_38:
    sub_1C22094(this, that);
  }
  v21 = that->fields.mEarthRoot;
  v22 = that->fields.mFocusTgtPos.fields.x;
  y = that->fields.mFocusTgtPos.fields.y;
  z = that->fields.mFocusTgtPos.fields.z;
  v25 = 0;
LABEL_37:
  GameObjectExtensions__SetLocalPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  that->fields.mIsFocusMoving = v25;
}


void __fastcall CylinderCore_StateNone___ctor(CylinderCore_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateNone__begin(
        CylinderCore_StateNone_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateNone__end(
        CylinderCore_StateNone_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateNone__update(
        CylinderCore_StateNone_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomIn___ctor(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomIn__GoNext(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v5; // x8

  if ( (byte_4BD901A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD901A = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v5 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_1C22094(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_65130424(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateZoomIn__begin(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Component_o **v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct CylinderCore_o *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  TerminalPramsManager_c *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  __int64 v43; // x10
  float v44; // s8
  float v45; // s8
  float v46; // s1
  float v47; // s0
  int v48; // s1
  int v49; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  EasingObject_o *v52; // x21
  float mSpdTime; // s8
  System_Action_o *v54; // x22
  System_Action_o *v55; // x23
  TerminalPramsManager_c *v56; // x0
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  _QWORD *v59; // x0
  System_Reflection_MethodBase_o *v60; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v62; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9018 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CylinderCore_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_CylinderCore_StateZoomIn_GoNext__);
    sub_1C21E38(&Method_CylinderCore_StateZoomIn_begin__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_1C21E38(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_1C21E38(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_4BD9018 = 1;
  }
  v5 = sub_1C22084(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_58;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 48);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 88) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 88), (int64_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  mCore = this->fields.mCore;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !mCore )
    goto LABEL_58;
  mFocusEarthPoint = (UnityEngine_Object_o *)mCore->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD90A1 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD90A1 = 1;
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
    v59 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v59 = (_QWORD *)sub_1C21E50(Method_CylinderCore_StateZoomIn_begin__);
    v60 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v59, v59[4]);
    OverwriteAssetSoundName__PlayCommonSe(v60, 23, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v62 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v62, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v62, 0LL);
      return;
    }
LABEL_58:
    sub_1C22094(transform, v7);
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Component_object, v34, v35, v36, v37, v38, v39);
  v40 = *(_QWORD *)(v5 + 48);
  if ( !v40 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v40 + 32);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v5 + 24) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)transform,
                                          0LL);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v41 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v42 = *(_QWORD *)(v5 + 48);
  v43 = *(_QWORD *)(v41 + 32);
  LODWORD(v41) = *(_DWORD *)(v41 + 40);
  *(_QWORD *)(v5 + 36) = v43;
  *(_DWORD *)(v5 + 44) = v41;
  if ( !v42 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v42 + 80);
  if ( !transform )
    goto LABEL_58;
  v44 = *(float *)(v5 + 40);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_58;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  *(float *)(v5 + 40) = v44 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, v7);
  if ( !transform )
    goto LABEL_58;
  if ( !*v14 )
    goto LABEL_58;
  v45 = *((float *)&transform[4].fields + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v14, 0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(&v46 - 1) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  *(float *)(v5 + 56) = v46;
  *(float *)(v5 + 60) = v45 + 90.0;
  if ( vabds_f32(v46, v45) > 180.0 )
    *(float *)(v5 + 56) = v46 + -360.0;
  if ( !*v14 )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)(*v14)[1].monitor;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localEulerAngles(
                                     (UnityEngine_Transform_o *)transform,
                                     0LL);
  *(float *)(v5 + 64) = v47;
  *(_DWORD *)(v5 + 68) = v48;
  *(_DWORD *)(v5 + 72) = v49;
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
    v47 = *(float *)(v5 + 64);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 76) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 84) = z;
  if ( v47 > 180.0 )
  {
    v47 = v47 + -360.0;
    *(float *)(v5 + 64) = v47;
  }
  if ( *(float *)(v5 + 72) > 180.0 )
    *(float *)(v5 + 64) = v47 + -360.0;
  v52 = *(EasingObject_o **)(v5 + 16);
  mSpdTime = this->fields.mSpdTime;
  v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v55 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v52 )
    goto LABEL_58;
  EasingObject__Play(v52, mSpdTime, v54, v55, 0.0, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  if ( !v56->static_fields->_IsAutoResume_k__BackingField )
  {
    v57 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v57 = (_QWORD *)sub_1C21E50(Method_CylinderCore_StateZoomIn_begin__);
    v58 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v57, v57[4]);
    OverwriteAssetSoundName__PlayCommonSe(v58, 23, 0, 0LL);
    this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  }
}


void __fastcall CylinderCore_StateZoomIn__end(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomIn__update(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  float v4; // s8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BD9019 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_CylinderCore_StateZoomIn_GoNext__);
    byte_4BD9019 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_1C22094(v7, v8);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v4, v6, 0LL);
      this->fields.mStartTime = 0.0;
    }
  }
}


void __fastcall CylinderCore_StateZoomIn__updateFadeTime(CylinderCore_StateZoomIn_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__0(
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
  v5 = Easing__Func_47743976(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0LL);
  v6 = Easing__Func_47743976(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0LL);
  v7 = Easing__Func_47743976(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 1, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_13;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_13;
  v9 = v7;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_13;
  v18.fields.x = v5;
  v18.fields.y = v6;
  v18.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.that;
  if ( !this )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11 = fminf(mNow, 1.0);
  v12 = gameObject;
  if ( mNow < 0.0 )
    v11 = 0.0;
  v13 = Easing__Func_47743976(v4->fields.startRotY, v4->fields.endRotY, v11, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v12, v13, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
LABEL_13:
    sub_1C22094(this, method);
  mEarthRoot = v14->fields.mEarthRoot;
  v16 = fminf(mNow * 1.5, 1.0);
  if ( (float)(mNow * 1.5) < 0.0 )
    v17 = 0.0;
  else
    v17 = v16;
  v19 = Easing__Func(v4->fields.startRot, v4->fields.endRot, v17, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v19, 0LL);
}


void __fastcall CylinderCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        CylinderCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v2; // x19
  struct CylinderCore_o *that; // x8
  struct CylinderCore_o *v4; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  TerminalPramsManager_c *v6; // x0

  v2 = this;
  if ( (byte_4BD901B & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD901B = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.endPos, 0LL);
  v4 = v2->fields.that;
  if ( !v4 )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.mEarthRoot;
  if ( !this )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v2->fields.endRot, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.that;
  if ( !this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v2->fields.endRotY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD90A1 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD90A1 = 1;
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
    sub_1C22094(this, method);
  }
}


void __fastcall CylinderCore_StateZoomOut___ctor(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__GoNext(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v5; // x8

  if ( (byte_4BD901D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD901D = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v5 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_1C22094(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_65130424(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/,
    0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  CylinderCore_o **v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct CylinderCore_o *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x22
  float v30; // s8
  CylinderCore_StateZoomOut___c_c *v31; // x0
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v33; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD901C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CylinderCore_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__);
    sub_1C21E38(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_1C21E38(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_1C21E38(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_1C21E38(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_4BD901C = 1;
  }
  v5 = sub_1C22084(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (CylinderCore_o **)(v5 + 48);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 80) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 80), (int64_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
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
    _9__1_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v33, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v35, v36, v37, v38, v39, v40);
  }
  TerminalSceneComponent__Fadein_WorldDisp_43501064(mTerminalScene, 0.4, _9__1_0, 0LL);
  if ( !*v14 )
    goto LABEL_39;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v14)->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Component_object, v44, v45, v46, v47, v48, v49);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v50 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v51 = *(_DWORD *)(v50 + 40);
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(v50 + 32);
  v52 = *(_QWORD *)(v5 + 48);
  *(_DWORD *)(v5 + 32) = v51;
  if ( !v52 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v52 + 80);
  if ( !transform )
    goto LABEL_39;
  v53 = *(float *)(v5 + 28);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_39;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(float *)(v5 + 28) = v53 - localPosition.fields.y;
  if ( !*v14 )
    goto LABEL_39;
  mIsFocusIn = (*v14)->fields.mIsFocusIn;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
  v55 = 8LL;
  if ( !mIsFocusIn )
    v55 = 20LL;
  v56 = (char *)CylinderCore_TypeInfo->static_fields + v55;
  v68 = *(_QWORD *)v56;
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  *(_DWORD *)(v5 + 44) = *((_DWORD *)v56 + 2);
  *(_QWORD *)(v5 + 36) = v68;
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  v57 = *v14;
  if ( !*v14 )
    goto LABEL_39;
  v58 = (UnityEngine_GameObject_o *)transform;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint(v57, v7);
  if ( !transform )
    goto LABEL_39;
  GameObjectExtensions__SetLocalEulerAngleY(v58, *((float *)&transform[4].fields + 1) + 90.0, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
  v66 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v5,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v67 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v67,
    (Il2CppObject *)v5,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v63 )
LABEL_39:
    sub_1C22094(transform, v7);
  EasingObject__Play(v63, v30, v66, v67, 0.0, 0, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__end(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomOut__update(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomOut___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD901E & 1) == 0 )
  {
    sub_1C21E38(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_4BD901E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(CylinderCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CylinderCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CylinderCore_StateZoomOut___c___ctor(CylinderCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c___begin_b__1_0(
        CylinderCore_StateZoomOut___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor(
        CylinderCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__1(
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
  v5 = Easing__Func_47743976(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0LL);
  v6 = Easing__Func_47743976(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0LL);
  v7 = Easing__Func_47743976(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 2, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_10;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_10;
  v9 = v7;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_10;
  v16.fields.x = v5;
  v16.fields.y = v6;
  v16.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_10;
  mEarthRoot = v10->fields.mEarthRoot;
  v12 = (float)(1.0 - mNow) * 1.5;
  v13 = fminf(v12, 1.0);
  if ( v12 < 0.0 )
    v13 = 0.0;
  v17 = Easing__Func(v4->fields.endRot, v4->fields.startRot, v13, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v17, 0LL);
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.that;
  if ( !this )
LABEL_10:
    sub_1C22094(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = Easing__Func_47743976(0.0, 1.0, mNow, 5, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(gameObject, v15 * -0.4, 0LL);
}


void __fastcall CylinderCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
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
                                                                     0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.endPos, 0LL),
        (v4 = v3->fields.that) == 0LL)
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.mEarthRoot) == 0LL
    || (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL)) == 0LL
    || (UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v3->fields.endRot, 0LL),
        (this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_1C22094(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, method);
}
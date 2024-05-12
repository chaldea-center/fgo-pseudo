void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  CylinderCore_c *v1; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v3; // x9
  struct CylinderCore_StaticFields *v4; // x8

  if ( (byte_438C85A & 1) == 0 )
  {
    sub_B775C4(&CylinderCore_TypeInfo);
    byte_438C85A = 1;
  }
  CylinderCore_TypeInfo->static_fields->BASE_ROT_X = -32.733;
  CylinderCore_TypeInfo->static_fields->BASE_ROT_Z = 5.897;
  v1 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC3200000C30C0000LL;
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
  CylinderCore_StateMain_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438C859 & 1) == 0 )
  {
    sub_B775C4(&CylinderCore_StateMain_TypeInfo);
    byte_438C859 = 1;
  }
  v3 = (CylinderCore_StateMain_o *)sub_B77694(CylinderCore_StateMain_TypeInfo);
  CylinderCore_StateMain___ctor(v3, 0LL);
  this->fields.mStateMain = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mStateMain,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct CStateManager_CylinderCore__o *v12; // x21
  CylinderCore_StateNone_o *v13; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *mEarthRoot; // x0
  __int64 v15; // x1
  struct CStateManager_CylinderCore__o *v16; // x21
  CylinderCore_StateZoomIn_o *v17; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v18; // x20
  CylinderCore_StateZoomOut_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C854 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_CylinderCore___ctor__);
    sub_B775C4(&Method_CStateManager_CylinderCore__add__);
    sub_B775C4(&CStateManager_CylinderCore__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_B775C4(&CylinderCore_StateNone_TypeInfo);
    sub_B775C4(&CylinderCore_StateZoomIn_TypeInfo);
    sub_B775C4(&CylinderCore_StateZoomOut_TypeInfo);
    byte_438C854 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_CylinderCore__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v5,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v5;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    v12 = this->fields.mFSM;
    v13 = (CylinderCore_StateNone_o *)sub_B77694(CylinderCore_StateNone_TypeInfo);
    CylinderCore_StateNone___ctor(v13, 0LL);
    if ( !v12 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_2CBF17C *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2CBF17C *)Method_CStateManager_CylinderCore__add__);
    v16 = this->fields.mFSM;
    v17 = (CylinderCore_StateZoomIn_o *)sub_B77694(CylinderCore_StateZoomIn_TypeInfo);
    CylinderCore_StateZoomIn___ctor(v17, 0LL);
    if ( !v16
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v16,
            2,
            (IState_T__o *)v17,
            (const MethodInfo_2CBF17C *)Method_CStateManager_CylinderCore__add__),
          v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v19 = (CylinderCore_StateZoomOut_o *)sub_B77694(CylinderCore_StateZoomOut_TypeInfo),
          CylinderCore_StateZoomOut___ctor(v19, 0LL),
          !v18) )
    {
LABEL_13:
      sub_B7769C(mEarthRoot, v15);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_2CBF17C *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32809816(gameObject, 1.0, 0LL);
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)mEarthRoot,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_13;
  mEarthRoot = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)mEarthRoot,
                                                                     0LL);
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
  CylinderCore_c *v7; // x0
  struct CylinderCore_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct CylinderCore_StaticFields *v12; // x10
  float v13; // w8
  float v14; // w9
  float v15; // w10
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  System_Int32_array **v23; // x1
  float v24; // s8
  System_Func_Vector3__Vector3__float__Vector3__o *v25; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v29; // s9
  float v30; // s10
  float v31; // s14
  TransitionCalculator_Vector3__o *v32; // x0
  struct TransitionCalculator_Vector3__o *v33; // x21
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_438C853 & 1) == 0 )
  {
    sub_B775C4(&CylinderCore_TypeInfo);
    sub_B775C4(&Method_TransitionCalculator_Vector3___ctor__);
    sub_B775C4(&TransitionCalculator_Vector3__TypeInfo);
    byte_438C853 = 1;
  }
  this->fields.mIsFocusIn = isFocusIn;
  v7 = CylinderCore_TypeInfo;
  if ( isFocusIn )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v7 = CylinderCore_TypeInfo;
    }
    static_fields = v7->static_fields;
    p_x = &static_fields->FOCUS_IN_POS.fields.x;
    p_y = &static_fields->FOCUS_IN_POS.fields.y;
    p_z = &static_fields->FOCUS_IN_POS.fields.z;
  }
  else
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v7 = CylinderCore_TypeInfo;
    }
    v12 = v7->static_fields;
    p_x = &v12->FOCUS_OUT_POS.fields.x;
    p_y = &v12->FOCUS_OUT_POS.fields.y;
    p_z = &v12->FOCUS_OUT_POS.fields.z;
  }
  v13 = *p_x;
  v14 = *p_y;
  v15 = *p_z;
  this->fields.mFocusTgtPos.fields.x = v13;
  this->fields.mFocusTgtPos.fields.y = v14;
  this->fields.mFocusTgtPos.fields.z = v15;
  if ( isForce )
  {
    v34.fields.z = v15;
    v34.fields.y = v14;
    v34.fields.x = v13;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v34, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v23 = 0LL;
  }
  else
  {
    v24 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0LL);
    v25 = ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v29 = LocalPosition.fields.x;
    v30 = LocalPosition.fields.y;
    v31 = LocalPosition.fields.z;
    v32 = (TransitionCalculator_Vector3__o *)sub_B77694(TransitionCalculator_Vector3__TypeInfo);
    v36.fields.x = v29;
    v36.fields.y = v30;
    v36.fields.z = v31;
    v37.fields.x = x;
    v37.fields.y = y;
    v37.fields.z = z;
    v33 = v32;
    TransitionCalculator_Vector3____ctor(
      v32,
      v36,
      v37,
      v24,
      (System_Func_T__T__float__T__o *)v25,
      (const MethodInfo_2A1AB14 *)Method_TransitionCalculator_Vector3___ctor__);
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    this->fields.focusInOutPositionCalculator = v33;
    v23 = (System_Int32_array **)v33;
  }
  sub_B77560((BattleServantConfConponent_o *)p_focusInOutPositionCalculator, v23, v16, v17, v18, v19, v20, v21);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  CylinderCore_o *v2; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_438C857 & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_B775C4(&Method_CStateManager_CylinderCore__getState__);
    byte_438C857 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
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
    sub_B7769C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B7769C(this, method);
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
    sub_B7769C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x0

  if ( (byte_438C858 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_CylinderCore__setState__);
    byte_438C858 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_CylinderCore__setState__);
}


void __fastcall CylinderCore__Setup(
        CylinderCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  __int128 v4; // q10
  __int128 v5; // q12
  __int128 v6; // q14
  __int64 v10; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v13; // w20
  float v14; // s9
  float v15; // s11
  _BOOL8 v16; // x0
  __int64 v17; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v20; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v26; // x8
  float v27; // s8
  float v28; // s13
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Object_o *v31; // x23
  __int64 v32; // x9
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int128 v35; // q1
  float v36; // s11
  float v37; // s8
  float v38; // s0
  __int128 v39; // q14
  __int128 v40; // q10
  __int128 v41; // q12
  float v42; // s9
  float v43; // s0
  float v44; // s1
  __int128 v45; // q13
  Il2CppObject *EarthPoint_object; // x0
  __int64 v47; // x1
  __int128 v48; // q0
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x0
  float v52; // [xsp+0h] [xbp-D0h]
  float v53; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C856 & 1) == 0 )
  {
    sub_B775C4(&Method_BaseCore_CreateEarthPoint_CylinderPoint___);
    sub_B775C4(&CylinderPoint_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_8524/*"LAST_WAR_ID"*/);
    byte_438C856 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot
    || (mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalEulerAngle(gameObject, zero, 0LL),
        ((void (__fastcall *)(CylinderCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
          this,
          isFocusIn,
          1LL,
          this->klass->vtable._5_Awake.methodPtr),
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8524/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B7769C(mEarthRoot, v10);
  }
  v13 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v14 = 192.0;
  LODWORD(v6) = 1016003125;
  LODWORD(v5) = 1125056512;
  v55 = v54;
  LODWORD(v4) = 1119092736;
  v15 = -90.0;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v16 )
      break;
    current = (MapControl_WarInfo_o *)v55.fields.current;
    if ( !v55.fields.current )
      sub_B7769C(v16, v17);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v55.fields.current, 0LL);
    v20 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v20, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v20, 0LL);
      if ( warId <= v13 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v20, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v51 = sub_B776C8(PrioredCoordinates);
          sub_B77668(v51, 0LL);
        }
        v26 = PrioredCoordinates->m_Items[mCoreType];
        if ( v26 && (int)v26->max_length >= 2 )
        {
          v28 = v26->m_Items[1];
          v27 = v26->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v31 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            v32 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
            if ( *(&EarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v32
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[v32 - 1] != CylinderPoint_TypeInfo )
            {
              v49 = (UnityEngine_GameObject_o *)sub_B77990(EarthPoint);
LABEL_40:
              sub_B7769C(v49, v50);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v33 = UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
          if ( v33 )
          {
            v35 = v6;
            v52 = v15;
            v53 = v14;
            v36 = (float)(v27 + v14) + v15;
            v37 = v36 * *(float *)&v6;
            v38 = v36 * *(float *)&v6;
            v39 = v4;
            v40 = v5;
            v41 = v35;
            v42 = cosf(v38);
            v43 = sinf(v37);
            v44 = v28 / *(float *)&v39;
            v45 = v40;
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v42 * *(float *)&v40,
                                  v44 * 120.0,
                                  v43 * *(float *)&v40,
                                  (const MethodInfo_1C64FFC *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              sub_B7769C(0LL, v47);
            *((float *)&EarthPoint_object[6].monitor + 1) = v36;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
            v15 = v52;
            v14 = v53;
            v48 = v41;
            v4 = v39;
            v5 = v45;
            v6 = v48;
          }
          else
          {
            if ( !v31 )
              sub_B7769C(v33, v34);
            v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
            if ( !v49 )
              goto LABEL_40;
            UnityEngine_GameObject__SetActive(v49, IsWarOpen, 0LL);
          }
        }
        else
        {
LABEL_19:
          BaseCore__HideEarthPoint((BaseCore_o *)this, warId, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  struct CStateManager_CylinderCore__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_438C855 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_CylinderCore__update__);
    byte_438C855 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_CylinderCore__update__);
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
  __int64 v4; // x11

  if ( (byte_438C852 & 1) == 0 )
  {
    sub_B775C4(&CylinderPoint_TypeInfo);
    byte_438C852 = 1;
  }
  mFocusEarthPoint = this->fields.mFocusEarthPoint;
  if ( !mFocusEarthPoint )
    return 0LL;
  v4 = *(&CylinderPoint_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mFocusEarthPoint->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (CylinderPoint_c *)mFocusEarthPoint->klass->_2.typeHierarchy[v4 - 1] == CylinderPoint_TypeInfo )
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


void __fastcall CylinderCore_StateMain__update(
        CylinderCore_StateMain_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  CylinderCore_StateMain_o *v4; // x20
  float *p_fields; // x20
  float mInertialSpd; // t1
  float v7; // s8
  float v8; // s0
  CTouch_c *v9; // x0
  float x; // s8
  float v11; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v13; // s8
  UnityEngine_GameObject_o *v14; // x20
  float AutoRotationSpeed; // s0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  CylinderCore_c *v17; // x0
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  bool v20; // w8
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_43890F9 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&CylinderCore_TypeInfo);
    sub_B775C4(&Method_TransitionCalculator_Vector3__IsFinished__);
    this = (CylinderCore_StateMain_o *)sub_B775C4(&Method_TransitionCalculator_Vector3__Update__);
    byte_43890F9 = 1;
  }
  if ( !that )
    goto LABEL_39;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    p_fields = (float *)&v4->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_438869A )
      {
        sub_B775C4(&CTouch_TypeInfo);
        byte_438869A = 1;
      }
      v9 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v9 = CTouch_TypeInfo;
      }
      x = v9->static_fields->mScrPosDelta.fields.x;
      if ( !byte_438869B )
      {
        sub_B775C4(&CTouch_TypeInfo);
        v9 = CTouch_TypeInfo;
        byte_438869B = 1;
      }
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = CTouch_TypeInfo;
      }
      v11 = v9->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v11) )
        v11 = x;
      *p_fields = v11 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    p_fields = (float *)&v4->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v7 = *p_fields;
      v8 = v7 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *p_fields = v8;
      if ( fabsf(v8) < 0.004 )
        *p_fields = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v13 = *p_fields;
  v14 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(v14, v13 + AutoRotationSpeed, 0LL);
  mEarthRoot = that->fields.mEarthRoot;
  v17 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v17 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v17->static_fields->BASE_ROT_X;
  v22.fields.y = 0.0;
  v22.fields.x = *p_BASE_ROT_X;
  v22.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v22, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_2A1AC88 *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v21 = that->fields.mEarthRoot;
      v23 = TransitionCalculator_Vector3___Update(
              (TransitionCalculator_Vector3__o *)this,
              (const MethodInfo_2A1ABD0 *)Method_TransitionCalculator_Vector3__Update__);
      GameObjectExtensions__SetLocalPosition(v21, v23, 0LL);
      v20 = 1;
      goto LABEL_38;
    }
LABEL_39:
    sub_B7769C(this, that);
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  v20 = 0;
LABEL_38:
  that->fields.mIsFocusMoving = v20;
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
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v4; // x8

  if ( (byte_43890FC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    byte_43890FC = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v4 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v4->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_B7769C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_15039392(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/,
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CylinderCore_o *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  TerminalPramsManager_c *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  __int64 v43; // d0
  float v44; // s9
  float v45; // s1
  float v46; // s3
  EasingObject_o *v47; // x21
  float mSpdTime; // s8
  System_Action_o *v49; // x22
  System_Action_o *v50; // x23
  TerminalPramsManager_c *v51; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v53; // x21
  float v54; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43890FA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CylinderCore_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CylinderCore_StateZoomIn_GoNext__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_B775C4(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_B775C4(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_43890FA = 1;
  }
  v5 = sub_B77694(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  CylinderCore_StateZoomIn___c__DisplayClass3_0___ctor((CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_65;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 48);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 88) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 88), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  mCore = this->fields.mCore;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !mCore )
    goto LABEL_65;
  mFocusEarthPoint = (UnityEngine_Object_o *)mCore->fields.mFocusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438748D )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438748D = 1;
    }
    v31 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v31 = TerminalPramsManager_TypeInfo;
    }
    if ( v31->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(23, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v53 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v53, 0LL);
      return;
    }
LABEL_65:
    sub_B7769C(transform, v7);
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), Component_UIWidget, v34, v35, v36, v37, v38, v39);
  v40 = *(_QWORD *)(v5 + 48);
  if ( !v40 )
    goto LABEL_65;
  transform = *(UnityEngine_Component_o **)(v40 + 24);
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v5 + 24) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)transform,
                                          0LL);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v41 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v42 = *(_QWORD *)(v5 + 48);
  v43 = *(_QWORD *)(v41 + 36);
  *(_DWORD *)(v5 + 36) = *(_DWORD *)(v41 + 32);
  *(_QWORD *)(v5 + 40) = v43;
  if ( !v42 )
    goto LABEL_65;
  transform = *(UnityEngine_Component_o **)(v42 + 72);
  v54 = *(float *)&v43;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_65;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = *(UnityEngine_Component_o **)(v5 + 48);
  *(float *)(v5 + 40) = v54 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_65;
  if ( !*v14 )
    goto LABEL_65;
  v44 = *((float *)&transform[4].monitor + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v14, 0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(&v45 - 1) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  *(float *)(v5 + 56) = v45;
  *(float *)(v5 + 60) = v44 + 90.0;
  if ( vabds_f32(v45, v44) > 180.0 )
    *(float *)(v5 + 56) = v45 + -360.0;
  if ( !*v14 )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)(*v14)[1].klass;
  if ( !transform )
    goto LABEL_65;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_65;
  *(UnityEngine_Vector3_o *)(v5 + 64) = UnityEngine_Transform__get_localEulerAngles(
                                          (UnityEngine_Transform_o *)transform,
                                          0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v46 = *(float *)(v5 + 64);
  *(UnityEngine_Vector3_o *)(v5 + 76) = zero;
  if ( v46 > 180.0 )
  {
    v46 = v46 + -360.0;
    *(float *)(v5 + 64) = v46;
  }
  if ( *(float *)(v5 + 72) > 180.0 )
    *(float *)(v5 + 64) = v46 + -360.0;
  v47 = *(EasingObject_o **)(v5 + 16);
  mSpdTime = this->fields.mSpdTime;
  v49 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v50 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v5, Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v47 )
    goto LABEL_65;
  EasingObject__Play(v47, mSpdTime, v49, v50, 0.0, 0, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438748D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748D = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  if ( !v51->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(23, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_43890FB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CylinderCore_StateZoomIn_GoNext__);
    byte_43890FB = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B7769C(v7, v8);
      CommonUI__maskFadeout(Instance, 2, v4, v6, 0LL);
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
  float mStartTime; // s8
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v4; // x19
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  float v9; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  float startRotY; // s9
  float endRotY; // s10
  UnityEngine_GameObject_o *v13; // x20
  float v14; // s0
  float v15; // s0
  struct CylinderCore_o *v16; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float x; // s9
  float y; // s10
  float z; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s6
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = Easing__Func_34149472(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_34149472(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_34149472(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mStartTime, 1, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_8;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_8;
  v9 = v7;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_8;
  v25.fields.x = v5;
  v25.fields.y = v6;
  v25.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.that;
  if ( !this )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  startRotY = v4->fields.startRotY;
  endRotY = v4->fields.endRotY;
  v13 = gameObject;
  v14 = UnityEngine_Mathf__Clamp01(mStartTime, 0LL);
  v15 = Easing__Func_34149472(startRotY, endRotY, v14, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v13, v15, 0LL);
  v16 = v4->fields.that;
  if ( !v16 )
LABEL_8:
    sub_B7769C(this, method);
  mEarthRoot = v16->fields.mEarthRoot;
  x = v4->fields.startRot.fields.x;
  y = v4->fields.startRot.fields.y;
  z = v4->fields.startRot.fields.z;
  v21 = v4->fields.endRot.fields.x;
  v22 = v4->fields.endRot.fields.y;
  v23 = v4->fields.endRot.fields.z;
  v24 = UnityEngine_Mathf__Clamp01(mStartTime * 1.5, 0LL);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v28.fields.x = v21;
  v28.fields.y = v22;
  v28.fields.z = v23;
  v27 = Easing__Func(v26, v28, v24, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v27, 0LL);
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
  if ( (byte_438AC04 & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438AC04 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v2->fields.endPos, 0LL);
  v4 = v2->fields.that;
  if ( !v4 )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v4->fields.mEarthRoot;
  if ( !this )
    goto LABEL_22;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v2->fields.endRot, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.that;
  if ( !this )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v2->fields.endRotY, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438748D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748D = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_IsAutoResume_k__BackingField )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v2->fields.__4__this;
    if ( this )
    {
      CylinderCore_StateZoomIn__GoNext((CylinderCore_StateZoomIn_o *)this, 0LL);
      return;
    }
LABEL_22:
    sub_B7769C(this, method);
  }
}


void __fastcall CylinderCore_StateZoomOut___ctor(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__GoNext(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v4; // x8

  if ( (byte_43890FE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B775C4(&StringLiteral_7045/*"GO_NEXT"*/);
    byte_43890FE = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, 0LL), (v4 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v4->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_B7769C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_15039392(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7045/*"GO_NEXT"*/,
    0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x19
  void *transform; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CylinderCore_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CylinderCore_o *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x8
  struct TerminalSceneComponent_o *v30; // x8
  TerminalSceneComponent_o *v31; // x22
  float v32; // s8
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v35; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x9
  __int64 v53; // x8
  __int64 v54; // d0
  __int64 v55; // x8
  CylinderCore_c *v56; // x0
  struct CylinderCore_StaticFields *v57; // x10
  _DWORD *p_x; // x8
  int *p_y; // x9
  int *p_z; // x10
  struct CylinderCore_StaticFields *v61; // x10
  int v62; // w9
  int v63; // w10
  CylinderCore_o *v64; // x8
  UnityEngine_GameObject_o *v65; // x20
  CylinderCore_c *v66; // x0
  unsigned int *v67; // x8
  EasingObject_o *v68; // x20
  unsigned int v69; // w9
  System_Action_o *v70; // x21
  System_Action_o *v71; // x22
  float v72; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43890FD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CylinderCore_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__);
    sub_B775C4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_B775C4(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_B775C4(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_B775C4(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_43890FD = 1;
  }
  v5 = sub_B77694(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  CylinderCore_StateZoomOut___c__DisplayClass1_0___ctor((CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 48) = that;
  v14 = (CylinderCore_o **)(v5 + 48);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 80) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 80), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct CylinderCore_o **)(v5 + 48);
  this->fields.mCore = v21;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  if ( !*v14 )
    goto LABEL_52;
  mTerminalScene = (*v14)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_52;
  mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  if ( !*v14 )
    goto LABEL_52;
  v30 = (*v14)->fields.mTerminalScene;
  if ( !v30 )
    goto LABEL_52;
  v30->fields._IsPassCylinderCore_k__BackingField = 1;
  if ( !*v14 )
    goto LABEL_52;
  v31 = (*v14)->fields.mTerminalScene;
  v32 = IntpTime_AutoResume;
  transform = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( (BYTE3(CylinderCore_StateZoomOut___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo);
    transform = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = (struct CylinderCore_StateZoomOut___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)transform + 307) & 4) != 0 && !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v35, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v36 = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    v36->__9__1_0 = _9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v36->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v31 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_18683488(v31, 0.4, _9__1_0, 0LL);
  if ( !*v14 )
    goto LABEL_52;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v14)->fields.mFocusEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), Component_UIWidget, v46, v47, v48, v49, v50, v51);
  transform = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = CylinderCore_TypeInfo;
  }
  v52 = *((_QWORD *)transform + 23);
  v53 = *(_QWORD *)(v5 + 48);
  v54 = *(_QWORD *)(v52 + 36);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v52 + 32);
  *(_QWORD *)(v5 + 28) = v54;
  if ( !v53 )
    goto LABEL_52;
  transform = *(void **)(v53 + 72);
  v72 = *(float *)&v54;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  v55 = *(_QWORD *)(v5 + 48);
  *(float *)(v5 + 28) = v72 - localPosition.fields.y;
  if ( !v55 )
    goto LABEL_52;
  v56 = CylinderCore_TypeInfo;
  if ( *(_BYTE *)(v55 + 136) )
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v56 = CylinderCore_TypeInfo;
    }
    v57 = v56->static_fields;
    p_x = (_DWORD *)&v57->FOCUS_IN_POS.fields.x;
    p_y = (int *)&v57->FOCUS_IN_POS.fields.y;
    p_z = (int *)&v57->FOCUS_IN_POS.fields.z;
  }
  else
  {
    if ( (WORD1(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CylinderCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
      v56 = CylinderCore_TypeInfo;
    }
    v61 = v56->static_fields;
    p_x = (_DWORD *)&v61->FOCUS_OUT_POS.fields.x;
    p_y = (int *)&v61->FOCUS_OUT_POS.fields.y;
    p_z = (int *)&v61->FOCUS_OUT_POS.fields.z;
  }
  v62 = *p_y;
  v63 = *p_z;
  transform = *(void **)(v5 + 48);
  *(_DWORD *)(v5 + 36) = *p_x;
  *(_DWORD *)(v5 + 40) = v62;
  *(_DWORD *)(v5 + 44) = v63;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  v64 = *v14;
  if ( !*v14 )
    goto LABEL_52;
  v65 = (UnityEngine_GameObject_o *)transform;
  transform = CylinderCore__get_mFocusCylinderPoint(v64, 0LL);
  if ( !transform )
    goto LABEL_52;
  GameObjectExtensions__SetLocalEulerAngleY(v65, *((float *)transform + 27) + 90.0, 0LL);
  *(UnityEngine_Vector3_o *)(v5 + 68) = UnityEngine_Vector3__get_zero(0LL);
  v66 = CylinderCore_TypeInfo;
  if ( (BYTE3(CylinderCore_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v66 = CylinderCore_TypeInfo;
  }
  v67 = (unsigned int *)v66->static_fields;
  v68 = *(EasingObject_o **)(v5 + 16);
  v69 = *v67;
  LODWORD(v67) = v67[1];
  *(_QWORD *)(v5 + 56) = v69;
  *(_DWORD *)(v5 + 64) = (_DWORD)v67;
  v70 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v5,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v71 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v71,
    (Il2CppObject *)v5,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v68 )
LABEL_52:
    sub_B7769C(transform, v7);
  EasingObject__Play(v68, v32, v70, v71, 0.0, 0, 0LL);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438AC05 & 1) == 0 )
  {
    sub_B775C4(&CylinderCore_StateZoomOut___c_TypeInfo);
    byte_438AC05 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CylinderCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  float mStartTime; // s8
  CylinderCore_StateZoomOut___c__DisplayClass1_0_o *v4; // x19
  float v5; // s9
  float v6; // s10
  float v7; // s0
  struct CylinderCore_o *that; // x8
  float v9; // s11
  struct CylinderCore_o *v10; // x8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float x; // s9
  float y; // s10
  float z; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s6
  UnityEngine_GameObject_o *gameObject; // x19
  float v20; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_8;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = Easing__Func_34149472(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mStartTime, 3, 0LL);
  v6 = Easing__Func_34149472(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mStartTime, 15, 0LL);
  v7 = Easing__Func_34149472(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mStartTime, 2, 0LL);
  that = v4->fields.that;
  if ( !that )
    goto LABEL_8;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_8;
  v9 = v7;
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL);
  if ( !this )
    goto LABEL_8;
  v21.fields.x = v5;
  v21.fields.y = v6;
  v21.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v21, 0LL);
  v10 = v4->fields.that;
  if ( !v10 )
    goto LABEL_8;
  mEarthRoot = v10->fields.mEarthRoot;
  x = v4->fields.endRot.fields.x;
  y = v4->fields.endRot.fields.y;
  z = v4->fields.endRot.fields.z;
  v15 = v4->fields.startRot.fields.x;
  v16 = v4->fields.startRot.fields.y;
  v17 = v4->fields.startRot.fields.z;
  v18 = UnityEngine_Mathf__Clamp01((float)(1.0 - mStartTime) * 1.5, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v24.fields.x = v15;
  v24.fields.y = v16;
  v24.fields.z = v17;
  v23 = Easing__Func(v22, v24, v18, 3, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v23, 0LL);
  this = (CylinderCore_StateZoomOut___c__DisplayClass1_0_o *)v4->fields.that;
  if ( !this )
LABEL_8:
    sub_B7769C(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = Easing__Func_34149472(0.0, 1.0, mStartTime, 5, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(gameObject, v20 * -0.4, 0LL);
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
    sub_B7769C(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, 0LL);
}
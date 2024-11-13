void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CylinderCore_c *v3; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v5; // x9
  struct CylinderCore_StaticFields *v6; // x8

  if ( (byte_4B12D42 & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderCore_TypeInfo, v1, v2);
    byte_4B12D42 = 1;
  }
  v3 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_ROT_X = xmmword_BD2080;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v5->FOCUS_OUT_POS.fields.z = 94.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v6->ZOOM_IN_POS.fields.z = -624.0;
}


void __fastcall CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12D41 & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderCore_StateMain_TypeInfo, method, v2);
    byte_4B12D41 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(CylinderCore_StateMain_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  this->fields.mStateMain = (struct CylinderCore_StateMain_o *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mStateMain, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
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
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_T__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  CStateManager_T__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  Il2CppObject *v30; // x22
  CStateManager_T__o *mEarthRoot; // x0
  __int64 v32; // x1
  CStateManager_T__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  Il2CppObject *v37; // x22
  CStateManager_T__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x21
  const MethodInfo *v43; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_CylinderCore___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_CylinderCore__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_CylinderCore__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v9, v10);
    sub_1BCA7E0(&CylinderCore_StateNone_TypeInfo, v11, v12);
    sub_1BCA7E0(&CylinderCore_StateZoomIn_TypeInfo, v13, v14);
    sub_1BCA7E0(&CylinderCore_StateZoomOut_TypeInfo, v15, v16);
    byte_4B12D3C = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v19 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_CylinderCore__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v19,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    v26 = (CStateManager_T__o *)this->fields.mFSM;
    v30 = (Il2CppObject *)sub_1BCAA2C(CylinderCore_StateNone_TypeInfo, v27, v28, v29);
    System_Object___ctor(v30, 0LL);
    if ( !v26 )
      goto LABEL_13;
    CStateManager_object___add(
      v26,
      0,
      (IState_T__o *)v30,
      (const MethodInfo_313FC6C *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_object___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_313FC6C *)Method_CStateManager_CylinderCore__add__);
    v33 = (CStateManager_T__o *)this->fields.mFSM;
    v37 = (Il2CppObject *)sub_1BCAA2C(CylinderCore_StateZoomIn_TypeInfo, v34, v35, v36);
    System_Object___ctor(v37, 0LL);
    if ( !v33
      || (CStateManager_object___add(
            v33,
            2,
            (IState_T__o *)v37,
            (const MethodInfo_313FC6C *)Method_CStateManager_CylinderCore__add__),
          v38 = (CStateManager_T__o *)*p_mFSM,
          v42 = (Il2CppObject *)sub_1BCAA2C(CylinderCore_StateZoomOut_TypeInfo, v39, v40, v41),
          System_Object___ctor(v42, 0LL),
          !v38) )
    {
LABEL_13:
      sub_1BCAA3C(mEarthRoot, v32);
    }
    CStateManager_object___add(
      v38,
      3,
      (IState_T__o *)v42,
      (const MethodInfo_313FC6C *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v43);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34333164(gameObject, 1.0, 0LL);
  mEarthRoot = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)mEarthRoot,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mMeshRenderer,
    (int64_t)Component_object,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__FocusInOut(CylinderCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x9
  float *v13; // x8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  int64_t v21; // x1
  float v22; // s8
  System_Func_T__T__float__T__o *v23; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v27; // s9
  float v28; // s10
  float v29; // s14
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  TransitionCalculator_Vector3__o *v33; // x0
  struct TransitionCalculator_Vector3__o *v34; // x21
  float v35; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4B12D3B & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderCore_TypeInfo, isFocusIn, isForce);
    sub_1BCA7E0(&Method_TransitionCalculator_Vector3___ctor__, v8, v9);
    sub_1BCA7E0(&TransitionCalculator_Vector3__TypeInfo, v10, v11);
    byte_4B12D3B = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, isFocusIn);
  v12 = 20LL;
  if ( isFocusIn )
    v12 = 8LL;
  v13 = (float *)((char *)&CylinderCore_TypeInfo->static_fields->BASE_ROT_X + v12);
  v35 = v13[2];
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = *(_QWORD *)v13;
  this->fields.mFocusTgtPos.fields.z = v35;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v21 = 0LL;
  }
  else
  {
    v22 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0LL);
    v23 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v27 = LocalPosition.fields.x;
    v28 = LocalPosition.fields.y;
    v29 = LocalPosition.fields.z;
    v33 = (TransitionCalculator_Vector3__o *)sub_1BCAA2C(TransitionCalculator_Vector3__TypeInfo, v30, v31, v32);
    v37.fields.x = v27;
    v37.fields.y = v28;
    v37.fields.z = v29;
    v38.fields.x = x;
    v38.fields.y = y;
    v38.fields.z = z;
    v34 = v33;
    TransitionCalculator_Vector3____ctor(
      v33,
      v37,
      v38,
      v22,
      v23,
      (const MethodInfo_38604FC *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v34;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v21 = (int64_t)v34;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_focusInOutPositionCalculator, v21, v14, v15, v16, v17, v18, v19);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CylinderCore_o *v3; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B12D3F & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_1BCA7E0(&Method_CStateManager_CylinderCore__getState__, method, v2);
    byte_4B12D3F = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12D40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_CylinderCore__setState__, *(_QWORD *)&state, method);
    byte_4B12D40 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_CylinderCore__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__Setup(
        CylinderCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *mEarthRoot; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v26; // w20
  _BOOL8 v27; // x0
  __int64 v28; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v31; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x26
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v36; // x1
  int max_length; // w8
  System_Single_array *v38; // x8
  float v39; // s9
  float v40; // s10
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  CylinderPoint_c *v43; // x1
  UnityEngine_Object_o *v44; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 v46; // x0
  __int64 v47; // x1
  float v48; // s10
  Il2CppObject *EarthPoint_object; // x0
  __int64 v50; // x1
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x1
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-A0h] BYREF
  float cosx; // [xsp+48h] [xbp-78h] BYREF
  float sinx; // [xsp+4Ch] [xbp-74h] BYREF

  if ( (byte_4B12D3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BaseCore_CreateEarthPoint_CylinderPoint___, warInfoList, isFocusIn);
    sub_1BCA7E0(&CylinderPoint_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_8355/*"LAST_WAR_ID"*/, v19, v20);
    byte_4B12D3E = 1;
  }
  memset(&v54, 0, sizeof(v54));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_36;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_36;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v23, v24);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ((void (__fastcall *)(CylinderCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    isFocusIn,
    1LL,
    this->klass->vtable._5_Awake.methodPtr);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8355/*"LAST_WAR_ID"*/, 0LL);
  if ( !warInfoList )
LABEL_36:
    sub_1BCAA3C(mEarthRoot, v21);
  v26 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v27 )
      break;
    current = (MapControl_WarInfo_o *)v54.fields._current;
    if ( !v54.fields._current )
      sub_1BCAA3C(v27, v28);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v54.fields._current, 0LL);
    v31 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v31, 0LL) )
        goto LABEL_21;
      IsEvent = WarEntity__IsEvent(v31, 0LL);
      if ( warId <= v26 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v31, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_21;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_21;
        if ( (unsigned int)mCoreType >= max_length )
          sub_1BCAA44(PrioredCoordinates, v36);
        v38 = PrioredCoordinates->m_Items[mCoreType];
        if ( v38 && (int)v38->max_length >= 2 )
        {
          v39 = v38->m_Items[1];
          v40 = v38->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v44 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            v43 = CylinderPoint_TypeInfo;
            methodPtr_low = LOBYTE(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(EarthPoint->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[methodPtr_low - 1] != CylinderPoint_TypeInfo )
            {
              sub_1BCACFC(EarthPoint);
LABEL_39:
              sub_1BCAA3C(EarthPoint_object, v50);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
          v46 = UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
          if ( v46 )
          {
            v48 = (float)(v40 + 192.0) + -90.0;
            sincosf(v48 * 0.017453, &sinx, &cosx);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  cosx * 143.0,
                                  (float)(v39 / 90.0) * 120.0,
                                  sinx * 143.0,
                                  (const MethodInfo_2EFC95C *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              goto LABEL_39;
            *((float *)&EarthPoint_object[7].klass + 1) = v48;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !v44 )
              sub_1BCAA3C(v46, v47);
            v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v44, 0LL);
            if ( !v51 )
              sub_1BCAA3C(0LL, v52);
            UnityEngine_GameObject__SetActive(v51, IsWarOpen, 0LL);
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
    &v54,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B12D3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_CylinderCore__update__, method, v2);
    byte_4B12D3D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_CylinderCore__update__);
  if ( this->fields.mIsReqZoomIn && CylinderCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    CylinderCore__SetState(this, 2, v5);
  }
}


CylinderPoint_o *__fastcall CylinderCore__get_mFocusCylinderPoint(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BaseEarthPoint_o *mFocusEarthPoint; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B12D3A & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderPoint_TypeInfo, method, v2);
    byte_4B12D3A = 1;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  float mInertialSpd; // s8
  float v12; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v14; // s8
  float v15; // s0
  __int64 v16; // x1
  __int64 v17; // x2
  CTouch_c *v18; // x0
  float x; // s8
  float v20; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v22; // s8
  UnityEngine_GameObject_o *v23; // x20
  float AutoRotationSpeed; // s0
  __int64 v25; // x1
  CylinderCore_c *v26; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  UnityEngine_GameObject_o *v30; // x20
  float v31; // s0
  float y; // s1
  float z; // s2
  bool v34; // w21
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B12D43 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, that, method);
    sub_1BCA7E0(&CylinderCore_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_TransitionCalculator_Vector3__IsFinished__, v7, v8);
    this = (CylinderCore_StateMain_o *)sub_1BCA7E0(&Method_TransitionCalculator_Vector3__Update__, v9, v10);
    byte_4B12D43 = 1;
  }
  if ( !that )
    goto LABEL_38;
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that);
    if ( CTouch__isDrag(0LL) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v16);
      if ( !byte_4B12CDC )
      {
        sub_1BCA7E0(&CTouch_TypeInfo, v16, v17);
        byte_4B12CDC = 1;
      }
      v18 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v16);
        v18 = CTouch_TypeInfo;
      }
      x = v18->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4B12CDD )
      {
        sub_1BCA7E0(&CTouch_TypeInfo, v16, v17);
        v18 = CTouch_TypeInfo;
        byte_4B12CDD = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, v16);
        v18 = CTouch_TypeInfo;
      }
      v20 = v18->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v20) )
        v20 = x;
      v4->fields.mInertialSpd = v20 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_4B109C5 )
    {
      sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, that, method);
      byte_4B109C5 = 1;
    }
    v12 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v12 <= (float)(static_fields->Epsilon * 8.0) )
      v12 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v12 )
    {
      v14 = v4->fields.mInertialSpd;
      v15 = v14 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      v4->fields.mInertialSpd = v15;
      if ( fabsf(v15) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v22 = v4->fields.mInertialSpd;
  v23 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(v23, v22 + AutoRotationSpeed, 0LL);
  v26 = CylinderCore_TypeInfo;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v25);
    v26 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v26->static_fields->BASE_ROT_X;
  v35.fields.y = 0.0;
  v35.fields.x = *p_BASE_ROT_X;
  v35.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v35, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_38605F8 *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v30 = that->fields.mEarthRoot;
      *(UnityEngine_Vector3_o *)&v31 = TransitionCalculator_Vector3___Update(
                                         (TransitionCalculator_Vector3__o *)this,
                                         (const MethodInfo_3860588 *)Method_TransitionCalculator_Vector3__Update__);
      v34 = 1;
      goto LABEL_37;
    }
LABEL_38:
    sub_1BCAA3C(this, that);
  }
  v30 = that->fields.mEarthRoot;
  v31 = that->fields.mFocusTgtPos.fields.x;
  y = that->fields.mFocusTgtPos.fields.y;
  z = that->fields.mFocusTgtPos.fields.z;
  v34 = 0;
LABEL_37:
  GameObjectExtensions__SetLocalPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  that->fields.mIsFocusMoving = v34;
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
  __int64 v4; // x1
  __int64 v5; // x2
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v7; // x8

  if ( (byte_4B12D46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v4, v5);
    byte_4B12D46 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v7 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v7->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_1BCAA3C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_64415908(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateZoomIn__begin(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Component_o **v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct CylinderCore_o *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  __int64 v53; // x2
  TerminalPramsManager_c *v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x8
  __int64 v64; // x9
  __int64 v65; // x8
  __int64 v66; // x10
  float v67; // s8
  float v68; // s8
  float v69; // s1
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  float v73; // s0
  int v74; // s1
  int v75; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  EasingObject_o *v78; // x21
  float mSpdTime; // s8
  System_Action_o *v80; // x22
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Action_o *v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  TerminalPramsManager_c *v87; // x0
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  Il2CppObject *Instance; // x20
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_o *v96; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12D44 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&CylinderCore_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomIn_GoNext__, v14, v15);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomIn_begin__, v16, v17);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v20, v21);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v22, v23);
    sub_1BCA7E0(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v24, v25);
    byte_4B12D44 = 1;
  }
  v26 = sub_1BCAA2C(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_58;
  *(_QWORD *)(v26 + 48) = that;
  v35 = (UnityEngine_Component_o **)(v26 + 48);
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 48), (int64_t)that, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 88) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 88), (int64_t)this, v36, v37, v38, v39, v40, v41);
  v42 = *(struct CylinderCore_o **)(v26 + 48);
  this->fields.mCore = v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  mCore = this->fields.mCore;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !mCore )
    goto LABEL_58;
  mFocusEarthPoint = (UnityEngine_Object_o *)mCore->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
    if ( !byte_4B12DCF )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v28, v53);
      byte_4B12DCF = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28);
      v54 = TerminalPramsManager_TypeInfo;
    }
    if ( v54->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v28);
      return;
    }
    v90 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v90 = (_QWORD *)sub_1BCA7F8(Method_CylinderCore_StateZoomIn_begin__);
    v91 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v90, v90[4]);
    OverwriteAssetSoundName__PlayCommonSe(v91, 23, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v96 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v93, v94, v95);
    System_Action___ctor(v96, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v96, 0LL);
      return;
    }
LABEL_58:
    sub_1BCAA3C(transform, v28);
  }
  transform = *v35;
  if ( !*v35 )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v26 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)Component_object, v57, v58, v59, v60, v61, v62);
  v63 = *(_QWORD *)(v26 + 48);
  if ( !v63 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v63 + 32);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v26 + 24) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v28);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v64 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v65 = *(_QWORD *)(v26 + 48);
  v66 = *(_QWORD *)(v64 + 32);
  LODWORD(v64) = *(_DWORD *)(v64 + 40);
  *(_QWORD *)(v26 + 36) = v66;
  *(_DWORD *)(v26 + 44) = v64;
  if ( !v65 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v65 + 80);
  if ( !transform )
    goto LABEL_58;
  v67 = *(float *)(v26 + 40);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_58;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = *(UnityEngine_Component_o **)(v26 + 48);
  *(float *)(v26 + 40) = v67 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, v28);
  if ( !transform )
    goto LABEL_58;
  if ( !*v35 )
    goto LABEL_58;
  v68 = *((float *)&transform[4].fields + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v35, 0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(&v69 - 1) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  *(float *)(v26 + 56) = v69;
  *(float *)(v26 + 60) = v68 + 90.0;
  if ( vabds_f32(v69, v68) > 180.0 )
    *(float *)(v26 + 56) = v69 + -360.0;
  if ( !*v35 )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)(*v35)[1].monitor;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Transform__get_localEulerAngles(
                                     (UnityEngine_Transform_o *)transform,
                                     0LL);
  *(float *)(v26 + 64) = v73;
  *(_DWORD *)(v26 + 68) = v74;
  *(_DWORD *)(v26 + 72) = v75;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v70, v71);
    byte_4B109C1 = 1;
    v73 = *(float *)(v26 + 64);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v26 + 76) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v26 + 84) = z;
  if ( v73 > 180.0 )
  {
    v73 = v73 + -360.0;
    *(float *)(v26 + 64) = v73;
  }
  if ( *(float *)(v26 + 72) > 180.0 )
    *(float *)(v26 + 64) = v73 + -360.0;
  v78 = *(EasingObject_o **)(v26 + 16);
  mSpdTime = this->fields.mSpdTime;
  v80 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v70, v71, v72);
  System_Action___ctor(
    v80,
    (Il2CppObject *)v26,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__,
    0LL);
  v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v26,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__,
    0LL);
  if ( !v78 )
    goto LABEL_58;
  EasingObject__Play(v78, mSpdTime, v80, v84, 0.0, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v85);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v85, v86);
    byte_4B12DCF = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v85);
    v87 = TerminalPramsManager_TypeInfo;
  }
  if ( !v87->static_fields->_IsAutoResume_k__BackingField )
  {
    v88 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v88 = (_QWORD *)sub_1BCA7F8(Method_CylinderCore_StateZoomIn_begin__);
    v89 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v88, v88[4]);
    OverwriteAssetSoundName__PlayCommonSe(v89, 23, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float v8; // s8
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B12D45 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomIn_GoNext__, v6, v7);
    byte_4B12D45 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v8 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v8 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_1BCAA3C(v14, v15);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v8, v13, 0LL);
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
  v5 = Easing__Func_47131320(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0LL);
  v6 = Easing__Func_47131320(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0LL);
  v7 = Easing__Func_47131320(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 1, 0LL);
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
  v13 = Easing__Func_47131320(v4->fields.startRotY, v4->fields.endRotY, v11, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v12, v13, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
LABEL_13:
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  CylinderCore_StateZoomIn___c__DisplayClass3_0_o *v3; // x19
  struct CylinderCore_o *that; // x8
  struct CylinderCore_o *v5; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0

  v3 = this;
  if ( (byte_4B12D47 & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12D47 = 1;
  }
  that = v3->fields.that;
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
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v3->fields.endPos, 0LL);
  v5 = v3->fields.that;
  if ( !v5 )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v5->fields.mEarthRoot;
  if ( !this )
    goto LABEL_20;
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v3->fields.endRot, 0LL);
  this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(gameObject, v3->fields.endRotY, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DCF )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v7);
    byte_4B12DCF = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_IsAutoResume_k__BackingField )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.__4__this;
    if ( this )
    {
      CylinderCore_StateZoomIn__GoNext((CylinderCore_StateZoomIn_o *)this, method);
      return;
    }
LABEL_20:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall CylinderCore_StateZoomOut___ctor(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CylinderCore_StateZoomOut__GoNext(CylinderCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v7; // x8

  if ( (byte_4B12D49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, v4, v5);
    byte_4B12D49 = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v7 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v7->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_1BCAA3C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_64415908(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/,
    0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x19
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  CylinderCore_o **v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct CylinderCore_o *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x22
  float v52; // s8
  CylinderCore_StateZoomOut___c_c *v53; // x0
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v55; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  int v73; // w10
  __int64 v74; // x8
  float v75; // s9
  _BOOL4 mIsFocusIn; // w22
  __int64 v77; // x9
  char *v78; // x8
  CylinderCore_o *v79; // x8
  UnityEngine_GameObject_o *v80; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  struct UnityEngine_Vector3_StaticFields *v84; // x8
  float z; // s1
  CylinderCore_c *v86; // x0
  int *v87; // x8
  EasingObject_o *v88; // x20
  int v89; // s0
  int v90; // s1
  System_Action_o *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Action_o *v95; // x22
  __int64 v96; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12D48 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&CylinderCore_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, v14, v15);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v16, v17);
    sub_1BCA7E0(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v18, v19);
    sub_1BCA7E0(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&CylinderCore_StateZoomOut___c_TypeInfo, v22, v23);
    byte_4B12D48 = 1;
  }
  v24 = sub_1BCAA2C(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_39;
  *(_QWORD *)(v24 + 48) = that;
  v33 = (CylinderCore_o **)(v24 + 48);
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 48), (int64_t)that, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 80) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 80), (int64_t)this, v34, v35, v36, v37, v38, v39);
  v40 = *(struct CylinderCore_o **)(v24 + 48);
  this->fields.mCore = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  if ( !*v33 )
    goto LABEL_39;
  mTerminalScene = (*v33)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  *(_WORD *)&mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 256;
  v52 = IntpTime_AutoResume;
  v53 = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( !CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo, v26);
    v53 = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v53->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v26);
      v53 = CylinderCore_StateZoomOut___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v53->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v48, v49);
    System_Action___ctor(_9__1_0, v55, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v57, v58, v59, v60, v61, v62);
  }
  TerminalSceneComponent__Fadein_WorldDisp_42930316(mTerminalScene, 0.4, _9__1_0, 0LL);
  if ( !*v33 )
    goto LABEL_39;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v33)->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v26);
    return;
  }
  transform = (UnityEngine_Component_o *)*v33;
  if ( !*v33 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v24 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)Component_object, v66, v67, v68, v69, v70, v71);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v26);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v72 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v73 = *(_DWORD *)(v72 + 40);
  *(_QWORD *)(v24 + 24) = *(_QWORD *)(v72 + 32);
  v74 = *(_QWORD *)(v24 + 48);
  *(_DWORD *)(v24 + 32) = v73;
  if ( !v74 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v74 + 80);
  if ( !transform )
    goto LABEL_39;
  v75 = *(float *)(v24 + 28);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_39;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(float *)(v24 + 28) = v75 - localPosition.fields.y;
  if ( !*v33 )
    goto LABEL_39;
  mIsFocusIn = (*v33)->fields.mIsFocusIn;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v26);
  v77 = 8LL;
  if ( !mIsFocusIn )
    v77 = 20LL;
  v78 = (char *)CylinderCore_TypeInfo->static_fields + v77;
  v96 = *(_QWORD *)v78;
  transform = *(UnityEngine_Component_o **)(v24 + 48);
  *(_DWORD *)(v24 + 44) = *((_DWORD *)v78 + 2);
  *(_QWORD *)(v24 + 36) = v96;
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  v79 = *v33;
  if ( !*v33 )
    goto LABEL_39;
  v80 = (UnityEngine_GameObject_o *)transform;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint(v79, v26);
  if ( !transform )
    goto LABEL_39;
  GameObjectExtensions__SetLocalEulerAngleY(v80, *((float *)&transform[4].fields + 1) + 90.0, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v81, v82);
    byte_4B109C1 = 1;
  }
  v84 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v84->zeroVector.fields.z;
  *(_QWORD *)(v24 + 68) = *(_QWORD *)&v84->zeroVector.fields.x;
  *(float *)(v24 + 76) = z;
  v86 = CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo, v81);
    v86 = CylinderCore_TypeInfo;
  }
  v87 = (int *)v86->static_fields;
  v88 = *(EasingObject_o **)(v24 + 16);
  v89 = *v87;
  v90 = v87[1];
  *(_DWORD *)(v24 + 60) = 0;
  *(_DWORD *)(v24 + 56) = v89;
  *(_DWORD *)(v24 + 64) = v90;
  v91 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
  System_Action___ctor(
    v91,
    (Il2CppObject *)v24,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v95 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v92, v93, v94);
  System_Action___ctor(
    v95,
    (Il2CppObject *)v24,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v88 )
LABEL_39:
    sub_1BCAA3C(transform, v26);
  EasingObject__Play(v88, v52, v91, v95, 0.0, 0, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12D4A & 1) == 0 )
  {
    sub_1BCA7E0(&CylinderCore_StateZoomOut___c_TypeInfo, v1, v2);
    byte_4B12D4A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CylinderCore_StateZoomOut___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CylinderCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  v5 = Easing__Func_47131320(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0LL);
  v6 = Easing__Func_47131320(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0LL);
  v7 = Easing__Func_47131320(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 2, 0LL);
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
    sub_1BCAA3C(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = Easing__Func_47131320(0.0, 1.0, mNow, 5, 0LL);
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
    sub_1BCAA3C(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, method);
}
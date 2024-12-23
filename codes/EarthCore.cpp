void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EarthCore_StaticFields *static_fields; // x8
  struct EarthCore_StaticFields *v3; // x8

  if ( (byte_4B636CD & 1) == 0 )
  {
    sub_1BE4ACC(&EarthCore_TypeInfo, v1);
    byte_4B636CD = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v3 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v3->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v3->FOCUS_OUT_POS.fields.z = 0.0;
}


void __fastcall EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B636CC & 1) == 0 )
  {
    sub_1BE4ACC(&EarthCore_StateMain_TypeInfo, method);
    byte_4B636CC = 1;
  }
  v3 = (Il2CppObject *)sub_1BE4D18(EarthCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.mStateMain = (struct EarthCore_StateMain_o *)v3;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mStateMain, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_T__o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *transform; // x0
  __int64 v21; // x1
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x20
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x20
  Il2CppObject *Component_object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B636C7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_EarthCore___ctor__, method);
    sub_1BE4ACC(&Method_CStateManager_EarthCore__add__, v3);
    sub_1BE4ACC(&CStateManager_EarthCore__TypeInfo, v4);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v5);
    sub_1BE4ACC(&EarthCore_StateNone_TypeInfo, v6);
    sub_1BE4ACC(&EarthCore_StateZoomIn_TypeInfo, v7);
    sub_1BE4ACC(&EarthCore_StateZoomOut_TypeInfo, v8);
    byte_4B636C7 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v11 = (CStateManager_T__o *)sub_1BE4D18(CStateManager_EarthCore__TypeInfo);
    CStateManager_object____ctor(
      v11,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_318A548 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    v18 = (CStateManager_T__o *)this->fields.mFSM;
    v19 = (Il2CppObject *)sub_1BE4D18(EarthCore_StateNone_TypeInfo);
    System_Object___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_15;
    CStateManager_object___add(
      v18,
      0,
      (IState_T__o *)v19,
      (const MethodInfo_318A5F0 *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_318A5F0 *)Method_CStateManager_EarthCore__add__);
    v22 = (CStateManager_T__o *)this->fields.mFSM;
    v23 = (Il2CppObject *)sub_1BE4D18(EarthCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v23, 0LL);
    if ( !v22 )
      goto LABEL_15;
    CStateManager_object___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_318A5F0 *)Method_CStateManager_EarthCore__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1BE4D18(EarthCore_StateZoomOut_TypeInfo);
    System_Object___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_15;
    CStateManager_object___add(
      v24,
      3,
      (IState_T__o *)v25,
      (const MethodInfo_318A5F0 *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v26);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34488912(gameObject, 350.0, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !byte_4B612E6 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v28);
    byte_4B612E6 = 1;
  }
  GameObjectExtensions__SetLocalScale(mEarthRoot, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___),
        this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.mMeshRenderer,
          (int64_t)Component_object,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        (transform = (CStateManager_T__o *)this->fields.mEarthRoot) == 0LL)
    || (transform = (CStateManager_T__o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)transform,
                                            0LL)) == 0LL )
  {
LABEL_15:
    sub_1BE4D28(transform, v21);
  }
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0LL);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(EarthCore_o *, __int64, Il2CppMethodPointer))klass->vtable._12_SetDisp.method)(
    this,
    1LL,
    klass->vtable._13_GetState.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__FocusInOut(EarthCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float v12; // s0
  struct EarthCore_StaticFields *static_fields; // x8
  _BOOL4 mIsFocusIn; // w11
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  int64_t v28; // x1
  float v29; // s8
  System_Func_T__T__float__T__o *v30; // x20
  System_Func_T__T__float__T__o *v31; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v35; // s9
  float v36; // s10
  float v37; // s14
  TransitionCalculator_Vector3__o *v38; // x0
  struct TransitionCalculator_Vector3__o *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v48; // s10
  TransitionCalculator_float__o *v49; // x20
  __int64 v50; // [xsp+0h] [xbp-80h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4B636C6 & 1) == 0 )
  {
    sub_1BE4ACC(&EarthCore_TypeInfo, isFocusIn);
    sub_1BE4ACC(&Method_TransitionCalculator_Vector3___ctor__, v8);
    sub_1BE4ACC(&Method_TransitionCalculator_float___ctor__, v9);
    sub_1BE4ACC(&TransitionCalculator_float__TypeInfo, v10);
    sub_1BE4ACC(&TransitionCalculator_Vector3__TypeInfo, v11);
    byte_4B636C6 = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
  v12 = 0.95;
  static_fields = EarthCore_TypeInfo->static_fields;
  if ( !isFocusIn )
    static_fields = (struct EarthCore_StaticFields *)((char *)static_fields + 12);
  v50 = *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x;
  mIsFocusIn = this->fields.mIsFocusIn;
  this->fields.mFocusTgtPos.fields.z = static_fields->FOCUS_IN_POS.fields.z;
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = v50;
  if ( mIsFocusIn )
    v12 = 1.0;
  this->fields.mFocusTgtScl = v12;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0LL);
    GameObjectExtensions__SetLocalScale_34488912(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.focusInOutPositionCalculator,
      0LL,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this->fields.focusInOutScaleCalculator = 0LL;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v28 = 0LL;
  }
  else
  {
    v29 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0LL);
    v30 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0LL);
    v31 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v35 = LocalPosition.fields.x;
    v36 = LocalPosition.fields.y;
    v37 = LocalPosition.fields.z;
    v38 = (TransitionCalculator_Vector3__o *)sub_1BE4D18(TransitionCalculator_Vector3__TypeInfo);
    v52.fields.x = v35;
    v52.fields.y = v36;
    v52.fields.z = v37;
    v53.fields.x = x;
    v53.fields.y = y;
    v53.fields.z = z;
    v39 = v38;
    TransitionCalculator_Vector3____ctor(
      v38,
      v52,
      v53,
      v29,
      v30,
      (const MethodInfo_38AA7B0 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v39;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.focusInOutPositionCalculator,
      (int64_t)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v48 = *(float *)&LocalScale;
    v49 = (TransitionCalculator_float__o *)sub_1BE4D18(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v49,
      v48,
      mFocusTgtScl,
      v29,
      v31,
      (const MethodInfo_38AA5E4 *)Method_TransitionCalculator_float___ctor__);
    this->fields.focusInOutScaleCalculator = v49;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v28 = (int64_t)v49;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)p_focusInOutScaleCalculator, v28, v21, v22, v23, v24, v25, v26);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_4B636CA & 1) == 0 )
  {
    this = (EarthCore_o *)sub_1BE4ACC(&Method_CStateManager_EarthCore__getState__, method);
    byte_4B636CA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BE4D28(this, method);
  return mFSM->fields.m_state;
}


EarthCore_StateMain_o *__fastcall EarthCore__GetStateMain(EarthCore_o *this, const MethodInfo *method)
{
  return this->fields.mStateMain;
}


float __fastcall EarthCore__GetStateMainInertialSpdOld(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  if ( !mStateMain )
    sub_1BE4D28(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1BE4D28(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetDisp(EarthCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0
  bool v5; // w20

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (v5 = is_disp,
        UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0LL),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0LL) )
  {
    sub_1BE4D28(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B636CB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_EarthCore__setState__, *(_QWORD *)&state);
    byte_4B636CB = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BE4D28(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_318A67C *)Method_CStateManager_EarthCore__setState__);
}


void __fastcall EarthCore__Setup(
        EarthCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v17; // w20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v22; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v27; // x1
  int max_length; // w8
  System_Single_array *v29; // x8
  float v30; // s8
  float v31; // s12
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  float v36; // s0
  float v37; // s8
  float v38; // s12
  float v39; // s13
  Il2CppObject *EarthPoint_object; // x0
  __int64 v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  float v44; // [xsp+0h] [xbp-D0h] BYREF
  float v45; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-B0h] BYREF
  float cosx; // [xsp+78h] [xbp-58h] BYREF
  float sinx; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_4B636C9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BaseCore_CreateEarthPoint_EarthPoint___, warInfoList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_8375/*"LAST_WAR_ID"*/, v12);
    byte_4B636C9 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_33;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_33;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4B612E1 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ((void (__fastcall *)(EarthCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    isFocusIn,
    1LL,
    this->klass->vtable._5_Awake.methodPtr);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8375/*"LAST_WAR_ID"*/, 0LL);
  if ( !warInfoList )
LABEL_33:
    sub_1BE4D28(mEarthRoot, v13);
  v17 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v18 )
      break;
    current = (MapControl_WarInfo_o *)v47.fields._current;
    if ( !v47.fields._current )
      sub_1BE4D28(v18, v19);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v47.fields._current, 0LL);
    v22 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v22, 0LL) )
        goto LABEL_21;
      IsEvent = WarEntity__IsEvent(v22, 0LL);
      if ( warId <= v17 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v22, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_21;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_21;
        if ( (unsigned int)mCoreType >= max_length )
          sub_1BE4D30(PrioredCoordinates, v27);
        v29 = PrioredCoordinates->m_Items[mCoreType];
        if ( v29 && (int)v29->max_length >= 2 )
        {
          v30 = v29->m_Items[1];
          v31 = v29->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v34 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v34 )
          {
            v36 = v30 * 0.017453;
            v37 = (float)(v31 + 9.5) * 0.017453;
            sincosf(v36, &sinx, &cosx);
            v38 = sinx;
            v39 = cosx * 0.5;
            sincosf(v37, &v45, &v44);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v39 * v44,
                                  v38 * 0.5,
                                  v39 * v45,
                                  (const MethodInfo_2F42E04 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_1BE4D28(0LL, v41);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_1BE4D28(v34, v35);
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v42 )
              sub_1BE4D28(0LL, v43);
            UnityEngine_GameObject__SetActive(v42, IsWarOpen, 0LL);
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
    &v47,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4B636C8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_EarthCore__update__, method);
    byte_4B636C8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_318A658 *)Method_CStateManager_EarthCore__update__);
  if ( this->fields.mIsReqZoomIn && EarthCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    EarthCore__SetState(this, 2, v4);
  }
}


void __fastcall EarthCore__mcbfStartMain(EarthCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EarthCore__SetState(this, 1, v2);
}


void __fastcall EarthCore__mcbfStartZoomIn(EarthCore_o *this, const MethodInfo *method)
{
  this->fields.mIsReqZoomIn = 1;
}


void __fastcall EarthCore__mcbfStartZoomOut(EarthCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EarthCore__SetState(this, 3, v2);
}


void __fastcall EarthCore_StateMain___ctor(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateMain__begin(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  this->fields.mInertialSpd = 0.0;
}


void __fastcall EarthCore_StateMain__end(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


float __fastcall EarthCore_StateMain__get_InertialSpd(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields.mInertialSpd;
}


float __fastcall EarthCore_StateMain__get_InertialSpdOld(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore_StateMain__set_InertialSpdOld(
        EarthCore_StateMain_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._InertialSpdOld_k__BackingField = value;
}


void __fastcall EarthCore_StateMain__update(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  EarthCore_StateMain_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  float AutoRotationSpeed; // s8
  float mInertialSpd; // s9
  float v12; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v14; // s9
  float v15; // s0
  __int64 v16; // x1
  CTouch_c *v17; // x0
  float x; // s9
  float v19; // s0
  float v20; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v23; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v25; // x20
  float v26; // s0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B636CE & 1) == 0 )
  {
    sub_1BE4ACC(&CTouch_TypeInfo, that);
    sub_1BE4ACC(&Method_TransitionCalculator_Vector3__IsFinished__, v5);
    sub_1BE4ACC(&Method_TransitionCalculator_float__IsFinished__, v6);
    sub_1BE4ACC(&Method_TransitionCalculator_Vector3__Update__, v7);
    this = (EarthCore_StateMain_o *)sub_1BE4ACC(&Method_TransitionCalculator_float__Update__, v8);
    byte_4B636CE = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0LL) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4B63650 )
      {
        sub_1BE4ACC(&CTouch_TypeInfo, v16);
        byte_4B63650 = 1;
      }
      v17 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v17 = CTouch_TypeInfo;
      }
      x = v17->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4B63651 )
      {
        sub_1BE4ACC(&CTouch_TypeInfo, v16);
        v17 = CTouch_TypeInfo;
        byte_4B63651 = 1;
      }
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CTouch_TypeInfo;
      }
      v19 = v17->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v19) )
        v19 = x;
      v4->fields.mInertialSpd = v19 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_4B612E5 )
    {
      sub_1BE4ACC(&UnityEngine_Mathf_TypeInfo, v9);
      byte_4B612E5 = 1;
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
  v20 = v4->fields.mInertialSpd;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !this )
    goto LABEL_40;
  v27.fields.y = AutoRotationSpeed + v20;
  v27.fields.x = 0.0;
  v27.fields.z = 0.0;
  UnityEngine_Transform__Rotate_70474652((UnityEngine_Transform_o *)this, v27, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_38AA8AC *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_38AA6AC *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v28 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_38AA83C *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v28, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v25 = that->fields.mEarthRoot;
              v26 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_38AA644 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_34488912(v25, v26, 0LL);
              v23 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_1BE4D28(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_34488912(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v23 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v23;
}


void __fastcall EarthCore_StateNone___ctor(EarthCore_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateNone__begin(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateNone__end(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateNone__update(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomIn___ctor(EarthCore_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomIn__GoNext(EarthCore_StateZoomIn_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v6; // x8

  if ( (byte_4B636D1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_1BE4ACC(&StringLiteral_7081/*"GO_NEXT"*/, v4);
    byte_4B636D1 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v6 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v6->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_1BE4D28(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_64713664(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_7081/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Component_o **v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EarthCore_o *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Object_o *monitor; // x21
  TerminalPramsManager_c *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  __int64 v50; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v52; // x8
  float z; // s1
  UnityEngine_GameObject_o *v54; // x0
  EasingObject_o *v55; // x21
  float mSpdTime; // s8
  System_Action_o *v62; // x22
  System_Action_o *v63; // x23
  __int64 v64; // x1
  TerminalPramsManager_c *v65; // x0
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v71; // x21
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B636CF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_EarthCore_StateZoomIn_GoNext__, v8);
    sub_1BE4ACC(&Method_EarthCore_StateZoomIn_begin__, v9);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v11);
    sub_1BE4ACC(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v12);
    sub_1BE4ACC(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v13);
    byte_4B636CF = 1;
  }
  v14 = sub_1BE4D18(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_50;
  *(_QWORD *)(v14 + 24) = that;
  v23 = (UnityEngine_Component_o **)(v14 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)that, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 144) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 144), (int64_t)this, v24, v25, v26, v27, v28, v29);
  v30 = *(struct EarthCore_o **)(v14 + 24);
  this->fields.mThat = v30;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v23 )
    goto LABEL_50;
  monitor = (UnityEngine_Object_o *)(*v23)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B63743 )
    {
      sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v16);
      byte_4B63743 = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    if ( v38->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v16);
      return;
    }
    v68 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v68 = (_QWORD *)sub_1BE4AE4(Method_EarthCore_StateZoomIn_begin__);
    v69 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v68, v68[4]);
    OverwriteAssetSoundName__PlayCommonSe(v69, 22, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v71 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v71, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v71, 0LL);
      return;
    }
LABEL_50:
    sub_1BE4D28(transform, v16);
  }
  transform = *v23;
  if ( !*v23 )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FAB284 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)Component_object, v41, v42, v43, v44, v45, v46);
  transform = *(UnityEngine_Component_o **)(v14 + 24);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_50;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  *(float *)(v14 + 32) = rotation.fields.x;
  v47 = *(_QWORD *)(v14 + 24);
  *(float *)(v14 + 36) = rotation.fields.y;
  *(float *)(v14 + 40) = rotation.fields.z;
  *(float *)(v14 + 44) = rotation.fields.w;
  if ( !v47 )
    goto LABEL_50;
  v48 = *(_QWORD *)(v47 + 80);
  if ( !v48 )
    goto LABEL_50;
  *(_OWORD *)(v14 + 48) = *(_OWORD *)(v48 + 96);
  *(_OWORD *)(v47 + 112) = *(_OWORD *)(v14 + 32);
  v49 = *(_QWORD *)(v14 + 24);
  if ( !v49 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v49 + 32);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_50;
  *(UnityEngine_Quaternion_o *)(v14 + 64) = UnityEngine_Transform__get_rotation(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  if ( !byte_4B612E7 )
  {
    transform = (UnityEngine_Component_o *)sub_1BE4ACC(&UnityEngine_Quaternion_TypeInfo, v16);
    byte_4B612E7 = 1;
  }
  v50 = *(_QWORD *)(v14 + 24);
  *(struct UnityEngine_Quaternion_StaticFields *)(v14 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  if ( !v50 )
    goto LABEL_50;
  *(UnityEngine_Vector3_o *)(v14 + 96) = GameObjectExtensions__GetLocalPosition(
                                           (UnityEngine_GameObject_o *)*(_QWORD *)(v50 + 32),
                                           0LL);
  if ( !byte_4B612E1 )
  {
    transform = (UnityEngine_Component_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4B612E1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v52 = *(_QWORD *)(v14 + 24);
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v14 + 108) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v14 + 116) = z;
  if ( !v52 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v52 + 32);
  if ( !transform )
    goto LABEL_50;
  v54 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v14 + 120) = GameObjectExtensions__GetLocalScale(v54, 0LL);
  v55 = *(EasingObject_o **)(v14 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v14 + 132) = _D0;
  *(_DWORD *)(v14 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v62 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)v14, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v63 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)v14, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v55 )
    goto LABEL_50;
  EasingObject__Play(v55, mSpdTime, v62, v63, 0.0, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B63743 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v64);
    byte_4B63743 = 1;
  }
  v65 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v65 = TerminalPramsManager_TypeInfo;
  }
  if ( !v65->static_fields->_IsAutoResume_k__BackingField )
  {
    v66 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v66 = (_QWORD *)sub_1BE4AE4(Method_EarthCore_StateZoomIn_begin__);
    v67 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v66, v66[4]);
    OverwriteAssetSoundName__PlayCommonSe(v67, 22, 0LL);
    this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  }
}


void __fastcall EarthCore_StateZoomIn__end(EarthCore_StateZoomIn_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomIn__update(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  float v6; // s8
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B636D0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_EarthCore_StateZoomIn_GoNext__, v5);
    byte_4B636D0 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_1BE4D28(v9, v10);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v6, v8, 0LL);
      this->fields.mStartTime = 0.0;
    }
  }
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___ctor(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__0(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  EarthCore_StateZoomIn___c__DisplayClass3_0_o *v3; // x19
  double mNow; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  float v20; // s0
  float z; // s2
  float v22; // s3
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct EarthCore_o *v26; // x8
  UnityEngine_Transform_o *v27; // x0
  float32x2_t v28; // d9
  float v29; // s10
  float32x2_t v30; // d11
  float v31; // s12
  UnityEngine_Transform_o *v32; // x19
  float v33; // s0
  float v34; // s1
  bool v35; // nf
  float v36; // s0
  float v37; // s2 OVERLAPPED
  unsigned __int64 v38; // d0 OVERLAPPED
  int v39; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0LL);
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_19;
  v6 = v5;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_19;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_from, v3->fields.qua_to, v7, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_from,
                                        v3->fields.root_qua_to,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
  v20 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v20 = 0.0;
  if ( !this )
    goto LABEL_19;
  z = v3->fields.root_pos_from.fields.z;
  v22 = v20 * (float)(v3->fields.root_pos_to.fields.z - z);
  v23 = vadd_f32(
          *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
              *(float32x2_t *)&v3->fields.root_pos_from.fields.x),
            v20)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = v3->fields.that;
  if ( !v26 )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v26->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v28.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v29 = v3->fields.root_scl_from.fields.z;
  v30.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v31 = v3->fields.root_scl_to.fields.z;
  v32 = v27;
  v33 = StepFunc__Acc5(mNow, 0LL);
  v34 = fminf(v33, 1.0);
  v35 = v33 < 0.0;
  v36 = 0.0;
  if ( !v35 )
    v36 = v34;
  if ( !v32 )
LABEL_19:
    sub_1BE4D28(this, method);
  v37 = v29 + (float)((float)(v31 - v29) * v36);
  v38 = vadd_f32(v28, vmul_n_f32(vsub_f32(v30, v28), v36)).n64_u64[0];
  v39 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)(&v37 - 2), 0LL);
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v4; // x8
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4B636D2 & 1) == 0 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B636D2 = 1;
  }
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0LL);
  v4 = this->fields.that;
  if ( !v4 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v4->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0LL);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v6->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B63743 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B63743 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->_IsAutoResume_k__BackingField )
  {
    that = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( that )
    {
      EarthCore_StateZoomIn__GoNext((EarthCore_StateZoomIn_o *)that, method);
      return;
    }
LABEL_25:
    sub_1BE4D28(that, method);
  }
}


void __fastcall EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v6; // x8

  if ( (byte_4B636D4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_1BE4ACC(&StringLiteral_7081/*"GO_NEXT"*/, v4);
    byte_4B636D4 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v6 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v6->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_1BE4D28(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_64713664(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_7081/*"GO_NEXT"*/,
    0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Component_o **v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EarthCore_o *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  float IntpTime_AutoResume; // s0
  TerminalSceneComponent_o *monitor; // x22
  EarthCore_StateZoomOut___c_c *v39; // x0
  float v40; // s8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v42; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Object_o *v50; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x8
  __int64 v60; // x8
  __int64 v61; // x8
  int v62; // w20
  struct EarthCore_StaticFields *v63; // x8
  __int64 v64; // x9
  __int64 v65; // x8
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x8
  float v68; // s0
  EasingObject_o *v69; // x20
  System_Action_o *v70; // x21
  System_Action_o *v71; // x22
  float z; // [xsp+8h] [xbp-58h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B636D3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, that);
    sub_1BE4ACC(&EarthCore_TypeInfo, v5);
    sub_1BE4ACC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__, v9);
    sub_1BE4ACC(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v10);
    sub_1BE4ACC(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v11);
    sub_1BE4ACC(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v12);
    sub_1BE4ACC(&EarthCore_StateZoomOut___c_TypeInfo, v13);
    byte_4B636D3 = 1;
  }
  v14 = sub_1BE4D18(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_39;
  *(_QWORD *)(v14 + 24) = that;
  v23 = (UnityEngine_Component_o **)(v14 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)that, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 144) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 144), (int64_t)this, v24, v25, v26, v27, v28, v29);
  v30 = *(struct EarthCore_o **)(v14 + 24);
  this->fields.mThat = v30;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v23 )
    goto LABEL_39;
  monitor = (TerminalSceneComponent_o *)(*v23)[2].monitor;
  if ( !monitor )
    goto LABEL_39;
  monitor->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  monitor->fields._IsPassEarthCore_k__BackingField = 1;
  v39 = EarthCore_StateZoomOut___c_TypeInfo;
  v40 = IntpTime_AutoResume;
  if ( !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo);
    v39 = EarthCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v39->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = EarthCore_StateZoomOut___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v42, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v44, v45, v46, v47, v48, v49);
  }
  TerminalSceneComponent__Fadein_WorldDisp_43182540(monitor, 0.4, _9__1_0, 0LL);
  if ( !*v23 )
    goto LABEL_39;
  v50 = (UnityEngine_Object_o *)(*v23)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v50, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v16);
    return;
  }
  transform = *v23;
  if ( !*v23 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FAB284 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)Component_object, v53, v54, v55, v56, v57, v58);
  transform = *(UnityEngine_Component_o **)(v14 + 24);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_39;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v59 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 48) = rotation;
  if ( !v59 )
    goto LABEL_39;
  *(_OWORD *)(v14 + 32) = *(_OWORD *)(v59 + 112);
  transform = *(UnityEngine_Component_o **)(v59 + 32);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_39;
  v76 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v60 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Quaternion_o *)(v14 + 80) = v76;
  if ( !v60 )
    goto LABEL_39;
  *(_OWORD *)(v14 + 64) = *(_OWORD *)(v60 + 96);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v60 + 32), 0LL);
  v61 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 108) = LocalPosition;
  if ( !v61 )
    goto LABEL_39;
  v62 = *(unsigned __int8 *)(v61 + 144);
  transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
  v63 = EarthCore_TypeInfo->static_fields;
  if ( !v62 )
    v63 = (struct EarthCore_StaticFields *)((char *)v63 + 12);
  v64 = *(_QWORD *)&v63->FOCUS_IN_POS.fields.x;
  z = v63->FOCUS_IN_POS.fields.z;
  v65 = *(_QWORD *)(v14 + 24);
  *(float *)(v14 + 104) = z;
  *(_QWORD *)(v14 + 96) = v64;
  if ( !v65 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v65 + 32);
  if ( !transform )
    goto LABEL_39;
  v66 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v66, 0LL);
  v67 = *(_QWORD *)(v14 + 24);
  *(UnityEngine_Vector3_o *)(v14 + 132) = LocalScale;
  if ( !v67 )
    goto LABEL_39;
  v68 = 0.95;
  if ( *(_BYTE *)(v67 + 144) )
    v68 = 1.0;
  *(float *)(v14 + 120) = v68;
  *(float *)(v14 + 124) = v68;
  *(float *)(v14 + 128) = v68;
  v69 = *(EasingObject_o **)(v14 + 16);
  v70 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)v14, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v71 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v71, (Il2CppObject *)v14, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v69 )
LABEL_39:
    sub_1BE4D28(transform, v16);
  EasingObject__Play_47420128(v69, 1.0, 0.0, v40, v70, v71, 0.0, 3, 0LL);
}


void __fastcall EarthCore_StateZoomOut__end(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomOut__update(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomOut___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B636D5 & 1) == 0 )
  {
    sub_1BE4ACC(&EarthCore_StateZoomOut___c_TypeInfo, v1);
    byte_4B636D5 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EarthCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EarthCore_StateZoomOut___c___ctor(EarthCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut___c___begin_b__1_0(EarthCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___ctor(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__1(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  EarthCore_StateZoomOut___c__DisplayClass1_0_o *v3; // x19
  double mNow; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  float v20; // s0
  float z; // s2
  float v22; // s3
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct EarthCore_o *v26; // x8
  UnityEngine_Transform_o *v27; // x0
  float32x2_t v28; // d9
  float v29; // s10
  float32x2_t v30; // d11
  float v31; // s12
  UnityEngine_Transform_o *v32; // x19
  float v33; // s0
  float v34; // s1
  bool v35; // nf
  float v36; // s0
  float v37; // s2 OVERLAPPED
  unsigned __int64 v38; // d0 OVERLAPPED
  int v39; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0LL);
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_19;
  v6 = v5;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_19;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_to, v3->fields.qua_from, v7, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_to,
                                        v3->fields.root_qua_from,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  v20 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v20 = 0.0;
  if ( !this )
    goto LABEL_19;
  z = v3->fields.root_pos_to.fields.z;
  v22 = v20 * (float)(v3->fields.root_pos_from.fields.z - z);
  v23 = vadd_f32(
          *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
              *(float32x2_t *)&v3->fields.root_pos_to.fields.x),
            v20)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = v3->fields.that;
  if ( !v26 )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v26->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v28.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v29 = v3->fields.root_scl_to.fields.z;
  v30.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v31 = v3->fields.root_scl_from.fields.z;
  v32 = v27;
  v33 = StepFunc__Acc5(mNow, 0LL);
  v34 = fminf(v33, 1.0);
  v35 = v33 < 0.0;
  v36 = 0.0;
  if ( !v35 )
    v36 = v34;
  if ( !v32 )
LABEL_19:
    sub_1BE4D28(this, method);
  v37 = v29 + (float)((float)(v31 - v29) * v36);
  v38 = vadd_f32(v28, vmul_n_f32(vsub_f32(v30, v28), v36)).n64_u64[0];
  v39 = HIDWORD(v38);
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)(&v37 - 2), 0LL);
}


void __fastcall EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v4; // x8
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8

  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0LL);
  v4 = this->fields.that;
  if ( !v4 )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)v4->fields.mEarthRoot;
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0LL);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that
    || (that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0LL),
        (v6 = this->fields.that) == 0LL)
    || (that = (UnityEngine_Component_o *)v6->fields.mEarthRoot) == 0LL
    || (that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0LL),
        (that = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_15:
    sub_1BE4D28(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, method);
}
void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  struct EarthCore_StaticFields *static_fields; // x8
  struct EarthCore_StaticFields *v2; // x8

  if ( (byte_4A57D56 & 1) == 0 )
  {
    sub_1B885B0(&EarthCore_TypeInfo);
    byte_4A57D56 = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v2 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v2->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v2->FOCUS_OUT_POS.fields.z = 0.0;
}


void __fastcall EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57D55 & 1) == 0 )
  {
    sub_1B885B0(&EarthCore_StateMain_TypeInfo);
    byte_4A57D55 = 1;
  }
  v3 = (Il2CppObject *)sub_1B887FC(EarthCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.mStateMain = (struct EarthCore_StateMain_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mStateMain, (int32_t)v3, v4, v5);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  CStateManager_T__o *v8; // x21
  Il2CppObject *v9; // x22
  CStateManager_T__o *transform; // x0
  __int64 v11; // x1
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  EarthCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57D50 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EarthCore___ctor__);
    sub_1B885B0(&Method_CStateManager_EarthCore__add__);
    sub_1B885B0(&CStateManager_EarthCore__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1B885B0(&EarthCore_StateNone_TypeInfo);
    sub_1B885B0(&EarthCore_StateZoomIn_TypeInfo);
    sub_1B885B0(&EarthCore_StateZoomOut_TypeInfo);
    byte_4A57D50 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v5 = (CStateManager_T__o *)sub_1B887FC(CStateManager_EarthCore__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7);
    v8 = (CStateManager_T__o *)this->fields.mFSM;
    v9 = (Il2CppObject *)sub_1B887FC(EarthCore_StateNone_TypeInfo);
    System_Object___ctor(v9, 0LL);
    if ( !v8 )
      goto LABEL_15;
    CStateManager_object___add(
      v8,
      0,
      (IState_T__o *)v9,
      (const MethodInfo_30AADDC *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_30AADDC *)Method_CStateManager_EarthCore__add__);
    v12 = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_1B887FC(EarthCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !v12 )
      goto LABEL_15;
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_30AADDC *)Method_CStateManager_EarthCore__add__);
    v14 = (CStateManager_T__o *)*p_mFSM;
    v15 = (Il2CppObject *)sub_1B887FC(EarthCore_StateZoomOut_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !v14 )
      goto LABEL_15;
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_30AADDC *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v16);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33726240(gameObject, 350.0, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(mEarthRoot, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___),
        this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.mMeshRenderer,
          (int32_t)Component_object,
          v20,
          v21),
        (transform = (CStateManager_T__o *)this->fields.mEarthRoot) == 0LL)
    || (transform = (CStateManager_T__o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)transform,
                                            0LL)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(transform, v11);
  }
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0LL);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(EarthCore_o *, __int64, Il2CppMethodPointer))klass->vtable._12_SetDisp.method)(
    this,
    1LL,
    klass->vtable._13_GetState.methodPtr);
}


void __fastcall EarthCore__FocusInOut(EarthCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  float v8; // s0
  struct EarthCore_StaticFields *static_fields; // x8
  _BOOL4 mIsFocusIn; // w11
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  int32_t v16; // w1
  float v17; // s8
  System_Func_T__T__float__T__o *v18; // x20
  System_Func_T__T__float__T__o *v19; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v23; // s9
  float v24; // s10
  float v25; // s14
  TransitionCalculator_Vector3__o *v26; // x0
  struct TransitionCalculator_Vector3__o *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v32; // s10
  TransitionCalculator_float__o *v33; // x20
  __int64 v34; // [xsp+0h] [xbp-80h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4A57D4F & 1) == 0 )
  {
    sub_1B885B0(&EarthCore_TypeInfo);
    sub_1B885B0(&Method_TransitionCalculator_Vector3___ctor__);
    sub_1B885B0(&Method_TransitionCalculator_float___ctor__);
    sub_1B885B0(&TransitionCalculator_float__TypeInfo);
    sub_1B885B0(&TransitionCalculator_Vector3__TypeInfo);
    byte_4A57D4F = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
  v8 = 0.95;
  static_fields = EarthCore_TypeInfo->static_fields;
  if ( !isFocusIn )
    static_fields = (struct EarthCore_StaticFields *)((char *)static_fields + 12);
  v34 = *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x;
  mIsFocusIn = this->fields.mIsFocusIn;
  this->fields.mFocusTgtPos.fields.z = static_fields->FOCUS_IN_POS.fields.z;
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = v34;
  if ( mIsFocusIn )
    v8 = 1.0;
  this->fields.mFocusTgtScl = v8;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0LL);
    GameObjectExtensions__SetLocalScale_33726240(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.focusInOutPositionCalculator, 0, v11, v12);
    this->fields.focusInOutScaleCalculator = 0LL;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v16 = 0;
  }
  else
  {
    v17 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0LL);
    v18 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0LL);
    v19 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v23 = LocalPosition.fields.x;
    v24 = LocalPosition.fields.y;
    v25 = LocalPosition.fields.z;
    v26 = (TransitionCalculator_Vector3__o *)sub_1B887FC(TransitionCalculator_Vector3__TypeInfo);
    v36.fields.x = v23;
    v36.fields.y = v24;
    v36.fields.z = v25;
    v37.fields.x = x;
    v37.fields.y = y;
    v37.fields.z = z;
    v27 = v26;
    TransitionCalculator_Vector3____ctor(
      v26,
      v36,
      v37,
      v17,
      v18,
      (const MethodInfo_37B9F2C *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.focusInOutPositionCalculator, (int32_t)v27, v28, v29);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v32 = *(float *)&LocalScale;
    v33 = (TransitionCalculator_float__o *)sub_1B887FC(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v33,
      v32,
      mFocusTgtScl,
      v17,
      v19,
      (const MethodInfo_37B9D60 *)Method_TransitionCalculator_float___ctor__);
    this->fields.focusInOutScaleCalculator = v33;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v16 = (int)v33;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_focusInOutScaleCalculator, v16, v13, v14);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A57D53 & 1) == 0 )
  {
    this = (EarthCore_o *)sub_1B885B0(&Method_CStateManager_EarthCore__getState__);
    byte_4A57D53 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1B8880C(this, method);
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
    sub_1B8880C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57D54 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EarthCore__setState__);
    byte_4A57D54 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_30AAE68 *)Method_CStateManager_EarthCore__setState__);
}


void __fastcall EarthCore__Setup(
        EarthCore_o *this,
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
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v20; // x1
  int max_length; // w8
  System_Single_array *v22; // x8
  float v23; // s8
  float v24; // s12
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v27; // x0
  __int64 v28; // x1
  float v29; // s0
  float v30; // s8
  float v31; // s12
  float v32; // s13
  Il2CppObject *EarthPoint_object; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  float v37; // [xsp+0h] [xbp-D0h] BYREF
  float v38; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-B0h] BYREF
  float cosx; // [xsp+78h] [xbp-58h] BYREF
  float sinx; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_4A57D52 & 1) == 0 )
  {
    sub_1B885B0(&Method_BaseCore_CreateEarthPoint_EarthPoint___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8229/*"LAST_WAR_ID"*/);
    byte_4A57D52 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_33;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_33;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ((void (__fastcall *)(EarthCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    isFocusIn,
    1LL,
    this->klass->vtable._5_Awake.methodPtr);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8229/*"LAST_WAR_ID"*/, 0LL);
  if ( !warInfoList )
LABEL_33:
    sub_1B8880C(mEarthRoot, v7);
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v11 )
      break;
    current = (MapControl_WarInfo_o *)v40.fields._current;
    if ( !v40.fields._current )
      sub_1B8880C(v11, v12);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v40.fields._current, 0LL);
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
          sub_1B88814(PrioredCoordinates, v20);
        v22 = PrioredCoordinates->m_Items[mCoreType];
        if ( v22 && (int)v22->max_length >= 2 )
        {
          v23 = v22->m_Items[1];
          v24 = v22->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v27 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v27 )
          {
            v29 = v23 * 0.017453;
            v30 = (float)(v24 + 9.5) * 0.017453;
            sincosf(v29, &sinx, &cosx);
            v31 = sinx;
            v32 = cosx * 0.5;
            sincosf(v30, &v38, &v37);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v32 * v37,
                                  v31 * 0.5,
                                  v32 * v38,
                                  (const MethodInfo_2E69998 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_1B8880C(0LL, v34);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_1B8880C(v27, v28);
            v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v35 )
              sub_1B8880C(0LL, v36);
            UnityEngine_GameObject__SetActive(v35, IsWarOpen, 0LL);
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
    &v40,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A57D51 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EarthCore__update__);
    byte_4A57D51 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30AAE44 *)Method_CStateManager_EarthCore__update__);
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
  float AutoRotationSpeed; // s8
  float mInertialSpd; // s9
  float v7; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v9; // s9
  float v10; // s0
  CTouch_c *v11; // x0
  float x; // s9
  float v13; // s0
  float v14; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v17; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v19; // x20
  float v20; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A57D57 & 1) == 0 )
  {
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&Method_TransitionCalculator_Vector3__IsFinished__);
    sub_1B885B0(&Method_TransitionCalculator_float__IsFinished__);
    sub_1B885B0(&Method_TransitionCalculator_Vector3__Update__);
    this = (EarthCore_StateMain_o *)sub_1B885B0(&Method_TransitionCalculator_float__Update__);
    byte_4A57D57 = 1;
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
      if ( !byte_4A57CD9 )
      {
        sub_1B885B0(&CTouch_TypeInfo);
        byte_4A57CD9 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4A57CDA )
      {
        sub_1B885B0(&CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
        byte_4A57CDA = 1;
      }
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CTouch_TypeInfo;
      }
      v13 = v11->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v13) )
        v13 = x;
      v4->fields.mInertialSpd = v13 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_4A55CE5 )
    {
      sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
      byte_4A55CE5 = 1;
    }
    v7 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v7 <= (float)(static_fields->Epsilon * 8.0) )
      v7 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v7 )
    {
      v9 = v4->fields.mInertialSpd;
      v10 = v9 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      v4->fields.mInertialSpd = v10;
      if ( fabsf(v10) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  v14 = v4->fields.mInertialSpd;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !this )
    goto LABEL_40;
  v21.fields.y = AutoRotationSpeed + v14;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__Rotate_69482032((UnityEngine_Transform_o *)this, v21, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_37BA028 *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_37B9E28 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v22 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_37B9FB8 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v22, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v19 = that->fields.mEarthRoot;
              v20 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_37B9DC0 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_33726240(v19, v20, 0LL);
              v17 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_1B8880C(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_33726240(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v17 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v17;
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
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v5; // x8

  if ( (byte_4A57D5A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&StringLiteral_6938/*"GO_NEXT"*/);
    byte_4A57D5A = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v5 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_1B8880C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_63721276(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6938/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Component_o **v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  struct EarthCore_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *monitor; // x21
  TerminalPramsManager_c *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  __int64 v25; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v27; // x8
  float z; // s1
  UnityEngine_GameObject_o *v29; // x0
  EasingObject_o *v30; // x21
  float mSpdTime; // s8
  System_Action_o *v37; // x22
  System_Action_o *v38; // x23
  TerminalPramsManager_c *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v45; // x21
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57D58 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EarthCore_StateZoomIn_GoNext__);
    sub_1B885B0(&Method_EarthCore_StateZoomIn_begin__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_1B885B0(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_1B885B0(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_4A57D58 = 1;
  }
  v5 = sub_1B887FC(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_50;
  *(_QWORD *)(v5 + 24) = that;
  v10 = (UnityEngine_Component_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)that, v8, v9);
  *(_QWORD *)(v5 + 144) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 144), (int32_t)this, v11, v12);
  v13 = *(struct EarthCore_o **)(v5 + 24);
  this->fields.mThat = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v13, v14, v15);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v10 )
    goto LABEL_50;
  monitor = (UnityEngine_Object_o *)(*v10)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DCC )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCC = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( v17->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    v42 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1B885C8(Method_EarthCore_StateZoomIn_begin__);
    v43 = (System_Reflection_MethodBase_o *)sub_1B88594(v42, v42[4]);
    OverwriteAssetSoundName__PlayCommonSe(v43, 22, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v45, 0LL);
      return;
    }
LABEL_50:
    sub_1B8880C(transform, v7);
  }
  transform = *v10;
  if ( !*v10 )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)Component_object, v20, v21);
  transform = *(UnityEngine_Component_o **)(v5 + 24);
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
  *(float *)(v5 + 32) = rotation.fields.x;
  v22 = *(_QWORD *)(v5 + 24);
  *(float *)(v5 + 36) = rotation.fields.y;
  *(float *)(v5 + 40) = rotation.fields.z;
  *(float *)(v5 + 44) = rotation.fields.w;
  if ( !v22 )
    goto LABEL_50;
  v23 = *(_QWORD *)(v22 + 80);
  if ( !v23 )
    goto LABEL_50;
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(v23 + 96);
  *(_OWORD *)(v22 + 112) = *(_OWORD *)(v5 + 32);
  v24 = *(_QWORD *)(v5 + 24);
  if ( !v24 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v24 + 32);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_50;
  *(UnityEngine_Quaternion_o *)(v5 + 64) = UnityEngine_Transform__get_rotation(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL);
  if ( !byte_4A55CE7 )
  {
    transform = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  v25 = *(_QWORD *)(v5 + 24);
  *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  if ( !v25 )
    goto LABEL_50;
  *(UnityEngine_Vector3_o *)(v5 + 96) = GameObjectExtensions__GetLocalPosition(
                                          (UnityEngine_GameObject_o *)*(_QWORD *)(v25 + 32),
                                          0LL);
  if ( !byte_4A55CE1 )
  {
    transform = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v27 = *(_QWORD *)(v5 + 24);
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 108) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 116) = z;
  if ( !v27 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v27 + 32);
  if ( !transform )
    goto LABEL_50;
  v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v5 + 120) = GameObjectExtensions__GetLocalScale(v29, 0LL);
  v30 = *(EasingObject_o **)(v5 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v5 + 132) = _D0;
  *(_DWORD *)(v5 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v37 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v30 )
    goto LABEL_50;
  EasingObject__Play(v30, mSpdTime, v37, v38, 0.0, 1, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  if ( !v39->static_fields->_IsAutoResume_k__BackingField )
  {
    v40 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1B885C8(Method_EarthCore_StateZoomIn_begin__);
    v41 = (System_Reflection_MethodBase_o *)sub_1B88594(v40, v40[4]);
    OverwriteAssetSoundName__PlayCommonSe(v41, 22, 0LL);
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
  float v4; // s8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A57D59 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EarthCore_StateZoomIn_GoNext__);
    byte_4A57D59 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_1B8880C(v7, v8);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v4, v6, 0LL);
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A57D5B & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57D5B = 1;
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
  if ( !byte_4A57DCC )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCC = 1;
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
    sub_1B8880C(that, method);
  }
}


void __fastcall EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v5; // x8

  if ( (byte_4A57D5D & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&StringLiteral_6938/*"GO_NEXT"*/);
    byte_4A57D5D = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v5 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_1B8880C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_63721276(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6938/*"GO_NEXT"*/,
    0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Component_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct EarthCore_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  float IntpTime_AutoResume; // s0
  TerminalSceneComponent_o *monitor; // x22
  EarthCore_StateZoomOut___c_c *v18; // x0
  float v19; // s8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v21; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x8
  int v33; // w20
  struct EarthCore_StaticFields *v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x8
  float v39; // s0
  EasingObject_o *v40; // x20
  System_Action_o *v41; // x21
  System_Action_o *v42; // x22
  float z; // [xsp+8h] [xbp-58h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57D5C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EarthCore_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__);
    sub_1B885B0(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_1B885B0(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_1B885B0(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_1B885B0(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_4A57D5C = 1;
  }
  v5 = sub_1B887FC(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 24) = that;
  v10 = (UnityEngine_Component_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)that, v8, v9);
  *(_QWORD *)(v5 + 144) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 144), (int32_t)this, v11, v12);
  v13 = *(struct EarthCore_o **)(v5 + 24);
  this->fields.mThat = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v13, v14, v15);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v10 )
    goto LABEL_39;
  monitor = (TerminalSceneComponent_o *)(*v10)[2].monitor;
  if ( !monitor )
    goto LABEL_39;
  monitor->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  monitor->fields._IsPassEarthCore_k__BackingField = 1;
  v18 = EarthCore_StateZoomOut___c_TypeInfo;
  v19 = IntpTime_AutoResume;
  if ( !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo);
    v18 = EarthCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v18->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = EarthCore_StateZoomOut___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v21, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v23, v24);
  }
  TerminalSceneComponent__Fadein_WorldDisp_42089608(monitor, 0.4, _9__1_0, 0LL);
  if ( !*v10 )
    goto LABEL_39;
  v25 = (UnityEngine_Object_o *)(*v10)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v25, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = *v10;
  if ( !*v10 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)Component_object, v28, v29);
  transform = *(UnityEngine_Component_o **)(v5 + 24);
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
  v30 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 48) = rotation;
  if ( !v30 )
    goto LABEL_39;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v30 + 112);
  transform = *(UnityEngine_Component_o **)(v30 + 32);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_39;
  v47 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v31 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 80) = v47;
  if ( !v31 )
    goto LABEL_39;
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v31 + 96);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v31 + 32), 0LL);
  v32 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 108) = LocalPosition;
  if ( !v32 )
    goto LABEL_39;
  v33 = *(unsigned __int8 *)(v32 + 144);
  transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
  v34 = EarthCore_TypeInfo->static_fields;
  if ( !v33 )
    v34 = (struct EarthCore_StaticFields *)((char *)v34 + 12);
  v35 = *(_QWORD *)&v34->FOCUS_IN_POS.fields.x;
  z = v34->FOCUS_IN_POS.fields.z;
  v36 = *(_QWORD *)(v5 + 24);
  *(float *)(v5 + 104) = z;
  *(_QWORD *)(v5 + 96) = v35;
  if ( !v36 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v36 + 32);
  if ( !transform )
    goto LABEL_39;
  v37 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v37, 0LL);
  v38 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 132) = LocalScale;
  if ( !v38 )
    goto LABEL_39;
  v39 = 0.95;
  if ( *(_BYTE *)(v38 + 144) )
    v39 = 1.0;
  *(float *)(v5 + 120) = v39;
  *(float *)(v5 + 124) = v39;
  *(float *)(v5 + 128) = v39;
  v40 = *(EasingObject_o **)(v5 + 16);
  v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v40 )
LABEL_39:
    sub_1B8880C(transform, v7);
  EasingObject__Play_46570564(v40, 1.0, 0.0, v19, v41, v42, 0.0, 3, 0LL);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57D5E & 1) == 0 )
  {
    sub_1B885B0(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_4A57D5E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EarthCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, method);
}
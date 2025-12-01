void EarthCore___cctor(const MethodInfo *method)
{
  struct EarthCore_StaticFields *static_fields; // x8
  struct EarthCore_StaticFields *v2; // x8

  if ( (byte_4CC3CBA & 1) == 0 )
  {
    sub_1C713B0(&EarthCore_TypeInfo);
    byte_4CC3CBA = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v2 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v2->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v2->FOCUS_OUT_POS.fields.z = 0.0;
}


void EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC3CB9 & 1) == 0 )
  {
    sub_1C713B0(&EarthCore_StateMain_TypeInfo);
    byte_4CC3CB9 = 1;
  }
  v3 = (Il2CppObject *)sub_1C715FC(EarthCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.mStateMain = (struct EarthCore_StateMain_o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mStateMain, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseCore___ctor((BaseCore_o *)this, 0);
}


void EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *transform; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC3CB4 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_EarthCore___ctor__);
    sub_1C713B0(&Method_CStateManager_EarthCore__add__);
    sub_1C713B0(&CStateManager_EarthCore__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C713B0(&EarthCore_StateNone_TypeInfo);
    sub_1C713B0(&EarthCore_StateZoomIn_TypeInfo);
    sub_1C713B0(&EarthCore_StateZoomOut_TypeInfo);
    byte_4CC3CB4 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v5 = (CStateManager_T__o *)sub_1C715FC(CStateManager_EarthCore__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3394668 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    v12 = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_1C715FC(EarthCore_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_15;
    CStateManager_object___add(
      v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3394710 *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_3394710 *)Method_CStateManager_EarthCore__add__);
    v16 = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1C715FC(EarthCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_15;
    CStateManager_object___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_3394710 *)Method_CStateManager_EarthCore__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_1C715FC(EarthCore_StateZoomOut_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_15;
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_3394710 *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36391984(gameObject, 350.0, 0);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  GameObjectExtensions__SetLocalScale(mEarthRoot, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___),
        this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.mMeshRenderer,
          (int32_t)Component_object,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        (transform = (CStateManager_T__o *)this->fields.mEarthRoot) == 0)
    || (transform = (CStateManager_T__o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)transform,
                                            0)) == 0 )
  {
LABEL_15:
    sub_1C71608(transform, v15);
  }
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(EarthCore_o *, __int64, const MethodInfo *))klass->vtable._12_SetDisp.methodPtr)(
    this,
    1,
    klass->vtable._12_SetDisp.method);
}


void EarthCore__FocusInOut(EarthCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  float v8; // s0
  struct EarthCore_StaticFields *static_fields; // x8
  _BOOL4 mIsFocusIn; // w11
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  int32_t v24; // w1
  float v25; // s8
  System_Func_T__T__float__T__o *v26; // x20
  System_Func_T__T__float__T__o *v27; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v31; // s9
  float v32; // s10
  float v33; // s14
  TransitionCalculator_Vector3__o *v34; // x0
  struct TransitionCalculator_Vector3__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v44; // s10
  TransitionCalculator_float__o *v45; // x20
  __int64 v46; // [xsp+0h] [xbp-80h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_4CC3CB3 & 1) == 0 )
  {
    sub_1C713B0(&EarthCore_TypeInfo);
    sub_1C713B0(&Method_TransitionCalculator_Vector3___ctor__);
    sub_1C713B0(&Method_TransitionCalculator_float___ctor__);
    sub_1C713B0(&TransitionCalculator_float__TypeInfo);
    sub_1C713B0(&TransitionCalculator_Vector3__TypeInfo);
    byte_4CC3CB3 = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
  v8 = 0.95;
  static_fields = EarthCore_TypeInfo->static_fields;
  if ( !isFocusIn )
    static_fields = (struct EarthCore_StaticFields *)((char *)static_fields + 12);
  v46 = *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x;
  mIsFocusIn = this->fields.mIsFocusIn;
  this->fields.mFocusTgtPos.fields.z = static_fields->FOCUS_IN_POS.fields.z;
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = v46;
  if ( mIsFocusIn )
    v8 = 1.0;
  this->fields.mFocusTgtScl = v8;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0);
    GameObjectExtensions__SetLocalScale_36391984(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0);
    this->fields.focusInOutPositionCalculator = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.focusInOutPositionCalculator,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this->fields.focusInOutScaleCalculator = 0;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v24 = 0;
  }
  else
  {
    v25 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0);
    v26 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0);
    v27 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v31 = LocalPosition.fields.x;
    v32 = LocalPosition.fields.y;
    v33 = LocalPosition.fields.z;
    v34 = (TransitionCalculator_Vector3__o *)sub_1C715FC(TransitionCalculator_Vector3__TypeInfo);
    v48.fields.x = v31;
    v48.fields.y = v32;
    v48.fields.z = v33;
    v49.fields.x = x;
    v49.fields.y = y;
    v49.fields.z = z;
    v35 = v34;
    TransitionCalculator_Vector3____ctor(
      v34,
      v48,
      v49,
      v25,
      v26,
      (const MethodInfo_3B011B0 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v35;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.focusInOutPositionCalculator,
      (int32_t)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v44 = *(float *)&LocalScale;
    v45 = (TransitionCalculator_float__o *)sub_1C715FC(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v45,
      v44,
      mFocusTgtScl,
      v25,
      v27,
      (const MethodInfo_3B00FE4 *)Method_TransitionCalculator_float___ctor__);
    this->fields.focusInOutScaleCalculator = v45;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v24 = (int)v45;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_focusInOutScaleCalculator, v24, v17, v18, v19, v20, v21, v22);
}


int32_t EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CC3CB7 & 1) == 0 )
  {
    this = (EarthCore_o *)sub_1C713B0(&Method_CStateManager_EarthCore__getState__);
    byte_4CC3CB7 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C71608(this, method);
  return mFSM->fields.m_state;
}


EarthCore_StateMain_o *EarthCore__GetStateMain(EarthCore_o *this, const MethodInfo *method)
{
  return this->fields.mStateMain;
}


float EarthCore__GetStateMainInertialSpdOld(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  if ( !mStateMain )
    sub_1C71608(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1C71608(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
void EarthCore__SetDisp(EarthCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0
  bool v5; // w20

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (v5 = is_disp,
        UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0) )
  {
    sub_1C71608(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CC3CB8 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_EarthCore__setState__);
    byte_4CC3CB8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_339479C *)Method_CStateManager_EarthCore__setState__);
}


void EarthCore__Setup(
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
  int max_length; // w8
  System_Single_array *v21; // x8
  float v22; // s8
  float v23; // s12
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  float v28; // s0
  float v29; // s8
  float v30; // s12
  float v31; // s13
  Il2CppObject *EarthPoint_object; // x0
  __int64 v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x1
  float v36; // [xsp+0h] [xbp-D0h] BYREF
  float v37; // [xsp+4h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-B0h] BYREF
  float cosx; // [xsp+78h] [xbp-58h] BYREF
  float sinx; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_4CC3CB6 & 1) == 0 )
  {
    sub_1C713B0(&Method_BaseCore_CreateEarthPoint_EarthPoint___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_8257/*"LAST_WAR_ID"*/);
    byte_4CC3CB6 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_33;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0);
  if ( !mEarthRoot )
    goto LABEL_33;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ((void (__fastcall *)(EarthCore_o *, bool, __int64, const MethodInfo *))this->klass->vtable._4_FocusInOut.methodPtr)(
    this,
    isFocusIn,
    1,
    this->klass->vtable._4_FocusInOut.method);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8257/*"LAST_WAR_ID"*/, 0);
  if ( !warInfoList )
LABEL_33:
    sub_1C71608(mEarthRoot, v7);
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v11 )
      break;
    current = (MapControl_WarInfo_o *)v39.fields._current;
    if ( !v39.fields._current )
      sub_1C71608(v11, v12);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v39.fields._current, 0);
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
          sub_1C71610(PrioredCoordinates);
        v21 = PrioredCoordinates->m_Items[mCoreType];
        if ( v21 && SLODWORD(v21->max_length) >= 2 )
        {
          v22 = v21->m_Items[0];
          v23 = v21->m_Items[1];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v26 = UnityEngine_Object__op_Equality(EarthPoint, 0, 0);
          if ( v26 )
          {
            v28 = v22 * 0.017453;
            v29 = (float)(v23 + 9.5) * 0.017453;
            sincosf(v28, &sinx, &cosx);
            v30 = sinx;
            v31 = cosx * 0.5;
            sincosf(v29, &v37, &v36);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v31 * v36,
                                  v30 * 0.5,
                                  v31 * v37,
                                  (const MethodInfo_3132EC0 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_1C71608(0, v33);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0);
          }
          else
          {
            if ( !EarthPoint )
              sub_1C71608(v26, v27);
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0);
            if ( !v34 )
              sub_1C71608(0, v35);
            UnityEngine_GameObject__SetActive(v34, IsWarOpen, 0);
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
    &v39,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4CC3CB5 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_EarthCore__update__);
    byte_4CC3CB5 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3394778 *)Method_CStateManager_EarthCore__update__);
  if ( this->fields.mIsReqZoomIn && EarthCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0);
    this->fields.mIsReqZoomIn = 0;
    EarthCore__SetState(this, 2, v4);
  }
}


void EarthCore__mcbfStartMain(EarthCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EarthCore__SetState(this, 1, v2);
}


void EarthCore__mcbfStartZoomIn(EarthCore_o *this, const MethodInfo *method)
{
  this->fields.mIsReqZoomIn = 1;
}


void EarthCore__mcbfStartZoomOut(EarthCore_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EarthCore__SetState(this, 3, v2);
}


void EarthCore_StateMain___ctor(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EarthCore_StateMain__begin(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  this->fields.mInertialSpd = 0.0;
}


void EarthCore_StateMain__end(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


float EarthCore_StateMain__get_InertialSpd(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields.mInertialSpd;
}


float EarthCore_StateMain__get_InertialSpdOld(EarthCore_StateMain_o *this, const MethodInfo *method)
{
  return this->fields._InertialSpdOld_k__BackingField;
}


void EarthCore_StateMain__set_InertialSpdOld(EarthCore_StateMain_o *this, float value, const MethodInfo *method)
{
  this->fields._InertialSpdOld_k__BackingField = value;
}


void EarthCore_StateMain__update(EarthCore_StateMain_o *this, EarthCore_o *that, const MethodInfo *method)
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
  if ( (byte_4CC3CBB & 1) == 0 )
  {
    sub_1C713B0(&CTouch_TypeInfo);
    sub_1C713B0(&Method_TransitionCalculator_Vector3__IsFinished__);
    sub_1C713B0(&Method_TransitionCalculator_float__IsFinished__);
    sub_1C713B0(&Method_TransitionCalculator_Vector3__Update__);
    this = (EarthCore_StateMain_o *)sub_1C713B0(&Method_TransitionCalculator_float__Update__);
    byte_4CC3CBB = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0) )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4CC3BD8 )
      {
        sub_1C713B0(&CTouch_TypeInfo);
        byte_4CC3BD8 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      x = v11->static_fields->mScrPosDelta.fields.x;
      if ( !byte_4CC3BD9 )
      {
        sub_1C713B0(&CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
        byte_4CC3BD9 = 1;
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
    if ( !byte_4CC0D0D )
    {
      sub_1C713B0(&UnityEngine_Mathf_TypeInfo);
      byte_4CC0D0D = 1;
    }
    v7 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v7 <= (float)(static_fields->Epsilon * 8.0) )
      v7 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v7 )
    {
      v9 = v4->fields.mInertialSpd;
      v10 = v9 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      v4->fields.mInertialSpd = v10;
      if ( fabsf(v10) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  v14 = v4->fields.mInertialSpd;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0);
  if ( !this )
    goto LABEL_40;
  v21.fields.y = AutoRotationSpeed + v14;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  UnityEngine_Transform__Rotate_71749452((UnityEngine_Transform_o *)this, v21, 0);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_3B012AC *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_3B010AC *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v22 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_3B0123C *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v22, 0);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v19 = that->fields.mEarthRoot;
              v20 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_3B01044 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_36391984(v19, v20, 0);
              v17 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_1C71608(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0);
  GameObjectExtensions__SetLocalScale_36391984(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0);
  v17 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v17;
}


void EarthCore_StateNone___ctor(EarthCore_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EarthCore_StateNone__begin(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void EarthCore_StateNone__end(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void EarthCore_StateNone__update(EarthCore_StateNone_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void EarthCore_StateZoomIn___ctor(EarthCore_StateZoomIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EarthCore_StateZoomIn__GoNext(EarthCore_StateZoomIn_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v5; // x8

  if ( (byte_4CC3CBE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&StringLiteral_6974/*"GO_NEXT"*/);
    byte_4CC3CBE = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v5 = this->fields.mThat) == 0)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0)) == 0 )
  {
    sub_1C71608(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_66853360(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6974/*"GO_NEXT"*/,
    0);
}


// local variable allocation has failed, the output may be wrong!
void EarthCore_StateZoomIn__begin(EarthCore_StateZoomIn_o *this, EarthCore_o *that, const MethodInfo *method)
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
  UnityEngine_Component_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct EarthCore_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Object_o *monitor; // x21
  TerminalPramsManager_c *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  __int64 v41; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v43; // x8
  float z; // s1
  UnityEngine_GameObject_o *v45; // x0
  EasingObject_o *v46; // x21
  float mSpdTime; // s8
  System_Action_o *v53; // x22
  System_Action_o *v54; // x23
  TerminalPramsManager_c *v55; // x0
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v61; // x21
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC3CBC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_EarthCore_StateZoomIn_GoNext__);
    sub_1C713B0(&Method_EarthCore_StateZoomIn_begin__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_1C713B0(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_1C713B0(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_4CC3CBC = 1;
  }
  v5 = sub_1C715FC(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_50;
  *(_QWORD *)(v5 + 24) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 144) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 144), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct EarthCore_o **)(v5 + 24);
  this->fields.mThat = v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0);
  if ( !*v14 )
    goto LABEL_50;
  monitor = (UnityEngine_Object_o *)(*v14)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3DB9 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3DB9 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    if ( v29->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    v58 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1C713C8(Method_EarthCore_StateZoomIn_begin__);
    v59 = (System_Reflection_MethodBase_o *)sub_1C71394(v58, v58[4]);
    OverwriteAssetSoundName__PlayCommonSe(v59, 22, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v61 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v61, 0);
      return;
    }
LABEL_50:
    sub_1C71608(transform, v7);
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v32, v33, v34, v35, v36, v37);
  transform = *(UnityEngine_Component_o **)(v5 + 24);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_50;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  *(float *)(v5 + 32) = rotation.fields.x;
  v38 = *(_QWORD *)(v5 + 24);
  *(float *)(v5 + 36) = rotation.fields.y;
  *(float *)(v5 + 40) = rotation.fields.z;
  *(float *)(v5 + 44) = rotation.fields.w;
  if ( !v38 )
    goto LABEL_50;
  v39 = *(_QWORD *)(v38 + 80);
  if ( !v39 )
    goto LABEL_50;
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(v39 + 96);
  *(_OWORD *)(v38 + 112) = *(_OWORD *)(v5 + 32);
  v40 = *(_QWORD *)(v5 + 24);
  if ( !v40 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v40 + 32);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_50;
  *(UnityEngine_Quaternion_o *)(v5 + 64) = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  if ( !byte_4CC0D0F )
  {
    transform = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4CC0D0F = 1;
  }
  v41 = *(_QWORD *)(v5 + 24);
  *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  if ( !v41 )
    goto LABEL_50;
  *(UnityEngine_Vector3_o *)(v5 + 96) = GameObjectExtensions__GetLocalPosition(
                                          (UnityEngine_GameObject_o *)*(_QWORD *)(v41 + 32),
                                          0);
  if ( !byte_4CC0D09 )
  {
    transform = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v43 = *(_QWORD *)(v5 + 24);
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 108) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 116) = z;
  if ( !v43 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v43 + 32);
  if ( !transform )
    goto LABEL_50;
  v45 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0);
  *(UnityEngine_Vector3_o *)(v5 + 120) = GameObjectExtensions__GetLocalScale(v45, 0);
  v46 = *(EasingObject_o **)(v5 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v5 + 132) = _D0;
  *(_DWORD *)(v5 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v53 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0);
  v54 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0);
  if ( !v46 )
    goto LABEL_50;
  EasingObject__Play(v46, mSpdTime, v53, v54, 0.0, 1, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3DB9 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3DB9 = 1;
  }
  v55 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v55 = TerminalPramsManager_TypeInfo;
  }
  if ( !v55->static_fields->_IsAutoResume_k__BackingField )
  {
    v56 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1C713C8(Method_EarthCore_StateZoomIn_begin__);
    v57 = (System_Reflection_MethodBase_o *)sub_1C71394(v56, v56[4]);
    OverwriteAssetSoundName__PlayCommonSe(v57, 22, 0, 0);
    this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
  }
}


void EarthCore_StateZoomIn__end(EarthCore_StateZoomIn_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void EarthCore_StateZoomIn__update(EarthCore_StateZoomIn_o *this, EarthCore_o *that, const MethodInfo *method)
{
  float v4; // s8
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CC3CBD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_EarthCore_StateZoomIn_GoNext__);
    byte_4CC3CBD = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0);
      if ( !Instance )
        sub_1C71608(v7, v8);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v4, v6, 0);
      this->fields.mStartTime = 0.0;
    }
  }
}


void EarthCore_StateZoomIn___c__DisplayClass3_0___ctor(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__0(
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
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v10; // x20
  struct EarthCore_o *v11; // x8
  float v12; // s0
  float z; // s2
  float v14; // s3
  unsigned __int64 v15; // d0 OVERLAPPED
  float v16; // s2
  int v17; // s1
  struct EarthCore_o *v18; // x8
  UnityEngine_Transform_o *v19; // x0
  float32x2_t v20; // d9
  float v21; // s10
  float32x2_t v22; // d11
  float v23; // s12
  UnityEngine_Transform_o *v24; // x19
  float v25; // s0
  float v26; // s1
  bool v27; // nf
  float v28; // s0
  float v29; // s2 OVERLAPPED
  unsigned __int64 v30; // d0 OVERLAPPED
  int v31; // s1
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0);
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_19;
  v6 = v5;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !this )
    goto LABEL_19;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v32 = UnityEngine_Quaternion__Slerp(v3->fields.qua_from, v3->fields.qua_to, v7, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, v32, 0);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v33 = UnityEngine_Quaternion__Slerp(v3->fields.root_qua_from, v3->fields.root_qua_to, v7, 0);
  if ( !v10 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v10, v33, 0);
  v11 = v3->fields.that;
  if ( !v11 )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v11->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
  v12 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v12 = 0.0;
  if ( !this )
    goto LABEL_19;
  z = v3->fields.root_pos_from.fields.z;
  v14 = v12 * (float)(v3->fields.root_pos_to.fields.z - z);
  v15 = vadd_f32(
          *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
              *(float32x2_t *)&v3->fields.root_pos_from.fields.x),
            v12)).n64_u64[0];
  v16 = z + v14;
  v17 = HIDWORD(v15);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v15, 0);
  v18 = v3->fields.that;
  if ( !v18 )
    goto LABEL_19;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v18->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v20.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v21 = v3->fields.root_scl_from.fields.z;
  v22.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v23 = v3->fields.root_scl_to.fields.z;
  v24 = v19;
  v25 = StepFunc__Acc5(mNow, 0);
  v26 = fminf(v25, 1.0);
  v27 = v25 < 0.0;
  v28 = 0.0;
  if ( !v27 )
    v28 = v26;
  if ( !v24 )
LABEL_19:
    sub_1C71608(this, method);
  v29 = v21 + (float)((float)(v23 - v21) * v28);
  v30 = vadd_f32(v20, vmul_n_f32(vsub_f32(v22, v20), v28)).n64_u64[0];
  v31 = HIDWORD(v30);
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)(&v29 - 2), 0);
}


void EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v4; // x8
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4CC3CBF & 1) == 0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3CBF = 1;
  }
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0);
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0);
  v4 = this->fields.that;
  if ( !v4 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v4->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)v6->fields.mEarthRoot;
  if ( !that )
    goto LABEL_25;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0);
  if ( !that )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3DB9 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3DB9 = 1;
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
    sub_1C71608(that, method);
  }
}


void EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v5; // x8

  if ( (byte_4CC3CC1 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C713B0(&StringLiteral_6974/*"GO_NEXT"*/);
    byte_4CC3CC1 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v5 = this->fields.mThat) == 0)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0)) == 0 )
  {
    sub_1C71608(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_66853360(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6974/*"GO_NEXT"*/,
    0);
}


void EarthCore_StateZoomOut__begin(EarthCore_StateZoomOut_o *this, EarthCore_o *that, const MethodInfo *method)
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
  UnityEngine_Component_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct EarthCore_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  float IntpTime_AutoResume; // s0
  TerminalSceneComponent_o *monitor; // x22
  EarthCore_StateZoomOut___c_c *v30; // x0
  float v31; // s8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v33; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  UnityEngine_Object_o *v41; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  int v53; // w20
  struct EarthCore_StaticFields *v54; // x8
  __int64 v55; // x9
  __int64 v56; // x8
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x8
  float v59; // s0
  EasingObject_o *v60; // x20
  System_Action_o *v61; // x21
  System_Action_o *v62; // x22
  float z; // [xsp+8h] [xbp-58h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC3CC0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&EarthCore_TypeInfo);
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__);
    sub_1C713B0(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_1C713B0(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_1C713B0(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_1C713B0(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_4CC3CC0 = 1;
  }
  v5 = sub_1C715FC(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 24) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 144) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 144), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct EarthCore_o **)(v5 + 24);
  this->fields.mThat = v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0);
  if ( !*v14 )
    goto LABEL_39;
  monitor = (TerminalSceneComponent_o *)(*v14)[2].monitor;
  if ( !monitor )
    goto LABEL_39;
  monitor->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  monitor->fields._IsPassEarthCore_k__BackingField = 1;
  v30 = EarthCore_StateZoomOut___c_TypeInfo;
  v31 = IntpTime_AutoResume;
  if ( !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo);
    v30 = EarthCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v30->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = EarthCore_StateZoomOut___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v33, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0);
    static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v35, v36, v37, v38, v39, v40);
  }
  TerminalSceneComponent__Fadein_WorldDisp_45612272(monitor, 0.4, _9__1_0, 0);
  if ( !*v14 )
    goto LABEL_39;
  v41 = (UnityEngine_Object_o *)(*v14)[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v41, 0, 0) )
  {
    EarthCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Component_object, v44, v45, v46, v47, v48, v49);
  transform = *(UnityEngine_Component_o **)(v5 + 24);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_39;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  v50 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 48) = rotation;
  if ( !v50 )
    goto LABEL_39;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v50 + 112);
  transform = *(UnityEngine_Component_o **)(v50 + 32);
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_39;
  v67 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  v51 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 80) = v67;
  if ( !v51 )
    goto LABEL_39;
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v51 + 96);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v51 + 32), 0);
  v52 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 108) = LocalPosition;
  if ( !v52 )
    goto LABEL_39;
  v53 = *(unsigned __int8 *)(v52 + 144);
  transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
  if ( !EarthCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
  v54 = EarthCore_TypeInfo->static_fields;
  if ( !v53 )
    v54 = (struct EarthCore_StaticFields *)((char *)v54 + 12);
  v55 = *(_QWORD *)&v54->FOCUS_IN_POS.fields.x;
  z = v54->FOCUS_IN_POS.fields.z;
  v56 = *(_QWORD *)(v5 + 24);
  *(float *)(v5 + 104) = z;
  *(_QWORD *)(v5 + 96) = v55;
  if ( !v56 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v56 + 32);
  if ( !transform )
    goto LABEL_39;
  v57 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v57, 0);
  v58 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 132) = LocalScale;
  if ( !v58 )
    goto LABEL_39;
  v59 = 0.95;
  if ( *(_BYTE *)(v58 + 144) )
    v59 = 1.0;
  *(float *)(v5 + 120) = v59;
  *(float *)(v5 + 124) = v59;
  *(float *)(v5 + 128) = v59;
  v60 = *(EasingObject_o **)(v5 + 16);
  v61 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0);
  v62 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0);
  if ( !v60 )
LABEL_39:
    sub_1C71608(transform, v7);
  EasingObject__Play_49422308(v60, 1.0, 0.0, v31, v61, v62, 0.0, 3, 0);
}


void EarthCore_StateZoomOut__end(EarthCore_StateZoomOut_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void EarthCore_StateZoomOut__update(EarthCore_StateZoomOut_o *this, EarthCore_o *that, const MethodInfo *method)
{
  ;
}


void EarthCore_StateZoomOut___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC3CC2 & 1) == 0 )
  {
    sub_1C713B0(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_4CC3CC2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EarthCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EarthCore_StateZoomOut___c___ctor(EarthCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EarthCore_StateZoomOut___c___begin_b__1_0(EarthCore_StateZoomOut___c_o *this, const MethodInfo *method)
{
  ;
}


void EarthCore_StateZoomOut___c__DisplayClass1_0___ctor(
        EarthCore_StateZoomOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__1(
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
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v10; // x20
  struct EarthCore_o *v11; // x8
  float v12; // s0
  float z; // s2
  float v14; // s3
  unsigned __int64 v15; // d0 OVERLAPPED
  float v16; // s2
  int v17; // s1
  struct EarthCore_o *v18; // x8
  UnityEngine_Transform_o *v19; // x0
  float32x2_t v20; // d9
  float v21; // s10
  float32x2_t v22; // d11
  float v23; // s12
  UnityEngine_Transform_o *v24; // x19
  float v25; // s0
  float v26; // s1
  bool v27; // nf
  float v28; // s0
  float v29; // s2 OVERLAPPED
  unsigned __int64 v30; // d0 OVERLAPPED
  int v31; // s1
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_19;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0);
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_19;
  v6 = v5;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_19;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v32 = UnityEngine_Quaternion__Slerp(v3->fields.qua_to, v3->fields.qua_from, v7, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(transform, v32, 0);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v33 = UnityEngine_Quaternion__Slerp(v3->fields.root_qua_to, v3->fields.root_qua_from, v7, 0);
  if ( !v10 )
    goto LABEL_19;
  UnityEngine_Transform__set_rotation(v10, v33, 0);
  v11 = v3->fields.that;
  if ( !v11 )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v11->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  v12 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v12 = 0.0;
  if ( !this )
    goto LABEL_19;
  z = v3->fields.root_pos_to.fields.z;
  v14 = v12 * (float)(v3->fields.root_pos_from.fields.z - z);
  v15 = vadd_f32(
          *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
              *(float32x2_t *)&v3->fields.root_pos_to.fields.x),
            v12)).n64_u64[0];
  v16 = z + v14;
  v17 = HIDWORD(v15);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v15, 0);
  v18 = v3->fields.that;
  if ( !v18 )
    goto LABEL_19;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v18->fields.mEarthRoot;
  if ( !this )
    goto LABEL_19;
  v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v20.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v21 = v3->fields.root_scl_to.fields.z;
  v22.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v23 = v3->fields.root_scl_from.fields.z;
  v24 = v19;
  v25 = StepFunc__Acc5(mNow, 0);
  v26 = fminf(v25, 1.0);
  v27 = v25 < 0.0;
  v28 = 0.0;
  if ( !v27 )
    v28 = v26;
  if ( !v24 )
LABEL_19:
    sub_1C71608(this, method);
  v29 = v21 + (float)((float)(v23 - v21) * v28);
  v30 = vadd_f32(v20, vmul_n_f32(vsub_f32(v22, v20), v28)).n64_u64[0];
  v31 = HIDWORD(v30);
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)(&v29 - 2), 0);
}


void EarthCore_StateZoomOut___c__DisplayClass1_0___begin_b__2(
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
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0);
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0);
  if ( !that )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0);
  v4 = this->fields.that;
  if ( !v4 )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)v4->fields.mEarthRoot;
  if ( !that )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0);
  if ( !that )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0);
  v5 = this->fields.that;
  if ( !v5 )
    goto LABEL_15;
  that = (UnityEngine_Component_o *)v5->fields.mEarthRoot;
  if ( !that
    || (that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0)) == 0
    || (UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0),
        (v6 = this->fields.that) == 0)
    || (that = (UnityEngine_Component_o *)v6->fields.mEarthRoot) == 0
    || (that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0)) == 0
    || (UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0),
        (that = (UnityEngine_Component_o *)this->fields.__4__this) == 0) )
  {
LABEL_15:
    sub_1C71608(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, method);
}
void EarthCore___cctor(const MethodInfo *method)
{
  struct EarthCore_StaticFields *static_fields; // x8
  EarthCore_c *v2; // x9
  struct EarthCore_StaticFields *v3; // x8

  if ( (byte_596CED9 & 1) == 0 )
  {
    sub_2213A60(&EarthCore_TypeInfo);
    byte_596CED9 = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  v2 = EarthCore_TypeInfo;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v3->FOCUS_OUT_POS.fields.z = 0.0;
}


void EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596CED8 & 1) == 0 )
  {
    sub_2213A60(&EarthCore_StateMain_TypeInfo);
    byte_596CED8 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(EarthCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields.mStateMain = (struct EarthCore_StateMain_o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mStateMain, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseCore___ctor((BaseCore_o *)this, 0);
}


void EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  EarthCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:kr00_16.16

  if ( (byte_596CED3 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EarthCore___ctor__);
    sub_2213A60(&Method_CStateManager_EarthCore__add__);
    sub_2213A60(&CStateManager_EarthCore__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_2213A60(&EarthCore_StateNone_TypeInfo);
    sub_2213A60(&EarthCore_StateZoomIn_TypeInfo);
    sub_2213A60(&EarthCore_StateZoomOut_TypeInfo);
    byte_596CED3 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v5 = (CStateManager_T__o *)sub_2213CCC(CStateManager_EarthCore__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E83D54 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    v12 = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_2213CCC(EarthCore_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_15;
    CStateManager_object___add(
      v12,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_15;
    CStateManager_object___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EarthCore__add__);
    v16 = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_2213CCC(EarthCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_15;
    CStateManager_object___add(
      v16,
      2,
      (IState_T__o *)v17,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EarthCore__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_2213CCC(EarthCore_StateZoomOut_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_15;
    CStateManager_object___add(
      v18,
      3,
      (IState_T__o *)v19,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_42893524(gameObject, 350.0, 0);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(mEarthRoot, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___),
        this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mMeshRenderer,
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
    sub_2213CDC(transform, v15);
  }
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0);
  klass = this->klass;
  this->fields.mRootQua = localRotation;
  ((void (__fastcall *)(EarthCore_o *, __int64, const MethodInfo *))klass->vtable._12_SetDisp.methodPtr)(
    this,
    1,
    klass->vtable._12_SetDisp.method);
}


// local variable allocation has failed, the output may be wrong!
void EarthCore__FocusInOut(EarthCore_o *this, bool isFocusIn, bool isForce, const MethodInfo *method)
{
  bool v7; // w23
  EarthCore_c *v8; // x0
  int v9; // w8
  __int64 static_fields; // x8
  float v11; // s0
  __int64 v12; // x11
  float v13; // w8
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
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  int32_t v27; // w1
  float v28; // s8
  System_Func_T__T__float__T__o *v29; // x21
  System_Func_T__T__float__T__o *v30; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  TransitionCalculator_Vector3__o *v34; // x0
  struct TransitionCalculator_Vector3__o *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  float mFocusTgtScl; // s9
  float v43; // s10
  TransitionCalculator_float__o *v44; // x21
  unsigned int LocalScale; // s0
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v47; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_596CED2 & 1) == 0 )
  {
    sub_2213A60(&EarthCore_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_Vector3___ctor__);
    sub_2213A60(&Method_TransitionCalculator_float___ctor__);
    sub_2213A60(&TransitionCalculator_float__TypeInfo);
    sub_2213A60(&TransitionCalculator_Vector3__TypeInfo);
    byte_596CED2 = 1;
  }
  v8 = EarthCore_TypeInfo;
  v9 = *(&EarthCore_TypeInfo->_2.cctor_finished + 1);
  this->fields.mIsFocusIn = v7;
  if ( isFocusIn )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v8, isFocusIn, isForce);
      v8 = EarthCore_TypeInfo;
    }
    static_fields = (__int64)v8->static_fields;
  }
  else
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v8, isFocusIn, isForce);
      v8 = EarthCore_TypeInfo;
    }
    static_fields = (__int64)&v8->static_fields->FOCUS_OUT_POS;
  }
  v11 = 1.0;
  v12 = *(_QWORD *)static_fields;
  v13 = *(float *)(static_fields + 8);
  if ( !this->fields.mIsFocusIn )
    v11 = 0.95;
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = v12;
  this->fields.mFocusTgtPos.fields.z = v13;
  this->fields.mFocusTgtScl = v11;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0);
    GameObjectExtensions__SetLocalScale_42893524(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0);
    this->fields.focusInOutPositionCalculator = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.focusInOutPositionCalculator,
      0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.focusInOutScaleCalculator = 0;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v27 = 0;
  }
  else
  {
    v28 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0);
    v29 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0);
    v30 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v34 = (TransitionCalculator_Vector3__o *)sub_2213CCC(TransitionCalculator_Vector3__TypeInfo);
    v47.fields.x = x;
    v47.fields.y = y;
    v47.fields.z = z;
    v35 = v34;
    TransitionCalculator_Vector3____ctor(
      v34,
      LocalPosition,
      v47,
      v28,
      v29,
      (const MethodInfo_3BE954C *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v35;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.focusInOutPositionCalculator,
      (int32_t)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v43 = *(float *)&LocalScale;
    v44 = (TransitionCalculator_float__o *)sub_2213CCC(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v44,
      v43,
      mFocusTgtScl,
      v28,
      v30,
      (const MethodInfo_3BE93AC *)Method_TransitionCalculator_float___ctor__);
    this->fields.focusInOutScaleCalculator = v44;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v27 = (int)v44;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_focusInOutScaleCalculator, v27, v20, v21, v22, v23, v24, v25);
}


int32_t EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  EarthCore_o *v2; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_596CED6 & 1) == 0 )
  {
    this = (EarthCore_o *)sub_2213A60(&Method_CStateManager_EarthCore__getState__);
    byte_596CED6 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_2213CDC(this, method);
  mStateMain->fields._InertialSpdOld_k__BackingField = mStateMain->fields.mInertialSpd;
}


// local variable allocation has failed, the output may be wrong!
void EarthCore__SetDisp(EarthCore_o *this, bool is_disp, const MethodInfo *method)
{
  UnityEngine_Renderer_o *mMeshRenderer; // x0

  mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mMeshRenderer;
  if ( !mMeshRenderer
    || (UnityEngine_Renderer__set_enabled(mMeshRenderer, is_disp, 0),
        (mMeshRenderer = (UnityEngine_Renderer_o *)this->fields.mEarthPointRoot) == 0) )
  {
    sub_2213CDC(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, is_disp, 0);
}


// local variable allocation has failed, the output may be wrong!
void EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596CED7 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EarthCore__setState__);
    byte_596CED7 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(mFSM, state, (const MethodInfo_3E83E8C *)Method_CStateManager_EarthCore__setState__);
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
  __int64 mCoreType; // x28
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v20; // x8
  float v21; // s8
  float v22; // s12
  bool IsWarOpen; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v27; // x0
  __int64 v28; // x1
  float v29; // s0
  float v30; // s8
  float v31; // s13
  float v32; // s12
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

  if ( (byte_596CED5 & 1) == 0 )
  {
    sub_2213A60(&Method_BaseCore_CreateEarthPoint_EarthPoint___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_8603/*"LAST_WAR_ID"*/);
    byte_596CED5 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_32;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0);
  if ( !mEarthRoot )
    goto LABEL_32;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ((void (__fastcall *)(EarthCore_o *, bool, __int64, const MethodInfo *))this->klass->vtable._4_FocusInOut.methodPtr)(
    this,
    isFocusIn,
    1,
    this->klass->vtable._4_FocusInOut.method);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8603/*"LAST_WAR_ID"*/, 0);
  if ( !warInfoList )
LABEL_32:
    sub_2213CDC(mEarthRoot, v7);
  v10 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v40 = v39;
  v39.fields._list = 0;
  *(_QWORD *)&v39.fields._index = &v40;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v11 )
      break;
    current = (MapControl_WarInfo_o *)v40.fields._current;
    if ( !v40.fields._current )
      sub_2213CDC(v11, v12);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v40.fields._current, 0);
    v15 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0) && !WarEntity__IsDisplayEarthPointWithoutMap(v15, 0) )
        goto LABEL_20;
      if ( WarEntity__IsEvent(v15, 0) || warId <= v10 )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v15, 0);
        if ( !PrioredCoordinates )
          goto LABEL_20;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_20;
        if ( (unsigned int)mCoreType >= max_length )
          sub_2213CE4(PrioredCoordinates);
        v20 = PrioredCoordinates->m_Items[mCoreType];
        if ( v20 && SLODWORD(v20->max_length) >= 2 )
        {
          v21 = v20->m_Items[0];
          v22 = v20->m_Items[1];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
          v27 = UnityEngine_Object__op_Equality(EarthPoint, 0, 0);
          if ( v27 )
          {
            v29 = v21 * 0.017453;
            v30 = (float)(v22 + 9.5) * 0.017453;
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
                                  (const MethodInfo_380E964 *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_2213CDC(0, v34);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0);
          }
          else
          {
            if ( !EarthPoint )
              sub_2213CDC(v27, v28);
            v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0);
            if ( !v35 )
              sub_2213CDC(0, v36);
            UnityEngine_GameObject__SetActive(v35, IsWarOpen, 0);
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
    &v40,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_596CED4 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EarthCore__update__);
    byte_596CED4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E83E6C *)Method_CStateManager_EarthCore__update__);
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
  __int64 v5; // x1
  __int64 v6; // x2
  float AutoRotationSpeed; // s8
  float mInertialSpd; // s9
  float v9; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v11; // s0
  float v12; // s9
  float v13; // s0
  __int64 v14; // x1
  __int64 v15; // x2
  CTouch_c *v16; // x0
  float x; // s9
  float v18; // s0
  float v19; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v22; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v24; // x20
  float v25; // s0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596CEDA & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_Vector3__IsFinished__);
    sub_2213A60(&Method_TransitionCalculator_float__IsFinished__);
    sub_2213A60(&Method_TransitionCalculator_Vector3__Update__);
    this = (EarthCore_StateMain_o *)sub_2213A60(&Method_TransitionCalculator_float__Update__);
    byte_596CEDA = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v4->fields.mInertialSpd = 0.0;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v5, v6);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0) )
    {
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
      if ( !byte_596CDF4 )
      {
        sub_2213A60(&CTouch_TypeInfo);
        byte_596CDF4 = 1;
      }
      v16 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
        v16 = CTouch_TypeInfo;
      }
      x = v16->static_fields->mScrPosDelta.fields.x;
      if ( !byte_596CDF5 )
      {
        sub_2213A60(&CTouch_TypeInfo);
        v16 = CTouch_TypeInfo;
        byte_596CDF5 = 1;
      }
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v14, v15);
        v16 = CTouch_TypeInfo;
      }
      v18 = v16->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v18) )
        v18 = x;
      v4->fields.mInertialSpd = v18 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_5969AE4 )
    {
      sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      byte_5969AE4 = 1;
    }
    v9 = vabds_f32(0.0, mInertialSpd);
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    v11 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    if ( v11 <= (float)(static_fields->Epsilon * 8.0) )
      v11 = static_fields->Epsilon * 8.0;
    if ( v9 >= v11 )
    {
      v12 = v4->fields.mInertialSpd;
      v13 = v12 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0);
      v4->fields.mInertialSpd = v13;
      if ( fabsf(v13) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  v19 = v4->fields.mInertialSpd;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0);
  if ( !this )
    goto LABEL_40;
  v26.fields.y = AutoRotationSpeed + v19;
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__Rotate_83494216((UnityEngine_Transform_o *)this, v26, 0);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_3BE9630 *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_3BE945C *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v27 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_3BE95D8 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v27, 0);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v24 = that->fields.mEarthRoot;
              v25 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_42893524(v24, v25, 0);
              v22 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_2213CDC(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0);
  GameObjectExtensions__SetLocalScale_42893524(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0);
  v22 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v22;
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

  if ( (byte_596CEDD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596CEDD = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v5 = this->fields.mThat) == 0)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0)) == 0 )
  {
    sub_2213CDC(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_78428956(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/,
    0);
}


void EarthCore_StateZoomIn__begin(EarthCore_StateZoomIn_o *this, EarthCore_o *that, const MethodInfo *method)
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
  UnityEngine_Component_o **v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct EarthCore_o *v21; // x1
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
  UnityEngine_Component_o *v32; // x8
  UnityEngine_Object_o *monitor; // x21
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
  __int64 v45; // x10
  __int128 v46; // q1
  __int64 v47; // x8
  int v48; // w8
  __int64 v49; // x8
  int v50; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v52; // x8
  float z; // s1
  UnityEngine_GameObject_o *v54; // x0
  EasingObject_o *v60; // x21
  float mSpdTime; // s8
  System_Action_o *v62; // x22
  System_Action_o *v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  TerminalPramsManager_c *v66; // x0
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v72; // x21
  UnityEngine_Vector3_o LocalPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o LocalScale; // 0:kr34_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Quaternion_o v76; // 0:kr10_16.16

  if ( (byte_596CEDB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EarthCore_StateZoomIn_GoNext__);
    sub_2213A60(&Method_EarthCore_StateZoomIn_begin__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__);
    sub_2213A60(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__);
    sub_2213A60(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
    byte_596CEDB = 1;
  }
  v5 = sub_2213CCC(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_50;
  *(_QWORD *)(v5 + 24) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 144) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 144), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct EarthCore_o **)(v5 + 24);
  this->fields.mThat = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28, v29);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0);
  v32 = *v14;
  this->fields.mSpdTime = IntpTime_AutoResume;
  if ( !v32 )
    goto LABEL_50;
  monitor = (UnityEngine_Object_o *)v32[3].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v30);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v34);
    if ( !byte_596CFD8 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CFD8 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v34);
      v35 = TerminalPramsManager_TypeInfo;
    }
    if ( v35->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v7);
      return;
    }
    v69 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v69 = (_QWORD *)sub_2213A78(Method_EarthCore_StateZoomIn_begin__);
    v70 = (System_Reflection_MethodBase_o *)sub_2213A44(v69, v69[4]);
    OverwriteAssetSoundName__PlayCommonSe(v70, 22, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v72 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v72, 0);
      return;
    }
LABEL_50:
    sub_2213CDC(transform, v7);
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v38, v39, v40, v41, v42, v43);
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
  v44 = *(_QWORD *)(v5 + 24);
  *(float *)(v5 + 36) = rotation.fields.y;
  *(float *)(v5 + 40) = rotation.fields.z;
  *(float *)(v5 + 44) = rotation.fields.w;
  if ( !v44 )
    goto LABEL_50;
  v45 = *(_QWORD *)(v44 + 80);
  if ( !v45 )
    goto LABEL_50;
  v46 = *(_OWORD *)(v5 + 32);
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(v45 + 96);
  *(_OWORD *)(v44 + 112) = v46;
  v47 = *(_QWORD *)(v5 + 24);
  if ( !v47 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v47 + 32);
  if ( !transform )
    goto LABEL_50;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_50;
  v76 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  *(float *)(v5 + 64) = v76.fields.x;
  *(float *)(v5 + 68) = v76.fields.y;
  v48 = (unsigned __int8)byte_5969AE6;
  *(float *)(v5 + 72) = v76.fields.z;
  *(float *)(v5 + 76) = v76.fields.w;
  if ( !v48 )
  {
    transform = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  v49 = *(_QWORD *)(v5 + 24);
  *(struct UnityEngine_Quaternion_StaticFields *)(v5 + 80) = *UnityEngine_Quaternion_TypeInfo->static_fields;
  if ( !v49 )
    goto LABEL_50;
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v49 + 32), 0);
  *(float *)(v5 + 96) = LocalPosition.fields.x;
  *(float *)(v5 + 100) = LocalPosition.fields.y;
  v50 = (unsigned __int8)byte_5969AE0;
  *(float *)(v5 + 104) = LocalPosition.fields.z;
  if ( !v50 )
  {
    transform = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v52 = *(_QWORD *)(v5 + 24);
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v5 + 108) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v5 + 116) = z;
  if ( !v52 )
    goto LABEL_50;
  transform = *(UnityEngine_Component_o **)(v52 + 32);
  if ( !transform )
    goto LABEL_50;
  v54 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v54, 0);
  __asm { FMOV            V3.2S, #6.0 }
  *(UnityEngine_Vector3_o *)(v5 + 120) = LocalScale;
  *(_DWORD *)(v5 + 140) = 1086324736;
  v60 = *(EasingObject_o **)(v5 + 16);
  *(_QWORD *)(v5 + 132) = _D3;
  mSpdTime = this->fields.mSpdTime;
  v62 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0);
  v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)v5, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0);
  if ( !v60 )
    goto LABEL_50;
  EasingObject__Play(v60, mSpdTime, v62, v63, 0.0, 1, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v64, v65);
  if ( !byte_596CFD8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFD8 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v64, v65);
    v66 = TerminalPramsManager_TypeInfo;
  }
  if ( !v66->static_fields->_IsAutoResume_k__BackingField )
  {
    v67 = Method_EarthCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_EarthCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v67 = (_QWORD *)sub_2213A78(Method_EarthCore_StateZoomIn_begin__);
    v68 = (System_Reflection_MethodBase_o *)sub_2213A44(v67, v67[4]);
    OverwriteAssetSoundName__PlayCommonSe(v68, 22, 0, 0);
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

  if ( (byte_596CEDC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EarthCore_StateZoomIn_GoNext__);
    byte_596CEDC = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v4 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.mStartTime);
    if ( v4 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0);
      if ( !Instance )
        sub_2213CDC(v7, v8);
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
  struct EarthCore_o *v13; // x8
  UnityEngine_Transform_o *v14; // x0
  float z; // s9
  float32x2_t v16; // d10
  float32x2_t v17; // d11
  float v18; // s12
  UnityEngine_Transform_o *v19; // x19
  double v20; // d0
  float v21; // s0
  float v22; // s1
  float v23; // s0
  UnityEngine_Vector3_o v24; // 0:kr20_12.12
  UnityEngine_Vector3_o v25; // 0:kr34_12.12
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_24;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0);
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_24;
  v6 = v5;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !this )
    goto LABEL_24;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v26 = UnityEngine_Quaternion__Slerp(v3->fields.qua_from, v3->fields.qua_to, v7, 0);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_Transform__set_rotation(transform, v26, 0);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_24;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_24;
  v10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v27 = UnityEngine_Quaternion__Slerp(v3->fields.root_qua_from, v3->fields.root_qua_to, v7, 0);
  if ( !v10 )
    goto LABEL_24;
  UnityEngine_Transform__set_rotation(v10, v27, 0);
  v11 = v3->fields.that;
  if ( !v11 )
    goto LABEL_24;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v11->fields.mEarthRoot;
  if ( !this )
    goto LABEL_24;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
  if ( !this )
    goto LABEL_24;
  v12 = 1.0;
  if ( v7 <= 1.0 )
    v12 = v7;
  if ( v7 < 0.0 )
    v12 = 0.0;
  *(float32x2_t *)&v24.fields.x = vadd_f32(
                                    *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
                                    vmul_n_f32(
                                      vsub_f32(
                                        *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
                                        *(float32x2_t *)&v3->fields.root_pos_from.fields.x),
                                      v12));
  v24.fields.z = v3->fields.root_pos_from.fields.z
               + (float)(v12 * (float)(v3->fields.root_pos_to.fields.z - v3->fields.root_pos_from.fields.z));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
  v13 = v3->fields.that;
  if ( !v13 )
    goto LABEL_24;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v13->fields.mEarthRoot;
  if ( !this
    || (v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        z = v3->fields.root_scl_from.fields.z,
        v16.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x,
        v17.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x,
        v18 = v3->fields.root_scl_to.fields.z,
        v19 = v14,
        v20 = StepFunc__Acc5(mNow, 0),
        !v19) )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  v21 = v20;
  v22 = 1.0;
  if ( v21 <= 1.0 )
    v22 = v21;
  if ( v21 >= 0.0 )
    v23 = v22;
  else
    v23 = 0.0;
  *(float32x2_t *)&v25.fields.x = vadd_f32(v16, vmul_n_f32(vsub_f32(v17, v16), v23));
  v25.fields.z = z + (float)((float)(v18 - z) * v23);
  UnityEngine_Transform__set_localScale(v19, v25, 0);
}


void EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v4; // x8
  struct EarthCore_o *v5; // x8
  struct EarthCore_o *v6; // x8
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0

  if ( (byte_596CEDE & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CEDE = 1;
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
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v7);
  if ( !byte_596CFD8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CFD8 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_IsAutoResume_k__BackingField )
  {
    that = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( that )
    {
      EarthCore_StateZoomIn__GoNext((EarthCore_StateZoomIn_o *)that, method);
      return;
    }
LABEL_25:
    sub_2213CDC(that, method);
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

  if ( (byte_596CEE0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596CEE0 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, v2), (v5 = this->fields.mThat) == 0)
    || (mThat = (EarthCore_o *)v5->fields.mTerminalMap) == 0
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0)) == 0 )
  {
    sub_2213CDC(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_78428956(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/,
    0);
}


void EarthCore_StateZoomOut__begin(EarthCore_StateZoomOut_o *this, EarthCore_o *that, const MethodInfo *method)
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
  UnityEngine_Component_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct EarthCore_o *v21; // x1
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
  TerminalSceneComponent_o *monitor; // x22
  float v33; // s8
  EarthCore_StateZoomOut___c_c *v34; // x0
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v37; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x2
  UnityEngine_Object_o *v46; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x8
  __int64 v56; // x8
  __int64 v57; // x2
  __int64 v58; // x8
  int v59; // w9
  int v60; // w8
  __int64 m_CachedPtr; // x8
  __int64 v62; // x9
  int v63; // w10
  __int64 v64; // x8
  UnityEngine_GameObject_o *v65; // x0
  __int64 v66; // x8
  float v67; // s0
  EasingObject_o *v68; // x20
  System_Action_c *v69; // x0
  System_Action_o *v70; // x21
  System_Action_o *v71; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o LocalScale; // 0:kr34_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Quaternion_o v75; // 0:kr10_16.16

  if ( (byte_596CEDF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EarthCore_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__);
    sub_2213A60(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__);
    sub_2213A60(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__);
    sub_2213A60(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_596CEDF = 1;
  }
  v5 = sub_2213CCC(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_42;
  *(_QWORD *)(v5 + 24) = that;
  v14 = (UnityEngine_Component_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)that, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 144) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 144), (int32_t)this, v15, v16, v17, v18, v19, v20);
  v21 = *(struct EarthCore_o **)(v5 + 24);
  this->fields.mThat = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v28, v29);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0);
  if ( !*v14 )
    goto LABEL_42;
  monitor = (TerminalSceneComponent_o *)(*v14)[2].monitor;
  if ( !monitor )
    goto LABEL_42;
  v33 = IntpTime_AutoResume;
  monitor->fields._IsReq_InitEarthRotateY_k__BackingField = 0;
  monitor->fields._IsPassEarthCore_k__BackingField = 1;
  v34 = EarthCore_StateZoomOut___c_TypeInfo;
  if ( !*(&EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo, v7, v30);
    v34 = EarthCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v7, v30);
      static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v37, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0);
    v38 = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    v38->__9__1_0 = _9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__1_0, (int32_t)_9__1_0, v39, v40, v41, v42, v43, v44);
  }
  TerminalSceneComponent__Fadein_WorldDisp_52356344(monitor, 0.4, _9__1_0, 0);
  if ( !*v14 )
    goto LABEL_42;
  v46 = (UnityEngine_Object_o *)(*v14)[3].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v45);
  if ( UnityEngine_Object__op_Equality(v46, 0, 0) )
  {
    EarthCore_StateZoomOut__GoNext(this, v7);
    return;
  }
  transform = *v14;
  if ( !*v14 )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Component_object, v49, v50, v51, v52, v53, v54);
  transform = *(UnityEngine_Component_o **)(v5 + 24);
  if ( !transform )
    goto LABEL_42;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0);
  if ( !transform )
    goto LABEL_42;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_42;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  v55 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 48) = rotation;
  if ( !v55 )
    goto LABEL_42;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(v55 + 112);
  transform = *(UnityEngine_Component_o **)(v55 + 32);
  if ( !transform )
    goto LABEL_42;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !transform )
    goto LABEL_42;
  v75 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
  v56 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Quaternion_o *)(v5 + 80) = v75;
  if ( !v56 )
    goto LABEL_42;
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v56 + 96);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v56 + 32), 0);
  v58 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 108) = LocalPosition;
  if ( !v58 )
    goto LABEL_42;
  v59 = *(unsigned __int8 *)(v58 + 144);
  transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
  v60 = *(&EarthCore_TypeInfo->_2.cctor_finished + 1);
  if ( v59 )
  {
    if ( !v60 )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo, v7, v57);
      transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
    }
    m_CachedPtr = transform[7].fields.m_CachedPtr;
  }
  else
  {
    if ( !v60 )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo, v7, v57);
      transform = (UnityEngine_Component_o *)EarthCore_TypeInfo;
    }
    m_CachedPtr = transform[7].fields.m_CachedPtr + 12;
  }
  v62 = *(_QWORD *)m_CachedPtr;
  v63 = *(_DWORD *)(m_CachedPtr + 8);
  v64 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 96) = v62;
  *(_DWORD *)(v5 + 104) = v63;
  if ( !v64 )
    goto LABEL_42;
  transform = *(UnityEngine_Component_o **)(v64 + 32);
  if ( !transform )
    goto LABEL_42;
  v65 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(v65, 0);
  v66 = *(_QWORD *)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 132) = LocalScale;
  if ( !v66 )
    goto LABEL_42;
  v67 = 1.0;
  v68 = *(EasingObject_o **)(v5 + 16);
  if ( !*(_BYTE *)(v66 + 144) )
    v67 = 0.95;
  v69 = System_Action_TypeInfo;
  *(float *)(v5 + 120) = v67;
  *(float *)(v5 + 124) = v67;
  *(float *)(v5 + 128) = v67;
  v70 = (System_Action_o *)sub_2213CCC(v69);
  System_Action___ctor(v70, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0);
  v71 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v71, (Il2CppObject *)v5, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0);
  if ( !v68 )
LABEL_42:
    sub_2213CDC(transform, v7);
  EasingObject__Play_56121168(v68, 1.0, 0.0, v33, v70, v71, 0.0, 3, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CEE1 & 1) == 0 )
  {
    sub_2213A60(&EarthCore_StateZoomOut___c_TypeInfo);
    byte_596CEE1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EarthCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EarthCore_StateZoomOut___c_TypeInfo->static_fields,
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
  struct EarthCore_o *v13; // x8
  UnityEngine_Transform_o *v14; // x0
  float z; // s9
  float32x2_t v16; // d10
  float32x2_t v17; // d11
  float v18; // s12
  UnityEngine_Transform_o *v19; // x19
  double v20; // d0
  float v21; // s0
  float v22; // s1
  float v23; // s0
  UnityEngine_Vector3_o v24; // 0:kr20_12.12
  UnityEngine_Vector3_o v25; // 0:kr34_12.12
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_24;
  v3 = this;
  mNow = eo->fields.mNow;
  v5 = StepFunc__DecSin(mNow, 0);
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_24;
  v6 = v5;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_24;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v26 = UnityEngine_Quaternion__Slerp(v3->fields.qua_to, v3->fields.qua_from, v7, 0);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_Transform__set_rotation(transform, v26, 0);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_24;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_24;
  v10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v27 = UnityEngine_Quaternion__Slerp(v3->fields.root_qua_to, v3->fields.root_qua_from, v7, 0);
  if ( !v10 )
    goto LABEL_24;
  UnityEngine_Transform__set_rotation(v10, v27, 0);
  v11 = v3->fields.that;
  if ( !v11 )
    goto LABEL_24;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v11->fields.mEarthRoot;
  if ( !this )
    goto LABEL_24;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_GameObject__get_transform(
                                                            (UnityEngine_GameObject_o *)this,
                                                            0);
  if ( !this )
    goto LABEL_24;
  v12 = 1.0;
  if ( v7 <= 1.0 )
    v12 = v7;
  if ( v7 < 0.0 )
    v12 = 0.0;
  *(float32x2_t *)&v24.fields.x = vadd_f32(
                                    *(float32x2_t *)&v3->fields.root_pos_to.fields.x,
                                    vmul_n_f32(
                                      vsub_f32(
                                        *(float32x2_t *)&v3->fields.root_pos_from.fields.x,
                                        *(float32x2_t *)&v3->fields.root_pos_to.fields.x),
                                      v12));
  v24.fields.z = v3->fields.root_pos_to.fields.z
               + (float)(v12 * (float)(v3->fields.root_pos_from.fields.z - v3->fields.root_pos_to.fields.z));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v24, 0);
  v13 = v3->fields.that;
  if ( !v13 )
    goto LABEL_24;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v13->fields.mEarthRoot;
  if ( !this
    || (v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0),
        z = v3->fields.root_scl_to.fields.z,
        v16.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x,
        v17.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x,
        v18 = v3->fields.root_scl_from.fields.z,
        v19 = v14,
        v20 = StepFunc__Acc5(mNow, 0),
        !v19) )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  v21 = v20;
  v22 = 1.0;
  if ( v21 <= 1.0 )
    v22 = v21;
  if ( v21 >= 0.0 )
    v23 = v22;
  else
    v23 = 0.0;
  *(float32x2_t *)&v25.fields.x = vadd_f32(v16, vmul_n_f32(vsub_f32(v17, v16), v23));
  v25.fields.z = z + (float)((float)(v18 - z) * v23);
  UnityEngine_Transform__set_localScale(v19, v25, 0);
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
    sub_2213CDC(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, method);
}
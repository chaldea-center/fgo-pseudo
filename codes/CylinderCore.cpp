void __fastcall CylinderCore___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CylinderCore_c *v2; // x8
  struct CylinderCore_StaticFields *static_fields; // x9
  struct CylinderCore_StaticFields *v4; // x9
  struct CylinderCore_StaticFields *v5; // x8

  if ( (byte_49FB777 & 1) == 0 )
  {
    sub_1B64A00(&CylinderCore_TypeInfo, v1);
    byte_49FB777 = 1;
  }
  v2 = CylinderCore_TypeInfo;
  static_fields = CylinderCore_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BASE_ROT_X = xmmword_BA2A60;
  static_fields->FOCUS_IN_POS.fields.z = 5.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->FOCUS_OUT_POS.fields.x = 0xC3340000C3290000LL;
  v4->FOCUS_OUT_POS.fields.z = 94.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->ZOOM_IN_POS.fields.x = 0xC337000000000000LL;
  v5->ZOOM_IN_POS.fields.z = -624.0;
}


void __fastcall CylinderCore___ctor(CylinderCore_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB776 & 1) == 0 )
  {
    sub_1B64A00(&CylinderCore_StateMain_TypeInfo, method);
    byte_49FB776 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64C4C(CylinderCore_StateMain_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.mStateMain = (struct CylinderCore_StateMain_o *)v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mStateMain, (int32_t)v3, v4, v5);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall CylinderCore__Awake(CylinderCore_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_CylinderCore__o *mFSM; // x8
  struct CStateManager_CylinderCore__o **p_mFSM; // x20
  CStateManager_T__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  CStateManager_T__o *v14; // x21
  Il2CppObject *v15; // x22
  CStateManager_T__o *mEarthRoot; // x0
  __int64 v17; // x1
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x20
  Il2CppObject *v21; // x21
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  CylinderCore_c *klass; // x8
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB771 & 1) == 0 )
  {
    sub_1B64A00(&Method_CStateManager_CylinderCore___ctor__, method);
    sub_1B64A00(&Method_CStateManager_CylinderCore__add__, v3);
    sub_1B64A00(&CStateManager_CylinderCore__TypeInfo, v4);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v5);
    sub_1B64A00(&CylinderCore_StateNone_TypeInfo, v6);
    sub_1B64A00(&CylinderCore_StateZoomIn_TypeInfo, v7);
    sub_1B64A00(&CylinderCore_StateZoomOut_TypeInfo, v8);
    byte_49FB771 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 1;
  if ( !mFSM )
  {
    v11 = (CStateManager_T__o *)sub_1B64C4C(CStateManager_CylinderCore__TypeInfo);
    CStateManager_object____ctor(
      v11,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3063BB0 *)Method_CStateManager_CylinderCore___ctor__);
    this->fields.mFSM = (struct CStateManager_CylinderCore__o *)v11;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v11, v12, v13);
    v14 = (CStateManager_T__o *)this->fields.mFSM;
    v15 = (Il2CppObject *)sub_1B64C4C(CylinderCore_StateNone_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !v14 )
      goto LABEL_13;
    CStateManager_object___add(
      v14,
      0,
      (IState_T__o *)v15,
      (const MethodInfo_3063C58 *)Method_CStateManager_CylinderCore__add__);
    mEarthRoot = (CStateManager_T__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_object___add(
      mEarthRoot,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_3063C58 *)Method_CStateManager_CylinderCore__add__);
    v18 = (CStateManager_T__o *)this->fields.mFSM;
    v19 = (Il2CppObject *)sub_1B64C4C(CylinderCore_StateZoomIn_TypeInfo);
    System_Object___ctor(v19, 0LL);
    if ( !v18
      || (CStateManager_object___add(
            v18,
            2,
            (IState_T__o *)v19,
            (const MethodInfo_3063C58 *)Method_CStateManager_CylinderCore__add__),
          v20 = (CStateManager_T__o *)*p_mFSM,
          v21 = (Il2CppObject *)sub_1B64C4C(CylinderCore_StateZoomOut_TypeInfo),
          System_Object___ctor(v21, 0LL),
          !v20) )
    {
LABEL_13:
      sub_1B64C5C(mEarthRoot, v17);
    }
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3063C58 *)Method_CStateManager_CylinderCore__add__);
    CylinderCore__SetState(this, 0, v22);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33378856(gameObject, 1.0, 0LL);
  mEarthRoot = (CStateManager_T__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mEarthRoot )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)mEarthRoot,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = (struct UnityEngine_MeshRenderer_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mMeshRenderer, (int32_t)Component_object, v25, v26);
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
  __int64 v9; // x1
  __int64 v10; // x9
  float *v11; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  struct TransitionCalculator_Vector3__o **p_focusInOutPositionCalculator; // x0
  int32_t v15; // w1
  float v16; // s8
  System_Func_T__T__float__T__o *v17; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v21; // s9
  float v22; // s10
  float v23; // s14
  TransitionCalculator_Vector3__o *v24; // x0
  struct TransitionCalculator_Vector3__o *v25; // x21
  float v26; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s3.4,4:s4.4,8:s5.4

  v7 = isFocusIn;
  if ( (byte_49FB770 & 1) == 0 )
  {
    sub_1B64A00(&CylinderCore_TypeInfo, isFocusIn);
    sub_1B64A00(&Method_TransitionCalculator_Vector3___ctor__, v8);
    sub_1B64A00(&TransitionCalculator_Vector3__TypeInfo, v9);
    byte_49FB770 = 1;
  }
  this->fields.mIsFocusIn = v7;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
  v10 = 20LL;
  if ( isFocusIn )
    v10 = 8LL;
  v11 = (float *)((char *)&CylinderCore_TypeInfo->static_fields->BASE_ROT_X + v10);
  v26 = v11[2];
  *(_QWORD *)&this->fields.mFocusTgtPos.fields.x = *(_QWORD *)v11;
  this->fields.mFocusTgtPos.fields.z = v26;
  if ( isForce )
  {
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, this->fields.mFocusTgtPos, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v15 = 0;
  }
  else
  {
    v16 = ChangedFPSUtil__CovertFrameNumToSecond(12, 0LL);
    v17 = (System_Func_T__T__float__T__o *)ExtraEasing__AsymptoticSeriesVector3(0.35, 12.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v21 = LocalPosition.fields.x;
    v22 = LocalPosition.fields.y;
    v23 = LocalPosition.fields.z;
    v24 = (TransitionCalculator_Vector3__o *)sub_1B64C4C(TransitionCalculator_Vector3__TypeInfo);
    v28.fields.x = v21;
    v28.fields.y = v22;
    v28.fields.z = v23;
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v25 = v24;
    TransitionCalculator_Vector3____ctor(
      v24,
      v28,
      v29,
      v16,
      v17,
      (const MethodInfo_376EB00 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v25;
    p_focusInOutPositionCalculator = &this->fields.focusInOutPositionCalculator;
    v15 = (int)v25;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_focusInOutPositionCalculator, v15, v12, v13);
}


int32_t __fastcall CylinderCore__GetState(CylinderCore_o *this, const MethodInfo *method)
{
  CylinderCore_o *v2; // x19
  struct CStateManager_CylinderCore__o *mFSM; // x8

  v2 = this;
  if ( (byte_49FB774 & 1) == 0 )
  {
    this = (CylinderCore_o *)sub_1B64A00(&Method_CStateManager_CylinderCore__getState__, method);
    byte_49FB774 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64C5C(this, method);
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
    sub_1B64C5C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall CylinderCore__OnPress(CylinderCore_o *this, const MethodInfo *method)
{
  struct CylinderCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_1B64C5C(this, method);
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
    sub_1B64C5C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore__SetState(CylinderCore_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49FB775 & 1) == 0 )
  {
    sub_1B64A00(&Method_CStateManager_CylinderCore__setState__, *(_QWORD *)&state);
    byte_49FB775 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64C5C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3063CE4 *)Method_CStateManager_CylinderCore__setState__);
}


void __fastcall CylinderCore__Setup(
        CylinderCore_o *this,
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v18; // w20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v23; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x26
  System_Single_array_array *PrioredCoordinates; // x0
  __int64 v28; // x1
  int max_length; // w8
  System_Single_array *v30; // x8
  float v31; // s9
  float v32; // s10
  bool IsWarOpen; // w22
  BaseEarthPoint_o *EarthPoint; // x0
  UnityEngine_Object_o *v35; // x23
  __int64 methodPtr_low; // x9
  _BOOL8 v37; // x0
  __int64 v38; // x1
  float v39; // s10
  Il2CppObject *EarthPoint_object; // x0
  __int64 v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-A0h] BYREF
  float cosx; // [xsp+48h] [xbp-78h] BYREF
  float sinx; // [xsp+4Ch] [xbp-74h] BYREF

  if ( (byte_49FB773 & 1) == 0 )
  {
    sub_1B64A00(&Method_BaseCore_CreateEarthPoint_CylinderPoint___, warInfoList);
    sub_1B64A00(&CylinderPoint_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_8193/*"LAST_WAR_ID"*/, v13);
    byte_49FB773 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot )
    goto LABEL_36;
  mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL);
  if ( !mEarthRoot )
    goto LABEL_36;
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F9821 = 1;
  }
  GameObjectExtensions__SetLocalEulerAngle(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ((void (__fastcall *)(CylinderCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
    this,
    isFocusIn,
    1LL,
    this->klass->vtable._5_Awake.methodPtr);
  mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8193/*"LAST_WAR_ID"*/, 0LL);
  if ( !warInfoList )
LABEL_36:
    sub_1B64C5C(mEarthRoot, v14);
  v18 = (int)mEarthRoot;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)warInfoList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v19 )
      break;
    current = (MapControl_WarInfo_o *)v45.fields._current;
    if ( !v45.fields._current )
      sub_1B64C5C(v19, v20);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v45.fields._current, 0LL);
    v23 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v23, 0LL) )
        goto LABEL_21;
      IsEvent = WarEntity__IsEvent(v23, 0LL);
      if ( warId <= v18 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v23, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_21;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_21;
        if ( (unsigned int)mCoreType >= max_length )
          sub_1B64C64(PrioredCoordinates, v28);
        v30 = PrioredCoordinates->m_Items[mCoreType];
        if ( v30 && (int)v30->max_length >= 2 )
        {
          v31 = v30->m_Items[1];
          v32 = v30->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          v35 = (UnityEngine_Object_o *)EarthPoint;
          if ( EarthPoint )
          {
            methodPtr_low = LOBYTE(CylinderPoint_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(EarthPoint->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (CylinderPoint_c *)EarthPoint->klass->_2.typeHierarchy[methodPtr_low - 1] != CylinderPoint_TypeInfo )
            {
              sub_1B64F1C(EarthPoint);
LABEL_39:
              sub_1B64C5C(EarthPoint_object, v41);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v37 = UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
          if ( v37 )
          {
            v39 = (float)(v32 + 192.0) + -90.0;
            sincosf(v39 * 0.017453, &sinx, &cosx);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  cosx * 143.0,
                                  (float)(v31 / 90.0) * 120.0,
                                  sinx * 143.0,
                                  (const MethodInfo_2E25E2C *)Method_BaseCore_CreateEarthPoint_CylinderPoint___);
            if ( !EarthPoint_object )
              goto LABEL_39;
            *((float *)&EarthPoint_object[7].klass + 1) = v39;
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !v35 )
              sub_1B64C5C(v37, v38);
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
            if ( !v42 )
              sub_1B64C5C(0LL, v43);
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
    &v45,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall CylinderCore__Update(CylinderCore_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB772 & 1) == 0 )
  {
    sub_1B64A00(&Method_CStateManager_CylinderCore__update__, method);
    byte_49FB772 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3063CC0 *)Method_CStateManager_CylinderCore__update__);
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

  if ( (byte_49FB76F & 1) == 0 )
  {
    sub_1B64A00(&CylinderPoint_TypeInfo, method);
    byte_49FB76F = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  float mInertialSpd; // s8
  float v9; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v11; // s8
  float v12; // s0
  __int64 v13; // x1
  CTouch_c *v14; // x0
  float x; // s8
  float v16; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  float v18; // s8
  UnityEngine_GameObject_o *v19; // x20
  float AutoRotationSpeed; // s0
  CylinderCore_c *v21; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  float *p_BASE_ROT_X; // x8
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  UnityEngine_GameObject_o *v25; // x20
  float v26; // s0
  float y; // s1
  float z; // s2
  bool v29; // w21
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FB778 & 1) == 0 )
  {
    sub_1B64A00(&CTouch_TypeInfo, that);
    sub_1B64A00(&CylinderCore_TypeInfo, v5);
    sub_1B64A00(&Method_TransitionCalculator_Vector3__IsFinished__, v6);
    this = (CylinderCore_StateMain_o *)sub_1B64A00(&Method_TransitionCalculator_Vector3__Update__, v7);
    byte_49FB778 = 1;
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
      if ( !byte_49FB748 )
      {
        sub_1B64A00(&CTouch_TypeInfo, v13);
        byte_49FB748 = 1;
      }
      v14 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v14 = CTouch_TypeInfo;
      }
      x = v14->static_fields->mScrPosDelta.fields.x;
      if ( !byte_49FB749 )
      {
        sub_1B64A00(&CTouch_TypeInfo, v13);
        v14 = CTouch_TypeInfo;
        byte_49FB749 = 1;
      }
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = CTouch_TypeInfo;
      }
      v16 = v14->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v16) )
        v16 = x;
      v4->fields.mInertialSpd = v16 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v4->fields.mInertialSpd;
    if ( !byte_49F9825 )
    {
      sub_1B64A00(&UnityEngine_Mathf_TypeInfo, that);
      byte_49F9825 = 1;
    }
    v9 = fmaxf(fabsf(mInertialSpd), 0.0) * 0.000001;
    static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
    if ( v9 <= (float)(static_fields->Epsilon * 8.0) )
      v9 = static_fields->Epsilon * 8.0;
    if ( vabds_f32(0.0, mInertialSpd) >= v9 )
    {
      v11 = v4->fields.mInertialSpd;
      v12 = v11 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      v4->fields.mInertialSpd = v12;
      if ( fabsf(v12) < 0.004 )
        v4->fields.mInertialSpd = 0.0;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v18 = v4->fields.mInertialSpd;
  v19 = gameObject;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  GameObjectExtensions__AddLocalEulerAngleY(v19, v18 + AutoRotationSpeed, 0LL);
  v21 = CylinderCore_TypeInfo;
  mEarthRoot = that->fields.mEarthRoot;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v21 = CylinderCore_TypeInfo;
  }
  p_BASE_ROT_X = &v21->static_fields->BASE_ROT_X;
  v30.fields.y = 0.0;
  v30.fields.x = *p_BASE_ROT_X;
  v30.fields.z = p_BASE_ROT_X[1];
  GameObjectExtensions__SetLocalEulerAngle(mEarthRoot, v30, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator
    && !TransitionCalculator_Vector3___IsFinished(
          focusInOutPositionCalculator,
          (const MethodInfo_376EBFC *)Method_TransitionCalculator_Vector3__IsFinished__) )
  {
    this = (CylinderCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
    if ( this )
    {
      v25 = that->fields.mEarthRoot;
      *(UnityEngine_Vector3_o *)&v26 = TransitionCalculator_Vector3___Update(
                                         (TransitionCalculator_Vector3__o *)this,
                                         (const MethodInfo_376EB8C *)Method_TransitionCalculator_Vector3__Update__);
      v29 = 1;
      goto LABEL_37;
    }
LABEL_38:
    sub_1B64C5C(this, that);
  }
  v25 = that->fields.mEarthRoot;
  v26 = that->fields.mFocusTgtPos.fields.x;
  y = that->fields.mFocusTgtPos.fields.y;
  z = that->fields.mFocusTgtPos.fields.z;
  v29 = 0;
LABEL_37:
  GameObjectExtensions__SetLocalPosition(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  that->fields.mIsFocusMoving = v29;
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
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v6; // x8

  if ( (byte_49FB77B & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_1B64A00(&StringLiteral_6911/*"GO_NEXT"*/, v4);
    byte_49FB77B = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v6 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v6->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_1B64C5C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_63399372(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_6911/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CylinderCore_StateZoomIn__begin(
        CylinderCore_StateZoomIn_o *this,
        CylinderCore_o *that,
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
  __int64 v14; // x1
  __int64 v15; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Component_o **v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct CylinderCore_o *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  float IntpTime_AutoResume; // s0
  struct CylinderCore_o *mCore; // x8
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  TerminalPramsManager_c *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  __int64 v37; // x10
  float v38; // s8
  float v39; // s8
  float v40; // s1
  __int64 v41; // x1
  float v42; // s0
  int v43; // s1
  int v44; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  EasingObject_o *v47; // x21
  float mSpdTime; // s8
  System_Action_o *v49; // x22
  System_Action_o *v50; // x23
  __int64 v51; // x1
  TerminalPramsManager_c *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v58; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB779 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    sub_1B64A00(&CylinderCore_TypeInfo, v5);
    sub_1B64A00(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B64A00(&Method_CylinderCore_StateZoomIn_GoNext__, v9);
    sub_1B64A00(&Method_CylinderCore_StateZoomIn_begin__, v10);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v11);
    sub_1B64A00(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v12);
    sub_1B64A00(&Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v13);
    sub_1B64A00(&CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v14);
    byte_49FB779 = 1;
  }
  v15 = sub_1B64C4C(CylinderCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_58;
  *(_QWORD *)(v15 + 48) = that;
  v20 = (UnityEngine_Component_o **)(v15 + 48);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 48), (int32_t)that, v18, v19);
  *(_QWORD *)(v15 + 88) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 88), (int32_t)this, v21, v22);
  v23 = *(struct CylinderCore_o **)(v15 + 48);
  this->fields.mCore = v23;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v23, v24, v25);
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
    if ( !byte_49FB886 )
    {
      sub_1B64A00(&TerminalPramsManager_TypeInfo, v17);
      byte_49FB886 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    if ( v29->static_fields->_IsAutoResume_k__BackingField )
    {
      CylinderCore_StateZoomIn__GoNext(this, v17);
      return;
    }
    v55 = Method_CylinderCore_StateZoomIn_begin__;
    if ( (*((_BYTE *)Method_CylinderCore_StateZoomIn_begin__ + 83) & 2) != 0 )
      v55 = (_QWORD *)sub_1B64A18(Method_CylinderCore_StateZoomIn_begin__);
    v56 = (System_Reflection_MethodBase_o *)sub_1B649E4(v55, v55[4]);
    OverwriteAssetSoundName__PlayCommonSe(v56, 23, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v58 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v58, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.4, v58, 0LL);
      return;
    }
LABEL_58:
    sub_1B64C5C(transform, v17);
  }
  transform = *v20;
  if ( !*v20 )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8C2B4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v15 + 16) = Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)Component_object, v32, v33);
  v34 = *(_QWORD *)(v15 + 48);
  if ( !v34 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v34 + 32);
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(v15 + 24) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v35 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v36 = *(_QWORD *)(v15 + 48);
  v37 = *(_QWORD *)(v35 + 32);
  LODWORD(v35) = *(_DWORD *)(v35 + 40);
  *(_QWORD *)(v15 + 36) = v37;
  *(_DWORD *)(v15 + 44) = v35;
  if ( !v36 )
    goto LABEL_58;
  transform = *(UnityEngine_Component_o **)(v36 + 80);
  if ( !transform )
    goto LABEL_58;
  v38 = *(float *)(v15 + 40);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_58;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = *(UnityEngine_Component_o **)(v15 + 48);
  *(float *)(v15 + 40) = v38 - localPosition.fields.y;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint((CylinderCore_o *)transform, v17);
  if ( !transform )
    goto LABEL_58;
  if ( !*v20 )
    goto LABEL_58;
  v39 = *((float *)&transform[4].fields + 1);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v20, 0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)(&v40 - 1) = UnityEngine_Transform__get_localEulerAngles(
                                           (UnityEngine_Transform_o *)transform,
                                           0LL);
  *(float *)(v15 + 56) = v40;
  *(float *)(v15 + 60) = v39 + 90.0;
  if ( vabds_f32(v40, v39) > 180.0 )
    *(float *)(v15 + 56) = v40 + -360.0;
  if ( !*v20 )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)(*v20)[1].monitor;
  if ( !transform )
    goto LABEL_58;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_58;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localEulerAngles(
                                     (UnityEngine_Transform_o *)transform,
                                     0LL);
  *(float *)(v15 + 64) = v42;
  *(_DWORD *)(v15 + 68) = v43;
  *(_DWORD *)(v15 + 72) = v44;
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v41);
    byte_49F9821 = 1;
    v42 = *(float *)(v15 + 64);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v15 + 76) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v15 + 84) = z;
  if ( v42 > 180.0 )
  {
    v42 = v42 + -360.0;
    *(float *)(v15 + 64) = v42;
  }
  if ( *(float *)(v15 + 72) > 180.0 )
    *(float *)(v15 + 64) = v42 + -360.0;
  v47 = *(EasingObject_o **)(v15 + 16);
  mSpdTime = this->fields.mSpdTime;
  v49 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v15,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__,
    0LL);
  v50 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v15,
    Method_CylinderCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__,
    0LL);
  if ( !v47 )
    goto LABEL_58;
  EasingObject__Play(v47, mSpdTime, v49, v50, 0.0, 0, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB886 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v51);
    byte_49FB886 = 1;
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
      v53 = (_QWORD *)sub_1B64A18(Method_CylinderCore_StateZoomIn_begin__);
    v54 = (System_Reflection_MethodBase_o *)sub_1B649E4(v53, v53[4]);
    OverwriteAssetSoundName__PlayCommonSe(v54, 23, 0LL);
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
  __int64 v5; // x1
  float v6; // s8
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_49FB77A & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64A00(&Method_CylinderCore_StateZoomIn_GoNext__, v5);
    byte_49FB77A = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v6 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v6 <= 0.4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_CylinderCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_1B64C5C(v9, v10);
      CommonUI__maskFadeout((CommonUI_o *)Instance, 2, v6, v8, 0LL);
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
  v5 = Easing__Func_46301680(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0LL);
  v6 = Easing__Func_46301680(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0LL);
  v7 = Easing__Func_46301680(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 1, 0LL);
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
  v13 = Easing__Func_46301680(v4->fields.startRotY, v4->fields.endRotY, v11, 6, 0LL);
  GameObjectExtensions__SetLocalEulerAngleY(v12, v13, 0LL);
  v14 = v4->fields.that;
  if ( !v14 )
LABEL_13:
    sub_1B64C5C(this, method);
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
  if ( (byte_49FB77C & 1) == 0 )
  {
    this = (CylinderCore_StateZoomIn___c__DisplayClass3_0_o *)sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FB77C = 1;
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
  if ( !byte_49FB886 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FB886 = 1;
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
    sub_1B64C5C(this, method);
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
  CylinderCore_o *mCore; // x0
  struct CylinderCore_o *v6; // x8

  if ( (byte_49FB77E & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, method);
    sub_1B64A00(&StringLiteral_6911/*"GO_NEXT"*/, v4);
    byte_49FB77E = 1;
  }
  mCore = this->fields.mCore;
  if ( !mCore
    || (CylinderCore__SetState(mCore, 0, v2), (v6 = this->fields.mCore) == 0LL)
    || (mCore = (CylinderCore_o *)v6->fields.mTerminalMap) == 0LL
    || (mCore = (CylinderCore_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)mCore,
                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mCore = (CylinderCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mCore, 0LL)) == 0LL )
  {
    sub_1B64C5C(mCore, method);
  }
  HutongGames_PlayMaker_Fsm__Event_63399372(
    (HutongGames_PlayMaker_Fsm_o *)mCore,
    (System_String_o *)StringLiteral_6911/*"GO_NEXT"*/,
    0LL);
}


void __fastcall CylinderCore_StateZoomOut__begin(
        CylinderCore_StateZoomOut_o *this,
        CylinderCore_o *that,
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
  int32_t v17; // w2
  int32_t v18; // w3
  CylinderCore_o **v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct CylinderCore_o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  float IntpTime_AutoResume; // s0
  struct TerminalSceneComponent_o *mTerminalScene; // x22
  float v27; // s8
  CylinderCore_StateZoomOut___c_c *v28; // x0
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v30; // x24
  struct CylinderCore_StateZoomOut___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  UnityEngine_Object_o *mFocusEarthPoint; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x8
  int v40; // w10
  __int64 v41; // x8
  float v42; // s9
  _BOOL4 mIsFocusIn; // w22
  __int64 v44; // x9
  char *v45; // x8
  CylinderCore_o *v46; // x8
  UnityEngine_GameObject_o *v47; // x20
  __int64 v48; // x1
  struct UnityEngine_Vector3_StaticFields *v49; // x8
  float z; // s1
  CylinderCore_c *v51; // x0
  int *v52; // x8
  EasingObject_o *v53; // x20
  int v54; // s0
  int v55; // s1
  System_Action_o *v56; // x21
  System_Action_o *v57; // x22
  __int64 v58; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB77D & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, that);
    sub_1B64A00(&CylinderCore_TypeInfo, v5);
    sub_1B64A00(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    sub_1B64A00(&Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, v9);
    sub_1B64A00(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v10);
    sub_1B64A00(&Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v11);
    sub_1B64A00(&CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v12);
    sub_1B64A00(&CylinderCore_StateZoomOut___c_TypeInfo, v13);
    byte_49FB77D = 1;
  }
  v14 = sub_1B64C4C(CylinderCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_39;
  *(_QWORD *)(v14 + 48) = that;
  v19 = (CylinderCore_o **)(v14 + 48);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 48), (int32_t)that, v17, v18);
  *(_QWORD *)(v14 + 80) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 80), (int32_t)this, v20, v21);
  v22 = *(struct CylinderCore_o **)(v14 + 48);
  this->fields.mCore = v22;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v22, v23, v24);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.5, 0LL);
  if ( !*v19 )
    goto LABEL_39;
  mTerminalScene = (*v19)->fields.mTerminalScene;
  if ( !mTerminalScene )
    goto LABEL_39;
  *(_WORD *)&mTerminalScene->fields._IsReq_InitEarthRotateY_k__BackingField = 256;
  v27 = IntpTime_AutoResume;
  v28 = CylinderCore_StateZoomOut___c_TypeInfo;
  if ( !CylinderCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_StateZoomOut___c_TypeInfo);
    v28 = CylinderCore_StateZoomOut___c_TypeInfo;
  }
  _9__1_0 = v28->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = CylinderCore_StateZoomOut___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v30, Method_CylinderCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    static_fields = CylinderCore_StateZoomOut___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v32, v33);
  }
  TerminalSceneComponent__Fadein_WorldDisp_41756268(mTerminalScene, 0.4, _9__1_0, 0LL);
  if ( !*v19 )
    goto LABEL_39;
  mFocusEarthPoint = (UnityEngine_Object_o *)(*v19)->fields.mFocusEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFocusEarthPoint, 0LL, 0LL) )
  {
    CylinderCore_StateZoomOut__GoNext(this, v16);
    return;
  }
  transform = (UnityEngine_Component_o *)*v19;
  if ( !*v19 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8C2B4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 16) = Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)Component_object, v37, v38);
  transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    transform = (UnityEngine_Component_o *)CylinderCore_TypeInfo;
  }
  v39 = *(_QWORD *)&transform[7].fields.m_CachedPtr;
  v40 = *(_DWORD *)(v39 + 40);
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v39 + 32);
  v41 = *(_QWORD *)(v14 + 48);
  *(_DWORD *)(v14 + 32) = v40;
  if ( !v41 )
    goto LABEL_39;
  transform = *(UnityEngine_Component_o **)(v41 + 80);
  if ( !transform )
    goto LABEL_39;
  v42 = *(float *)(v14 + 28);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !transform )
    goto LABEL_39;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  *(float *)(v14 + 28) = v42 - localPosition.fields.y;
  if ( !*v19 )
    goto LABEL_39;
  mIsFocusIn = (*v19)->fields.mIsFocusIn;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
  v44 = 8LL;
  if ( !mIsFocusIn )
    v44 = 20LL;
  v45 = (char *)CylinderCore_TypeInfo->static_fields + v44;
  v58 = *(_QWORD *)v45;
  transform = *(UnityEngine_Component_o **)(v14 + 48);
  *(_DWORD *)(v14 + 44) = *((_DWORD *)v45 + 2);
  *(_QWORD *)(v14 + 36) = v58;
  if ( !transform )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  v46 = *v19;
  if ( !*v19 )
    goto LABEL_39;
  v47 = (UnityEngine_GameObject_o *)transform;
  transform = (UnityEngine_Component_o *)CylinderCore__get_mFocusCylinderPoint(v46, v16);
  if ( !transform )
    goto LABEL_39;
  GameObjectExtensions__SetLocalEulerAngleY(v47, *((float *)&transform[4].fields + 1) + 90.0, 0LL);
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v48);
    byte_49F9821 = 1;
  }
  v49 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v49->zeroVector.fields.z;
  *(_QWORD *)(v14 + 68) = *(_QWORD *)&v49->zeroVector.fields.x;
  *(float *)(v14 + 76) = z;
  v51 = CylinderCore_TypeInfo;
  if ( !CylinderCore_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CylinderCore_TypeInfo);
    v51 = CylinderCore_TypeInfo;
  }
  v52 = (int *)v51->static_fields;
  v53 = *(EasingObject_o **)(v14 + 16);
  v54 = *v52;
  v55 = v52[1];
  *(_DWORD *)(v14 + 60) = 0;
  *(_DWORD *)(v14 + 56) = v54;
  *(_DWORD *)(v14 + 64) = v55;
  v56 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v14,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__,
    0LL);
  v57 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v14,
    Method_CylinderCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__,
    0LL);
  if ( !v53 )
LABEL_39:
    sub_1B64C5C(transform, v16);
  EasingObject__Play(v53, v27, v56, v57, 0.0, 0, 0LL);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FB77F & 1) == 0 )
  {
    sub_1B64A00(&CylinderCore_StateZoomOut___c_TypeInfo, v1);
    byte_49FB77F = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(CylinderCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CylinderCore_StateZoomOut___c_TypeInfo->static_fields->__9 = (struct CylinderCore_StateZoomOut___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)CylinderCore_StateZoomOut___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  v5 = Easing__Func_46301680(this->fields.startPos.fields.x, this->fields.endPos.fields.x, mNow, 3, 0LL);
  v6 = Easing__Func_46301680(v4->fields.startPos.fields.y, v4->fields.endPos.fields.y, mNow, 15, 0LL);
  v7 = Easing__Func_46301680(v4->fields.startPos.fields.z, v4->fields.endPos.fields.z, mNow, 2, 0LL);
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
    sub_1B64C5C(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = Easing__Func_46301680(0.0, 1.0, mNow, 5, 0LL);
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
    sub_1B64C5C(this, method);
  }
  CylinderCore_StateZoomOut__GoNext((CylinderCore_StateZoomOut_o *)this, method);
}
void __fastcall EarthCore___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct EarthCore_StaticFields *static_fields; // x9
  struct EarthCore_StaticFields *v5; // x8

  if ( (byte_42EA9EE & 1) == 0 )
  {
    sub_B5D5C4(&EarthCore_TypeInfo, v1, v2, v3);
    byte_42EA9EE = 1;
  }
  static_fields = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->FOCUS_IN_POS.fields.x = 0xC32A0000C3848000LL;
  static_fields->FOCUS_IN_POS.fields.z = 0.0;
  v5 = EarthCore_TypeInfo->static_fields;
  *(_QWORD *)&v5->FOCUS_OUT_POS.fields.x = 0xC3480000C3848000LL;
  v5->FOCUS_OUT_POS.fields.z = 0.0;
}


void __fastcall EarthCore___ctor(EarthCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EarthCore_StateMain_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EA9ED & 1) == 0 )
  {
    sub_B5D5C4(&EarthCore_StateMain_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9ED = 1;
  }
  v5 = (EarthCore_StateMain_o *)sub_B5D694(EarthCore_StateMain_TypeInfo);
  EarthCore_StateMain___ctor(v5, 0LL);
  this->fields.mStateMain = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mStateMain,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseCore___ctor((BaseCore_o *)this, 0LL);
}


void __fastcall EarthCore__Awake(EarthCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct CStateManager_EarthCore__o *mFSM; // x8
  struct CStateManager_EarthCore__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct CStateManager_EarthCore__o *v32; // x21
  EarthCore_StateNone_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *transform; // x0
  __int64 v35; // x1
  struct CStateManager_EarthCore__o *v36; // x21
  EarthCore_StateZoomIn_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  EarthCore_StateZoomOut_o *v39; // x21
  const MethodInfo *v40; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *mEarthRoot; // x20
  struct UnityEngine_MeshRenderer_o *Component_srcLineSprite; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  EarthCore_c *klass; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA9E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EarthCore___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_EarthCore__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_EarthCore__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v11, v12, v13);
    sub_B5D5C4(&EarthCore_StateNone_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&EarthCore_StateZoomIn_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&EarthCore_StateZoomOut_TypeInfo, v20, v21, v22);
    byte_42EA9E8 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  mFSM = this->fields.mFSM;
  this->fields.mCoreType = 0;
  if ( !mFSM )
  {
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_EarthCore__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v25,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_EarthCore___ctor__);
    this->fields.mFSM = (struct CStateManager_EarthCore__o *)v25;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = this->fields.mFSM;
    v33 = (EarthCore_StateNone_o *)sub_B5D694(EarthCore_StateNone_TypeInfo);
    EarthCore_StateNone___ctor(v33, 0LL);
    if ( !v32 )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v32,
      0,
      (IState_T__o *)v33,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EarthCore__add__);
    transform = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    if ( !*p_mFSM )
      goto LABEL_13;
    CStateManager_QAASpotStateController_IMapSpot___add(
      transform,
      1,
      (IState_T__o *)this->fields.mStateMain,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EarthCore__add__);
    v36 = this->fields.mFSM;
    v37 = (EarthCore_StateZoomIn_o *)sub_B5D694(EarthCore_StateZoomIn_TypeInfo);
    EarthCore_StateZoomIn___ctor(v37, 0LL);
    if ( !v36
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)v36,
            2,
            (IState_T__o *)v37,
            (const MethodInfo_2BB26FC *)Method_CStateManager_EarthCore__add__),
          v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v39 = (EarthCore_StateZoomOut_o *)sub_B5D694(EarthCore_StateZoomOut_TypeInfo),
          EarthCore_StateZoomOut___ctor(v39, 0LL),
          !v38) )
    {
LABEL_13:
      sub_B5D69C(transform, v35);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      3,
      (IState_T__o *)v39,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EarthCore__add__);
    EarthCore__SetState(this, 0, v40);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(gameObject, 350.0, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(mEarthRoot, one, 0LL);
  transform = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
  if ( !transform )
    goto LABEL_13;
  Component_srcLineSprite = (struct UnityEngine_MeshRenderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)transform,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  this->fields.mMeshRenderer = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mMeshRenderer,
    (System_Int32_array **)Component_srcLineSprite,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  transform = (CStateManager_QAASpotStateController_IMapSpot__o *)this->fields.mEarthRoot;
  if ( !transform )
    goto LABEL_13;
  transform = (CStateManager_QAASpotStateController_IMapSpot__o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)transform,
                                                                    0LL);
  if ( !transform )
    goto LABEL_13;
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
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  EarthCore_c *v19; // x0
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct EarthCore_StaticFields *static_fields; // x10
  float v24; // s0
  float v25; // w9
  float v26; // w8
  float v27; // w10
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct TransitionCalculator_float__o **p_focusInOutScaleCalculator; // x0
  System_Int32_array **v41; // x1
  float v42; // s8
  System_Func_Vector3__Vector3__float__Vector3__o *v43; // x20
  System_Func_float__float__float__float__o *v44; // x21
  float x; // s11
  float y; // s12
  float z; // s13
  float v48; // s9
  float v49; // s10
  float v50; // s14
  TransitionCalculator_Vector3__o *v51; // x0
  struct TransitionCalculator_Vector3__o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  unsigned int LocalScale; // s0
  float mFocusTgtScl; // s9
  float v61; // s10
  TransitionCalculator_float__o *v62; // x20
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42EA9E7 & 1) == 0 )
  {
    sub_B5D5C4(&EarthCore_TypeInfo, isFocusIn, isForce, method);
    sub_B5D5C4(&Method_TransitionCalculator_Vector3___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_TransitionCalculator_float___ctor__, v10, v11, v12);
    sub_B5D5C4(&TransitionCalculator_Vector3__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&TransitionCalculator_float__TypeInfo, v16, v17, v18);
    byte_42EA9E7 = 1;
  }
  this->fields.mIsFocusIn = isFocusIn;
  v19 = EarthCore_TypeInfo;
  if ( isFocusIn )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v19 = EarthCore_TypeInfo;
    }
    p_x = &v19->static_fields->FOCUS_IN_POS.fields.x;
    p_y = p_x + 1;
    p_z = p_x + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      v19 = EarthCore_TypeInfo;
    }
    static_fields = v19->static_fields;
    p_x = &static_fields->FOCUS_OUT_POS.fields.x;
    p_y = &static_fields->FOCUS_OUT_POS.fields.y;
    p_z = &static_fields->FOCUS_OUT_POS.fields.z;
  }
  v24 = 0.95;
  v25 = *p_y;
  v26 = *p_x;
  v27 = *p_z;
  if ( this->fields.mIsFocusIn )
    v24 = 1.0;
  this->fields.mFocusTgtPos.fields.x = v26;
  this->fields.mFocusTgtPos.fields.y = v25;
  this->fields.mFocusTgtPos.fields.z = v27;
  this->fields.mFocusTgtScl = v24;
  if ( isForce )
  {
    v63.fields.z = v27;
    v63.fields.y = v25;
    v63.fields.x = v26;
    GameObjectExtensions__SetLocalPosition(this->fields.mEarthRoot, v63, 0LL);
    GameObjectExtensions__SetLocalScale_32432652(this->fields.mEarthRoot, this->fields.mFocusTgtScl, 0LL);
    this->fields.focusInOutPositionCalculator = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      0LL,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    this->fields.focusInOutScaleCalculator = 0LL;
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    v41 = 0LL;
  }
  else
  {
    v42 = ChangedFPSUtil__CovertFrameNumToSecond(10, 0LL);
    v43 = ExtraEasing__AsymptoticSeriesVector3(0.35, 10.0, 0LL);
    v44 = ExtraEasing__AsymptoticSeriesFloat(0.35, 10.0, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mEarthRoot, 0LL);
    x = this->fields.mFocusTgtPos.fields.x;
    y = this->fields.mFocusTgtPos.fields.y;
    z = this->fields.mFocusTgtPos.fields.z;
    v48 = LocalPosition.fields.x;
    v49 = LocalPosition.fields.y;
    v50 = LocalPosition.fields.z;
    v51 = (TransitionCalculator_Vector3__o *)sub_B5D694(TransitionCalculator_Vector3__TypeInfo);
    v65.fields.x = v48;
    v65.fields.y = v49;
    v65.fields.z = v50;
    v66.fields.x = x;
    v66.fields.y = y;
    v66.fields.z = z;
    v52 = v51;
    TransitionCalculator_Vector3____ctor(
      v51,
      v65,
      v66,
      v42,
      (System_Func_T__T__float__T__o *)v43,
      (const MethodInfo_264E608 *)Method_TransitionCalculator_Vector3___ctor__);
    this->fields.focusInOutPositionCalculator = v52;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.focusInOutPositionCalculator,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    LocalScale = (unsigned int)GameObjectExtensions__GetLocalScale(this->fields.mEarthRoot, 0LL);
    mFocusTgtScl = this->fields.mFocusTgtScl;
    v61 = *(float *)&LocalScale;
    v62 = (TransitionCalculator_float__o *)sub_B5D694(TransitionCalculator_float__TypeInfo);
    TransitionCalculator_float____ctor(
      v62,
      v61,
      mFocusTgtScl,
      v42,
      (System_Func_T__T__float__T__o *)v44,
      (const MethodInfo_264E344 *)Method_TransitionCalculator_float___ctor__);
    p_focusInOutScaleCalculator = &this->fields.focusInOutScaleCalculator;
    this->fields.focusInOutScaleCalculator = v62;
    v41 = (System_Int32_array **)v62;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_focusInOutScaleCalculator, v41, v34, v35, v36, v37, v38, v39);
}


int32_t __fastcall EarthCore__GetState(EarthCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EarthCore_o *v4; // x19
  struct CStateManager_EarthCore__o *mFSM; // x8

  v4 = this;
  if ( (byte_42EA9EB & 1) == 0 )
  {
    this = (EarthCore_o *)sub_B5D5C4(&Method_CStateManager_EarthCore__getState__, (_DWORD)method, v2, v3);
    byte_42EA9EB = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return mStateMain->fields._InertialSpdOld_k__BackingField;
}


void __fastcall EarthCore__OnPress(EarthCore_o *this, const MethodInfo *method)
{
  struct EarthCore_StateMain_o *mStateMain; // x8

  mStateMain = this->fields.mStateMain;
  this->fields.mIsTouch = 1;
  if ( !mStateMain )
    sub_B5D69C(this, method);
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
    sub_B5D69C(mMeshRenderer, is_disp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMeshRenderer, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore__SetState(EarthCore_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_EarthCore__o *mFSM; // x0

  if ( (byte_42EA9EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EarthCore__setState__, state, (_DWORD)method, v3);
    byte_42EA9EC = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_EarthCore__setState__);
}


void __fastcall EarthCore__Setup(
        EarthCore_o *this,
        System_Collections_Generic_List_MapControl_WarInfo__o *warInfoList,
        bool isFocusIn,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  __int64 v25; // x1
  UnityEngine_GameObject_o *mEarthRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v28; // w20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  MapControl_WarInfo_o *current; // x22
  WarEntity_o *Mine; // x0
  WarEntity_o *v33; // x23
  int32_t warId; // w21
  _BOOL4 IsEvent; // w0
  __int64 mCoreType; // x27
  System_Single_array_array *PrioredCoordinates; // x0
  int max_length; // w8
  System_Single_array *v39; // x8
  float v40; // s8
  float v41; // s9
  bool IsWarOpen; // w22
  UnityEngine_Object_o *EarthPoint; // x23
  _BOOL8 v44; // x0
  __int64 v45; // x1
  float v46; // s8
  float v47; // s9
  float v48; // s14
  float v49; // s10
  float v50; // s8
  float v51; // s0
  Il2CppObject *EarthPoint_object; // x0
  __int64 v53; // x1
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x0
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA9EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BaseCore_CreateEarthPoint_EarthPoint___, (_DWORD)warInfoList, isFocusIn, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_8453/*"LAST_WAR_ID"*/, v22, v23, v24);
    byte_42EA9EA = 1;
  }
  memset(&v58, 0, sizeof(v58));
  BaseCore__SetTerminalData((BaseCore_o *)this, 0LL);
  mEarthRoot = this->fields.mEarthRoot;
  if ( !mEarthRoot
    || (mEarthRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mEarthRoot, 0LL)) == 0LL
    || (UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)mEarthRoot, this->fields.mRootQua, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalEulerAngle(gameObject, zero, 0LL),
        ((void (__fastcall *)(EarthCore_o *, bool, __int64, Il2CppMethodPointer))this->klass->vtable._4_FocusInOut.method)(
          this,
          isFocusIn,
          1LL,
          this->klass->vtable._5_Awake.methodPtr),
        mEarthRoot = (UnityEngine_GameObject_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_8453/*"LAST_WAR_ID"*/, 0LL),
        !warInfoList) )
  {
    sub_B5D69C(mEarthRoot, v25);
  }
  v28 = (int)mEarthRoot;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)warInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v29 )
      break;
    current = (MapControl_WarInfo_o *)v58.fields.current;
    if ( !v58.fields.current )
      sub_B5D69C(v29, v30);
    Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)v58.fields.current, 0LL);
    v33 = Mine;
    if ( Mine )
    {
      warId = current->fields.warId;
      if ( WarEntity__IsFolder(Mine, 0LL) && !WarEntity__IsDisplayEarthPointWithoutMap(v33, 0LL) )
        goto LABEL_19;
      IsEvent = WarEntity__IsEvent(v33, 0LL);
      if ( warId <= v28 || IsEvent )
      {
        mCoreType = this->fields.mCoreType;
        PrioredCoordinates = WarEntity__GetPrioredCoordinates(v33, 0LL);
        if ( !PrioredCoordinates )
          goto LABEL_19;
        max_length = PrioredCoordinates->max_length;
        if ( max_length < 2 )
          goto LABEL_19;
        if ( (unsigned int)mCoreType >= max_length )
        {
          v56 = sub_B5D6C8(PrioredCoordinates);
          sub_B5D668(v56, 0LL);
        }
        v39 = PrioredCoordinates->m_Items[mCoreType];
        if ( v39 && (int)v39->max_length >= 2 )
        {
          v40 = v39->m_Items[1];
          v41 = v39->m_Items[2];
          IsWarOpen = BaseCore__IsWarOpen((BaseCore_o *)this, current, 0LL);
          EarthPoint = (UnityEngine_Object_o *)BaseCore__GetEarthPoint((BaseCore_o *)this, warId, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v44 = UnityEngine_Object__op_Equality(EarthPoint, 0LL, 0LL);
          if ( v44 )
          {
            v46 = v40 * 0.017453;
            v47 = (float)(v41 + 9.5) * 0.017453;
            v48 = cosf(v46) * 0.5;
            v49 = cosf(v47);
            v50 = sinf(v46);
            v51 = sinf(v47);
            EarthPoint_object = BaseCore__CreateEarthPoint_object_(
                                  (BaseCore_o *)this,
                                  warId,
                                  v49 * v48,
                                  v50 * 0.5,
                                  v48 * v51,
                                  (const MethodInfo_1AD5BEC *)Method_BaseCore_CreateEarthPoint_EarthPoint___);
            if ( !EarthPoint_object )
              sub_B5D69C(0LL, v53);
            BaseEarthPoint__Setup((BaseEarthPoint_o *)EarthPoint_object, IsWarOpen, this->fields.mEarthEffCamera, 0LL);
          }
          else
          {
            if ( !EarthPoint )
              sub_B5D69C(v44, v45);
            v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EarthPoint, 0LL);
            if ( !v54 )
              sub_B5D69C(0LL, v55);
            UnityEngine_GameObject__SetActive(v54, IsWarOpen, 0LL);
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
    &v58,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
}


void __fastcall EarthCore__Update(EarthCore_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_EarthCore__o *mFSM; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42EA9E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EarthCore__update__, (_DWORD)method, v2, v3);
    byte_42EA9E9 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_EarthCore__update__);
  if ( this->fields.mIsReqZoomIn && EarthCore__GetState(this, method) == 1 )
  {
    BaseCore__EndSlideServant((BaseCore_o *)this, 0LL);
    this->fields.mIsReqZoomIn = 0;
    EarthCore__SetState(this, 2, v6);
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
  __int64 v3; // x3
  EarthCore_StateMain_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  float AutoRotationSpeed; // s8
  float *p_fields; // x20
  float mInertialSpd; // t1
  float v21; // s9
  float v22; // s0
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CTouch_c *v26; // x0
  float x; // s9
  float v28; // s0
  float v29; // s9
  TransitionCalculator_Vector3__o *focusInOutPositionCalculator; // x0
  TransitionCalculator_float__o *focusInOutScaleCalculator; // x0
  bool v32; // w8
  UnityEngine_GameObject_o *mEarthRoot; // x20
  UnityEngine_GameObject_o *v34; // x20
  float v35; // s0
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E64CF & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_TransitionCalculator_float__IsFinished__, v6, v7, v8);
    sub_B5D5C4(&Method_TransitionCalculator_Vector3__IsFinished__, v9, v10, v11);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v12, v13, v14);
    this = (EarthCore_StateMain_o *)sub_B5D5C4(&Method_TransitionCalculator_Vector3__Update__, v15, v16, v17);
    byte_42E64CF = 1;
  }
  if ( !that )
    goto LABEL_40;
  AutoRotationSpeed = BaseCore__GetAutoRotationSpeed((BaseCore_o *)that, 0LL);
  if ( that->fields.mIsTouch && that->fields.mIsFocusIn && !that->fields.mIsFocusMoving )
  {
    v5->fields.mInertialSpd = 0.0;
    p_fields = (float *)&v5->fields;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    AutoRotationSpeed = 0.0;
    if ( CTouch__isDrag(0LL) )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42E658F )
      {
        sub_B5D5C4(&CTouch_TypeInfo, v23, v24, v25);
        byte_42E658F = 1;
      }
      v26 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v26 = CTouch_TypeInfo;
      }
      x = v26->static_fields->mScrPosDelta.fields.x;
      if ( !byte_42E6590 )
      {
        sub_B5D5C4(&CTouch_TypeInfo, v23, v24, v25);
        v26 = CTouch_TypeInfo;
        byte_42E6590 = 1;
      }
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = CTouch_TypeInfo;
      }
      v28 = v26->static_fields->mScrPosDeltaOld.fields.x;
      if ( fabsf(x) >= fabsf(v28) )
        v28 = x;
      *p_fields = v28 * -0.2;
    }
  }
  else
  {
    mInertialSpd = v5->fields.mInertialSpd;
    p_fields = (float *)&v5->fields;
    if ( !UnityEngine_Mathf__Approximately(mInertialSpd, 0.0, 0LL) )
    {
      v21 = *p_fields;
      v22 = v21 * ChangedFPSUtil__CalcAccelForCurrentFPS(0.88, 0LL);
      *p_fields = v22;
      if ( fabsf(v22) < 0.004 )
        *p_fields = 0.0;
    }
  }
  v29 = *p_fields;
  this = (EarthCore_StateMain_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)that, 0LL);
  if ( !this )
    goto LABEL_40;
  v36.fields.y = AutoRotationSpeed + v29;
  v36.fields.x = 0.0;
  v36.fields.z = 0.0;
  UnityEngine_Transform__Rotate_35742348((UnityEngine_Transform_o *)this, v36, 0LL);
  focusInOutPositionCalculator = that->fields.focusInOutPositionCalculator;
  if ( focusInOutPositionCalculator )
  {
    if ( !TransitionCalculator_Vector3___IsFinished(
            focusInOutPositionCalculator,
            (const MethodInfo_264E77C *)Method_TransitionCalculator_Vector3__IsFinished__) )
    {
      focusInOutScaleCalculator = that->fields.focusInOutScaleCalculator;
      if ( focusInOutScaleCalculator )
      {
        if ( !TransitionCalculator_float___IsFinished(
                focusInOutScaleCalculator,
                (const MethodInfo_264E484 *)Method_TransitionCalculator_float__IsFinished__) )
        {
          this = (EarthCore_StateMain_o *)that->fields.focusInOutPositionCalculator;
          if ( this )
          {
            mEarthRoot = that->fields.mEarthRoot;
            v37 = TransitionCalculator_Vector3___Update(
                    (TransitionCalculator_Vector3__o *)this,
                    (const MethodInfo_264E6C4 *)Method_TransitionCalculator_Vector3__Update__);
            GameObjectExtensions__SetLocalPosition(mEarthRoot, v37, 0LL);
            this = (EarthCore_StateMain_o *)that->fields.focusInOutScaleCalculator;
            if ( this )
            {
              v34 = that->fields.mEarthRoot;
              v35 = TransitionCalculator_float___Update(
                      (TransitionCalculator_float__o *)this,
                      (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
              GameObjectExtensions__SetLocalScale_32432652(v34, v35, 0LL);
              v32 = 1;
              goto LABEL_36;
            }
          }
LABEL_40:
          sub_B5D69C(this, that);
        }
      }
    }
  }
  GameObjectExtensions__SetLocalPosition(that->fields.mEarthRoot, that->fields.mFocusTgtPos, 0LL);
  GameObjectExtensions__SetLocalScale_32432652(that->fields.mEarthRoot, that->fields.mFocusTgtScl, 0LL);
  v32 = 0;
LABEL_36:
  that->fields.mIsFocusMoving = v32;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v9; // x8

  if ( (byte_42E64D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v5, v6, v7);
    byte_42E64D2 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v9 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v9->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B5D69C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_14925220(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EarthCore_StateZoomIn__begin(
        EarthCore_StateZoomIn_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v35; // x1
  UnityEngine_Component_o **v36; // x21
  UnityEngine_Object_o *klass; // x22
  int v38; // w2
  __int64 v39; // x3
  TerminalPramsManager_c *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v42; // s0
  int v43; // s1
  int v44; // s2
  int v45; // s3
  __int64 v46; // x8
  __int64 v47; // x9
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x8
  UnityEngine_GameObject_o *v51; // x0
  EasingObject_o *v52; // x21
  float mSpdTime; // s8
  System_Action_o *v59; // x22
  System_Action_o *v60; // x23
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  TerminalPramsManager_c *v64; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v66; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E64D0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SeManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_EarthCore_StateZoomIn_GoNext__, v18, v19, v20);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, v27, v28, v29);
    sub_B5D5C4(&EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo, v30, v31, v32);
    byte_42E64D0 = 1;
  }
  v33 = sub_B5D694(EarthCore_StateZoomIn___c__DisplayClass3_0_TypeInfo);
  EarthCore_StateZoomIn___c__DisplayClass3_0___ctor((EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_54;
  *(_QWORD *)(v33 + 24) = that;
  v36 = (UnityEngine_Component_o **)(v33 + 24);
  sub_B5D560(v33 + 24);
  *(_QWORD *)(v33 + 144) = this;
  sub_B5D560(v33 + 144);
  this->fields.mThat = *(struct EarthCore_o **)(v33 + 24);
  sub_B5D560(&this->fields);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  this->fields.mSpdTime = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*v36 )
    goto LABEL_54;
  klass = (UnityEngine_Object_o *)(*v36)[3].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B48 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v35, v38, v39);
      byte_42E4B48 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    if ( v40->static_fields->_IsAutoResume_k__BackingField )
    {
      EarthCore_StateZoomIn__GoNext(this, v35);
      return;
    }
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v66, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 2, 0.4, v66, 0LL);
      return;
    }
LABEL_54:
    sub_B5D69C(transform, v35);
  }
  transform = *v36;
  if ( !*v36 )
    goto LABEL_54;
  gameObject = UnityEngine_Component__get_gameObject(transform, 0LL);
  *(_QWORD *)(v33 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                            gameObject,
                            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(v33 + 16);
  transform = *(UnityEngine_Component_o **)(v33 + 24);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)&v42 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v46 = *(_QWORD *)(v33 + 24);
  *(_DWORD *)(v33 + 32) = v42;
  *(_DWORD *)(v33 + 36) = v43;
  *(_DWORD *)(v33 + 40) = v44;
  *(_DWORD *)(v33 + 44) = v45;
  if ( !v46 )
    goto LABEL_54;
  v47 = *(_QWORD *)(v46 + 72);
  if ( !v47 )
    goto LABEL_54;
  *(_OWORD *)(v33 + 48) = *(_OWORD *)(v47 + 88);
  *(_DWORD *)(v46 + 104) = v42;
  *(_DWORD *)(v46 + 108) = v43;
  *(_DWORD *)(v46 + 112) = v44;
  *(_DWORD *)(v46 + 116) = v45;
  v48 = *(_QWORD *)(v33 + 24);
  if ( !v48 )
    goto LABEL_54;
  transform = *(UnityEngine_Component_o **)(v48 + 24);
  if ( !transform )
    goto LABEL_54;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_54;
  *(UnityEngine_Quaternion_o *)(v33 + 64) = UnityEngine_Transform__get_rotation(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  v49 = *(_QWORD *)(v33 + 24);
  *(UnityEngine_Quaternion_o *)(v33 + 80) = identity;
  if ( !v49 )
    goto LABEL_54;
  *(UnityEngine_Vector3_o *)(v33 + 96) = GameObjectExtensions__GetLocalPosition(
                                           (UnityEngine_GameObject_o *)*(_QWORD *)(v49 + 24),
                                           0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  v50 = *(_QWORD *)(v33 + 24);
  *(UnityEngine_Vector3_o *)(v33 + 108) = zero;
  if ( !v50 )
    goto LABEL_54;
  transform = *(UnityEngine_Component_o **)(v50 + 24);
  if ( !transform )
    goto LABEL_54;
  v51 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  *(UnityEngine_Vector3_o *)(v33 + 120) = GameObjectExtensions__GetLocalScale(v51, 0LL);
  v52 = *(EasingObject_o **)(v33 + 16);
  __asm { FMOV            V0.2S, #6.0 }
  *(_QWORD *)(v33 + 132) = _D0;
  *(_DWORD *)(v33 + 140) = 1086324736;
  mSpdTime = this->fields.mSpdTime;
  v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)v33, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__0__, 0LL);
  v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)v33, Method_EarthCore_StateZoomIn___c__DisplayClass3_0__begin_b__1__, 0LL);
  if ( !v52 )
    goto LABEL_54;
  EasingObject__Play(v52, mSpdTime, v59, v60, 0.0, 1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v61, v62, v63);
    byte_42E4B48 = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v64 = TerminalPramsManager_TypeInfo;
  }
  if ( !v64->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(22, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float v11; // s8
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E64D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_EarthCore_StateZoomIn_GoNext__, v8, v9, v10);
    byte_42E64D1 = 1;
  }
  if ( this->fields.mStartTime > 0.0 )
  {
    v11 = this->fields.mSpdTime - (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.mStartTime);
    if ( v11 <= 0.4 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EarthCore_StateZoomIn_GoNext__, 0LL);
      if ( !Instance )
        sub_B5D69C(v14, v15);
      CommonUI__maskFadeout(Instance, 2, v11, v13, 0LL);
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
  double mStartTime; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  UnityEngine_Transform_o *v20; // x0
  float32x2_t v21; // d10
  float z; // s11
  float32x2_t v23; // d13
  float v24; // s12
  UnityEngine_Transform_o *v25; // x20
  float v26; // s0
  float v27; // s2
  unsigned __int64 v28; // d0 OVERLAPPED
  float v29; // s2
  int v30; // s1
  struct EarthCore_o *v31; // x8
  UnityEngine_Transform_o *v32; // x0
  float32x2_t v33; // d9
  float v34; // s10
  float32x2_t v35; // d12
  float v36; // s11
  UnityEngine_Transform_o *v37; // x19
  float v38; // s0
  float v39; // s0
  float v40; // s2
  unsigned __int64 v41; // d0 OVERLAPPED
  float v42; // s2
  int v43; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_15;
  v3 = this;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__DecSin(mStartTime, 0LL);
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_15;
  v6 = v5;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_15;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_from, v3->fields.qua_to, v7, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_15;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_from,
                                        v3->fields.root_qua_to,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_15;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v21.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_from.fields.x;
  z = v3->fields.root_pos_from.fields.z;
  v23.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_to.fields.x;
  v24 = v3->fields.root_pos_to.fields.z;
  v25 = v20;
  v26 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v25 )
    goto LABEL_15;
  v27 = (float)(v24 - z) * v26;
  v28 = vadd_f32(v21, vmul_n_f32(vsub_f32(v23, v21), v26)).n64_u64[0];
  v29 = z + v27;
  v30 = HIDWORD(v28);
  UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v28, 0LL);
  v31 = v3->fields.that;
  if ( !v31 )
    goto LABEL_15;
  this = (EarthCore_StateZoomIn___c__DisplayClass3_0_o *)v31->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v33.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v34 = v3->fields.root_scl_from.fields.z;
  v35.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v36 = v3->fields.root_scl_to.fields.z;
  v37 = v32;
  v38 = StepFunc__Acc5(mStartTime, 0LL);
  v39 = UnityEngine_Mathf__Clamp01(v38, 0LL);
  if ( !v37 )
LABEL_15:
    sub_B5D69C(this, method);
  v40 = (float)(v36 - v34) * v39;
  v41 = vadd_f32(v33, vmul_n_f32(vsub_f32(v35, v33), v39)).n64_u64[0];
  v42 = v34 + v40;
  v43 = HIDWORD(v41);
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v41, 0LL);
}


void __fastcall EarthCore_StateZoomIn___c__DisplayClass3_0___begin_b__1(
        EarthCore_StateZoomIn___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *that; // x0
  struct EarthCore_o *v6; // x8
  struct EarthCore_o *v7; // x8
  struct EarthCore_o *v8; // x8
  int v9; // w2
  __int64 v10; // x3
  TerminalPramsManager_c *v11; // x0

  if ( (byte_42E6035 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6035 = 1;
  }
  that = (UnityEngine_Component_o *)this->fields.that;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(that, 0LL);
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.qua_to, 0LL);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)v6->fields.mEarthRoot;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)that, this->fields.root_qua_to, 0LL);
  v7 = this->fields.that;
  if ( !v7 )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)v7->fields.mEarthRoot;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)that, this->fields.root_pos_to, 0LL);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)v8->fields.mEarthRoot;
  if ( !that )
    goto LABEL_27;
  that = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)that, 0LL);
  if ( !that )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)that, this->fields.root_scl_to, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v9, v10);
    byte_42E4B48 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( v11->static_fields->_IsAutoResume_k__BackingField )
  {
    that = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( that )
    {
      EarthCore_StateZoomIn__GoNext((EarthCore_StateZoomIn_o *)that, 0LL);
      return;
    }
LABEL_27:
    sub_B5D69C(that, method);
  }
}


void __fastcall EarthCore_StateZoomOut___ctor(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EarthCore_StateZoomOut__GoNext(EarthCore_StateZoomOut_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EarthCore_o *mThat; // x0
  struct EarthCore_o *v9; // x8

  if ( (byte_42E64D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6975/*"GO_NEXT"*/, v5, v6, v7);
    byte_42E64D4 = 1;
  }
  mThat = this->fields.mThat;
  if ( !mThat
    || (EarthCore__SetState(mThat, 0, 0LL), (v9 = this->fields.mThat) == 0LL)
    || (mThat = (EarthCore_o *)v9->fields.mTerminalMap) == 0LL
    || (mThat = (EarthCore_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 (UnityEngine_GameObject_o *)mThat,
                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (mThat = (EarthCore_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)mThat, 0LL)) == 0LL )
  {
    sub_B5D69C(mThat, method);
  }
  HutongGames_PlayMaker_Fsm__Event_14925220(
    (HutongGames_PlayMaker_Fsm_o *)mThat,
    (System_String_o *)StringLiteral_6975/*"GO_NEXT"*/,
    0LL);
}


void __fastcall EarthCore_StateZoomOut__begin(
        EarthCore_StateZoomOut_o *this,
        EarthCore_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x19
  void *transform; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x21
  float IntpTime_AutoResume; // s0
  __int64 v38; // x8
  __int64 v39; // x8
  TerminalSceneComponent_o *v40; // x22
  float v41; // s8
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x8
  System_Action_o *_9__1_0; // x23
  Il2CppObject *v44; // x24
  struct EarthCore_StateZoomOut___c_StaticFields *v45; // x0
  UnityEngine_Object_o *v46; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x8
  int *v51; // x8
  int *v52; // x9
  int *v53; // x10
  int *v54; // x10
  int v55; // w9
  int v56; // w11
  int v57; // w10
  __int64 v58; // x8
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x8
  float v61; // s0
  EasingObject_o *v62; // x20
  System_Action_o *v63; // x21
  System_Action_o *v64; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E64D3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&EarthCore_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_EarthCore_StateZoomOut___c__begin_b__1_0__, v18, v19, v20);
    sub_B5D5C4(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, v21, v22, v23);
    sub_B5D5C4(&Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, v24, v25, v26);
    sub_B5D5C4(&EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&EarthCore_StateZoomOut___c_TypeInfo, v30, v31, v32);
    byte_42E64D3 = 1;
  }
  v33 = sub_B5D694(EarthCore_StateZoomOut___c__DisplayClass1_0_TypeInfo);
  EarthCore_StateZoomOut___c__DisplayClass1_0___ctor((EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_52;
  *(_QWORD *)(v33 + 24) = that;
  v36 = v33 + 24;
  sub_B5D560(v33 + 24);
  *(_QWORD *)(v33 + 144) = this;
  sub_B5D560(v33 + 144);
  this->fields.mThat = *(struct EarthCore_o **)(v33 + 24);
  sub_B5D560(&this->fields);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(1.0, 0LL);
  if ( !*(_QWORD *)v36 )
    goto LABEL_52;
  v38 = *(_QWORD *)(*(_QWORD *)v36 + 48LL);
  if ( !v38 )
    goto LABEL_52;
  *(_BYTE *)(v38 + 392) = 0;
  if ( !*(_QWORD *)v36 )
    goto LABEL_52;
  v39 = *(_QWORD *)(*(_QWORD *)v36 + 48LL);
  if ( !v39 )
    goto LABEL_52;
  *(_BYTE *)(v39 + 394) = 1;
  if ( !*(_QWORD *)v36 )
    goto LABEL_52;
  v40 = *(TerminalSceneComponent_o **)(*(_QWORD *)v36 + 48LL);
  v41 = IntpTime_AutoResume;
  transform = EarthCore_StateZoomOut___c_TypeInfo;
  if ( (BYTE3(EarthCore_StateZoomOut___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EarthCore_StateZoomOut___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EarthCore_StateZoomOut___c_TypeInfo);
    transform = EarthCore_StateZoomOut___c_TypeInfo;
  }
  static_fields = (struct EarthCore_StateZoomOut___c_StaticFields *)*((_QWORD *)transform + 23);
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)transform + 307) & 4) != 0 && !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__1_0, v44, Method_EarthCore_StateZoomOut___c__begin_b__1_0__, 0LL);
    v45 = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
    v45->__9__1_0 = _9__1_0;
    sub_B5D560(&v45->__9__1_0);
  }
  if ( !v40 )
    goto LABEL_52;
  TerminalSceneComponent__Fadein_WorldDisp_18307880(v40, 0.4, _9__1_0, 0LL);
  if ( !*(_QWORD *)v36 )
    goto LABEL_52;
  v46 = *(UnityEngine_Object_o **)(*(_QWORD *)v36 + 72LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v46, 0LL, 0LL) )
  {
    EarthCore_StateZoomOut__GoNext(this, v35);
    return;
  }
  transform = *(void **)v36;
  if ( !*(_QWORD *)v36 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  *(_QWORD *)(v33 + 16) = GameObjectExtensions__SafeGetComponent_UIWidget_(
                            gameObject,
                            (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(v33 + 16);
  transform = *(void **)(v33 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v48 = *(_QWORD *)(v33 + 24);
  *(UnityEngine_Quaternion_o *)(v33 + 48) = rotation;
  if ( !v48 )
    goto LABEL_52;
  *(_OWORD *)(v33 + 32) = *(_OWORD *)(v48 + 104);
  transform = *(void **)(v48 + 24);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_52;
  v68 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0LL);
  v49 = *(_QWORD *)(v33 + 24);
  *(UnityEngine_Quaternion_o *)(v33 + 80) = v68;
  if ( !v49 )
    goto LABEL_52;
  *(_OWORD *)(v33 + 64) = *(_OWORD *)(v49 + 88);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v49 + 24), 0LL);
  v50 = *(_QWORD *)(v33 + 24);
  *(UnityEngine_Vector3_o *)(v33 + 108) = LocalPosition;
  if ( !v50 )
    goto LABEL_52;
  transform = EarthCore_TypeInfo;
  if ( *(_BYTE *)(v50 + 136) )
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v51 = (int *)*((_QWORD *)transform + 23);
    v52 = v51 + 1;
    v53 = v51 + 2;
  }
  else
  {
    if ( (WORD1(EarthCore_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !EarthCore_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EarthCore_TypeInfo);
      transform = EarthCore_TypeInfo;
    }
    v54 = (int *)*((_QWORD *)transform + 23);
    v51 = v54 + 3;
    v52 = v54 + 4;
    v53 = v54 + 5;
  }
  v55 = *v52;
  v56 = *v51;
  v57 = *v53;
  v58 = *(_QWORD *)(v33 + 24);
  *(_DWORD *)(v33 + 96) = v56;
  *(_DWORD *)(v33 + 100) = v55;
  *(_DWORD *)(v33 + 104) = v57;
  if ( !v58 )
    goto LABEL_52;
  transform = *(void **)(v58 + 24);
  if ( !transform )
    goto LABEL_52;
  v59 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)transform, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(v59, 0LL);
  v60 = *(_QWORD *)(v33 + 24);
  *(UnityEngine_Vector3_o *)(v33 + 132) = LocalScale;
  if ( !v60 )
    goto LABEL_52;
  v61 = 0.95;
  v62 = *(EasingObject_o **)(v33 + 16);
  if ( *(_BYTE *)(v60 + 136) )
    v61 = 1.0;
  *(float *)(v33 + 120) = v61;
  *(float *)(v33 + 124) = v61;
  *(float *)(v33 + 128) = v61;
  v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)v33, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__1__, 0LL);
  v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)v33, Method_EarthCore_StateZoomOut___c__DisplayClass1_0__begin_b__2__, 0LL);
  if ( !v62 )
LABEL_52:
    sub_B5D69C(transform, v35);
  EasingObject__Play_33961128(v62, 1.0, 0.0, v41, v63, v64, 0.0, 3, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EarthCore_StateZoomOut___c_StaticFields *static_fields; // x0

  if ( (byte_42E6036 & 1) == 0 )
  {
    sub_B5D5C4(&EarthCore_StateZoomOut___c_TypeInfo, v1, v2, v3);
    byte_42E6036 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EarthCore_StateZoomOut___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EarthCore_StateZoomOut___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EarthCore_StateZoomOut___c_o *)v4;
  sub_B5D560(static_fields);
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
  double mStartTime; // d8
  double v5; // d0
  double v6; // d9
  float v7; // s9
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct EarthCore_o *that; // x8
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  struct EarthCore_o *v19; // x8
  UnityEngine_Transform_o *v20; // x0
  float32x2_t v21; // d10
  float z; // s11
  float32x2_t v23; // d13
  float v24; // s12
  UnityEngine_Transform_o *v25; // x20
  float v26; // s0
  float v27; // s2
  unsigned __int64 v28; // d0 OVERLAPPED
  float v29; // s2
  int v30; // s1
  struct EarthCore_o *v31; // x8
  UnityEngine_Transform_o *v32; // x0
  float32x2_t v33; // d9
  float v34; // s10
  float32x2_t v35; // d12
  float v36; // s11
  UnityEngine_Transform_o *v37; // x19
  float v38; // s0
  float v39; // s0
  float v40; // s2
  unsigned __int64 v41; // d0 OVERLAPPED
  float v42; // s2
  int v43; // s1

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_15;
  v3 = this;
  mStartTime = eo->fields.mStartTime;
  v5 = StepFunc__DecSin(mStartTime, 0LL);
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v3->fields.that;
  if ( !this )
    goto LABEL_15;
  v6 = v5;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !this )
    goto LABEL_15;
  v7 = v6;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__Slerp(v3->fields.qua_to, v3->fields.qua_from, v7, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(transform, *(UnityEngine_Quaternion_o *)&v9, 0LL);
  that = v3->fields.that;
  if ( !that )
    goto LABEL_15;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)that->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Slerp(
                                        v3->fields.root_qua_to,
                                        v3->fields.root_qua_from,
                                        v7,
                                        0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_rotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
  v19 = v3->fields.that;
  if ( !v19 )
    goto LABEL_15;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v19->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v21.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_to.fields.x;
  z = v3->fields.root_pos_to.fields.z;
  v23.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_pos_from.fields.x;
  v24 = v3->fields.root_pos_from.fields.z;
  v25 = v20;
  v26 = UnityEngine_Mathf__Clamp01(v7, 0LL);
  if ( !v25 )
    goto LABEL_15;
  v27 = (float)(v24 - z) * v26;
  v28 = vadd_f32(v21, vmul_n_f32(vsub_f32(v23, v21), v26)).n64_u64[0];
  v29 = z + v27;
  v30 = HIDWORD(v28);
  UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v28, 0LL);
  v31 = v3->fields.that;
  if ( !v31 )
    goto LABEL_15;
  this = (EarthCore_StateZoomOut___c__DisplayClass1_0_o *)v31->fields.mEarthRoot;
  if ( !this )
    goto LABEL_15;
  v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v33.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_to.fields.x;
  v34 = v3->fields.root_scl_to.fields.z;
  v35.n64_u64[0] = *(unsigned __int64 *)&v3->fields.root_scl_from.fields.x;
  v36 = v3->fields.root_scl_from.fields.z;
  v37 = v32;
  v38 = StepFunc__Acc5(mStartTime, 0LL);
  v39 = UnityEngine_Mathf__Clamp01(v38, 0LL);
  if ( !v37 )
LABEL_15:
    sub_B5D69C(this, method);
  v40 = (float)(v36 - v34) * v39;
  v41 = vadd_f32(v33, vmul_n_f32(vsub_f32(v35, v33), v39)).n64_u64[0];
  v42 = v34 + v40;
  v43 = HIDWORD(v41);
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v41, 0LL);
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
    sub_B5D69C(that, method);
  }
  EarthCore_StateZoomOut__GoNext((EarthCore_StateZoomOut_o *)that, 0LL);
}
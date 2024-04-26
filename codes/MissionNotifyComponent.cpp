void __fastcall MissionNotifyComponent___ctor(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionNotifyComponent__Awake(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v11; // s0
  float v12; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v14; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x21
  MissionNotifyComponent_StateNone_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x21
  MissionNotifyComponent_StateFrameIn_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  MissionNotifyComponent_StateShowing_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x20
  MissionNotifyComponent_StateFrameOut_o *v30; // x21
  const MethodInfo *v31; // x2
  int v32; // w8
  void *v33; // x20
  unsigned int v34; // w21
  struct UnityEngine_Camera_o *main; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0

  if ( (byte_4350CD6 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MissionNotifyComponent___ctor__);
    sub_B70694(&Method_CStateManager_MissionNotifyComponent__add__);
    sub_B70694(&CStateManager_MissionNotifyComponent__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&MissionNotifyComponent_StateFrameIn_TypeInfo);
    sub_B70694(&MissionNotifyComponent_StateFrameOut_TypeInfo);
    sub_B70694(&MissionNotifyComponent_StateNone_TypeInfo);
    sub_B70694(&MissionNotifyComponent_StateShowing_TypeInfo);
    byte_4350CD6 = 1;
  }
  gameObject = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    gameObject = ManagerConfig_TypeInfo;
  }
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_21;
  v11 = (float)baseSp->fields.mHeight * 0.5;
  v12 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v12 - v11) + 1.0;
  this->fields.mFrameOutPosY = v12 + v11;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseAtlas,
    (System_Int32_array **)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v14);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v16,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v16;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    mFSM = this->fields.mFSM;
    v24 = (MissionNotifyComponent_StateNone_o *)sub_B70764(MissionNotifyComponent_StateNone_TypeInfo);
    MissionNotifyComponent_StateNone___ctor(v24, 0LL);
    if ( !mFSM )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MissionNotifyComponent__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v26 = (MissionNotifyComponent_StateFrameIn_o *)sub_B70764(MissionNotifyComponent_StateFrameIn_TypeInfo);
    MissionNotifyComponent_StateFrameIn___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MissionNotifyComponent__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v28 = (MissionNotifyComponent_StateShowing_o *)sub_B70764(MissionNotifyComponent_StateShowing_TypeInfo);
    MissionNotifyComponent_StateShowing___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MissionNotifyComponent__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v30 = (MissionNotifyComponent_StateFrameOut_o *)sub_B70764(MissionNotifyComponent_StateFrameOut_TypeInfo);
    MissionNotifyComponent_StateFrameOut___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_2C800A8 *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v31);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_21;
  v32 = *((_DWORD *)gameObject + 6);
  v33 = gameObject;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= v32 )
      {
        v42 = sub_B70798(gameObject);
        sub_B70738(v42, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v33 + (int)v34 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 42) + 150, 0LL);
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
        goto LABEL_20;
    }
LABEL_21:
    sub_B7076C(gameObject, method);
  }
LABEL_20:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mCamera,
    (System_Int32_array **)main,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall MissionNotifyComponent__FrameIn(
        MissionNotifyComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionNotifyComponent__FrameInOut(this, 1, end_act, is_force, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent__FrameInOut(
        MissionNotifyComponent_o *this,
        bool is_framein,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  float v35; // s0
  float v36; // s2
  float mFrameOutPosY; // s1
  float v38; // s4
  float v39; // s3
  float v40; // s2
  float v41; // s9
  System_Action_o *v42; // x21
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  EasingObject_o *v50; // x19
  System_Action_o *v51; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4350CDB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__);
    sub_B70694(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__);
    sub_B70694(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
    byte_4350CDB = 1;
  }
  v9 = sub_B70764(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  MissionNotifyComponent___c__DisplayClass64_0___ctor((MissionNotifyComponent___c__DisplayClass64_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_26;
  *(_QWORD *)(v9 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = end_act;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 56), (System_Int32_array **)end_act, v18, v19, v20, v21, v22, v23);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v9 + 16) = gameObject;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), gameObject, v25, v26, v27, v28, v29, v30);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v9 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v35 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v9 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v38 = v36;
  else
    v38 = z;
  if ( is_framein )
    v36 = z;
  if ( is_framein )
    v39 = v35;
  else
    v39 = x;
  if ( is_framein )
    v35 = x;
  *(float *)(v9 + 32) = v36;
  if ( is_framein )
    v40 = mFrameOutPosY;
  else
    v40 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v9 + 48) = is_framein;
  *(_DWORD *)(v9 + 84) = !is_framein;
  *(float *)(v9 + 72) = v39;
  *(float *)(v9 + 76) = v40;
  *(float *)(v9 + 80) = v38;
  *(float *)(v9 + 24) = v35;
  *(float *)(v9 + 28) = mFrameOutPosY;
  if ( is_framein )
    v41 = 0.5;
  else
    v41 = 0.25;
  v42 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v42, 0LL);
    return;
  }
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                *(UnityEngine_GameObject_o **)(v9 + 16),
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 64) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 64), Component_UIWidget, v44, v45, v46, v47, v48, v49);
  v50 = *(EasingObject_o **)(v9 + 64);
  v51 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v50 )
LABEL_26:
    sub_B7076C(v10, v11);
  EasingObject__Play(v50, v41 * timeScale, v51, v42, 0.0, 17, 0LL);
}


void __fastcall MissionNotifyComponent__FrameOut(
        MissionNotifyComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionNotifyComponent__FrameInOut(this, 0, end_act, is_force, v4);
}


int32_t __fastcall MissionNotifyComponent__GetState(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  MissionNotifyComponent_o *v2; // x19
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4350CD9 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_B70694(&Method_CStateManager_MissionNotifyComponent__getState__);
    byte_4350CD9 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(this, method);
  return mFSM->fields.m_state;
}


bool __fastcall MissionNotifyComponent__IsBusy(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int32_t State; // w0
  const MethodInfo *v4; // x1

  State = MissionNotifyComponent__GetState(this, method);
  if ( State != 1 )
    LOBYTE(State) = MissionNotifyComponent__GetState(this, v4) == 2;
  return State;
}


bool __fastcall MissionNotifyComponent__IsPress(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIsPress;
}


void __fastcall MissionNotifyComponent__OnClick(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( MissionNotifyComponent__GetState(this, method) == 2 )
    MissionNotifyComponent__SetState(this, 3, v3);
}


void __fastcall MissionNotifyComponent__OnDragStart(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4350CDC & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EasingObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CDC = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v3) != 1 )
    {
LABEL_15:
      ActionExtensions__Call(this->fields.mDragStartAct, 0LL);
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          gameObject,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_14;
      if ( Component_srcLineSprite )
      {
        EasingObject__SetPause((EasingObject_o *)Component_srcLineSprite, 1, 0LL);
LABEL_14:
        MissionNotifyComponent__SetState(this, 2, v7);
        goto LABEL_15;
      }
    }
    sub_B7076C(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent__OnPress(
        MissionNotifyComponent_o *this,
        bool is_press,
        const MethodInfo *method)
{
  _BOOL4 mIsDragDone; // w8
  const MethodInfo *v5; // x2

  mIsDragDone = this->fields.mIsDragDone;
  this->fields.mIsPress = is_press;
  if ( mIsDragDone && MissionNotifyComponent__GetState(this, (const MethodInfo *)is_press) == 2 )
    MissionNotifyComponent__SetState(this, 3, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent__SetState(
        MissionNotifyComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_4350CDA & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MissionNotifyComponent__setState__);
    byte_4350CDA = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_MissionNotifyComponent__setState__);
}


void __fastcall MissionNotifyComponent__SetupAndPlay(
        MissionNotifyComponent_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *drag_start_act,
        System_Func_MissionNotifyComponent__o *frame_out_start_func,
        System_Action_MissionNotifyComponent__o *frame_out_end_act,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v11; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  int32_t v13; // w20
  DataMasterBase_o *v14; // x26
  int age; // w21
  bool IsMasterMission; // w24
  _BOOL4 v17; // w22
  UILabel_o *noLabel; // x26
  UnityEngine_GameObject_o *v19; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v21; // x27
  System_String_o *v22; // x0
  _BOOL4 v23; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  struct UnityEngine_GameObject_o *clearEffectPrefab; // x26
  int v29; // w22
  int32_t v30; // w21
  System_Func_MissionNotifyComponent__o *v31; // x20
  UnityEngine_GameObject_o *v32; // x26
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UnityEngine_Animation_o *v41; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Object_o *v49; // x28
  bool v50; // w0
  int v51; // w8
  __int64 v52; // x25
  unsigned int v53; // w23
  UnityEngine_GameObject_o *rewardMessage; // x25
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v56; // x25
  System_String_o *v57; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v59; // x9
  UnityEngine_Object_o *v60; // x25
  struct UILabel_o *v61; // x8
  System_String_o *v62; // x0
  __int64 *v63; // x8
  System_String_o *v64; // x25
  int v65; // w22
  int32_t age_high; // w26
  struct UISprite_o **p_typeSp; // x21
  UISprite_o *typeSp; // x27
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  AdManager_o *v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  const MethodInfo *v88; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v90; // x0
  __int64 v91; // x0
  int32_t mDepth; // [xsp+Ch] [xbp-74h]
  System_Action_MissionNotifyComponent__o *v93; // [xsp+10h] [xbp-70h]
  int v95; // [xsp+24h] [xbp-5Ch]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4350CD8 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_20739/*"master_mission_weekly"*/);
    sub_B70694(&StringLiteral_20738/*"master_mission_special"*/);
    sub_B70694(&StringLiteral_20734/*"master_mission_daily"*/);
    sub_B70694(&StringLiteral_20736/*"master_mission_extra"*/);
    sub_B70694(&StringLiteral_20737/*"master_mission_panel"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_9376/*"N0"*/);
    sub_B70694(&StringLiteral_20735/*"master_mission_event"*/);
    byte_4350CD8 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_WarQuestSelectionMaster )
    goto LABEL_119;
  v13 = (_DWORD)disp_info + 16;
  v14 = (DataMasterBase_o *)Instance;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_119;
    age = (int)entity->fields.age;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_B706AC(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_119;
    v11 = Instance;
    if ( !Instance )
      goto LABEL_119;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_120;
    *(_QWORD *)(Instance + 32) = SHIDWORD(entity->fields.age);
    if ( !v14 )
      goto LABEL_119;
    if ( DataMasterBase__isEntityExistsFromId(v14, (System_Int64_array *)Instance, 0LL) )
    {
      v17 = 1;
      v95 = 1;
    }
    else
    {
      v17 = age != 7;
      v95 = 0;
    }
  }
  else
  {
    v95 = 0;
    IsMasterMission = 0;
    age = 0;
    v17 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (__int64)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_119;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v17 & ((v95 | IsMasterMission) ^ 1), 0LL);
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_119;
  v19 = (UnityEngine_GameObject_o *)Instance;
  Instance = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v19 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v19, (Instance & 1) == 0, 0LL);
  Instance = (__int64)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.missionNameLabel;
    if ( !Instance )
      goto LABEL_119;
  }
  else
  {
    Instance = (__int64)this->fields.masterMissionNameLabel;
    if ( !Instance )
      goto LABEL_119;
  }
  WrapControlText__textAdjust((UILabel_o *)Instance, disp_info->fields.message, *(_DWORD *)(Instance + 416), 0, 0, 0LL);
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, disp_info->fields.condition > 0, 0LL);
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.progressBarNowSlider;
    if ( !Instance )
      goto LABEL_119;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressFrom / (float)disp_info->fields.condition,
      0LL);
    Instance = (__int64)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_119;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressTo / (float)disp_info->fields.condition,
      0LL);
    progressLabel = this->fields.progressLabel;
    v21 = System_Int32__ToString_39283984((int)disp_info + 44, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
    v22 = System_Int32__ToString_39283984((int)disp_info + 48, (System_String_o *)StringLiteral_9376/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_44760452(v21, (System_String_o *)StringLiteral_890/*"/"*/, v22, 0LL);
    if ( !progressLabel )
      goto LABEL_119;
    UILabel__set_text(progressLabel, (System_String_o *)Instance, 0LL);
  }
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_119;
    v23 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v23 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v23, banner_group, 0LL);
  Instance = (__int64)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v23, 0LL);
  Instance = (__int64)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !v23 )
  {
LABEL_86:
    v11 = 462LL;
    goto LABEL_87;
  }
  clearSp = this->fields.clearSp;
  v93 = frame_out_end_act;
  if ( !clearSp )
    goto LABEL_119;
  clearEffectPrefab = this->fields.clearEffectPrefab;
  v29 = age;
  mDepth = clearSp->fields.mDepth;
  v30 = v13;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v31 = frame_out_start_func;
  Instance = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)clearEffectPrefab,
                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_119;
  v32 = (UnityEngine_GameObject_o *)Instance;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = Component_srcLineSprite;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectSimpleAnim,
    (System_Int32_array **)Component_srcLineSprite,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v32,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  this->fields.mClearEffectAnim = v41;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mClearEffectAnim,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (__int64)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_119;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    frame_out_start_func = v31;
    v13 = v30;
    age = v29;
  }
  else
  {
    v49 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v50 = UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
    frame_out_start_func = v31;
    v13 = v30;
    age = v29;
    if ( v50 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_119;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v32, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                        v32,
                        (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_119;
  v51 = *(_DWORD *)(Instance + 24);
  v52 = Instance;
  if ( v51 >= 1 )
  {
    v53 = 0;
    while ( v53 < v51 )
    {
      Instance = *(_QWORD *)(v52 + 8LL * (int)v53 + 32);
      if ( !Instance )
        goto LABEL_119;
      UIWidget__set_depth((UIWidget_o *)Instance, mDepth + 1 + *(_DWORD *)(Instance + 168), 0LL);
      v51 = *(_DWORD *)(v52 + 24);
      if ( (int)++v53 >= v51 )
        goto LABEL_68;
    }
LABEL_120:
    v91 = sub_B70798(Instance);
    sub_B70738(v91, 0LL);
  }
LABEL_68:
  if ( !entity )
  {
    frame_out_end_act = v93;
    goto LABEL_86;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  frame_out_end_act = v93;
  if ( !rewardMessage )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(rewardMessage, Instance & 1, 0LL);
  Instance = (__int64)entity;
  if ( !entity )
    goto LABEL_119;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_119;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, *(&entity->fields.startType + 1), 0LL);
  if ( !GiftListById )
    goto LABEL_86;
  v56 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_119;
  v57 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          entity->fields.id,
          HIDWORD(entity->fields.age),
          1,
          0LL);
  Instance = System_String__IsNullOrEmpty(v57, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_119;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v57, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_119;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_119;
    v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_32499756(v90, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_117;
  }
  if ( !v56->max_length )
    goto LABEL_120;
  v59 = (int32_t *)v56->m_Items[0];
  if ( !v59 || !itemIcon )
LABEL_119:
    sub_B7076C(Instance, v11);
  ItemIconComponent__SetGift(this->fields.itemIcon, v59[5], v59[6], v59[7], 0, 0LL);
LABEL_117:
  Instance = (__int64)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_119;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v11 = 360LL;
LABEL_87:
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_119;
  UIWidget__set_width((UIWidget_o *)Instance, v11, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  v60 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v61 = this->fields.noLabel;
  if ( !v61 )
    goto LABEL_119;
  v62 = System_String__Concat_44758168((System_String_o *)Instance, v61->fields.mText, 0LL);
  UnityEngine_Object__set_name(v60, v62, 0LL);
  switch ( age )
  {
    case 1:
    case 7:
      v63 = &StringLiteral_20735/*"master_mission_event"*/;
      goto LABEL_98;
    case 2:
      v63 = &StringLiteral_20739/*"master_mission_weekly"*/;
      goto LABEL_98;
    case 3:
      v63 = &StringLiteral_20734/*"master_mission_daily"*/;
      goto LABEL_98;
    case 4:
      v63 = &StringLiteral_20736/*"master_mission_extra"*/;
      goto LABEL_98;
    case 5:
      v63 = &StringLiteral_20738/*"master_mission_special"*/;
      goto LABEL_98;
    case 6:
      v63 = &StringLiteral_20737/*"master_mission_panel"*/;
LABEL_98:
      v64 = (System_String_o *)*v63;
      break;
    default:
      v64 = 0LL;
      break;
  }
  v65 = age;
  if ( !entity || ((v95 ^ 1) & 1) != 0 )
  {
    p_typeSp = &this->fields.typeSp;
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_119;
    UISprite__set_spriteName((UISprite_o *)Instance, v64, 0LL);
  }
  else
  {
    age_high = HIDWORD(entity->fields.age);
    p_typeSp = &this->fields.typeSp;
    typeSp = this->fields.typeSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31552376(age_high, typeSp, v64, 0LL);
  }
  Instance = (__int64)*p_typeSp;
  if ( !*p_typeSp )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v23 && v65 == 3 )
  {
    v75 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v13, 0LL);
    if ( !v75 )
      goto LABEL_119;
    AdManager__TrackEvent(v75, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mDragStartAct,
    (System_Int32_array **)drag_start_act,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutStartFunc,
    (System_Int32_array **)frame_out_start_func,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mFrameOutEndAct,
    (System_Int32_array **)frame_out_end_act,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  MissionNotifyComponent__SetState(this, 1, v88);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x0

  if ( (byte_4350CD7 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_MissionNotifyComponent__update__);
    byte_4350CD7 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2C80124 *)Method_CStateManager_MissionNotifyComponent__update__);
}


NoticeNumberComponent_o *__fastcall MissionNotifyComponent__get_NoticeNumberPrefab(
        MissionNotifyComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.noticeNumberPrefab;
}


void __fastcall MissionNotifyComponent_StateFrameIn___ctor(
        MissionNotifyComponent_StateFrameIn_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameIn__begin(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  MissionNotifyComponent_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_434F40A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__);
    sub_B70694(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
    byte_434F40A = 1;
  }
  v4 = (MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *)sub_B70764(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_9;
  v4->fields.that = that;
  sub_B70630(&v4->fields);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(20, 0LL);
  v7 = v4->fields.that;
  v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v4,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v7 )
LABEL_9:
    sub_B7076C(v5, v6);
  MissionNotifyComponent__FrameIn(v7, v8, 0, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameIn__end(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateFrameIn__update(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(
        MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___begin_b__0(
        MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B7076C(0LL, method);
  MissionNotifyComponent__SetState(that, 2, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___ctor(
        MissionNotifyComponent_StateFrameOut_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut__begin(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *v5; // x21
  void *mFrameOutStartFunc; // x0
  __int64 v7; // x1
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_Fields *p_fields; // x19
  MissionNotifyComponent_StateFrameOut_Fields *v9; // x20
  UnityEngine_Object_o *mNextComp; // x20
  MissionNotifyComponent_o *v11; // x20
  System_Action_o *v12; // x22
  int v13; // w8
  void *v14; // x19
  unsigned int v15; // w20
  __int64 v16; // x0

  if ( (byte_434F40B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Func_MissionNotifyComponent__Invoke__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__);
    sub_B70694(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
    byte_434F40B = 1;
  }
  v5 = (MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *)sub_B70764(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_23;
  v5->fields.that = that;
  p_fields = &v5->fields;
  sub_B70630(&v5->fields);
  if ( !v5->fields.that )
    goto LABEL_23;
  mFrameOutStartFunc = v5->fields.that->fields.mFrameOutStartFunc;
  if ( !mFrameOutStartFunc )
    goto LABEL_23;
  this->fields.mNextComp = (struct MissionNotifyComponent_o *)System_Func_object___Invoke(
                                                                (System_Func_object__o *)mFrameOutStartFunc,
                                                                (const MethodInfo_2994AC4 *)Method_System_Func_MissionNotifyComponent__Invoke__);
  v9 = &this->fields;
  sub_B70630(v9);
  if ( !p_fields->that )
    goto LABEL_23;
  if ( !p_fields->that->fields.mIsDragDone )
  {
    mNextComp = (UnityEngine_Object_o *)v9->mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v11 = v5->fields.that;
      v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)v5,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v11 )
        goto LABEL_23;
      MissionNotifyComponent__FrameOut(v11, v12, 0, 0LL);
    }
  }
  mFrameOutStartFunc = p_fields->that;
  if ( !p_fields->that
    || (mFrameOutStartFunc = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mFrameOutStartFunc, 0LL)) == 0LL
    || (mFrameOutStartFunc = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                               (UnityEngine_GameObject_o *)mFrameOutStartFunc,
                               (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_23:
    sub_B7076C(mFrameOutStartFunc, v7);
  }
  v13 = *((_DWORD *)mFrameOutStartFunc + 6);
  v14 = mFrameOutStartFunc;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v16 = sub_B70798(mFrameOutStartFunc);
        sub_B70738(v16, 0LL);
      }
      mFrameOutStartFunc = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !mFrameOutStartFunc )
        break;
      UIWidget__set_depth((UIWidget_o *)mFrameOutStartFunc, *((_DWORD *)mFrameOutStartFunc + 42) - 50, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        return;
    }
    goto LABEL_23;
  }
}


void __fastcall MissionNotifyComponent_StateFrameOut__end(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  if ( (byte_434F40D & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_B70694(&Method_ActionExtensions_Call_MissionNotifyComponent___);
    byte_434F40D = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (BlankEarth_QAARotateEarthResponse_o *)that,
    (const MethodInfo_2BFC288 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 *p_fields; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x20
  float v16; // s0
  float v17; // s8
  float v18; // s0
  UnityEngine_Object_o *v19; // x19
  MissionNotifyComponent_StateFrameOut_Fields *v20; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  MissionNotifyComponent_o *v22; // x19
  System_Action_o *v23; // x20
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4

  if ( (byte_434F40C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__);
    sub_B70694(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
    byte_434F40C = 1;
  }
  v5 = (MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *)sub_B70764(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_26;
  v5->fields.that = that;
  p_fields = (__int64 *)&v5->fields;
  sub_B70630(&v5->fields);
  v6 = (__int64)v5->fields.that;
  if ( !v6 )
    goto LABEL_26;
  if ( *(_BYTE *)(v6 + 185) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    *(UnityEngine_Vector3_o *)&v10 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*p_fields )
      goto LABEL_26;
    *(float32x2_t *)(*p_fields + 188) = vmul_f32(*(float32x2_t *)(*p_fields + 188), vdup_n_s32(0x3F6147AEu));
    v6 = *p_fields;
    if ( !*p_fields )
      goto LABEL_26;
    v12 = v10 + *(float *)(v6 + 188);
    v13 = v11 + *(float *)(v6 + 192);
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    v24.fields.x = v12;
    v24.fields.y = v13;
    GameObjectExtensions__SetLocalPosition_32497320(v14, v24, 0LL);
    if ( !*p_fields )
      goto LABEL_26;
    v15 = *(_QWORD *)(*p_fields + 24);
    if ( !v15 )
      goto LABEL_26;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 424LL))(v15, *(_QWORD *)(*(_QWORD *)v15 + 432LL));
    if ( !*p_fields )
      goto LABEL_26;
    v6 = *(_QWORD *)(*p_fields + 24);
    if ( !v6 )
      goto LABEL_26;
    v17 = v16;
    v18 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 424LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 432LL));
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v15 + 440LL))(
           v15,
           *(_QWORD *)(*(_QWORD *)v15 + 448LL),
           v17 + (float)((float)(0.0 - v18) * 0.15));
    if ( !*p_fields )
      goto LABEL_26;
    v6 = *(_QWORD *)(*p_fields + 24);
    if ( !v6 )
      goto LABEL_26;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 424LL))(v6, *(_QWORD *)(*(_QWORD *)v6 + 432LL)) <= 0.01 )
    {
      v6 = *p_fields;
      if ( *p_fields )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)v6, 0, 0LL);
        return;
      }
LABEL_26:
      sub_B7076C(v6, v7);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    v20 = &this->fields;
    v19 = (UnityEngine_Object_o *)mNextComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      v6 = (__int64)v20->mNextComp;
      if ( !v20->mNextComp )
        goto LABEL_26;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)v6, 0LL) != 1 )
      {
        v20->mNextComp = 0LL;
        sub_B70630(v20);
        v22 = v5->fields.that;
        v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v22 )
          goto LABEL_26;
        MissionNotifyComponent__FrameOut(v22, v23, 0, 0LL);
      }
    }
  }
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___begin_b__0(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B7076C(0LL, method);
  MissionNotifyComponent__SetState(that, 0, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___update_b__0(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B7076C(0LL, method);
  MissionNotifyComponent__SetState(that, 0, 0LL);
}


void __fastcall MissionNotifyComponent_StateNone___ctor(
        MissionNotifyComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateNone__begin(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateNone__end(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateNone__update(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNotifyComponent_StateShowing___ctor(
        MissionNotifyComponent_StateShowing_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent_StateShowing__begin(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  SimpleAnimation_o *baseSp; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  UnityEngine_Object_o *mClearEffectAnim; // x20

  if ( (byte_434F40E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F40E = 1;
  }
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_18;
  baseSp = (SimpleAnimation_o *)that->fields.baseSp;
  if ( !baseSp )
    goto LABEL_18;
  ((void (__fastcall *)(SimpleAnimation_o *, const char *, float))baseSp->klass[1]._1.gc_desc)(
    baseSp,
    baseSp->klass[1]._1.name,
    1.0);
  mClearEffectSimpleAnim = (UnityEngine_Object_o *)that->fields.mClearEffectSimpleAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    baseSp = that->fields.mClearEffectSimpleAnim;
    if ( baseSp )
    {
      SimpleAnimation__Play(baseSp, 0LL);
      return;
    }
LABEL_18:
    sub_B7076C(baseSp, v6);
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mClearEffectAnim, 0LL, 0LL) )
  {
    baseSp = (SimpleAnimation_o *)that->fields.mClearEffectAnim;
    if ( !baseSp )
      goto LABEL_18;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)baseSp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateShowing__end(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  int v3; // s0
  struct UnityEngine_Vector2_o mTouchPosDifOld; // d0
  __int64 v8; // x0
  __int64 v9; // x1
  float v10; // s0
  float x; // w8
  struct UnityEngine_Vector2_o mTouchPosDif; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4

  mTouchPosDif = this->fields.mTouchPosDif;
  v13.fields.x = UnityEngine_Vector2__get_sqrMagnitude(*(UnityEngine_Vector2_o *)&v3, (const MethodInfo *)&mTouchPosDif);
  if ( v13.fields.x >= UnityEngine_Vector2__get_sqrMagnitude(v13, (const MethodInfo *)&this->fields.mTouchPosDifOld) )
  {
    mTouchPosDifOld.fields.x = mTouchPosDif.fields.x;
  }
  else
  {
    mTouchPosDifOld = this->fields.mTouchPosDifOld;
    mTouchPosDif = mTouchPosDifOld;
  }
  mTouchPosDif.fields.x = UnityEngine_Mathf__Clamp(mTouchPosDifOld.fields.x, -15.0, 15.0, 0LL);
  v10 = UnityEngine_Mathf__Clamp(mTouchPosDif.fields.y, -15.0, 15.0, 0LL);
  mTouchPosDif.fields.y = v10;
  if ( !that )
    sub_B7076C(v8, v9);
  x = mTouchPosDif.fields.x;
  that->fields.mInertiaSpd.fields.y = v10;
  that->fields.mInertiaSpd.fields.x = x;
}


void __fastcall MissionNotifyComponent_StateShowing__update(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  float32x2_t *v4; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Camera_o *mCamera; // x21
  int v9; // w8
  unsigned __int64 v10; // d0
  float v11; // s1
  float v12; // s8
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float32x2_t *)this;
  if ( (byte_434F40F & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_B70694(&CTouch_TypeInfo);
    byte_434F40F = 1;
  }
  if ( !that )
    sub_B7076C(this, that);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4[6].n64_f32[0]) < 2.0 )
      return;
LABEL_14:
    MissionNotifyComponent__SetState(that, 3, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v4[3].n64_u64[0] = v4[2].n64_u64[0];
  mCamera = that->fields.mCamera;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_30620996(mCamera, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) > 1 )
    v4[2].n64_u64[0] = v4[3].n64_u64[0];
  v9 = v4[6].n64_i32[1];
  if ( v9 < 1 )
  {
    LODWORD(v10) = v4[4].n64_u32[0];
    v11 = v4[4].n64_f32[1];
  }
  else
  {
    v10 = vsub_f32(v4[2], v4[3]).n64_u64[0];
    v11 = *((float *)&v10 + 1);
    v4[5].n64_u64[0] = v4[4].n64_u64[0];
    v4[4].n64_u64[0] = v10;
  }
  v12 = x + *(float *)&v10;
  v13 = y + v11;
  v4[6].n64_u32[1] = v9 + 1;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v15.fields.x = v12;
  v15.fields.y = v13;
  GameObjectExtensions__SetLocalPosition_32497320(v14, v15, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 2 )
    goto LABEL_14;
}


void __fastcall MissionNotifyComponent___c__DisplayClass64_0___ctor(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyComponent___c__DisplayClass64_0___FrameInOut_b__0(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSp; // x0
  __int64 v4; // x1
  struct MissionNotifyComponent_o *_4__this; // x8

  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, this->fields.pos_to, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (baseSp = _4__this->fields.baseSp) == 0LL )
    sub_B7076C(baseSp, v4);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))baseSp->klass->vtable._8_set_alpha.method)(
    baseSp,
    baseSp->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    (float)this->fields.alp_to);
  ActionExtensions__Call(this->fields.end_act, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent___c__DisplayClass64_0___FrameInOut_b__1(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  float mStartTime; // s4
  MissionNotifyComponent___c__DisplayClass64_0_o *v4; // x19
  unsigned __int64 v5; // d0 OVERLAPPED
  float v6; // s2
  int v7; // s1
  struct MissionNotifyComponent_o *_4__this; // x8
  float v9; // [xsp+0h] [xbp-20h]

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_5;
  mStartTime = eo->fields.mStartTime;
  v4 = this;
  v5 = vadd_f32(
         *(float32x2_t *)&this->fields.pos_from.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.pos_to.fields.x, *(float32x2_t *)&this->fields.pos_from.fields.x),
           mStartTime)).n64_u64[0];
  v6 = this->fields.pos_from.fields.z
     + (float)(mStartTime * (float)(this->fields.pos_to.fields.z - this->fields.pos_from.fields.z));
  v7 = HIDWORD(v5);
  v9 = mStartTime;
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&v5, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (this = (MissionNotifyComponent___c__DisplayClass64_0_o *)_4__this->fields.baseSp) == 0LL )
LABEL_5:
    sub_B7076C(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}
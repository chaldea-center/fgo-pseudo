void __fastcall MissionNotifyComponent___ctor(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionNotifyComponent__Awake(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v19; // s0
  float v20; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v22; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_T__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v32; // x22
  CStateManager_T__o *v33; // x21
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x21
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x20
  Il2CppObject *v38; // x21
  const MethodInfo *v39; // x2
  int v40; // w8
  void *v41; // x20
  unsigned int v42; // w21
  struct UnityEngine_Camera_o *main; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4BCB67F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_MissionNotifyComponent___ctor__, method);
    sub_1C1ABD4(&Method_CStateManager_MissionNotifyComponent__add__, v9);
    sub_1C1ABD4(&CStateManager_MissionNotifyComponent__TypeInfo, v10);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v11);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v12);
    sub_1C1ABD4(&MissionNotifyComponent_StateFrameIn_TypeInfo, v13);
    sub_1C1ABD4(&MissionNotifyComponent_StateFrameOut_TypeInfo, v14);
    sub_1C1ABD4(&MissionNotifyComponent_StateNone_TypeInfo, v15);
    sub_1C1ABD4(&MissionNotifyComponent_StateShowing_TypeInfo, v16);
    byte_4BCB67F = 1;
  }
  gameObject = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    gameObject = ManagerConfig_TypeInfo;
  }
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_20;
  v19 = (float)baseSp->fields.mHeight * 0.5;
  v20 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v20 - v19) + 1.0;
  this->fields.mFrameOutPosY = v20 + v19;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v2, v3, v4, v5, v6, v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v22);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_T__o *)sub_1C1AE20(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_object____ctor(
      v24,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31D32D0 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v24;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v32 = (Il2CppObject *)sub_1C1AE20(MissionNotifyComponent_StateNone_TypeInfo);
    System_Object___ctor(v32, 0LL);
    if ( !mFSM )
      goto LABEL_20;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_31D3378 *)Method_CStateManager_MissionNotifyComponent__add__);
    v33 = (CStateManager_T__o *)*p_mFSM;
    v34 = (Il2CppObject *)sub_1C1AE20(MissionNotifyComponent_StateFrameIn_TypeInfo);
    System_Object___ctor(v34, 0LL);
    if ( !v33 )
      goto LABEL_20;
    CStateManager_object___add(
      v33,
      1,
      (IState_T__o *)v34,
      (const MethodInfo_31D3378 *)Method_CStateManager_MissionNotifyComponent__add__);
    v35 = (CStateManager_T__o *)*p_mFSM;
    v36 = (Il2CppObject *)sub_1C1AE20(MissionNotifyComponent_StateShowing_TypeInfo);
    System_Object___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_20;
    CStateManager_object___add(
      v35,
      2,
      (IState_T__o *)v36,
      (const MethodInfo_31D3378 *)Method_CStateManager_MissionNotifyComponent__add__);
    v37 = (CStateManager_T__o *)*p_mFSM;
    v38 = (Il2CppObject *)sub_1C1AE20(MissionNotifyComponent_StateFrameOut_TypeInfo);
    System_Object___ctor(v38, 0LL);
    if ( !v37 )
      goto LABEL_20;
    CStateManager_object___add(
      v37,
      3,
      (IState_T__o *)v38,
      (const MethodInfo_31D3378 *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v39);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50268132(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2FF07E4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_20;
  v40 = *((_DWORD *)gameObject + 6);
  v41 = gameObject;
  if ( v40 >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= v40 )
        sub_1C1AE38(gameObject, method);
      gameObject = (void *)*((_QWORD *)v41 + (int)v42 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) + 150, 0LL);
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1C1AE30(gameObject, method);
  }
LABEL_19:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mCamera, (int64_t)main, v44, v45, v46, v47, v48, v49);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  float v39; // s0
  float v40; // s2
  float mFrameOutPosY; // s1
  float v42; // s3
  float v43; // s4
  float v44; // s5
  float v45; // s2
  float v46; // s9
  System_Action_o *v47; // x21
  Il2CppObject *Component_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  EasingObject_o *v55; // x19
  System_Action_o *v56; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB684 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, is_framein);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_1C1ABD4(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__, v10);
    sub_1C1ABD4(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__, v11);
    sub_1C1ABD4(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, v12);
    byte_4BCB684 = 1;
  }
  v13 = sub_1C1AE20(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_27;
  *(_QWORD *)(v13 + 40) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 56) = end_act;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)end_act, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v13 + 16) = gameObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)gameObject, v29, v30, v31, v32, v33, v34);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v39 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v13 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v42 = v39;
  else
    v42 = x;
  if ( is_framein )
    v43 = v40;
  else
    v43 = z;
  if ( is_framein )
    v39 = x;
  if ( is_framein )
    v44 = z;
  else
    v44 = v40;
  if ( is_framein )
    v45 = this->fields.mFrameOutPosY;
  else
    v45 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v13 + 84) = !is_framein;
  *(float *)(v13 + 72) = v42;
  *(float *)(v13 + 76) = v45;
  *(float *)(v13 + 80) = v43;
  *(float *)(v13 + 24) = v39;
  *(float *)(v13 + 28) = mFrameOutPosY;
  *(float *)(v13 + 32) = v44;
  *(_DWORD *)(v13 + 48) = is_framein;
  if ( is_framein )
    v46 = 0.5;
  else
    v46 = 0.25;
  v47 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v47, 0LL);
    return;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v13 + 16),
                       (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 64) = Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)Component_object, v49, v50, v51, v52, v53, v54);
  v55 = *(EasingObject_o **)(v13 + 64);
  v56 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v13,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v55 )
LABEL_27:
    sub_1C1AE30(v14, v15);
  EasingObject__Play(v55, v46 * timeScale, v56, v47, 0.0, 17, 0LL);
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
  if ( (byte_4BCB682 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_1C1ABD4(&Method_CStateManager_MissionNotifyComponent__getState__, method);
    byte_4BCB682 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C1AE30(this, method);
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
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4BCB685 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EasingObject___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCB685 = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v4) != 1 )
    {
LABEL_14:
      ActionExtensions__Call(this->fields.mDragStartAct, 0LL);
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_13;
      if ( Component_object )
      {
        EasingObject__SetPause((EasingObject_o *)Component_object, 1, 0LL);
LABEL_13:
        MissionNotifyComponent__SetState(this, 2, v8);
        goto LABEL_14;
      }
    }
    sub_1C1AE30(gameObject, v6);
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
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BCB683 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_MissionNotifyComponent__setState__, *(_QWORD *)&state);
    byte_4BCB683 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C1AE30(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31D3404 *)Method_CStateManager_MissionNotifyComponent__setState__);
}


void __fastcall MissionNotifyComponent__SetupAndPlay(
        MissionNotifyComponent_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *drag_start_act,
        System_Func_MissionNotifyComponent__o *frame_out_start_func,
        System_Action_MissionNotifyComponent__o *frame_out_end_act,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 Instance; // x0
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v37; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x26
  bool IsMasterMission; // w24
  _BOOL4 v40; // w21
  int v41; // w20
  UILabel_o *noLabel; // x26
  struct UnityEngine_GameObject_o *v43; // x10
  UnityEngine_GameObject_o *v44; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v46; // x27
  System_String_o *v47; // x0
  _BOOL4 v48; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  System_Action_MissionNotifyComponent__o *v53; // x29
  int32_t mDepth; // w21
  Il2CppObject *clearEffectPrefab; // x26
  System_Func_MissionNotifyComponent__o *v56; // x20
  UnityEngine_GameObject_o *v57; // x26
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  UnityEngine_Object_o *v74; // x28
  bool v75; // w0
  int v76; // w8
  __int64 v77; // x25
  unsigned int v78; // w22
  int v79; // w21
  UnityEngine_GameObject_o *rewardMessage; // x25
  int v81; // w21
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v83; // x25
  System_String_o *v84; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v86; // x9
  UnityEngine_Object_o *v87; // x25
  struct UILabel_o *v88; // x8
  System_String_o *v89; // x0
  __int64 *v90; // x8
  System_String_o *v91; // x25
  int32_t monitor_high; // w26
  UISprite_o *typeSp; // x27
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  Il2CppObject *v100; // x24
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  const MethodInfo *v113; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v115; // x0
  int32_t v116; // [xsp+8h] [xbp-78h]
  int v117; // [xsp+10h] [xbp-70h]
  int monitor; // [xsp+14h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BCB681 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, disp_info);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v11);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMissionMaster___, v12);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMaster_CompleteMissionMaster___, v14);
    sub_1C1ABD4(&DataManager_TypeInfo, v15);
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v16);
    sub_1C1ABD4(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__, v17);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v18);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v19);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v20);
    sub_1C1ABD4(&long___TypeInfo, v21);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v23);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v24);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C1ABD4(&StringLiteral_21693/*"master_mission_weekly"*/, v26);
    sub_1C1ABD4(&StringLiteral_21692/*"master_mission_special"*/, v27);
    sub_1C1ABD4(&StringLiteral_21688/*"master_mission_daily"*/, v28);
    sub_1C1ABD4(&StringLiteral_21690/*"master_mission_extra"*/, v29);
    sub_1C1ABD4(&StringLiteral_21691/*"master_mission_panel"*/, v30);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v31);
    sub_1C1ABD4(&StringLiteral_9389/*"N0"*/, v32);
    sub_1C1ABD4(&StringLiteral_21689/*"master_mission_event"*/, v33);
    byte_4BCB681 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_object )
    goto LABEL_121;
  v37 = (_DWORD)disp_info + 16;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_121;
    monitor = (int)entity[1].monitor;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_1C1AC7C(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_121;
    v35 = Instance;
    if ( !Instance )
      goto LABEL_121;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_122;
    *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
    if ( !v38 )
      goto LABEL_121;
    if ( DataMasterBase_object__object__int___isEntityExistsFromId(
           v38,
           (System_Int64_array *)Instance,
           (const MethodInfo_3247C54 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__) )
    {
      v40 = 1;
      v41 = 1;
    }
    else
    {
      v41 = 0;
      v40 = monitor != 7;
    }
  }
  else
  {
    v41 = 0;
    IsMasterMission = 0;
    monitor = 0;
    v40 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (__int64)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_121;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  v43 = IsMasterMission ? 0LL : this->fields.noRoot;
  Instance = (__int64)((((unsigned __int8)v41 | IsMasterMission) & 1) != 0 ? this->fields.noRoot : v43);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v40 & ((v41 | IsMasterMission) ^ 1), 0LL);
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_121;
  v44 = (UnityEngine_GameObject_o *)Instance;
  Instance = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v44 )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive(v44, (Instance & 1) == 0, 0LL);
  Instance = (__int64)this->fields.noRoot;
  if ( !Instance )
    goto LABEL_121;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.missionNameLabel;
    if ( !Instance )
      goto LABEL_121;
  }
  else
  {
    Instance = (__int64)this->fields.masterMissionNameLabel;
    if ( !Instance )
      goto LABEL_121;
  }
  WrapControlText__textAdjust((UILabel_o *)Instance, disp_info->fields.message, *(_DWORD *)(Instance + 424), 0, 0LL);
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, disp_info->fields.condition > 0, 0LL);
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_121;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.progressBarNowSlider;
    if ( !Instance )
      goto LABEL_121;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressFrom / (float)disp_info->fields.condition,
      0LL);
    Instance = (__int64)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_121;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressTo / (float)disp_info->fields.condition,
      0LL);
    progressLabel = this->fields.progressLabel;
    v46 = System_Int32__ToString_63845976((int)disp_info + 44, (System_String_o *)StringLiteral_9389/*"N0"*/, 0LL);
    v47 = System_Int32__ToString_63845976((int)disp_info + 48, (System_String_o *)StringLiteral_9389/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_63051628(v46, (System_String_o *)StringLiteral_1123/*"/"*/, v47, 0LL);
    if ( !progressLabel )
      goto LABEL_121;
    UILabel__set_text(progressLabel, (System_String_o *)Instance, 0LL);
  }
  Instance = (__int64)this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_121;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_121;
    v48 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v48 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v48, banner_group, 0LL);
  Instance = (__int64)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v48, 0LL);
  Instance = (__int64)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v117 = v41;
  if ( !v48 )
    goto LABEL_88;
  clearSp = this->fields.clearSp;
  v116 = v37;
  if ( !clearSp )
    goto LABEL_121;
  v53 = frame_out_end_act;
  mDepth = clearSp->fields.mDepth;
  clearEffectPrefab = (Il2CppObject *)this->fields.clearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v56 = frame_out_start_func;
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        clearEffectPrefab,
                        (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_121;
  v57 = (UnityEngine_GameObject_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Instance,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = (struct SimpleAnimation_o *)Component_object;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mClearEffectSimpleAnim,
    (int64_t)Component_object,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = UnityEngine_GameObject__GetComponent_object_(
          v57,
          (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.mClearEffectAnim = (struct UnityEngine_Animation_o *)v66;
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mClearEffectAnim, (int64_t)v66, v68, v69, v70, v71, v72, v73);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (__int64)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_121;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    frame_out_start_func = v56;
  }
  else
  {
    v74 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v75 = UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
    frame_out_start_func = v56;
    if ( v75 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_121;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v57, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50268132(
                        v57,
                        (const MethodInfo_2FF07E4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_121;
  v76 = *(_DWORD *)(Instance + 24);
  v77 = Instance;
  if ( v76 >= 1 )
  {
    v78 = 0;
    v79 = mDepth + 1;
    while ( v78 < v76 )
    {
      Instance = *(_QWORD *)(v77 + 8LL * (int)v78 + 32);
      if ( !Instance )
        goto LABEL_121;
      UIWidget__set_depth((UIWidget_o *)Instance, v79 + *(_DWORD *)(Instance + 176), 0LL);
      v76 = *(_DWORD *)(v77 + 24);
      if ( (int)++v78 >= v76 )
        goto LABEL_70;
    }
LABEL_122:
    sub_1C1AE38(Instance, v35);
  }
LABEL_70:
  if ( !entity )
  {
    frame_out_end_act = v53;
    v37 = v116;
LABEL_88:
    v81 = monitor;
LABEL_89:
    v35 = 462LL;
    goto LABEL_90;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  if ( !rewardMessage )
    goto LABEL_121;
  frame_out_end_act = v53;
  UnityEngine_GameObject__SetActive(rewardMessage, Instance & 1, 0LL);
  Instance = (__int64)entity;
  v37 = v116;
  if ( !entity )
    goto LABEL_121;
  v81 = monitor;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, HIDWORD(entity[5].klass), 0LL);
  if ( !GiftListById )
    goto LABEL_89;
  v83 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  v84 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          (int32_t)entity[1].klass,
          HIDWORD(entity[1].monitor),
          1,
          0LL);
  Instance = System_String__IsNullOrEmpty(v84, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_121;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v84, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_34758592(v115, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_119;
  }
  if ( !v83->max_length )
    goto LABEL_122;
  v86 = (int32_t *)v83->m_Items[0];
  if ( !v86 || !itemIcon )
LABEL_121:
    sub_1C1AE30(Instance, v35);
  ItemIconComponent__SetGift_39340176(this->fields.itemIcon, v86[5], v86[6], v86[7], 0, 0LL);
LABEL_119:
  Instance = (__int64)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_121;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v35 = 360LL;
LABEL_90:
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  UIWidget__set_width((UIWidget_o *)Instance, v35, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_121;
  v87 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v88 = this->fields.noLabel;
  if ( !v88 )
    goto LABEL_121;
  v89 = System_String__Concat_63040368((System_String_o *)Instance, v88->fields.mText, 0LL);
  UnityEngine_Object__set_name(v87, v89, 0LL);
  switch ( v81 )
  {
    case 1:
    case 7:
      v90 = &StringLiteral_21689/*"master_mission_event"*/;
      goto LABEL_101;
    case 2:
      v90 = &StringLiteral_21693/*"master_mission_weekly"*/;
      goto LABEL_101;
    case 3:
      v90 = &StringLiteral_21688/*"master_mission_daily"*/;
      goto LABEL_101;
    case 4:
      v90 = &StringLiteral_21690/*"master_mission_extra"*/;
      goto LABEL_101;
    case 5:
      v90 = &StringLiteral_21692/*"master_mission_special"*/;
      goto LABEL_101;
    case 6:
      v90 = &StringLiteral_21691/*"master_mission_panel"*/;
LABEL_101:
      v91 = (System_String_o *)*v90;
      break;
    default:
      v91 = 0LL;
      break;
  }
  if ( !entity || ((v117 ^ 1) & 1) != 0 )
  {
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_121;
    UISprite__set_spriteName((UISprite_o *)Instance, v91, 0LL);
  }
  else
  {
    monitor_high = HIDWORD(entity[1].monitor);
    typeSp = this->fields.typeSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39058000(monitor_high, typeSp, v91, 0LL);
  }
  Instance = (__int64)this->fields.typeSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v48 && v81 == 3 )
  {
    v100 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v37, 0LL);
    if ( !v100 )
      goto LABEL_121;
    AdManager__TrackEvent((AdManager_o *)v100, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mDragStartAct,
    (int64_t)drag_start_act,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mFrameOutStartFunc,
    (int64_t)frame_out_start_func,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mFrameOutEndAct,
    (int64_t)frame_out_end_act,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  MissionNotifyComponent__SetState(this, 1, v113);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BCB680 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_MissionNotifyComponent__update__, method);
    byte_4BCB680 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31D33E0 *)Method_CStateManager_MissionNotifyComponent__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  MissionNotifyComponent_o *v18; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x4

  if ( (byte_4BCB686 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&Method_MissionNotifyComponent_StateFrameIn_begin__, v4);
    sub_1C1ABD4(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__, v5);
    sub_1C1ABD4(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, v6);
    byte_4BCB686 = 1;
  }
  v7 = sub_1C1AE20(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = that;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)that, v10, v11, v12, v13, v14, v15);
  v16 = Method_MissionNotifyComponent_StateFrameIn_begin__;
  if ( (*((_BYTE *)Method_MissionNotifyComponent_StateFrameIn_begin__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C1ABEC(Method_MissionNotifyComponent_StateFrameIn_begin__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v16, v16[4]);
  OverwriteAssetSoundName__PlayCommonSe(v17, 20, 0, 0LL);
  v18 = *(MissionNotifyComponent_o **)(v7 + 16);
  v19 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v18 )
LABEL_8:
    sub_1C1AE30(v8, v9);
  MissionNotifyComponent__FrameInOut(v18, 1, v19, 0, v20);
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
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C1AE30(0LL, method);
  MissionNotifyComponent__SetState(that, 2, v2);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  void *gameObject; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x19
  __int64 v19; // x8
  struct MissionNotifyComponent_o *v20; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Object_o *mNextComp; // x20
  MissionNotifyComponent_o *v29; // x20
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x4
  int v32; // w8
  void *v33; // x19
  unsigned int v34; // w20

  if ( (byte_4BCB689 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__, v7);
    sub_1C1ABD4(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, v8);
    byte_4BCB689 = 1;
  }
  v9 = sub_1C1AE20(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 16) = that;
  v18 = v9 + 16;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)that, v12, v13, v14, v15, v16, v17);
  if ( !*(_QWORD *)(v9 + 16) )
    goto LABEL_22;
  v19 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 216LL);
  if ( !v19 )
    goto LABEL_22;
  v20 = (struct MissionNotifyComponent_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v19 + 24))(
                                             *(_QWORD *)(v19 + 64),
                                             *(_QWORD *)(v19 + 40));
  this->fields.mNextComp = v20;
  p_fields = &this->fields;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_fields, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)v18 )
    goto LABEL_22;
  if ( !*(_BYTE *)(*(_QWORD *)v18 + 193LL) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v29 = *(MissionNotifyComponent_o **)(v9 + 16);
      v30 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)v9,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v29 )
        goto LABEL_22;
      MissionNotifyComponent__FrameInOut(v29, 0, v30, 0, v31);
    }
  }
  gameObject = *(void **)v18;
  if ( !*(_QWORD *)v18
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50268132(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2FF07E4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_22:
    sub_1C1AE30(gameObject, v11);
  }
  v32 = *((_DWORD *)gameObject + 6);
  v33 = gameObject;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= v32 )
        sub_1C1AE38(gameObject, v11);
      gameObject = (void *)*((_QWORD *)v33 + (int)v34 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) - 50, 0LL);
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
        return;
    }
    goto LABEL_22;
  }
}


void __fastcall MissionNotifyComponent_StateFrameOut__end(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  if ( (byte_4BCB68B & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_1C1ABD4(
                                                       &Method_ActionExtensions_Call_MissionNotifyComponent___,
                                                       that);
    byte_4BCB68B = 1;
  }
  if ( !that )
    sub_1C1AE30(this, that);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (Il2CppObject *)that,
    (const MethodInfo_2EF1C9C *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 klass; // x0
  const MethodInfo *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 *v17; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v19; // s0
  float v20; // s1
  float v21; // s8
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x20
  float v25; // s0
  float v26; // s8
  float v27; // s0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *v29; // x19
  PartyOrganizationUtility_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  MissionNotifyComponent_o *v38; // x19
  System_Action_o *v39; // x20
  const MethodInfo *v40; // x4
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4

  if ( (byte_4BCB68A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__, v6);
    sub_1C1ABD4(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, v7);
    byte_4BCB68A = 1;
  }
  v8 = sub_1C1AE20(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_25;
  *(_QWORD *)(v8 + 16) = that;
  v17 = (__int64 *)(v8 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)that, v11, v12, v13, v14, v15, v16);
  klass = *(_QWORD *)(v8 + 16);
  if ( !klass )
    goto LABEL_25;
  if ( *(_BYTE *)(klass + 193) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    *(UnityEngine_Vector3_o *)&v19 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v17 )
      goto LABEL_25;
    *(float32x2_t *)(*v17 + 196) = vmul_f32(*(float32x2_t *)(*v17 + 196), vdup_n_s32(0x3F6147AEu));
    klass = *v17;
    if ( !*v17 )
      goto LABEL_25;
    v21 = v19 + *(float *)(klass + 196);
    v22 = v20 + *(float *)(klass + 200);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    v41.fields.x = v21;
    v41.fields.y = v22;
    GameObjectExtensions__SetLocalPosition_34756204(v23, v41, 0LL);
    if ( !*v17 )
      goto LABEL_25;
    v24 = *(_QWORD *)(*v17 + 32);
    if ( !v24 )
      goto LABEL_25;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 424LL))(
              v24,
              *(_QWORD *)(*(_QWORD *)v24 + 432LL));
    if ( !*v17 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v17 + 32);
    if ( !klass )
      goto LABEL_25;
    v26 = v25;
    v27 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v24 + 440LL))(
              v24,
              *(_QWORD *)(*(_QWORD *)v24 + 448LL),
              v26 + (float)((float)(0.0 - v27) * 0.15));
    if ( !*v17 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v17 + 32);
    if ( !klass )
      goto LABEL_25;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
           klass,
           *(_QWORD *)(*(_QWORD *)klass + 432LL)) <= 0.01 )
    {
      klass = *v17;
      if ( *v17 )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, v28);
        return;
      }
LABEL_25:
      sub_1C1AE30(klass, v10);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (PartyOrganizationUtility_o *)&this->fields;
    v29 = (UnityEngine_Object_o *)mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_25;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, v10) != 1 )
      {
        p_fields->klass = 0LL;
        sub_1C1AB78(p_fields, 0LL, v32, v33, v34, v35, v36, v37);
        v38 = *(MissionNotifyComponent_o **)(v8 + 16);
        v39 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(
          v39,
          (Il2CppObject *)v8,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v38 )
          goto LABEL_25;
        MissionNotifyComponent__FrameInOut(v38, 0, v39, 0, v40);
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
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C1AE30(0LL, method);
  MissionNotifyComponent__SetState(that, 0, v2);
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
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C1AE30(0LL, method);
  MissionNotifyComponent__SetState(that, 0, v2);
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

  if ( (byte_4BCB687 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, that);
    byte_4BCB687 = 1;
  }
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_16;
  baseSp = (SimpleAnimation_o *)that->fields.baseSp;
  if ( !baseSp )
    goto LABEL_16;
  ((void (__fastcall *)(SimpleAnimation_o *, const char *, float))baseSp->klass[1]._1.gc_desc)(
    baseSp,
    baseSp->klass[1]._1.name,
    1.0);
  mClearEffectSimpleAnim = (UnityEngine_Object_o *)that->fields.mClearEffectSimpleAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    baseSp = that->fields.mClearEffectSimpleAnim;
    if ( baseSp )
    {
      SimpleAnimation__Play(baseSp, 0LL);
      return;
    }
LABEL_16:
    sub_1C1AE30(baseSp, v6);
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mClearEffectAnim, 0LL, 0LL) )
  {
    baseSp = (SimpleAnimation_o *)that->fields.mClearEffectAnim;
    if ( !baseSp )
      goto LABEL_16;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)baseSp, 0LL);
  }
}


void __fastcall MissionNotifyComponent_StateShowing__end(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float v5; // s4
  float v6; // s5
  float v7; // s4
  bool v8; // nf
  float v9; // s1
  float v10; // s2
  float v11; // s0

  x = this->fields.mTouchPosDif.fields.x;
  y = this->fields.mTouchPosDif.fields.y;
  v5 = (float)(x * x) + (float)(y * y);
  v6 = (float)(this->fields.mTouchPosDifOld.fields.x * this->fields.mTouchPosDifOld.fields.x)
     + (float)(this->fields.mTouchPosDifOld.fields.y * this->fields.mTouchPosDifOld.fields.y);
  if ( v5 < v6 )
    y = this->fields.mTouchPosDifOld.fields.y;
  if ( v5 < v6 )
    x = this->fields.mTouchPosDifOld.fields.x;
  if ( !that )
    sub_1C1AE30(this, 0LL);
  v7 = fminf(y, 15.0);
  v8 = y < -15.0;
  v9 = fminf(x, 15.0);
  if ( v8 )
    v10 = -15.0;
  else
    v10 = v7;
  if ( x < -15.0 )
    v11 = -15.0;
  else
    v11 = v9;
  that->fields.mInertiaSpd.fields.x = v11;
  that->fields.mInertiaSpd.fields.y = v10;
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
  const MethodInfo *v12; // x2
  float v13; // s8
  float v14; // s9
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float32x2_t *)this;
  if ( (byte_4BCB688 & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_1C1ABD4(&CTouch_TypeInfo, that);
    byte_4BCB688 = 1;
  }
  if ( !that )
    sub_1C1AE30(this, that);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4[6].n64_f32[0]) < 2.0 )
      return;
LABEL_13:
    MissionNotifyComponent__SetState(that, 3, v12);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v4[3].n64_u64[0] = v4[2].n64_u64[0];
  mCamera = that->fields.mCamera;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_47672720(mCamera, 0LL);
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
  v13 = x + *(float *)&v10;
  v14 = y + v11;
  v4[6].n64_u32[1] = v9 + 1;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v16.fields.x = v13;
  v16.fields.y = v14;
  GameObjectExtensions__SetLocalPosition_34756204(v15, v16, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 2 )
    goto LABEL_13;
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
    sub_1C1AE30(baseSp, v4);
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
  float mNow; // s4
  MissionNotifyComponent___c__DisplayClass64_0_o *v4; // x19
  unsigned __int64 v5; // d0 OVERLAPPED
  float v6; // s2
  int v7; // s1
  struct MissionNotifyComponent_o *_4__this; // x8
  float v9; // [xsp+0h] [xbp-20h]

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_5;
  mNow = eo->fields.mNow;
  v4 = this;
  v5 = vadd_f32(
         *(float32x2_t *)&this->fields.pos_from.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.pos_to.fields.x, *(float32x2_t *)&this->fields.pos_from.fields.x),
           mNow)).n64_u64[0];
  v6 = this->fields.pos_from.fields.z
     + (float)(mNow * (float)(this->fields.pos_to.fields.z - this->fields.pos_from.fields.z));
  v7 = HIDWORD(v5);
  v9 = mNow;
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&v5, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (this = (MissionNotifyComponent___c__DisplayClass64_0_o *)_4__this->fields.baseSp) == 0LL )
LABEL_5:
    sub_1C1AE30(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}
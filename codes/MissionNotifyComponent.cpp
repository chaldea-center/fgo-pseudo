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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v27; // s0
  float v28; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_T__o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  Il2CppObject *v46; // x22
  CStateManager_T__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  Il2CppObject *v51; // x22
  CStateManager_T__o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  Il2CppObject *v56; // x22
  CStateManager_T__o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  Il2CppObject *v61; // x21
  const MethodInfo *v62; // x2
  int v63; // w8
  void *v64; // x20
  unsigned int v65; // w21
  struct UnityEngine_Camera_o *main; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4B19CAE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MissionNotifyComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_MissionNotifyComponent__add__, v9, v10);
    sub_1BCA7E0(&CStateManager_MissionNotifyComponent__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v13, v14);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&MissionNotifyComponent_StateFrameIn_TypeInfo, v17, v18);
    sub_1BCA7E0(&MissionNotifyComponent_StateFrameOut_TypeInfo, v19, v20);
    sub_1BCA7E0(&MissionNotifyComponent_StateNone_TypeInfo, v21, v22);
    sub_1BCA7E0(&MissionNotifyComponent_StateShowing_TypeInfo, v23, v24);
    byte_4B19CAE = 1;
  }
  gameObject = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    gameObject = ManagerConfig_TypeInfo;
  }
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_20;
  v27 = (float)baseSp->fields.mHeight * 0.5;
  v28 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v28 - v27) + 1.0;
  this->fields.mFrameOutPosY = v28 + v27;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v2, v3, v4, v5, v6, v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v30);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v35 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_MissionNotifyComponent__TypeInfo, v31, v32, v33);
    CStateManager_object____ctor(
      v35,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v35, v36, v37, v38, v39, v40, v41);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v46 = (Il2CppObject *)sub_1BCAA2C(MissionNotifyComponent_StateNone_TypeInfo, v43, v44, v45);
    System_Object___ctor(v46, 0LL);
    if ( !mFSM )
      goto LABEL_20;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v46,
      (const MethodInfo_313FC6C *)Method_CStateManager_MissionNotifyComponent__add__);
    v47 = (CStateManager_T__o *)*p_mFSM;
    v51 = (Il2CppObject *)sub_1BCAA2C(MissionNotifyComponent_StateFrameIn_TypeInfo, v48, v49, v50);
    System_Object___ctor(v51, 0LL);
    if ( !v47 )
      goto LABEL_20;
    CStateManager_object___add(
      v47,
      1,
      (IState_T__o *)v51,
      (const MethodInfo_313FC6C *)Method_CStateManager_MissionNotifyComponent__add__);
    v52 = (CStateManager_T__o *)*p_mFSM;
    v56 = (Il2CppObject *)sub_1BCAA2C(MissionNotifyComponent_StateShowing_TypeInfo, v53, v54, v55);
    System_Object___ctor(v56, 0LL);
    if ( !v52 )
      goto LABEL_20;
    CStateManager_object___add(
      v52,
      2,
      (IState_T__o *)v56,
      (const MethodInfo_313FC6C *)Method_CStateManager_MissionNotifyComponent__add__);
    v57 = (CStateManager_T__o *)*p_mFSM;
    v61 = (Il2CppObject *)sub_1BCAA2C(MissionNotifyComponent_StateFrameOut_TypeInfo, v58, v59, v60);
    System_Object___ctor(v61, 0LL);
    if ( !v57 )
      goto LABEL_20;
    CStateManager_object___add(
      v57,
      3,
      (IState_T__o *)v61,
      (const MethodInfo_313FC6C *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v62);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_20;
  v63 = *((_DWORD *)gameObject + 6);
  v64 = gameObject;
  if ( v63 >= 1 )
  {
    v65 = 0;
    while ( 1 )
    {
      if ( v65 >= v63 )
        sub_1BCAA44(gameObject, method);
      gameObject = (void *)*((_QWORD *)v64 + (int)v65 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) + 150, 0LL);
      v63 = *((_DWORD *)v64 + 6);
      if ( (int)++v65 >= v63 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1BCAA3C(gameObject, method);
  }
LABEL_19:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mCamera, (int64_t)main, v67, v68, v69, v70, v71, v72);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  float v46; // s0
  float v47; // s2
  float mFrameOutPosY; // s1
  float v49; // s3
  float v50; // s4
  float v51; // s5
  float v52; // s2
  float v53; // s9
  System_Action_o *v54; // x21
  Il2CppObject *Component_object; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  EasingObject_o *v62; // x19
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_o *v66; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19CB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, is_framein, end_act);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10);
    sub_1BCA7E0(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__, v11, v12);
    sub_1BCA7E0(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__, v13, v14);
    sub_1BCA7E0(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, v15, v16);
    byte_4B19CB3 = 1;
  }
  v17 = sub_1BCAA2C(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo, is_framein, end_act, is_force);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_27;
  *(_QWORD *)(v17 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 56) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 56), (int64_t)end_act, v26, v27, v28, v29, v30, v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v17 + 16) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)gameObject, v33, v34, v35, v36, v37, v38);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v46 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v17 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v49 = v46;
  else
    v49 = x;
  if ( is_framein )
    v50 = v47;
  else
    v50 = z;
  if ( is_framein )
    v46 = x;
  if ( is_framein )
    v51 = z;
  else
    v51 = v47;
  if ( is_framein )
    v52 = this->fields.mFrameOutPosY;
  else
    v52 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v17 + 84) = !is_framein;
  *(float *)(v17 + 72) = v49;
  *(float *)(v17 + 76) = v52;
  *(float *)(v17 + 80) = v50;
  *(float *)(v17 + 24) = v46;
  *(float *)(v17 + 28) = mFrameOutPosY;
  *(float *)(v17 + 32) = v51;
  *(_DWORD *)(v17 + 48) = is_framein;
  if ( is_framein )
    v53 = 0.5;
  else
    v53 = 0.25;
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v17,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v54, 0LL);
    return;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v17 + 16),
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 64) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 64), (int64_t)Component_object, v56, v57, v58, v59, v60, v61);
  v62 = *(EasingObject_o **)(v17 + 64);
  v66 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v17,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v62 )
LABEL_27:
    sub_1BCAA3C(v18, v19);
  EasingObject__Play(v62, v53 * timeScale, v66, v54, 0.0, 17, 0LL);
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
  __int64 v2; // x2
  MissionNotifyComponent_o *v3; // x19
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B19CB1 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_1BCA7E0(&Method_CStateManager_MissionNotifyComponent__getState__, method, v2);
    byte_4B19CB1 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B19CB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EasingObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19CB4 = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v6) != 1 )
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
        MissionNotifyComponent__SetState(this, 2, v11);
        goto LABEL_14;
      }
    }
    sub_1BCAA3C(gameObject, v8);
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

  if ( (byte_4B19CB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MissionNotifyComponent__setState__, *(_QWORD *)&state, method);
    byte_4B19CB2 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_MissionNotifyComponent__setState__);
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 Instance; // x0
  __int64 v56; // x1
  __int64 v57; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v59; // w29
  DataMasterBase_o *v60; // x26
  bool IsMasterMission; // w24
  _BOOL4 v62; // w21
  int v63; // w20
  UILabel_o *noLabel; // x26
  struct UnityEngine_GameObject_o *v65; // x10
  UnityEngine_GameObject_o *v66; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v68; // x27
  System_String_o *v69; // x0
  _BOOL4 v70; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  System_Action_MissionNotifyComponent__o *v75; // x29
  int32_t mDepth; // w21
  Il2CppObject *clearEffectPrefab; // x26
  System_Func_MissionNotifyComponent__o *v78; // x20
  UnityEngine_GameObject_o *v79; // x26
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  UnityEngine_Object_o *v96; // x28
  bool v97; // w0
  int v98; // w8
  __int64 v99; // x25
  unsigned int v100; // w22
  int v101; // w21
  UnityEngine_GameObject_o *rewardMessage; // x25
  int v103; // w21
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v105; // x25
  System_String_o *v106; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v108; // x9
  UnityEngine_Object_o *v109; // x25
  struct UILabel_o *v110; // x8
  System_String_o *v111; // x0
  __int64 *v112; // x8
  System_String_o *v113; // x25
  int32_t monitor_high; // w26
  UISprite_o *typeSp; // x27
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  Il2CppObject *v122; // x24
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  const MethodInfo *v135; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v137; // x0
  int32_t v138; // [xsp+8h] [xbp-78h]
  int v139; // [xsp+10h] [xbp-70h]
  int monitor; // [xsp+14h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B19CB0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, disp_info, drag_start_act);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionAddMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CompleteMissionMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v27, v28);
    sub_1BCA7E0(&long___TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_21558/*"master_mission_weekly"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_21557/*"master_mission_special"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_21553/*"master_mission_daily"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_21555/*"master_mission_extra"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_21556/*"master_mission_panel"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_21554/*"master_mission_event"*/, v53, v54);
    byte_4B19CB0 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_object )
    goto LABEL_121;
  v59 = (_DWORD)disp_info + 16;
  v60 = (DataMasterBase_o *)Instance;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_121;
    monitor = (int)entity[1].monitor;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_1BCA888(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_121;
    v56 = Instance;
    if ( !Instance )
      goto LABEL_121;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_122;
    *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
    if ( !v60 )
      goto LABEL_121;
    if ( DataMasterBase__isEntityExistsFromId(v60, (System_Int64_array *)Instance, 0LL) )
    {
      v62 = 1;
      v63 = 1;
    }
    else
    {
      v63 = 0;
      v62 = monitor != 7;
    }
  }
  else
  {
    v63 = 0;
    IsMasterMission = 0;
    monitor = 0;
    v62 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (__int64)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_121;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  v65 = IsMasterMission ? 0LL : this->fields.noRoot;
  Instance = (__int64)((((unsigned __int8)v63 | IsMasterMission) & 1) != 0 ? this->fields.noRoot : v65);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v62 & ((v63 | IsMasterMission) ^ 1), 0LL);
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_121;
  v66 = (UnityEngine_GameObject_o *)Instance;
  Instance = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v66 )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive(v66, (Instance & 1) == 0, 0LL);
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
  WrapControlText__textAdjust((UILabel_o *)Instance, disp_info->fields.message, *(_DWORD *)(Instance + 424), 0, 0, 0LL);
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
    v68 = System_Int32__ToString_63206828((int)disp_info + 44, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    v69 = System_Int32__ToString_63206828((int)disp_info + 48, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_62412480(v68, (System_String_o *)StringLiteral_1120/*"/"*/, v69, 0LL);
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
    v70 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v70 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v56);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v70, banner_group, 0LL);
  Instance = (__int64)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70, 0LL);
  Instance = (__int64)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v139 = v63;
  if ( !v70 )
    goto LABEL_88;
  clearSp = this->fields.clearSp;
  v138 = v59;
  if ( !clearSp )
    goto LABEL_121;
  v75 = frame_out_end_act;
  mDepth = clearSp->fields.mDepth;
  clearEffectPrefab = (Il2CppObject *)this->fields.clearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
  v78 = frame_out_start_func;
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        clearEffectPrefab,
                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_121;
  v79 = (UnityEngine_GameObject_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Instance,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = (struct SimpleAnimation_o *)Component_object;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mClearEffectSimpleAnim,
    (int64_t)Component_object,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = UnityEngine_GameObject__GetComponent_object_(
          v79,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.mClearEffectAnim = (struct UnityEngine_Animation_o *)v88;
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mClearEffectAnim, (int64_t)v88, v90, v91, v92, v93, v94, v95);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (__int64)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_121;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    frame_out_start_func = v78;
  }
  else
  {
    v96 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    v97 = UnityEngine_Object__op_Inequality(v96, 0LL, 0LL);
    frame_out_start_func = v78;
    if ( v97 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_121;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v79, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                        v79,
                        (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_121;
  v98 = *(_DWORD *)(Instance + 24);
  v99 = Instance;
  if ( v98 >= 1 )
  {
    v100 = 0;
    v101 = mDepth + 1;
    while ( v100 < v98 )
    {
      Instance = *(_QWORD *)(v99 + 8LL * (int)v100 + 32);
      if ( !Instance )
        goto LABEL_121;
      UIWidget__set_depth((UIWidget_o *)Instance, v101 + *(_DWORD *)(Instance + 176), 0LL);
      v98 = *(_DWORD *)(v99 + 24);
      if ( (int)++v100 >= v98 )
        goto LABEL_70;
    }
LABEL_122:
    sub_1BCAA44(Instance, v56);
  }
LABEL_70:
  if ( !entity )
  {
    frame_out_end_act = v75;
    v59 = v138;
LABEL_88:
    v103 = monitor;
LABEL_89:
    v56 = 462LL;
    goto LABEL_90;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  if ( !rewardMessage )
    goto LABEL_121;
  frame_out_end_act = v75;
  UnityEngine_GameObject__SetActive(rewardMessage, Instance & 1, 0LL);
  Instance = (__int64)entity;
  v59 = v138;
  if ( !entity )
    goto LABEL_121;
  v103 = monitor;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, HIDWORD(entity[5].klass), 0LL);
  if ( !GiftListById )
    goto LABEL_89;
  v105 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  v106 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
           (EventMissionAddMaster_o *)Instance,
           (int32_t)entity[1].klass,
           HIDWORD(entity[1].monitor),
           1,
           0LL);
  Instance = System_String__IsNullOrEmpty(v106, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_121;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v106, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_34333328(v137, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_119;
  }
  if ( !v105->max_length )
    goto LABEL_122;
  v108 = (int32_t *)v105->m_Items[0];
  if ( !v108 || !itemIcon )
LABEL_121:
    sub_1BCAA3C(Instance, v56);
  ItemIconComponent__SetGift_38855180(this->fields.itemIcon, v108[5], v108[6], v108[7], 0, 0LL);
LABEL_119:
  Instance = (__int64)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_121;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v56 = 360LL;
LABEL_90:
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  UIWidget__set_width((UIWidget_o *)Instance, v56, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_121;
  v109 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v110 = this->fields.noLabel;
  if ( !v110 )
    goto LABEL_121;
  v111 = System_String__Concat_62401220((System_String_o *)Instance, v110->fields.mText, 0LL);
  UnityEngine_Object__set_name(v109, v111, 0LL);
  switch ( v103 )
  {
    case 1:
    case 7:
      v112 = &StringLiteral_21554/*"master_mission_event"*/;
      goto LABEL_101;
    case 2:
      v112 = &StringLiteral_21558/*"master_mission_weekly"*/;
      goto LABEL_101;
    case 3:
      v112 = &StringLiteral_21553/*"master_mission_daily"*/;
      goto LABEL_101;
    case 4:
      v112 = &StringLiteral_21555/*"master_mission_extra"*/;
      goto LABEL_101;
    case 5:
      v112 = &StringLiteral_21557/*"master_mission_special"*/;
      goto LABEL_101;
    case 6:
      v112 = &StringLiteral_21556/*"master_mission_panel"*/;
LABEL_101:
      v113 = (System_String_o *)*v112;
      break;
    default:
      v113 = 0LL;
      break;
  }
  if ( !entity || ((v139 ^ 1) & 1) != 0 )
  {
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_121;
    UISprite__set_spriteName((UISprite_o *)Instance, v113, 0LL);
  }
  else
  {
    monitor_high = HIDWORD(entity[1].monitor);
    typeSp = this->fields.typeSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v56);
    AtlasManager__SetEventUI_38574572(monitor_high, typeSp, v113, 0LL);
  }
  Instance = (__int64)this->fields.typeSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v70 && v103 == 3 )
  {
    v122 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v59, 0LL);
    if ( !v122 )
      goto LABEL_121;
    AdManager__TrackEvent((AdManager_o *)v122, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mDragStartAct,
    (int64_t)drag_start_act,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mFrameOutStartFunc,
    (int64_t)frame_out_start_func,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mFrameOutEndAct,
    (int64_t)frame_out_end_act,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  MissionNotifyComponent__SetState(this, 1, v135);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B19CAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_MissionNotifyComponent__update__, method, v2);
    byte_4B19CAF = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_MissionNotifyComponent__update__);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  MissionNotifyComponent_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x4

  if ( (byte_4B19CB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_MissionNotifyComponent_StateFrameIn_begin__, v5, v6);
    sub_1BCA7E0(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__, v7, v8);
    sub_1BCA7E0(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, v9, v10);
    byte_4B19CB5 = 1;
  }
  v11 = sub_1BCAA2C(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  v20 = Method_MissionNotifyComponent_StateFrameIn_begin__;
  if ( (*((_BYTE *)Method_MissionNotifyComponent_StateFrameIn_begin__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_MissionNotifyComponent_StateFrameIn_begin__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlayCommonSe(v21, 20, 0LL);
  v22 = *(MissionNotifyComponent_o **)(v11 + 16);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v22 )
LABEL_8:
    sub_1BCAA3C(v12, v13);
  MissionNotifyComponent__FrameInOut(v22, 1, v26, 0, v27);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  void *gameObject; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x19
  __int64 v24; // x8
  struct MissionNotifyComponent_o *v25; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *mNextComp; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  MissionNotifyComponent_o *v36; // x20
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x4
  int v39; // w8
  void *v40; // x19
  unsigned int v41; // w20

  if ( (byte_4B19CB8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__, v10, v11);
    sub_1BCA7E0(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, v12, v13);
    byte_4B19CB8 = 1;
  }
  v14 = sub_1BCAA2C(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_22;
  *(_QWORD *)(v14 + 16) = that;
  v23 = v14 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)that, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v14 + 16) )
    goto LABEL_22;
  v24 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 216LL);
  if ( !v24 )
    goto LABEL_22;
  v25 = (struct MissionNotifyComponent_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v24 + 24))(
                                             *(_QWORD *)(v24 + 64),
                                             *(_QWORD *)(v24 + 40));
  this->fields.mNextComp = v25;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)p_fields, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  if ( !*(_QWORD *)v23 )
    goto LABEL_22;
  if ( !*(_BYTE *)(*(_QWORD *)v23 + 193LL) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v36 = *(MissionNotifyComponent_o **)(v14 + 16);
      v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v34, v35);
      System_Action___ctor(
        v37,
        (Il2CppObject *)v14,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v36 )
        goto LABEL_22;
      MissionNotifyComponent__FrameInOut(v36, 0, v37, 0, v38);
    }
  }
  gameObject = *(void **)v23;
  if ( !*(_QWORD *)v23
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(gameObject, v16);
  }
  v39 = *((_DWORD *)gameObject + 6);
  v40 = gameObject;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= v39 )
        sub_1BCAA44(gameObject, v16);
      gameObject = (void *)*((_QWORD *)v40 + (int)v41 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) - 50, 0LL);
      v39 = *((_DWORD *)v40 + 6);
      if ( (int)++v41 >= v39 )
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
  if ( (byte_4B19CBA & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_1BCA7E0(
                                                       &Method_ActionExtensions_Call_MissionNotifyComponent___,
                                                       that,
                                                       method);
    byte_4B19CBA = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (Il2CppObject *)that,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 klass; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 *v21; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s8
  float v26; // s9
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x20
  float v29; // s0
  float v30; // s8
  float v31; // s0
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *v33; // x19
  PartyOrganizationUtility_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  MissionNotifyComponent_o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x20
  const MethodInfo *v47; // x4
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4

  if ( (byte_4B19CB9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__, v8, v9);
    sub_1BCA7E0(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, v10, v11);
    byte_4B19CB9 = 1;
  }
  v12 = sub_1BCAA2C(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_25;
  *(_QWORD *)(v12 + 16) = that;
  v21 = (__int64 *)(v12 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)that, v15, v16, v17, v18, v19, v20);
  klass = *(_QWORD *)(v12 + 16);
  if ( !klass )
    goto LABEL_25;
  if ( *(_BYTE *)(klass + 193) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    *(UnityEngine_Vector3_o *)&v23 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v21 )
      goto LABEL_25;
    *(float32x2_t *)(*v21 + 196) = vmul_f32(*(float32x2_t *)(*v21 + 196), vdup_n_s32(0x3F6147AEu));
    klass = *v21;
    if ( !*v21 )
      goto LABEL_25;
    v25 = v23 + *(float *)(klass + 196);
    v26 = v24 + *(float *)(klass + 200);
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    v48.fields.x = v25;
    v48.fields.y = v26;
    GameObjectExtensions__SetLocalPosition_34330940(v27, v48, 0LL);
    if ( !*v21 )
      goto LABEL_25;
    v28 = *(_QWORD *)(*v21 + 32);
    if ( !v28 )
      goto LABEL_25;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 424LL))(
              v28,
              *(_QWORD *)(*(_QWORD *)v28 + 432LL));
    if ( !*v21 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v21 + 32);
    if ( !klass )
      goto LABEL_25;
    v30 = v29;
    v31 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v28 + 440LL))(
              v28,
              *(_QWORD *)(*(_QWORD *)v28 + 448LL),
              v30 + (float)((float)(0.0 - v31) * 0.15));
    if ( !*v21 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v21 + 32);
    if ( !klass )
      goto LABEL_25;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
           klass,
           *(_QWORD *)(*(_QWORD *)klass + 432LL)) <= 0.01 )
    {
      klass = *v21;
      if ( *v21 )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, v32);
        return;
      }
LABEL_25:
      sub_1BCAA3C(klass, v14);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (PartyOrganizationUtility_o *)&this->fields;
    v33 = (UnityEngine_Object_o *)mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_25;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, v14) != 1 )
      {
        p_fields->klass = 0LL;
        sub_1BCA784(p_fields, 0LL, v36, v37, v38, v39, v40, v41);
        v42 = *(MissionNotifyComponent_o **)(v12 + 16);
        v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
        System_Action___ctor(
          v46,
          (Il2CppObject *)v12,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v42 )
          goto LABEL_25;
        MissionNotifyComponent__FrameInOut(v42, 0, v46, 0, v47);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v7; // x1
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  UnityEngine_Object_o *mClearEffectAnim; // x20

  if ( (byte_4B19CB6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B19CB6 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    baseSp = that->fields.mClearEffectSimpleAnim;
    if ( baseSp )
    {
      SimpleAnimation__Play(baseSp, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(baseSp, v6);
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x1
  float x; // s8
  float y; // s9
  UnityEngine_Camera_o *mCamera; // x21
  int v10; // w8
  unsigned __int64 v11; // d0
  float v12; // s1
  const MethodInfo *v13; // x2
  float v14; // s8
  float v15; // s9
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (float32x2_t *)this;
  if ( (byte_4B19CB7 & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_1BCA7E0(&CTouch_TypeInfo, that, method);
    byte_4B19CB7 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4[6].n64_f32[0]) < 2.0 )
      return;
LABEL_13:
    MissionNotifyComponent__SetState(that, 3, v13);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  v4[3].n64_u64[0] = v4[2].n64_u64[0];
  mCamera = that->fields.mCamera;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_47128020(mCamera, 0LL);
  if ( UnityEngine_Input__get_touchCount(0LL) > 1 )
    v4[2].n64_u64[0] = v4[3].n64_u64[0];
  v10 = v4[6].n64_i32[1];
  if ( v10 < 1 )
  {
    LODWORD(v11) = v4[4].n64_u32[0];
    v12 = v4[4].n64_f32[1];
  }
  else
  {
    v11 = vsub_f32(v4[2], v4[3]).n64_u64[0];
    v12 = *((float *)&v11 + 1);
    v4[5].n64_u64[0] = v4[4].n64_u64[0];
    v4[4].n64_u64[0] = v11;
  }
  v14 = x + *(float *)&v11;
  v15 = y + v12;
  v4[6].n64_u32[1] = v10 + 1;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  v17.fields.x = v14;
  v17.fields.y = v15;
  GameObjectExtensions__SetLocalPosition_34330940(v16, v17, 0LL);
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
    sub_1BCAA3C(baseSp, v4);
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
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}
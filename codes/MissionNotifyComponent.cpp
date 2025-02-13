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
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v11; // s0
  float v12; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v14; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_T__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x20
  Il2CppObject *v30; // x21
  const MethodInfo *v31; // x2
  int v32; // w8
  void *v33; // x20
  unsigned int v34; // w21
  struct UnityEngine_Camera_o *main; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BE0141 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_MissionNotifyComponent___ctor__);
    sub_1C21E38(&Method_CStateManager_MissionNotifyComponent__add__);
    sub_1C21E38(&CStateManager_MissionNotifyComponent__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&MissionNotifyComponent_StateFrameIn_TypeInfo);
    sub_1C21E38(&MissionNotifyComponent_StateFrameOut_TypeInfo);
    sub_1C21E38(&MissionNotifyComponent_StateNone_TypeInfo);
    sub_1C21E38(&MissionNotifyComponent_StateShowing_TypeInfo);
    byte_4BE0141 = 1;
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
  v11 = (float)baseSp->fields.mHeight * 0.5;
  v12 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v12 - v11) + 1.0;
  this->fields.mFrameOutPosY = v12 + v11;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v2, v3, v4, v5, v6, v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v14);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_T__o *)sub_1C22084(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_object____ctor(
      v16,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31E6A20 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v24 = (Il2CppObject *)sub_1C22084(MissionNotifyComponent_StateNone_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !mFSM )
      goto LABEL_20;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_MissionNotifyComponent__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1C22084(MissionNotifyComponent_StateFrameIn_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_20;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_MissionNotifyComponent__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1C22084(MissionNotifyComponent_StateShowing_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_20;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_MissionNotifyComponent__add__);
    v29 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_1C22084(MissionNotifyComponent_StateFrameOut_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_20;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v31);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_20;
  v32 = *((_DWORD *)gameObject + 6);
  v33 = gameObject;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= v32 )
        sub_1C2209C(gameObject, method);
      gameObject = (void *)*((_QWORD *)v33 + (int)v34 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) + 150, 0LL);
      v32 = *((_DWORD *)v33 + 6);
      if ( (int)++v34 >= v32 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1C22094(gameObject, method);
  }
LABEL_19:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mCamera, (int64_t)main, v36, v37, v38, v39, v40, v41);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  float v35; // s0
  float v36; // s2
  float mFrameOutPosY; // s1
  float v38; // s3
  float v39; // s4
  float v40; // s5
  float v41; // s2
  float v42; // s9
  System_Action_o *v43; // x21
  Il2CppObject *Component_object; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  EasingObject_o *v51; // x19
  System_Action_o *v52; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE0146 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__);
    sub_1C21E38(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__);
    sub_1C21E38(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
    byte_4BE0146 = 1;
  }
  v9 = sub_1C22084(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = end_act;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 56), (int64_t)end_act, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v9 + 16) = gameObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)gameObject, v25, v26, v27, v28, v29, v30);
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
    v38 = v35;
  else
    v38 = x;
  if ( is_framein )
    v39 = v36;
  else
    v39 = z;
  if ( is_framein )
    v35 = x;
  if ( is_framein )
    v40 = z;
  else
    v40 = v36;
  if ( is_framein )
    v41 = this->fields.mFrameOutPosY;
  else
    v41 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v9 + 84) = !is_framein;
  *(float *)(v9 + 72) = v38;
  *(float *)(v9 + 76) = v41;
  *(float *)(v9 + 80) = v39;
  *(float *)(v9 + 24) = v35;
  *(float *)(v9 + 28) = mFrameOutPosY;
  *(float *)(v9 + 32) = v40;
  *(_DWORD *)(v9 + 48) = is_framein;
  if ( is_framein )
    v42 = 0.5;
  else
    v42 = 0.25;
  v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v43, 0LL);
    return;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v9 + 16),
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 64) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)Component_object, v45, v46, v47, v48, v49, v50);
  v51 = *(EasingObject_o **)(v9 + 64);
  v52 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v51 )
LABEL_27:
    sub_1C22094(v10, v11);
  EasingObject__Play(v51, v42 * timeScale, v52, v43, 0.0, 17, 0LL);
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
  if ( (byte_4BE0144 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_1C21E38(&Method_CStateManager_MissionNotifyComponent__getState__);
    byte_4BE0144 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(this, method);
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
  Il2CppObject *Component_object; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BE0147 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EasingObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0147 = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v3) != 1 )
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
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
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
        MissionNotifyComponent__SetState(this, 2, v7);
        goto LABEL_14;
      }
    }
    sub_1C22094(gameObject, v5);
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

  if ( (byte_4BE0145 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_MissionNotifyComponent__setState__);
    byte_4BE0145 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_MissionNotifyComponent__setState__);
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
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v14; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x26
  bool IsMasterMission; // w24
  _BOOL4 v17; // w21
  int v18; // w20
  UILabel_o *noLabel; // x26
  struct UnityEngine_GameObject_o *v20; // x10
  UnityEngine_GameObject_o *v21; // x24
  UILabel_o *progressLabel; // x26
  System_String_o *v23; // x27
  System_String_o *v24; // x0
  _BOOL4 v25; // w24
  UISprite_o *baseSp; // x27
  UIAtlas_o *baseAtlas; // x26
  int32_t banner_group; // w25
  struct UISprite_o *clearSp; // x25
  System_Action_MissionNotifyComponent__o *v30; // x29
  int32_t mDepth; // w21
  Il2CppObject *clearEffectPrefab; // x26
  System_Func_MissionNotifyComponent__o *v33; // x20
  UnityEngine_GameObject_o *v34; // x26
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  UnityEngine_Object_o *v51; // x28
  bool v52; // w0
  int v53; // w8
  __int64 v54; // x25
  unsigned int v55; // w22
  int v56; // w21
  UnityEngine_GameObject_o *rewardMessage; // x25
  int v58; // w21
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v60; // x25
  System_String_o *v61; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v63; // x9
  UnityEngine_Object_o *v64; // x25
  struct UILabel_o *v65; // x8
  System_String_o *v66; // x0
  __int64 *v67; // x8
  System_String_o *v68; // x25
  int32_t monitor_high; // w26
  UISprite_o *typeSp; // x27
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppObject *v77; // x24
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  const MethodInfo *v90; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v92; // x0
  int32_t v93; // [xsp+8h] [xbp-78h]
  int v94; // [xsp+10h] [xbp-70h]
  int monitor; // [xsp+14h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BE0143 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_21711/*"master_mission_weekly"*/);
    sub_1C21E38(&StringLiteral_21710/*"master_mission_special"*/);
    sub_1C21E38(&StringLiteral_21706/*"master_mission_daily"*/);
    sub_1C21E38(&StringLiteral_21708/*"master_mission_extra"*/);
    sub_1C21E38(&StringLiteral_21709/*"master_mission_panel"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    sub_1C21E38(&StringLiteral_21707/*"master_mission_event"*/);
    byte_4BE0143 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_object )
    goto LABEL_121;
  v14 = (_DWORD)disp_info + 16;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_121;
    monitor = (int)entity[1].monitor;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_1C21EE0(long___TypeInfo, 1LL);
    if ( !entity )
      goto LABEL_121;
    v12 = Instance;
    if ( !Instance )
      goto LABEL_121;
    if ( !*(_DWORD *)(Instance + 24) )
      goto LABEL_122;
    *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
    if ( !v15 )
      goto LABEL_121;
    if ( DataMasterBase_object__object__int___isEntityExistsFromId(
           v15,
           (System_Int64_array *)Instance,
           (const MethodInfo_325B3A4 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__) )
    {
      v17 = 1;
      v18 = 1;
    }
    else
    {
      v18 = 0;
      v17 = monitor != 7;
    }
  }
  else
  {
    v18 = 0;
    IsMasterMission = 0;
    monitor = 0;
    v17 = 1;
  }
  noLabel = this->fields.noLabel;
  Instance = (__int64)System_Int32__ToString((int)disp_info + 52, 0LL);
  if ( !noLabel )
    goto LABEL_121;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0LL);
  v20 = IsMasterMission ? 0LL : this->fields.noRoot;
  Instance = (__int64)((((unsigned __int8)v18 | IsMasterMission) & 1) != 0 ? this->fields.noRoot : v20);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v17 & ((v18 | IsMasterMission) ^ 1), 0LL);
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !this->fields.noRoot )
    goto LABEL_121;
  v21 = (UnityEngine_GameObject_o *)Instance;
  Instance = UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0LL);
  if ( !v21 )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive(v21, (Instance & 1) == 0, 0LL);
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
    v23 = System_Int32__ToString_63921084((int)disp_info + 44, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
    v24 = System_Int32__ToString_63921084((int)disp_info + 48, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_63126736(v23, (System_String_o *)StringLiteral_1123/*"/"*/, v24, 0LL);
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
    v25 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0LL) >= 1.0;
  }
  else
  {
    v25 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v25, banner_group, 0LL);
  Instance = (__int64)this->fields.clearSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v25, 0LL);
  Instance = (__int64)this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v94 = v18;
  if ( !v25 )
    goto LABEL_88;
  clearSp = this->fields.clearSp;
  v93 = v14;
  if ( !clearSp )
    goto LABEL_121;
  v30 = frame_out_end_act;
  mDepth = clearSp->fields.mDepth;
  clearEffectPrefab = (Il2CppObject *)this->fields.clearEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = frame_out_start_func;
  Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                        clearEffectPrefab,
                        (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_121;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Instance,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = (struct SimpleAnimation_o *)Component_object;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mClearEffectSimpleAnim,
    (int64_t)Component_object,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = UnityEngine_GameObject__GetComponent_object_(
          v34,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.mClearEffectAnim = (struct UnityEngine_Animation_o *)v43;
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mClearEffectAnim, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0LL, 0LL) )
  {
    Instance = (__int64)*p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_121;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0LL);
    frame_out_start_func = v33;
  }
  else
  {
    v51 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v52 = UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
    frame_out_start_func = v33;
    if ( v52 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_121;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v34, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                        v34,
                        (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_121;
  v53 = *(_DWORD *)(Instance + 24);
  v54 = Instance;
  if ( v53 >= 1 )
  {
    v55 = 0;
    v56 = mDepth + 1;
    while ( v55 < v53 )
    {
      Instance = *(_QWORD *)(v54 + 8LL * (int)v55 + 32);
      if ( !Instance )
        goto LABEL_121;
      UIWidget__set_depth((UIWidget_o *)Instance, v56 + *(_DWORD *)(Instance + 176), 0LL);
      v53 = *(_DWORD *)(v54 + 24);
      if ( (int)++v55 >= v53 )
        goto LABEL_70;
    }
LABEL_122:
    sub_1C2209C(Instance, v12);
  }
LABEL_70:
  if ( !entity )
  {
    frame_out_end_act = v30;
    v14 = v93;
LABEL_88:
    v58 = monitor;
LABEL_89:
    v12 = 462LL;
    goto LABEL_90;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL);
  if ( !rewardMessage )
    goto LABEL_121;
  frame_out_end_act = v30;
  UnityEngine_GameObject__SetActive(rewardMessage, Instance & 1, 0LL);
  Instance = (__int64)entity;
  v14 = v93;
  if ( !entity )
    goto LABEL_121;
  v58 = monitor;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, HIDWORD(entity[5].klass), 0LL);
  if ( !GiftListById )
    goto LABEL_89;
  v60 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  v61 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          (int32_t)entity[1].klass,
          HIDWORD(entity[1].monitor),
          1,
          0LL);
  Instance = System_String__IsNullOrEmpty(v61, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_121;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v61, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_34799952(v92, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_119;
  }
  if ( !v60->max_length )
    goto LABEL_122;
  v63 = (int32_t *)v60->m_Items[0];
  if ( !v63 || !itemIcon )
LABEL_121:
    sub_1C22094(Instance, v12);
  ItemIconComponent__SetGift_39386620(this->fields.itemIcon, v63[5], v63[6], v63[7], 0, 0LL);
LABEL_119:
  Instance = (__int64)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_121;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0LL);
  v12 = 360LL;
LABEL_90:
  Instance = (__int64)this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_121;
  UIWidget__set_width((UIWidget_o *)Instance, v12, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_121;
  v64 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v65 = this->fields.noLabel;
  if ( !v65 )
    goto LABEL_121;
  v66 = System_String__Concat_63115476((System_String_o *)Instance, v65->fields.mText, 0LL);
  UnityEngine_Object__set_name(v64, v66, 0LL);
  switch ( v58 )
  {
    case 1:
    case 7:
      v67 = &StringLiteral_21707/*"master_mission_event"*/;
      goto LABEL_101;
    case 2:
      v67 = &StringLiteral_21711/*"master_mission_weekly"*/;
      goto LABEL_101;
    case 3:
      v67 = &StringLiteral_21706/*"master_mission_daily"*/;
      goto LABEL_101;
    case 4:
      v67 = &StringLiteral_21708/*"master_mission_extra"*/;
      goto LABEL_101;
    case 5:
      v67 = &StringLiteral_21710/*"master_mission_special"*/;
      goto LABEL_101;
    case 6:
      v67 = &StringLiteral_21709/*"master_mission_panel"*/;
LABEL_101:
      v68 = (System_String_o *)*v67;
      break;
    default:
      v68 = 0LL;
      break;
  }
  if ( !entity || ((v94 ^ 1) & 1) != 0 )
  {
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_121;
    UISprite__set_spriteName((UISprite_o *)Instance, v68, 0LL);
  }
  else
  {
    monitor_high = HIDWORD(entity[1].monitor);
    typeSp = this->fields.typeSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39104396(monitor_high, typeSp, v68, 0LL);
  }
  Instance = (__int64)this->fields.typeSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v25 && v58 == 3 )
  {
    v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v14, 0LL);
    if ( !v77 )
      goto LABEL_121;
    AdManager__TrackEvent((AdManager_o *)v77, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mDragStartAct,
    (int64_t)drag_start_act,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mFrameOutStartFunc,
    (int64_t)frame_out_start_func,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mFrameOutEndAct,
    (int64_t)frame_out_end_act,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  MissionNotifyComponent__SetState(this, 1, v90);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BE0142 & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_MissionNotifyComponent__update__);
    byte_4BE0142 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31E6B30 *)Method_CStateManager_MissionNotifyComponent__update__);
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
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  MissionNotifyComponent_o *v15; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x4

  if ( (byte_4BE0148 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MissionNotifyComponent_StateFrameIn_begin__);
    sub_1C21E38(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__);
    sub_1C21E38(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
    byte_4BE0148 = 1;
  }
  v4 = sub_1C22084(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
  v13 = Method_MissionNotifyComponent_StateFrameIn_begin__;
  if ( (*((_BYTE *)Method_MissionNotifyComponent_StateFrameIn_begin__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C21E50(Method_MissionNotifyComponent_StateFrameIn_begin__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v13, v13[4]);
  OverwriteAssetSoundName__PlayCommonSe(v14, 20, 0, 0LL);
  v15 = *(MissionNotifyComponent_o **)(v4 + 16);
  v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v4,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
LABEL_8:
    sub_1C22094(v5, v6);
  MissionNotifyComponent__FrameInOut(v15, 1, v16, 0, v17);
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
    sub_1C22094(0LL, method);
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
  __int64 v5; // x21
  void *gameObject; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x19
  __int64 v15; // x8
  struct MissionNotifyComponent_o *v16; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *mNextComp; // x20
  MissionNotifyComponent_o *v25; // x20
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x4
  int v28; // w8
  void *v29; // x19
  unsigned int v30; // w20

  if ( (byte_4BE014B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__);
    sub_1C21E38(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
    byte_4BE014B = 1;
  }
  v5 = sub_1C22084(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = that;
  v14 = v5 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)that, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_22;
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 216LL);
  if ( !v15 )
    goto LABEL_22;
  v16 = (struct MissionNotifyComponent_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v15 + 24))(
                                             *(_QWORD *)(v15 + 64),
                                             *(_QWORD *)(v15 + 40));
  this->fields.mNextComp = v16;
  p_fields = &this->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_fields, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)v14 )
    goto LABEL_22;
  if ( !*(_BYTE *)(*(_QWORD *)v14 + 193LL) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v25 = *(MissionNotifyComponent_o **)(v5 + 16);
      v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v5,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v25 )
        goto LABEL_22;
      MissionNotifyComponent__FrameInOut(v25, 0, v26, 0, v27);
    }
  }
  gameObject = *(void **)v14;
  if ( !*(_QWORD *)v14
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_22:
    sub_1C22094(gameObject, v7);
  }
  v28 = *((_DWORD *)gameObject + 6);
  v29 = gameObject;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= v28 )
        sub_1C2209C(gameObject, v7);
      gameObject = (void *)*((_QWORD *)v29 + (int)v30 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) - 50, 0LL);
      v28 = *((_DWORD *)v29 + 6);
      if ( (int)++v30 >= v28 )
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
  if ( (byte_4BE014D & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_1C21E38(&Method_ActionExtensions_Call_MissionNotifyComponent___);
    byte_4BE014D = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (Il2CppObject *)that,
    (const MethodInfo_2F02610 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 klass; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 *v14; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s8
  float v19; // s9
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x20
  float v22; // s0
  float v23; // s8
  float v24; // s0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *v26; // x19
  PartyOrganizationUtility_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  MissionNotifyComponent_o *v35; // x19
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x4
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4

  if ( (byte_4BE014C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__);
    sub_1C21E38(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
    byte_4BE014C = 1;
  }
  v5 = sub_1C22084(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = that;
  v14 = (__int64 *)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)that, v8, v9, v10, v11, v12, v13);
  klass = *(_QWORD *)(v5 + 16);
  if ( !klass )
    goto LABEL_25;
  if ( *(_BYTE *)(klass + 193) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    *(UnityEngine_Vector3_o *)&v16 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v14 )
      goto LABEL_25;
    *(float32x2_t *)(*v14 + 196) = vmul_f32(*(float32x2_t *)(*v14 + 196), vdup_n_s32(0x3F6147AEu));
    klass = *v14;
    if ( !*v14 )
      goto LABEL_25;
    v18 = v16 + *(float *)(klass + 196);
    v19 = v17 + *(float *)(klass + 200);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    v38.fields.x = v18;
    v38.fields.y = v19;
    GameObjectExtensions__SetLocalPosition_34797564(v20, v38, 0LL);
    if ( !*v14 )
      goto LABEL_25;
    v21 = *(_QWORD *)(*v14 + 32);
    if ( !v21 )
      goto LABEL_25;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 424LL))(
              v21,
              *(_QWORD *)(*(_QWORD *)v21 + 432LL));
    if ( !*v14 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v14 + 32);
    if ( !klass )
      goto LABEL_25;
    v23 = v22;
    v24 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v21 + 440LL))(
              v21,
              *(_QWORD *)(*(_QWORD *)v21 + 448LL),
              v23 + (float)((float)(0.0 - v24) * 0.15));
    if ( !*v14 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v14 + 32);
    if ( !klass )
      goto LABEL_25;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
           klass,
           *(_QWORD *)(*(_QWORD *)klass + 432LL)) <= 0.01 )
    {
      klass = *v14;
      if ( *v14 )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, v25);
        return;
      }
LABEL_25:
      sub_1C22094(klass, v7);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (PartyOrganizationUtility_o *)&this->fields;
    v26 = (UnityEngine_Object_o *)mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_25;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, v7) != 1 )
      {
        p_fields->klass = 0LL;
        sub_1C21DDC(p_fields, 0LL, v29, v30, v31, v32, v33, v34);
        v35 = *(MissionNotifyComponent_o **)(v5 + 16);
        v36 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)v5,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v35 )
          goto LABEL_25;
        MissionNotifyComponent__FrameInOut(v35, 0, v36, 0, v37);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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

  if ( (byte_4BE0149 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0149 = 1;
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
    sub_1C22094(baseSp, v6);
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
    sub_1C22094(this, 0LL);
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
  if ( (byte_4BE014A & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_1C21E38(&CTouch_TypeInfo);
    byte_4BE014A = 1;
  }
  if ( !that )
    sub_1C22094(this, that);
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
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_47740676(mCamera, 0LL);
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
  GameObjectExtensions__SetLocalPosition_34797564(v15, v16, 0LL);
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
    sub_1C22094(baseSp, v4);
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
    sub_1C22094(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}
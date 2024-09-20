void __fastcall MissionNotifyComponent___ctor(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionNotifyComponent__Awake(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  float v7; // s0
  float v8; // s1
  struct UIAtlas_o *mAtlas; // x1
  const MethodInfo *v10; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_T__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x20
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x2
  int v24; // w8
  void *v25; // x20
  unsigned int v26; // w21
  struct UnityEngine_Camera_o *main; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_4A5E451 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_MissionNotifyComponent___ctor__);
    sub_1B885B0(&Method_CStateManager_MissionNotifyComponent__add__);
    sub_1B885B0(&CStateManager_MissionNotifyComponent__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&MissionNotifyComponent_StateFrameIn_TypeInfo);
    sub_1B885B0(&MissionNotifyComponent_StateFrameOut_TypeInfo);
    sub_1B885B0(&MissionNotifyComponent_StateNone_TypeInfo);
    sub_1B885B0(&MissionNotifyComponent_StateShowing_TypeInfo);
    byte_4A5E451 = 1;
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
  v7 = (float)baseSp->fields.mHeight * 0.5;
  v8 = (float)*(int *)(*((_QWORD *)gameObject + 23) + 88LL) * 0.5;
  this->fields.mFrameInPosY = (float)(v8 - v7) + 1.0;
  this->fields.mFrameOutPosY = v8 + v7;
  mAtlas = baseSp->fields.mAtlas;
  this->fields.baseAtlas = mAtlas;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v2, v3);
  MissionNotifyComponent__FrameInOut(this, 0, 0LL, 1, v10);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v12 = (CStateManager_T__o *)sub_1B887FC(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_object____ctor(
      v12,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v12, v13, v14);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v16 = (Il2CppObject *)sub_1B887FC(MissionNotifyComponent_StateNone_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !mFSM )
      goto LABEL_20;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_MissionNotifyComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1B887FC(MissionNotifyComponent_StateFrameIn_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_20;
    CStateManager_object___add(
      v17,
      1,
      (IState_T__o *)v18,
      (const MethodInfo_30AADDC *)Method_CStateManager_MissionNotifyComponent__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1B887FC(MissionNotifyComponent_StateShowing_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_20;
    CStateManager_object___add(
      v19,
      2,
      (IState_T__o *)v20,
      (const MethodInfo_30AADDC *)Method_CStateManager_MissionNotifyComponent__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1B887FC(MissionNotifyComponent_StateFrameOut_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_20;
    CStateManager_object___add(
      v21,
      3,
      (IState_T__o *)v22,
      (const MethodInfo_30AADDC *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v23);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_20;
  v24 = *((_DWORD *)gameObject + 6);
  v25 = gameObject;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
        sub_1B88814(gameObject, method);
      gameObject = (void *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) + 150, 0LL);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_19;
    }
LABEL_20:
    sub_1B8880C(gameObject, method);
  }
LABEL_19:
  main = UnityEngine_Camera__get_main(0LL);
  this->fields.mCamera = main;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mCamera, (int32_t)main, v28, v29);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  float timeScale; // s8
  float mFrameInPosY; // s11
  float x; // s9
  float z; // s10
  float v23; // s0
  float v24; // s2
  float mFrameOutPosY; // s1
  float v26; // s3
  float v27; // s4
  float v28; // s5
  float v29; // s2
  float v30; // s9
  System_Action_o *v31; // x21
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  EasingObject_o *v35; // x19
  System_Action_o *v36; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E456 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__);
    sub_1B885B0(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__);
    sub_1B885B0(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
    byte_4A5E456 = 1;
  }
  v9 = sub_1B887FC(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 56) = end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)end_act, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v9 + 16) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)gameObject, v17, v18);
  timeScale = UnityEngine_Time__get_timeScale(0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v9 + 16), 0LL);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  *(UnityEngine_Vector3_o *)&v23 = GameObjectExtensions__GetLocalPosition(
                                     (UnityEngine_GameObject_o *)*(_QWORD *)(v9 + 16),
                                     0LL);
  mFrameOutPosY = this->fields.mFrameOutPosY;
  if ( is_framein )
    v26 = v23;
  else
    v26 = x;
  if ( is_framein )
    v27 = v24;
  else
    v27 = z;
  if ( is_framein )
    v23 = x;
  if ( is_framein )
    v28 = z;
  else
    v28 = v24;
  if ( is_framein )
    v29 = this->fields.mFrameOutPosY;
  else
    v29 = mFrameInPosY;
  if ( is_framein )
    mFrameOutPosY = mFrameInPosY;
  *(_DWORD *)(v9 + 84) = !is_framein;
  *(float *)(v9 + 72) = v26;
  *(float *)(v9 + 76) = v29;
  *(float *)(v9 + 80) = v27;
  *(float *)(v9 + 24) = v23;
  *(float *)(v9 + 28) = mFrameOutPosY;
  *(float *)(v9 + 32) = v28;
  *(_DWORD *)(v9 + 48) = is_framein;
  if ( is_framein )
    v30 = 0.5;
  else
    v30 = 0.25;
  v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0LL);
  if ( is_force )
  {
    ActionExtensions__Call(v31, 0LL);
    return;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v9 + 16),
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 64) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)Component_object, v33, v34);
  v35 = *(EasingObject_o **)(v9 + 64);
  v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0LL);
  if ( !v35 )
LABEL_27:
    sub_1B8880C(v10, v11);
  EasingObject__Play(v35, v30 * timeScale, v36, v31, 0.0, 17, 0LL);
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
  if ( (byte_4A5E454 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_1B885B0(&Method_CStateManager_MissionNotifyComponent__getState__);
    byte_4A5E454 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5E457 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EasingObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E457 = 1;
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
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
    sub_1B8880C(gameObject, v5);
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

  if ( (byte_4A5E455 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_MissionNotifyComponent__setState__);
    byte_4A5E455 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_MissionNotifyComponent__setState__);
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
  DataMasterBase_o *v15; // x26
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
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Object_o *v43; // x28
  bool v44; // w0
  int v45; // w8
  __int64 v46; // x25
  unsigned int v47; // w22
  int v48; // w21
  UnityEngine_GameObject_o *rewardMessage; // x25
  int v50; // w21
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v52; // x25
  System_String_o *v53; // x26
  struct ItemIconComponent_o *itemIcon; // x8
  int32_t *v55; // x9
  UnityEngine_Object_o *v56; // x25
  struct UILabel_o *v57; // x8
  System_String_o *v58; // x0
  __int64 *v59; // x8
  System_String_o *v60; // x25
  int32_t monitor_high; // w26
  UISprite_o *typeSp; // x27
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x24
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  const MethodInfo *v70; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v72; // x0
  int32_t v73; // [xsp+8h] [xbp-78h]
  int v74; // [xsp+10h] [xbp-70h]
  int monitor; // [xsp+14h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5E453 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_21324/*"master_mission_weekly"*/);
    sub_1B885B0(&StringLiteral_21323/*"master_mission_special"*/);
    sub_1B885B0(&StringLiteral_21319/*"master_mission_daily"*/);
    sub_1B885B0(&StringLiteral_21321/*"master_mission_extra"*/);
    sub_1B885B0(&StringLiteral_21322/*"master_mission_panel"*/);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_21320/*"master_mission_event"*/);
    byte_4A5E453 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  if ( !disp_info || !MasterData_object )
    goto LABEL_121;
  v14 = (_DWORD)disp_info + 16;
  v15 = (DataMasterBase_o *)Instance;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         disp_info->fields.eventMissionId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_121;
    monitor = (int)entity[1].monitor;
    IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0LL);
    Instance = sub_1B88658(long___TypeInfo, 1LL);
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
    if ( DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, 0LL) )
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
    v23 = System_Int32__ToString_62512312((int)disp_info + 44, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
    v24 = System_Int32__ToString_62512312((int)disp_info + 48, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
    Instance = (__int64)System_String__Concat_61718292(v23, (System_String_o *)StringLiteral_1123/*"/"*/, v24, 0LL);
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
  v74 = v18;
  if ( !v25 )
    goto LABEL_88;
  clearSp = this->fields.clearSp;
  v73 = v14;
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
                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_121;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Instance,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = (struct SimpleAnimation_o *)Component_object;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mClearEffectSimpleAnim,
    (int32_t)Component_object,
    v37,
    v38);
  v39 = UnityEngine_GameObject__GetComponent_object_(
          v34,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.mClearEffectAnim = (struct UnityEngine_Animation_o *)v39;
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mClearEffectAnim, (int32_t)v39, v41, v42);
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
    v43 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v44 = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
    frame_out_start_func = v33;
    if ( v44 )
    {
      Instance = (__int64)*p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_121;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0LL);
    }
  }
  GameObjectExtensions__SafeSetParent(v34, (UnityEngine_Component_o *)clearSp, 0LL);
  Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                        v34,
                        (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_121;
  v45 = *(_DWORD *)(Instance + 24);
  v46 = Instance;
  if ( v45 >= 1 )
  {
    v47 = 0;
    v48 = mDepth + 1;
    while ( v47 < v45 )
    {
      Instance = *(_QWORD *)(v46 + 8LL * (int)v47 + 32);
      if ( !Instance )
        goto LABEL_121;
      UIWidget__set_depth((UIWidget_o *)Instance, v48 + *(_DWORD *)(Instance + 176), 0LL);
      v45 = *(_DWORD *)(v46 + 24);
      if ( (int)++v47 >= v45 )
        goto LABEL_70;
    }
LABEL_122:
    sub_1B88814(Instance, v12);
  }
LABEL_70:
  if ( !entity )
  {
    frame_out_end_act = v30;
    v14 = v73;
LABEL_88:
    v50 = monitor;
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
  v14 = v73;
  if ( !entity )
    goto LABEL_121;
  v50 = monitor;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0LL) )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, HIDWORD(entity[5].klass), 0LL);
  if ( !GiftListById )
    goto LABEL_89;
  v52 = GiftListById;
  if ( !*(_QWORD *)&GiftListById->max_length )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_121;
  v53 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          (int32_t)entity[1].klass,
          HIDWORD(entity[1].monitor),
          1,
          0LL);
  Instance = System_String__IsNullOrEmpty(v53, 0LL);
  itemIcon = this->fields.itemIcon;
  if ( (Instance & 1) == 0 )
  {
    if ( !itemIcon )
      goto LABEL_121;
    ItemIconComponent__SetItemImageByName(this->fields.itemIcon, v53, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0LL);
    Instance = (__int64)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_121;
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalScale_33726404(v72, 0.4, 0.4, 1.0, 0LL);
    goto LABEL_119;
  }
  if ( !v52->max_length )
    goto LABEL_122;
  v55 = (int32_t *)v52->m_Items[0];
  if ( !v55 || !itemIcon )
LABEL_121:
    sub_1B8880C(Instance, v12);
  ItemIconComponent__SetGift_38144896(this->fields.itemIcon, v55[5], v55[6], v55[7], 0, 0LL);
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
  v56 = (UnityEngine_Object_o *)Instance;
  Instance = (__int64)UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
  v57 = this->fields.noLabel;
  if ( !v57 )
    goto LABEL_121;
  v58 = System_String__Concat_61707032((System_String_o *)Instance, v57->fields.mText, 0LL);
  UnityEngine_Object__set_name(v56, v58, 0LL);
  switch ( v50 )
  {
    case 1:
    case 7:
      v59 = &StringLiteral_21320/*"master_mission_event"*/;
      goto LABEL_101;
    case 2:
      v59 = &StringLiteral_21324/*"master_mission_weekly"*/;
      goto LABEL_101;
    case 3:
      v59 = &StringLiteral_21319/*"master_mission_daily"*/;
      goto LABEL_101;
    case 4:
      v59 = &StringLiteral_21321/*"master_mission_extra"*/;
      goto LABEL_101;
    case 5:
      v59 = &StringLiteral_21323/*"master_mission_special"*/;
      goto LABEL_101;
    case 6:
      v59 = &StringLiteral_21322/*"master_mission_panel"*/;
LABEL_101:
      v60 = (System_String_o *)*v59;
      break;
    default:
      v60 = 0LL;
      break;
  }
  if ( !entity || ((v74 ^ 1) & 1) != 0 )
  {
    Instance = (__int64)this->fields.typeSp;
    if ( !Instance )
      goto LABEL_121;
    UISprite__set_spriteName((UISprite_o *)Instance, v60, 0LL);
  }
  else
  {
    monitor_high = HIDWORD(entity[1].monitor);
    typeSp = this->fields.typeSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(monitor_high, typeSp, v60, 0LL);
  }
  Instance = (__int64)this->fields.typeSp;
  if ( !Instance )
    goto LABEL_121;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( v25 && v50 == 3 )
  {
    v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = (__int64)System_Int32__ToString(v14, 0LL);
    if ( !v65 )
      goto LABEL_121;
    AdManager__TrackEvent((AdManager_o *)v65, 8, 8, 0, 0, (System_String_o *)Instance, 0LL);
  }
  this->fields.mDragStartAct = drag_start_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mDragStartAct, (int32_t)drag_start_act, v63, v64);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mFrameOutStartFunc,
    (int32_t)frame_out_start_func,
    v66,
    v67);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFrameOutEndAct, (int32_t)frame_out_end_act, v68, v69);
  MissionNotifyComponent__SetState(this, 1, v70);
}


void __fastcall MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A5E452 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_MissionNotifyComponent__update__);
    byte_4A5E452 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_MissionNotifyComponent__update__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  MissionNotifyComponent_o *v11; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x4

  if ( (byte_4A5E458 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_MissionNotifyComponent_StateFrameIn_begin__);
    sub_1B885B0(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
    byte_4A5E458 = 1;
  }
  v4 = sub_1B887FC(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  v9 = Method_MissionNotifyComponent_StateFrameIn_begin__;
  if ( (*((_BYTE *)Method_MissionNotifyComponent_StateFrameIn_begin__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B885C8(Method_MissionNotifyComponent_StateFrameIn_begin__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
  OverwriteAssetSoundName__PlayCommonSe(v10, 20, 0LL);
  v11 = *(MissionNotifyComponent_o **)(v4 + 16);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v4,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v11 )
LABEL_8:
    sub_1B8880C(v5, v6);
  MissionNotifyComponent__FrameInOut(v11, 1, v12, 0, v13);
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
    sub_1B8880C(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x19
  __int64 v11; // x8
  struct MissionNotifyComponent_o *v12; // x0
  MissionNotifyComponent_StateFrameOut_Fields *p_fields; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *mNextComp; // x20
  MissionNotifyComponent_o *v17; // x20
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x4
  int v20; // w8
  void *v21; // x19
  unsigned int v22; // w20

  if ( (byte_4A5E45B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__);
    sub_1B885B0(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
    byte_4A5E45B = 1;
  }
  v5 = sub_1B887FC(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = that;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)that, v8, v9);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_22;
  v11 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 216LL);
  if ( !v11 )
    goto LABEL_22;
  v12 = (struct MissionNotifyComponent_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v11 + 24))(
                                             *(_QWORD *)(v11 + 64),
                                             *(_QWORD *)(v11 + 40));
  this->fields.mNextComp = v12;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)v12, v14, v15);
  if ( !*(_QWORD *)v10 )
    goto LABEL_22;
  if ( !*(_BYTE *)(*(_QWORD *)v10 + 193LL) )
  {
    mNextComp = (UnityEngine_Object_o *)p_fields->mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mNextComp, 0LL, 0LL) )
    {
      v17 = *(MissionNotifyComponent_o **)(v5 + 16);
      v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v5,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0LL);
      if ( !v17 )
        goto LABEL_22;
      MissionNotifyComponent__FrameInOut(v17, 0, v18, 0, v19);
    }
  }
  gameObject = *(void **)v10;
  if ( !*(_QWORD *)v10
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0LL )
  {
LABEL_22:
    sub_1B8880C(gameObject, v7);
  }
  v20 = *((_DWORD *)gameObject + 6);
  v21 = gameObject;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
        sub_1B88814(gameObject, v7);
      gameObject = (void *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) - 50, 0LL);
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
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
  if ( (byte_4A5E45D & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_1B885B0(&Method_ActionExtensions_Call_MissionNotifyComponent___);
    byte_4A5E45D = 1;
  }
  if ( !that )
    sub_1B8880C(this, that);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (Il2CppObject *)that,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_MissionNotifyComponent___);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 *v10; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s8
  float v15; // s9
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x20
  float v18; // s0
  float v19; // s8
  float v20; // s0
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *v22; // x19
  ServantStatusBattleListViewItem_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  int32_t v25; // w2
  int32_t v26; // w3
  MissionNotifyComponent_o *v27; // x19
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x4
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4

  if ( (byte_4A5E45C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__);
    sub_1B885B0(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
    byte_4A5E45C = 1;
  }
  v5 = sub_1B887FC(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = that;
  v10 = (__int64 *)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)that, v8, v9);
  klass = *(_QWORD *)(v5 + 16);
  if ( !klass )
    goto LABEL_25;
  if ( *(_BYTE *)(klass + 193) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    *(UnityEngine_Vector3_o *)&v12 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( !*v10 )
      goto LABEL_25;
    *(float32x2_t *)(*v10 + 196) = vmul_f32(*(float32x2_t *)(*v10 + 196), vdup_n_s32(0x3F6147AEu));
    klass = *v10;
    if ( !*v10 )
      goto LABEL_25;
    v14 = v12 + *(float *)(klass + 196);
    v15 = v13 + *(float *)(klass + 200);
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
    v30.fields.x = v14;
    v30.fields.y = v15;
    GameObjectExtensions__SetLocalPosition_33724016(v16, v30, 0LL);
    if ( !*v10 )
      goto LABEL_25;
    v17 = *(_QWORD *)(*v10 + 32);
    if ( !v17 )
      goto LABEL_25;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 424LL))(
              v17,
              *(_QWORD *)(*(_QWORD *)v17 + 432LL));
    if ( !*v10 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v10 + 32);
    if ( !klass )
      goto LABEL_25;
    v19 = v18;
    v20 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v17 + 440LL))(
              v17,
              *(_QWORD *)(*(_QWORD *)v17 + 448LL),
              v19 + (float)((float)(0.0 - v20) * 0.15));
    if ( !*v10 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v10 + 32);
    if ( !klass )
      goto LABEL_25;
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
           klass,
           *(_QWORD *)(*(_QWORD *)klass + 432LL)) <= 0.01 )
    {
      klass = *v10;
      if ( *v10 )
      {
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, v21);
        return;
      }
LABEL_25:
      sub_1B8880C(klass, v7);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
    v22 = (UnityEngine_Object_o *)mNextComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_25;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, v7) != 1 )
      {
        p_fields->klass = 0LL;
        sub_1B88554(p_fields, 0, v25, v26);
        v27 = *(MissionNotifyComponent_o **)(v5 + 16);
        v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v28,
          (Il2CppObject *)v5,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0LL);
        if ( !v27 )
          goto LABEL_25;
        MissionNotifyComponent__FrameInOut(v27, 0, v28, 0, v29);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5E459 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E459 = 1;
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
    sub_1B8880C(baseSp, v6);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5E45A & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_1B885B0(&CTouch_TypeInfo);
    byte_4A5E45A = 1;
  }
  if ( !that )
    sub_1B8880C(this, that);
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
  v4[2].n64_u64[0] = (unsigned __int64)CTouch__getScreenPosition_46566088(mCamera, 0LL);
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
  GameObjectExtensions__SetLocalPosition_33724016(v15, v16, 0LL);
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
    sub_1B8880C(baseSp, v4);
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
    sub_1B8880C(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    (float)(v9 * (float)(v4->fields.alp_to - v4->fields.alp_from)) + (float)v4->fields.alp_from);
}
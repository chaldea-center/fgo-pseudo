void MissionNotifyComponent___ctor(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionNotifyComponent__Awake(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  void *gameObject; // x0
  struct UISprite_o *baseSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  float mHeight; // s0
  int32_t HEIGHT; // s1
  float v14; // s0
  float v15; // s1
  const MethodInfo *v16; // x4
  struct CStateManager_MissionNotifyComponent__o **p_mFSM; // x20
  CStateManager_T__o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x21
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x20
  Il2CppObject *v32; // x21
  const MethodInfo *v33; // x2
  int v34; // w8
  void *v35; // x20
  __int64 v36; // x21
  struct UnityEngine_Camera_o *main; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_596A106 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_MissionNotifyComponent___ctor__);
    sub_2213A60(&Method_CStateManager_MissionNotifyComponent__add__);
    sub_2213A60(&CStateManager_MissionNotifyComponent__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&MissionNotifyComponent_StateFrameIn_TypeInfo);
    sub_2213A60(&MissionNotifyComponent_StateFrameOut_TypeInfo);
    sub_2213A60(&MissionNotifyComponent_StateNone_TypeInfo);
    sub_2213A60(&MissionNotifyComponent_StateShowing_TypeInfo);
    byte_596A106 = 1;
  }
  gameObject = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
  baseSp = this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_20;
  mAtlas = baseSp->fields.mAtlas;
  mHeight = (float)baseSp->fields.mHeight;
  HEIGHT = ManagerConfig_TypeInfo->static_fields->HEIGHT;
  this->fields.baseAtlas = mAtlas;
  v14 = mHeight * 0.5;
  v15 = (float)HEIGHT * 0.5;
  this->fields.mFrameInPosY = (float)(v15 - v14) + 1.0;
  this->fields.mFrameOutPosY = v15 + v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  MissionNotifyComponent__FrameInOut(this, 0, 0, 1, v16);
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v18 = (CStateManager_T__o *)sub_2213CCC(CStateManager_MissionNotifyComponent__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E83D54 *)Method_CStateManager_MissionNotifyComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_MissionNotifyComponent__o *)v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v26 = (Il2CppObject *)sub_2213CCC(MissionNotifyComponent_StateNone_TypeInfo);
    System_Object___ctor(v26, 0);
    if ( !mFSM )
      goto LABEL_20;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MissionNotifyComponent__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_2213CCC(MissionNotifyComponent_StateFrameIn_TypeInfo);
    System_Object___ctor(v28, 0);
    if ( !v27 )
      goto LABEL_20;
    CStateManager_object___add(
      v27,
      1,
      (IState_T__o *)v28,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MissionNotifyComponent__add__);
    v29 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_2213CCC(MissionNotifyComponent_StateShowing_TypeInfo);
    System_Object___ctor(v30, 0);
    if ( !v29 )
      goto LABEL_20;
    CStateManager_object___add(
      v29,
      2,
      (IState_T__o *)v30,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MissionNotifyComponent__add__);
    v31 = (CStateManager_T__o *)*p_mFSM;
    v32 = (Il2CppObject *)sub_2213CCC(MissionNotifyComponent_StateFrameOut_TypeInfo);
    System_Object___ctor(v32, 0);
    if ( !v31 )
      goto LABEL_20;
    CStateManager_object___add(
      v31,
      3,
      (IState_T__o *)v32,
      (const MethodInfo_3E83E04 *)Method_CStateManager_MissionNotifyComponent__add__);
    MissionNotifyComponent__SetState(this, 0, v33);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !gameObject )
    goto LABEL_20;
  v34 = *((_DWORD *)gameObject + 6);
  v35 = gameObject;
  if ( v34 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v36 >= v34 )
        sub_2213CE4(gameObject);
      gameObject = (void *)*((_QWORD *)v35 + v36 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) + 150, 0);
      v34 = *((_DWORD *)v35 + 6);
      if ( (int)++v36 >= v34 )
        goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(gameObject, method);
  }
LABEL_19:
  main = UnityEngine_Camera__get_main(0);
  this->fields.mCamera = main;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCamera, (int32_t)main, v38, v39, v40, v41, v42, v43);
}


void MissionNotifyComponent__FrameIn(
        MissionNotifyComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionNotifyComponent__FrameInOut(this, 1, end_act, is_force, v4);
}


void MissionNotifyComponent__FrameInOut(
        MissionNotifyComponent_o *this,
        bool is_framein,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  float v32; // s11
  float timeScale; // s8
  float mFrameInPosY; // s12
  float x; // s9
  float z; // s10
  float v37; // s1
  float mFrameOutPosY; // s3
  float v39; // s4
  System_Action_c *v40; // x0
  System_Action_o *v41; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  EasingObject_o *v49; // x19
  System_Action_o *v50; // x22
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v52; // 0:kr14_12.12

  if ( (byte_596A10B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__);
    sub_2213A60(&Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__);
    sub_2213A60(&MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
    byte_596A10B = 1;
  }
  v9 = sub_2213CCC(MissionNotifyComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), (int32_t)end_act, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *(_QWORD *)(v9 + 16) = gameObject;
  v25 = (UnityEngine_GameObject_o **)(v9 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)gameObject, v26, v27, v28, v29, v30, v31);
  if ( is_framein )
    v32 = 0.5;
  else
    v32 = 0.25;
  timeScale = UnityEngine_Time__get_timeScale(0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(*v25, 0);
  mFrameInPosY = this->fields.mFrameInPosY;
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v52 = GameObjectExtensions__GetLocalPosition(*v25, 0);
  if ( is_framein )
  {
    v37 = v52.fields.x;
    mFrameOutPosY = this->fields.mFrameOutPosY;
    v39 = v52.fields.z;
  }
  else
  {
    v37 = LocalPosition.fields.x;
    mFrameOutPosY = mFrameInPosY;
    v39 = LocalPosition.fields.z;
    x = v52.fields.x;
    mFrameInPosY = this->fields.mFrameOutPosY;
    z = v52.fields.z;
  }
  v40 = System_Action_TypeInfo;
  *(float *)(v9 + 72) = v37;
  *(float *)(v9 + 76) = mFrameOutPosY;
  *(float *)(v9 + 80) = v39;
  *(_DWORD *)(v9 + 84) = !is_framein;
  *(float *)(v9 + 24) = x;
  *(float *)(v9 + 28) = mFrameInPosY;
  *(float *)(v9 + 32) = z;
  *(_DWORD *)(v9 + 48) = is_framein;
  v41 = (System_Action_o *)sub_2213CCC(v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__0__,
    0);
  if ( is_force )
  {
    ActionExtensions__Call(v41, 0);
    return;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v9 + 16),
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 64) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)Component_object, v43, v44, v45, v46, v47, v48);
  v49 = *(EasingObject_o **)(v9 + 64);
  v50 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v9,
    Method_MissionNotifyComponent___c__DisplayClass64_0__FrameInOut_b__1__,
    0);
  if ( !v49 )
LABEL_14:
    sub_2213CDC(v10, v11);
  EasingObject__Play(v49, v32 * timeScale, v50, v41, 0.0, 17, 0);
}


void MissionNotifyComponent__FrameOut(
        MissionNotifyComponent_o *this,
        System_Action_o *end_act,
        bool is_force,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  MissionNotifyComponent__FrameInOut(this, 0, end_act, is_force, v4);
}


int32_t MissionNotifyComponent__GetState(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  MissionNotifyComponent_o *v2; // x19
  struct CStateManager_MissionNotifyComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_596A109 & 1) == 0 )
  {
    this = (MissionNotifyComponent_o *)sub_2213A60(&Method_CStateManager_MissionNotifyComponent__getState__);
    byte_596A109 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


bool MissionNotifyComponent__IsBusy(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  int32_t State; // w0
  const MethodInfo *v4; // x1

  State = MissionNotifyComponent__GetState(this, method);
  if ( State != 1 )
    LOBYTE(State) = MissionNotifyComponent__GetState(this, v4) == 2;
  return State;
}


bool MissionNotifyComponent__IsPress(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  return this->fields.mIsPress;
}


void MissionNotifyComponent__OnClick(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( MissionNotifyComponent__GetState(this, method) == 2 )
    MissionNotifyComponent__SetState(this, 3, v3);
}


void MissionNotifyComponent__OnDragStart(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x2

  if ( (byte_596A10C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EasingObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A10C = 1;
  }
  if ( MissionNotifyComponent__GetState(this, method) != 3 && !this->fields.mIsDragDone )
  {
    this->fields.mIsDragDone = 1;
    if ( MissionNotifyComponent__GetState(this, v3) != 1 )
    {
LABEL_14:
      ActionExtensions__Call(this->fields.mDragStartAct, 0);
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EasingObject___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_13;
      if ( Component_object )
      {
        EasingObject__SetPause((EasingObject_o *)Component_object, 1, 0);
LABEL_13:
        MissionNotifyComponent__SetState(this, 2, v9);
        goto LABEL_14;
      }
    }
    sub_2213CDC(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyComponent__OnPress(MissionNotifyComponent_o *this, bool is_press, const MethodInfo *method)
{
  _BOOL4 mIsDragDone; // w8
  const MethodInfo *v5; // x2

  mIsDragDone = this->fields.mIsDragDone;
  this->fields.mIsPress = is_press;
  if ( mIsDragDone && MissionNotifyComponent__GetState(this, (const MethodInfo *)is_press) == 2 )
    MissionNotifyComponent__SetState(this, 3, v5);
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyComponent__SetState(MissionNotifyComponent_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596A10A & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_MissionNotifyComponent__setState__);
    byte_596A10A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_MissionNotifyComponent__setState__);
}


void MissionNotifyComponent__SetupAndPlay(
        MissionNotifyComponent_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *drag_start_act,
        System_Func_MissionNotifyComponent__o *frame_out_start_func,
        System_Action_MissionNotifyComponent__o *frame_out_end_act,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  int monitor; // w29
  bool IsMasterMission; // w24
  char v15; // w21
  int v16; // w19
  UILabel_o *noLabel; // x25
  UnityEngine_GameObject_o *v18; // x24
  UILabel_o *progressLabel; // x24
  System_String_o *v20; // x25
  System_String_o *v21; // x0
  __int64 v22; // x2
  _BOOL4 v23; // w24
  UISprite_o *baseSp; // x26
  UIAtlas_o *baseAtlas; // x27
  int32_t banner_group; // w25
  __int64 v27; // x2
  struct UISprite_o *clearSp; // x25
  int v29; // w21
  Il2CppObject *clearEffectPrefab; // x26
  System_Func_MissionNotifyComponent__o *v31; // x19
  UnityEngine_GameObject_o *v32; // x26
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_mClearEffectSimpleAnim; // x28
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x0
  struct UnityEngine_Animation_o **p_mClearEffectAnim; // x27
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x2
  UnityEngine_Object_o *v50; // x28
  bool v51; // w0
  int v52; // w8
  void *v53; // x25
  __int64 v54; // x22
  UnityEngine_GameObject_o *rewardMessage; // x25
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v57; // x25
  System_String_o *v58; // x26
  bool IsNullOrEmpty; // w8
  int32_t *v60; // x8
  UnityEngine_Object_o *v61; // x25
  struct UILabel_o *v62; // x8
  System_String_o *v63; // x0
  __int64 v64; // x2
  System_String_o *v65; // x25
  __int64 *v66; // x8
  int v67; // w9
  int32_t monitor_high; // w26
  UISprite_o *typeSp; // x27
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  char v76; // w8
  Il2CppObject *v77; // x24
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  const MethodInfo *v90; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v92; // x0
  int32_t mDepth; // [xsp+4h] [xbp-7Ch]
  System_Action_MissionNotifyComponent__o *v94; // [xsp+8h] [xbp-78h]
  struct System_Action_o *v95; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596A108 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_22569/*"master_mission_weekly"*/);
    sub_2213A60(&StringLiteral_22568/*"master_mission_special"*/);
    sub_2213A60(&StringLiteral_22564/*"master_mission_daily"*/);
    sub_2213A60(&StringLiteral_22566/*"master_mission_extra"*/);
    sub_2213A60(&StringLiteral_22567/*"master_mission_panel"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_22565/*"master_mission_event"*/);
    byte_596A108 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_124;
  v95 = drag_start_act;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    v16 = 0;
    IsMasterMission = 0;
    monitor = 0;
LABEL_13:
    v15 = 1;
    goto LABEL_14;
  }
  Instance = entity;
  if ( !entity )
    goto LABEL_124;
  monitor = (int)entity[1].monitor;
  IsMasterMission = EventMissionEntity__IsMasterMission((EventMissionEntity_o *)entity, 0);
  if ( monitor == 6 )
  {
    v15 = 1;
    v16 = 1;
    goto LABEL_14;
  }
  if ( monitor != 7 && monitor != 8 )
  {
    v16 = 0;
    goto LABEL_13;
  }
  v15 = 0;
  v16 = 0;
LABEL_14:
  noLabel = this->fields.noLabel;
  Instance = System_Int32__ToString((int)disp_info + 52, 0);
  if ( !noLabel )
    goto LABEL_124;
  UILabel__set_text(noLabel, (System_String_o *)Instance, 0);
  Instance = this->fields.noRoot;
  if ( !Instance )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v15 & ((v16 | IsMasterMission) ^ 1), 0);
  Instance = this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_124;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !this->fields.noRoot )
    goto LABEL_124;
  v18 = (UnityEngine_GameObject_o *)Instance;
  Instance = (void *)UnityEngine_GameObject__get_activeSelf(this->fields.noRoot, 0);
  if ( !v18 )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(v18, ((unsigned __int8)Instance & 1) == 0, 0);
  Instance = this->fields.noRoot;
  if ( !Instance )
    goto LABEL_124;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    Instance = this->fields.missionNameLabel;
    if ( !Instance )
      goto LABEL_124;
  }
  else
  {
    Instance = this->fields.masterMissionNameLabel;
    if ( !Instance )
      goto LABEL_124;
  }
  WrapControlText__textAdjust((UILabel_o *)Instance, disp_info->fields.message, *((_DWORD *)Instance + 106), 0, 0);
  Instance = this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, disp_info->fields.condition > 0, 0);
  Instance = this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_124;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    Instance = this->fields.progressBarNowSlider;
    if ( !Instance )
      goto LABEL_124;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressFrom / (float)disp_info->fields.condition,
      0);
    Instance = this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_124;
    UIProgressBar__set_value(
      (UIProgressBar_o *)Instance,
      (float)disp_info->fields.progressTo / (float)disp_info->fields.condition,
      0);
    progressLabel = this->fields.progressLabel;
    v20 = System_Int32__ToString_77138656((int)disp_info + 44, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
    v21 = System_Int32__ToString_77138656((int)disp_info + 48, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
    Instance = System_String__Concat_75694928(v20, (System_String_o *)StringLiteral_1123/*"/"*/, v21, 0);
    if ( !progressLabel )
      goto LABEL_124;
    UILabel__set_text(progressLabel, (System_String_o *)Instance, 0);
  }
  Instance = this->fields.progressBarRoot;
  if ( !Instance )
    goto LABEL_124;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    Instance = this->fields.progressBarUpSlider;
    if ( !Instance )
      goto LABEL_124;
    v23 = UIProgressBar__get_value((UIProgressBar_o *)Instance, 0) >= 1.0;
  }
  else
  {
    v23 = 0;
  }
  baseSp = this->fields.baseSp;
  baseAtlas = this->fields.baseAtlas;
  banner_group = disp_info->fields.banner_group;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v22);
  AtlasManager__SetMissionBoardNoticeSprite(baseSp, baseAtlas, v23, banner_group, 0);
  Instance = this->fields.clearSp;
  if ( !Instance )
    goto LABEL_124;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v23, 0);
  Instance = this->fields.rewardMessage;
  if ( !Instance )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  if ( !v23 )
  {
    v12 = 462;
    goto LABEL_81;
  }
  clearSp = this->fields.clearSp;
  v94 = frame_out_end_act;
  if ( !clearSp )
    goto LABEL_124;
  v29 = v16;
  clearEffectPrefab = (Il2CppObject *)this->fields.clearEffectPrefab;
  mDepth = clearSp->fields.mDepth;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v27);
  v31 = frame_out_start_func;
  Instance = UnityEngine_Object__Instantiate_object_(
               clearEffectPrefab,
               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_124;
  v32 = (UnityEngine_GameObject_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Instance,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.mClearEffectSimpleAnim = (struct SimpleAnimation_o *)Component_object;
  p_mClearEffectSimpleAnim = &this->fields.mClearEffectSimpleAnim;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mClearEffectSimpleAnim,
    (int32_t)Component_object,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = UnityEngine_GameObject__GetComponent_object_(
          v32,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  this->fields.mClearEffectAnim = (struct UnityEngine_Animation_o *)v41;
  p_mClearEffectAnim = &this->fields.mClearEffectAnim;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mClearEffectAnim,
    (int32_t)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.mClearEffectSimpleAnim, 0, 0) )
  {
    Instance = *p_mClearEffectSimpleAnim;
    if ( !*p_mClearEffectSimpleAnim )
      goto LABEL_124;
    SimpleAnimation__Stop((SimpleAnimation_o *)Instance, 0);
    frame_out_start_func = v31;
    v16 = v29;
  }
  else
  {
    v50 = (UnityEngine_Object_o *)*p_mClearEffectAnim;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v49);
    v51 = UnityEngine_Object__op_Inequality(v50, 0, 0);
    frame_out_start_func = v31;
    v16 = v29;
    if ( v51 )
    {
      Instance = *p_mClearEffectAnim;
      if ( !*p_mClearEffectAnim )
        goto LABEL_124;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)Instance, 0);
    }
  }
  GameObjectExtensions__SafeSetParent(v32, (UnityEngine_Component_o *)clearSp, 0);
  Instance = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
               v32,
               (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !Instance )
    goto LABEL_124;
  v52 = *((_DWORD *)Instance + 6);
  v53 = Instance;
  if ( v52 >= 1 )
  {
    v54 = 0;
    while ( (unsigned int)v54 < v52 )
    {
      Instance = (void *)*((_QWORD *)v53 + v54 + 4);
      if ( !Instance )
        goto LABEL_124;
      UIWidget__set_depth((UIWidget_o *)Instance, mDepth + 1 + *((_DWORD *)Instance + 44), 0);
      v52 = *((_DWORD *)v53 + 6);
      if ( (int)++v54 >= v52 )
        goto LABEL_61;
    }
LABEL_125:
    sub_2213CE4(Instance);
  }
LABEL_61:
  if ( !entity )
  {
    frame_out_end_act = v94;
LABEL_80:
    v12 = 462;
    goto LABEL_81;
  }
  rewardMessage = this->fields.rewardMessage;
  Instance = (void *)EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0);
  frame_out_end_act = v94;
  if ( !rewardMessage )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive(rewardMessage, (unsigned __int8)Instance & 1, 0);
  Instance = entity;
  if ( !entity )
    goto LABEL_124;
  if ( !EventMissionEntity__IsDirectReward((EventMissionEntity_o *)entity, 0) )
    goto LABEL_80;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !entity || !Instance )
    goto LABEL_124;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, HIDWORD(entity[5].klass), 0);
  if ( !GiftListById )
    goto LABEL_80;
  v57 = GiftListById;
  if ( !GiftListById->max_length )
    goto LABEL_80;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_124;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  if ( !entity || !Instance )
    goto LABEL_124;
  v58 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Instance,
          (int32_t)entity[1].klass,
          HIDWORD(entity[1].monitor),
          1,
          0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v58, 0);
  Instance = this->fields.itemIcon;
  if ( !IsNullOrEmpty )
  {
    if ( !Instance )
      goto LABEL_124;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)Instance, v58, 0);
    Instance = this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_124;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPositionX(gameObject, 12.0, 0);
    Instance = this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_124;
    v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalScale_42893688(v92, 0.4, 0.4, 1.0, 0);
    goto LABEL_122;
  }
  if ( !LODWORD(v57->max_length) )
    goto LABEL_125;
  v60 = (int32_t *)v57->m_Items[0];
  if ( !v60 || !Instance )
LABEL_124:
    sub_2213CDC(Instance, v12);
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v60[5], v60[6], v60[7], 0, 0);
LABEL_122:
  Instance = this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_124;
  ItemIconComponent__SetNotifyDirectGetCounter((ItemIconComponent_o *)Instance, 70, 0);
  v12 = 360;
LABEL_81:
  Instance = this->fields.masterMissionNameLabel;
  if ( !Instance )
    goto LABEL_124;
  UIWidget__set_width((UIWidget_o *)Instance, v12, 0);
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_124;
  v61 = (UnityEngine_Object_o *)Instance;
  Instance = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0);
  v62 = this->fields.noLabel;
  if ( !v62 )
    goto LABEL_124;
  v63 = System_String__Concat_75651716((System_String_o *)Instance, v62->fields.mText, 0);
  UnityEngine_Object__set_name(v61, v63, 0);
  v65 = 0;
  if ( monitor <= 3 )
  {
    if ( monitor != 1 )
    {
      if ( monitor == 2 )
      {
        v66 = &StringLiteral_22569/*"master_mission_weekly"*/;
      }
      else
      {
        if ( monitor != 3 )
          goto LABEL_101;
        v66 = &StringLiteral_22564/*"master_mission_daily"*/;
      }
      goto LABEL_100;
    }
  }
  else
  {
    if ( monitor <= 5 )
    {
      if ( monitor == 4 )
        v66 = &StringLiteral_22566/*"master_mission_extra"*/;
      else
        v66 = &StringLiteral_22568/*"master_mission_special"*/;
      goto LABEL_100;
    }
    if ( monitor == 6 )
    {
      v66 = &StringLiteral_22567/*"master_mission_panel"*/;
      goto LABEL_100;
    }
    if ( monitor != 7 )
      goto LABEL_101;
  }
  v66 = &StringLiteral_22565/*"master_mission_event"*/;
LABEL_100:
  v65 = (System_String_o *)*v66;
LABEL_101:
  if ( entity )
    v67 = v16;
  else
    v67 = 0;
  if ( v67 == 1 )
  {
    monitor_high = HIDWORD(entity[1].monitor);
    typeSp = this->fields.typeSp;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v64);
    AtlasManager__SetEventUI_47569484(monitor_high, typeSp, v65, 0);
  }
  else
  {
    Instance = this->fields.typeSp;
    if ( !Instance )
      goto LABEL_124;
    UISprite__set_spriteName((UISprite_o *)Instance, v65, 0);
  }
  Instance = this->fields.typeSp;
  if ( !Instance )
    goto LABEL_124;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v76 = !v23;
  if ( monitor != 3 )
    v76 = 1;
  if ( (v76 & 1) == 0 )
  {
    v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    Instance = System_Int32__ToString((int)disp_info + 16, 0);
    if ( !v77 )
      goto LABEL_124;
    AdManager__TrackEvent((AdManager_o *)v77, 8, 8, 0, 0, (System_String_o *)Instance, 0);
  }
  this->fields.mDragStartAct = v95;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mDragStartAct,
    (int32_t)v95,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields.mFrameOutStartFunc = frame_out_start_func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mFrameOutStartFunc,
    (int32_t)frame_out_start_func,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.mFrameOutEndAct = frame_out_end_act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mFrameOutEndAct,
    (int32_t)frame_out_end_act,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  MissionNotifyComponent__SetState(this, 1, v90);
}


void MissionNotifyComponent__Update(MissionNotifyComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596A107 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_MissionNotifyComponent__update__);
    byte_596A107 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_MissionNotifyComponent__update__);
}


NoticeNumberComponent_o *MissionNotifyComponent__get_NoticeNumberPrefab(
        MissionNotifyComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.noticeNumberPrefab;
}


void MissionNotifyComponent_StateFrameIn___ctor(MissionNotifyComponent_StateFrameIn_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateFrameIn__begin(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  MissionNotifyComponent_o *v15; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x4

  if ( (byte_596A10D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MissionNotifyComponent_StateFrameIn_begin__);
    sub_2213A60(&Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__);
    sub_2213A60(&MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
    byte_596A10D = 1;
  }
  v4 = sub_2213CCC(MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  v13 = Method_MissionNotifyComponent_StateFrameIn_begin__;
  if ( (*((_BYTE *)Method_MissionNotifyComponent_StateFrameIn_begin__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_2213A78(Method_MissionNotifyComponent_StateFrameIn_begin__);
  v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
  OverwriteAssetSoundName__PlayCommonSe(v14, 20, 0, 0);
  v15 = *(MissionNotifyComponent_o **)(v4 + 16);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v4,
    Method_MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v15 )
LABEL_8:
    sub_2213CDC(v5, v6);
  MissionNotifyComponent__FrameInOut(v15, 1, v16, 0, v17);
}


void MissionNotifyComponent_StateFrameIn__end(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MissionNotifyComponent_StateFrameIn__update(
        MissionNotifyComponent_StateFrameIn_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___ctor(
        MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0___begin_b__0(
        MissionNotifyComponent_StateFrameIn___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(0, method);
  MissionNotifyComponent__SetState(that, 2, v2);
}


void MissionNotifyComponent_StateFrameOut___ctor(
        MissionNotifyComponent_StateFrameOut_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateFrameOut__begin(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *gameObject; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  MissionNotifyComponent_o **v14; // x19
  __int64 v15; // x8
  struct MissionNotifyComponent_o *v16; // x0
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x2
  MissionNotifyComponent_o *v25; // x22
  UnityEngine_Object_o *klass; // x20
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x4
  int v29; // w8
  void *v30; // x19
  __int64 v31; // x20

  if ( (byte_596A110 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__);
    sub_2213A60(&MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
    byte_596A110 = 1;
  }
  v5 = sub_2213CCC(MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = that;
  v14 = (MissionNotifyComponent_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)that, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_22;
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 216LL);
  if ( !v15 )
    goto LABEL_22;
  v16 = (struct MissionNotifyComponent_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v15 + 24))(
                                             *(_QWORD *)(v15 + 64),
                                             *(_QWORD *)(v15 + 40));
  this->fields.mNextComp = v16;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_2213A04(p_fields, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v25 = *v14;
  if ( !*v14 )
    goto LABEL_22;
  if ( !v25->fields.mIsDragDone )
  {
    klass = (UnityEngine_Object_o *)p_fields->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v24);
    gameObject = (void *)UnityEngine_Object__op_Equality(klass, 0, 0);
    v25 = *v14;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v5,
        Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0__begin_b__0__,
        0);
      if ( !v25 )
        goto LABEL_22;
      MissionNotifyComponent__FrameInOut(v25, 0, v27, 0, v28);
      v25 = *v14;
    }
    if ( !v25 )
      goto LABEL_22;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
  if ( !gameObject
    || (gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___)) == 0 )
  {
LABEL_22:
    sub_2213CDC(gameObject, v7);
  }
  v29 = *((_DWORD *)gameObject + 6);
  v30 = gameObject;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v31 >= v29 )
        sub_2213CE4(gameObject);
      gameObject = (void *)*((_QWORD *)v30 + v31 + 4);
      if ( !gameObject )
        break;
      UIWidget__set_depth((UIWidget_o *)gameObject, *((_DWORD *)gameObject + 44) - 50, 0);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
        return;
    }
    goto LABEL_22;
  }
}


void MissionNotifyComponent_StateFrameOut__end(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  if ( (byte_596A112 & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateFrameOut_o *)sub_2213A60(&Method_ActionExtensions_Call_MissionNotifyComponent___);
    byte_596A112 = 1;
  }
  if ( !that )
    sub_2213CDC(this, that);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)that->fields.mFrameOutEndAct,
    (Il2CppObject *)that,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_MissionNotifyComponent___);
}


void MissionNotifyComponent_StateFrameOut__update(
        MissionNotifyComponent_StateFrameOut_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 klass; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x19
  __int64 v15; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s8
  float v18; // s9
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x20
  float v21; // s0
  float v22; // s8
  float v23; // s0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *v25; // x19
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  struct MissionNotifyComponent_o *mNextComp; // t1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  MissionNotifyComponent_o *v34; // x19
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x4
  unsigned __int64 LocalPosition; // kr00_8
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4

  if ( (byte_596A111 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__);
    sub_2213A60(&MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
    byte_596A111 = 1;
  }
  v5 = sub_2213CCC(MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = that;
  v14 = (__int64 *)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)that, v8, v9, v10, v11, v12, v13);
  klass = *(_QWORD *)(v5 + 16);
  if ( !klass )
    goto LABEL_25;
  if ( *(_BYTE *)(klass + 193) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    LocalPosition = (unsigned __int64)GameObjectExtensions__GetLocalPosition(gameObject, 0);
    if ( !*v14 )
      goto LABEL_25;
    *(float32x2_t *)(*v14 + 196) = vmul_f32(*(float32x2_t *)(*v14 + 196), vdup_n_s32(0x3F6147AEu));
    klass = *v14;
    if ( !*v14 )
      goto LABEL_25;
    v17 = *(float *)&LocalPosition + *(float *)(klass + 196);
    v18 = *((float *)&LocalPosition + 1) + *(float *)(klass + 200);
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    v38.fields.x = v17;
    v38.fields.y = v18;
    GameObjectExtensions__SetLocalPosition_42891412(v19, v38, 0);
    if ( !*v14 )
      goto LABEL_25;
    v20 = *(_QWORD *)(*v14 + 32);
    if ( !v20 )
      goto LABEL_25;
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 424LL))(
              v20,
              *(_QWORD *)(*(_QWORD *)v20 + 432LL));
    if ( !*v14 )
      goto LABEL_25;
    klass = *(_QWORD *)(*v14 + 32);
    if ( !klass )
      goto LABEL_25;
    v22 = v21;
    v23 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)klass + 424LL))(
            klass,
            *(_QWORD *)(*(_QWORD *)klass + 432LL));
    klass = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v20 + 440LL))(
              v20,
              *(_QWORD *)(*(_QWORD *)v20 + 448LL),
              v22 + (float)((float)(0.0 - v23) * 0.15));
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
        MissionNotifyComponent__SetState((MissionNotifyComponent_o *)klass, 0, v24);
        return;
      }
LABEL_25:
      sub_2213CDC(klass, v7);
    }
  }
  else
  {
    mNextComp = this->fields.mNextComp;
    p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
    v25 = (UnityEngine_Object_o *)mNextComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v15);
    if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
    {
      klass = (__int64)p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_25;
      if ( MissionNotifyComponent__GetState((MissionNotifyComponent_o *)klass, v7) != 1 )
      {
        p_fields->klass = 0;
        sub_2213A04(p_fields, 0, v28, v29, v30, v31, v32, v33);
        v34 = *(MissionNotifyComponent_o **)(v5 + 16);
        v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v35,
          (Il2CppObject *)v5,
          Method_MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0__update_b__0__,
          0);
        if ( !v34 )
          goto LABEL_25;
        MissionNotifyComponent__FrameInOut(v34, 0, v35, 0, v36);
      }
    }
  }
}


void MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___ctor(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0___begin_b__0(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(0, method);
  MissionNotifyComponent__SetState(that, 0, v2);
}


void MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___ctor(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0___update_b__0(
        MissionNotifyComponent_StateFrameOut___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(0, method);
  MissionNotifyComponent__SetState(that, 0, v2);
}


void MissionNotifyComponent_StateNone___ctor(MissionNotifyComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateNone__begin(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MissionNotifyComponent_StateNone__end(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MissionNotifyComponent_StateNone__update(
        MissionNotifyComponent_StateNone_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void MissionNotifyComponent_StateShowing___ctor(MissionNotifyComponent_StateShowing_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent_StateShowing__begin(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  SimpleAnimation_o *baseSp; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *mClearEffectSimpleAnim; // x20
  __int64 v10; // x2
  UnityEngine_Object_o *mClearEffectAnim; // x20

  if ( (byte_596A10E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A10E = 1;
  }
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
  if ( !that )
    goto LABEL_16;
  baseSp = (SimpleAnimation_o *)that->fields.baseSp;
  if ( !baseSp )
    goto LABEL_16;
  ((void (__fastcall *)(SimpleAnimation_o *, const MethodInfo *, float))baseSp->klass->vtable._8_GetAnimationClips.methodPtr)(
    baseSp,
    baseSp->klass->vtable._8_GetAnimationClips.method,
    1.0);
  mClearEffectSimpleAnim = (UnityEngine_Object_o *)that->fields.mClearEffectSimpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(mClearEffectSimpleAnim, 0, 0) )
  {
    baseSp = that->fields.mClearEffectSimpleAnim;
    if ( baseSp )
    {
      SimpleAnimation__Play(baseSp, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(baseSp, v6);
  }
  mClearEffectAnim = (UnityEngine_Object_o *)that->fields.mClearEffectAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v10);
  if ( UnityEngine_Object__op_Inequality(mClearEffectAnim, 0, 0) )
  {
    baseSp = (SimpleAnimation_o *)that->fields.mClearEffectAnim;
    if ( !baseSp )
      goto LABEL_16;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)baseSp, 0);
  }
}


void MissionNotifyComponent_StateShowing__end(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2_o mTouchPosDif; // d0
  struct UnityEngine_Vector2_o mTouchPosDifOld; // d1
  int32x2_t v5; // d2
  int32x2_t v6; // d3
  int32x2_t v7; // d2
  int8x8_t v8; // d0

  if ( !that )
    sub_2213CDC(this, 0);
  mTouchPosDif = this->fields.mTouchPosDif;
  mTouchPosDifOld = this->fields.mTouchPosDifOld;
  v5.n64_u64[0] = vmul_f32((float32x2_t)mTouchPosDif, (float32x2_t)mTouchPosDif).n64_u64[0];
  v6.n64_u64[0] = vmul_f32((float32x2_t)mTouchPosDifOld, (float32x2_t)mTouchPosDifOld).n64_u64[0];
  v7.n64_u64[0] = vadd_f32(vzip1_s32(v5, v6), vzip2_s32(v5, v6)).n64_u64[0];
  v8.n64_u64[0] = vbsl_s8(
                    vdup_lane_s32(vcgt_f32(vdup_lane_s32(v7, 1), v7), 0),
                    (int8x8_t)mTouchPosDifOld,
                    (int8x8_t)mTouchPosDif).n64_u64[0];
  __asm
  {
    FMOV            V1.2S, #15.0
    FMOV            V2.2S, #-15.0
  }
  that->fields.mInertiaSpd = (struct UnityEngine_Vector2_o)vbsl_s8(
                                                             vcgt_f32(_D2, v8),
                                                             _D2,
                                                             vbsl_s8(vcgt_f32(v8, _D1), _D1, v8)).n64_u64[0];
}


void MissionNotifyComponent_StateShowing__update(
        MissionNotifyComponent_StateShowing_o *this,
        MissionNotifyComponent_o *that,
        const MethodInfo *method)
{
  MissionNotifyComponent_StateShowing_o *v4; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  CTouch_c *v6; // x0
  UnityEngine_Camera_o *mCamera; // x21
  int mDragFrameCount; // w8
  float32x2_t v9; // d0
  float32x2_t v10; // d1
  unsigned __int64 v11; // d0
  float y; // s1
  const MethodInfo *v13; // x2
  float v14; // s8
  float v15; // s9
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned __int64 LocalPosition; // kr00_8
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_596A10F & 1) == 0 )
  {
    this = (MissionNotifyComponent_StateShowing_o *)sub_2213A60(&CTouch_TypeInfo);
    byte_596A10F = 1;
  }
  if ( !that )
    sub_2213CDC(this, that);
  if ( !that->fields.mIsDragDone )
  {
    if ( that->fields.mIsPress || (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v4->fields.mStartTime) < 2.0 )
      return;
LABEL_13:
    MissionNotifyComponent__SetState(that, 3, v13);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  LocalPosition = (unsigned __int64)GameObjectExtensions__GetLocalPosition(gameObject, 0);
  v6 = CTouch_TypeInfo;
  v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
  mCamera = that->fields.mCamera;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v17, v18);
  v4->fields.mTouchPosNow = CTouch__getScreenPosition_56116928(mCamera, 0);
  if ( UnityEngine_Input__get_touchCount(0) > 1 )
    v4->fields.mTouchPosNow = v4->fields.mTouchPosOld;
  mDragFrameCount = v4->fields.mDragFrameCount;
  if ( mDragFrameCount < 1 )
  {
    *(float *)&v11 = v4->fields.mTouchPosDif.fields.x;
    y = v4->fields.mTouchPosDif.fields.y;
  }
  else
  {
    v9.n64_u64[0] = (unsigned __int64)v4->fields.mTouchPosNow;
    v10.n64_u64[0] = (unsigned __int64)v4->fields.mTouchPosOld;
    v4->fields.mTouchPosDifOld = v4->fields.mTouchPosDif;
    v11 = vsub_f32(v9, v10).n64_u64[0];
    y = *((float *)&v11 + 1);
    v4->fields.mTouchPosDif = (struct UnityEngine_Vector2_o)v11;
  }
  v14 = *(float *)&LocalPosition + *(float *)&v11;
  v15 = *((float *)&LocalPosition + 1) + y;
  v4->fields.mDragFrameCount = mDragFrameCount + 1;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  v20.fields.x = v14;
  v20.fields.y = v15;
  GameObjectExtensions__SetLocalPosition_42891412(v16, v20, 0);
  if ( UnityEngine_Input__get_touchCount(0) >= 2 )
    goto LABEL_13;
}


void MissionNotifyComponent___c__DisplayClass64_0___ctor(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyComponent___c__DisplayClass64_0___FrameInOut_b__0(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSp; // x0
  __int64 v4; // x1
  struct MissionNotifyComponent_o *_4__this; // x8

  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, this->fields.pos_to, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (baseSp = _4__this->fields.baseSp) == 0 )
    sub_2213CDC(baseSp, v4);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))baseSp->klass->vtable._8_set_alpha.methodPtr)(
    baseSp,
    baseSp->klass->vtable._8_set_alpha.method,
    (float)this->fields.alp_to);
  ActionExtensions__Call(this->fields.end_act, 0);
}


void MissionNotifyComponent___c__DisplayClass64_0___FrameInOut_b__1(
        MissionNotifyComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  MissionNotifyComponent___c__DisplayClass64_0_o *v3; // x19
  unsigned __int64 v4; // d0
  float v5; // s2
  float v6; // s1
  struct MissionNotifyComponent_o *_4__this; // x8
  float mNow; // [xsp+0h] [xbp-20h]
  UnityEngine_Vector3_o v9; // 0:kr00_12.12

  eo = this->fields.eo;
  if ( !eo )
    goto LABEL_5;
  v3 = this;
  mNow = eo->fields.mNow;
  v4 = vadd_f32(
         *(float32x2_t *)&this->fields.pos_from.fields.x,
         vmul_n_f32(
           vsub_f32(*(float32x2_t *)&this->fields.pos_to.fields.x, *(float32x2_t *)&this->fields.pos_from.fields.x),
           mNow)).n64_u64[0];
  v5 = this->fields.pos_from.fields.z
     + (float)(mNow * (float)(this->fields.pos_to.fields.z - this->fields.pos_from.fields.z));
  v6 = *((float *)&v4 + 1);
  LODWORD(v9.fields.x) = v4;
  v9.fields.y = v6;
  v9.fields.z = v5;
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, v9, 0);
  _4__this = v3->fields.__4__this;
  if ( !_4__this || (this = (MissionNotifyComponent___c__DisplayClass64_0_o *)_4__this->fields.baseSp) == 0 )
LABEL_5:
    sub_2213CDC(this, method);
  ((void (__fastcall *)(MissionNotifyComponent___c__DisplayClass64_0_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    (float)(mNow * (float)(v3->fields.alp_to - v3->fields.alp_from)) + (float)v3->fields.alp_from);
}
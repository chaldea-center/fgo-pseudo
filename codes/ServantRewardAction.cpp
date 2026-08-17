void ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x21
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  Il2CppObject *v27; // x22
  CStateManager_T__o *v28; // x20
  Il2CppObject *v29; // x21
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *particleObj; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v35; // x21
  Il2CppObject *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_596D91B & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_ServantRewardAction___ctor__);
    sub_2213A60(&Method_CStateManager_ServantRewardAction__add__);
    sub_2213A60(&CStateManager_ServantRewardAction__TypeInfo);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateDetail_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateEnd_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateNone_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateNumDisplay_TypeInfo);
    sub_2213A60(&ServantRewardAction_StatePlay_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateTalk_TypeInfo);
    sub_2213A60(&ServantRewardAction_StateTouchWait_TypeInfo);
    byte_596D91B = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_2213CCC(CStateManager_ServantRewardAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_3E83D54 *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !mFSM )
      goto LABEL_30;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StatePlay_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_30;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateNumDisplay_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_30;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_30;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateTalk_TypeInfo);
    System_Object___ctor(v23, 0);
    if ( !v22 )
      goto LABEL_30;
    CStateManager_object___add(
      v22,
      4,
      (IState_T__o *)v23,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateDetail_TypeInfo);
    System_Object___ctor(v25, 0);
    if ( !v24 )
      goto LABEL_30;
    CStateManager_object___add(
      v24,
      5,
      (IState_T__o *)v25,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateSecretTreasureDevice_TypeInfo);
    System_Object___ctor(v27, 0);
    if ( !v26 )
      goto LABEL_30;
    CStateManager_object___add(
      v26,
      6,
      (IState_T__o *)v27,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    v28 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_2213CCC(ServantRewardAction_StateEnd_TypeInfo);
    System_Object___ctor(v29, 0);
    if ( !v28 )
      goto LABEL_30;
    CStateManager_object___add(
      v28,
      7,
      (IState_T__o *)v29,
      (const MethodInfo_3E83E04 *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v30);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v35 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
      v36 = UnityEngine_Object__Instantiate_object_(
              v35,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v36, (UnityEngine_Component_o *)this, 0);
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v36,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v36 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v36,
                                         (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v36;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.particleObj,
              (int32_t)v36,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            goto LABEL_27;
          }
        }
LABEL_30:
        sub_2213CDC(ComponentInChildren_object, v15);
      }
    }
  }
LABEL_27:
  this->fields._PresentDialogMessageId_k__BackingField = 0;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v32, v33);
  CTouch__init(0);
}


int32_t ServantRewardAction__GetState(ServantRewardAction_o *this, const MethodInfo *method)
{
  ServantRewardAction_o *v2; // x19
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_596D922 & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_2213A60(&Method_CStateManager_ServantRewardAction__getState__);
    byte_596D922 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


void ServantRewardAction__Play(
        ServantRewardAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = 0;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_mEndAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void ServantRewardAction__Play_44072456(
        ServantRewardAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = is_from_treasure_box;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_mEndAct,
    (int32_t)end_act,
    (System_String_o *)end_act,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__SetState(ServantRewardAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D923 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_ServantRewardAction__setState__);
    byte_596D923 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_ServantRewardAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__Setup(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x2
  int32_t v20; // w5

  if ( (byte_596D91E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D91E = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v18);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0;
  }
  if ( isDoEffect )
    v20 = is_svt_new | play_flag | 0x10;
  else
    v20 = is_svt_new | play_flag;
  ServantRewardAction__Setup_44070076(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    v20,
    (const MethodInfo *)isDoEffect);
}


void ServantRewardAction__SetupCommandCode(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  _BOOL4 isNew; // w9
  int64_t userSvtId; // x1

  if ( !qri )
    sub_2213CDC(this, 0);
  isNew = qri->fields.isNew;
  userSvtId = qri->fields.userSvtId;
  if ( isNew )
  {
    play_flag |= 0x10u;
  }
  else if ( qri->fields.isGetEffect )
  {
    play_flag |= 0x10u;
  }
  ServantRewardAction__SetupCommandCode_44071720(this, userSvtId, play_flag, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__SetupCommandCode_44071696(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  int32_t v6; // w2

  if ( isDoEffect )
    v6 = is_svt_new | play_flag | 0x10;
  else
    v6 = is_svt_new | play_flag;
  ServantRewardAction__SetupCommandCode_44071720(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void ServantRewardAction__SetupCommandCode_44071720(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        int32_t play_flag,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *mUICharaGraph; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *Entity; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  const MethodInfo *v48; // x1
  UnityEngine_GameObject_o *mCardParent; // x20
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x21
  System_Action_o *v51; // x22
  struct UICharaGraphTexture_o *TexturePrefab_47626244; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  if ( (byte_596D921 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantRewardAction__SetupCommandCode_b__57_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D921 = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v7) == 7 )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0, 0) )
    {
      Instance = (UnityEngine_Component_o *)this->fields.mUICharaGraph;
      if ( !Instance )
        goto LABEL_21;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      this->fields.mUICharaGraph = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mUICharaGraph, 0, v15, v16, v17, v18, v19, v20);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mUserCommandCodeEntity,
          (int32_t)Entity,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity, 0, v28, v29, v30, v31, v32, v33);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( Instance )
        {
          ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                   Instance,
                                                   (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
            (int32_t)ComponentInChildren_object__58855044,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( Instance )
          {
            v41 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                    Instance,
                    (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v41;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
              (int32_t)v41,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                      Instance,
                                                      (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
              if ( Instance )
              {
                BYTE5(Instance[4].monitor) = 1;
                Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                  this->fields.mIsDoneLoad = 0;
                  ServantRewardAction__SetupScreenTouchInfo(this, v48);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v51,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__57_0__,
                    0);
                  TexturePrefab_47626244 = CharaGraphManager__CreateTexturePrefab_47626244(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v51,
                                             0);
                  this->fields.mUICharaGraph = TexturePrefab_47626244;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.mUICharaGraph,
                    (int32_t)TexturePrefab_47626244,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(Instance, v10);
  }
}


int32_t ServantRewardAction__SetupPlayFlag(
        ServantRewardAction_o *this,
        bool isSvtNew,
        bool isDoEffect,
        int32_t playFlag,
        const MethodInfo *method)
{
  if ( isDoEffect )
    return isSvtNew | playFlag | 0x10;
  else
    return isSvtNew | playFlag;
}


void ServantRewardAction__SetupScreenTouchInfo(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mScreenTouchInfo; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *mTouchParent; // x20
  bool v8; // w21
  Il2CppObject *Instance; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  UnityEngine_GameObject_o *v12; // x20
  float v13; // s0
  Il2CppObject *Component_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596D91D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D91D = 1;
  }
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    mTouchParent = (UnityEngine_Object_o *)this->fields.mTouchParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = UnityEngine_Object__op_Equality(mTouchParent, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v8 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !Instance )
        goto LABEL_19;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0);
      v12 = ScreeenTouchInfo;
      v13 = -265.0;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0), !Instance) )
      {
LABEL_19:
        sub_2213CDC(transform, v5);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0);
      v12 = ScreeenTouchInfo;
      v13 = 0.0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, v13, 0);
    if ( !v12 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v12,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mScreenTouchInfo,
      (int32_t)Component_object,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  transform = (UnityEngine_Transform_o *)this->fields.mScreenTouchInfo;
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__Setup_44070076(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *mUICharaGraph; // x25
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  void *servantGetObj; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v53; // w8
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *numText; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  UILabel_o *v59; // x20
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *v69; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  UnityEngine_GameObject_o *mCardParent; // x20
  int32_t mServantId; // w21
  int32_t mLimitCount; // w22
  System_Action_o *v79; // x23
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  int32_t servantNum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596D920 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantRewardAction__Setup_b__53_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_7195/*"GACHA_EFFECT_SVT_NUM"*/);
    byte_596D920 = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v13) == 7) )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0, 0) )
    {
      servantGetObj = this->fields.mUICharaGraph;
      if ( !servantGetObj )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantGetObj,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      this->fields.mUICharaGraph = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mUICharaGraph, 0, v27, v28, v29, v30, v31, v32);
    }
    this->fields.mUserCommandCodeEntity = 0;
    this->fields.mIsCommandCode = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mUserCommandCodeEntity,
      0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtEntity,
      (int32_t)usrSvtEntity,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)servantGetObj,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
        (int32_t)Component_object,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v46 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)servantGetObj,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v46;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
          (int32_t)v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 109) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0);
              servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_object_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v53 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v53;
                    ServantRewardAction__SetupScreenTouchInfo(this, v16);
                    servantGetObj = this->fields.numDisplayObj;
                    if ( servantGetObj )
                    {
                      servantGetObj = UnityEngine_GameObject__get_gameObject(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        0);
                      if ( servantGetObj )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0);
                        if ( this->fields.servantNum < 2 )
                          goto LABEL_38;
                        numText = (UnityEngine_Object_o *)this->fields.numText;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
                        if ( !UnityEngine_Object__op_Inequality(numText, 0, 0) )
                          goto LABEL_38;
                        servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_object_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_38:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v79 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v79,
                                (Il2CppObject *)this,
                                Method_ServantRewardAction__Setup_b__53_0__,
                                0);
                              TexturePrefab = CharaGraphManager__CreateTexturePrefab(
                                                mCardParent,
                                                mServantId,
                                                mLimitCount,
                                                0,
                                                1,
                                                0,
                                                v79,
                                                0,
                                                0);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&this->fields.mUICharaGraph,
                                (int32_t)TexturePrefab,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86);
                              return;
                            }
                            v59 = this->fields.numText;
                            this->fields.isDispNum = 1;
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
                            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_7195/*"GACHA_EFFECT_SVT_NUM"*/, 0);
                            servantNum = this->fields.servantNum;
                            v61 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &servantNum);
                            servantGetObj = System_String__Format(v60, v61, 0);
                            if ( v59 )
                            {
                              UILabel__set_text(v59, (System_String_o *)servantGetObj, 0);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v62 = UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = (struct UnityEngine_Animation_o *)v62;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)&this->fields.numDisplayAnimation,
                                  (int32_t)v62,
                                  v63,
                                  v64,
                                  v65,
                                  v66,
                                  v67,
                                  v68);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v69 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)servantGetObj,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = (struct SimpleAnimation_o *)v69;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&this->fields.numDisplaySimpleAnimation,
                                    (int32_t)v69,
                                    v70,
                                    v71,
                                    v72,
                                    v73,
                                    v74,
                                    v75);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
                                    if ( servantGetObj )
                                    {
                                      *((_BYTE *)servantGetObj + 109) = 1;
                                      goto LABEL_38;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_2213CDC(servantGetObj, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__Setup_44071204(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  int32_t v9; // w5

  if ( isDoEffect )
    v9 = is_svt_new | play_flag | 0x10;
  else
    v9 = is_svt_new | play_flag;
  ServantRewardAction__Setup_44070076(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


void ServantRewardAction__Setup_44071228(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x2

  if ( (byte_596D91F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D91F = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v14);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0;
  }
  ServantRewardAction__Setup_44070076(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    play_flag,
    method);
}


void ServantRewardAction__Setup_44071516(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  int64_t userSvtId; // x2
  _BOOL4 isNew; // w9
  int32_t limitCount; // w3
  int32_t objectId; // w1
  char v10; // w6
  const MethodInfo *v11; // [xsp+0h] [xbp-20h]

  if ( !qri )
    sub_2213CDC(this, 0);
  userSvtId = qri->fields.userSvtId;
  isNew = qri->fields.isNew;
  limitCount = qri->fields.limitCount;
  objectId = qri->fields.objectId;
  v10 = isNew || qri->fields.isGetEffect;
  ServantRewardAction__Setup(this, objectId, userSvtId, limitCount, qri->fields.num, isNew, v10, play_flag, v11);
}


void ServantRewardAction__Update(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x2
  CStateManager_T__o *mFSM; // x0
  char mPlayFlag; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float mFadeInTime; // s8
  CommonUI_o *v11; // x20
  AvalonSceneManager_c *v12; // x0
  ServantRewardAction___c_c *v13; // x0
  struct ServantRewardAction___c_StaticFields *static_fields; // x8
  System_Action_o *_9__47_0; // x21
  Il2CppObject *v16; // x22
  struct ServantRewardAction___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596D91C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_CStateManager_ServantRewardAction__update__);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction___c__Update_b__47_0__);
    sub_2213A60(&ServantRewardAction___c_TypeInfo);
    byte_596D91C = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E83E6C *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v11 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v12 = AvalonSceneManager_TypeInfo;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v8, v9);
          v12 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v12->static_fields->DEFAULT_FADE_TIME;
      }
      v13 = ServantRewardAction___c_TypeInfo;
      if ( !*(&ServantRewardAction___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo, v8, v9);
        v13 = ServantRewardAction___c_TypeInfo;
      }
      static_fields = v13->static_fields;
      _9__47_0 = static_fields->__9__47_0;
      if ( !_9__47_0 )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, v8, v9);
          static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__47_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__47_0, v16, Method_ServantRewardAction___c__Update_b__47_0__, 0);
        v17 = ServantRewardAction___c_TypeInfo->static_fields;
        v17->__9__47_0 = _9__47_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v17->__9__47_0,
          (int32_t)_9__47_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      if ( !v11 )
        sub_2213CDC(v13, v8);
      CommonUI__maskFadein(v11, mFadeInTime, _9__47_0, 0);
    }
    ServantRewardAction__SetState(this, 1, v4);
  }
}


void ServantRewardAction___SetupCommandCode_b__57_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *mAnimation; // x20

  if ( (byte_596D925 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D925 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0);
      return;
    }
LABEL_17:
    sub_2213CDC(gameObject, v4);
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v9);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0);
  }
}


void ServantRewardAction___Setup_b__53_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v9; // x2
  __int64 v10; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *numDisplayAnimation; // x20

  if ( (byte_596D924 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D924 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_27;
    SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v9);
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0);
    }
  }
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)this->fields.numDisplaySimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v10);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplaySimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0);
      return;
    }
LABEL_27:
    sub_2213CDC(gameObject, v4);
  }
  numDisplayAnimation = (UnityEngine_Object_o *)this->fields.numDisplayAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v13);
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplayAnimation;
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0);
  }
}


int32_t ServantRewardAction__get_PresentDialogMessageId(ServantRewardAction_o *this, const MethodInfo *method)
{
  return this->fields._PresentDialogMessageId_k__BackingField;
}


void ServantRewardAction__set_PresentDialogMessageId(
        ServantRewardAction_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PresentDialogMessageId_k__BackingField = value;
}


void ServantRewardAction_StateDetail___ctor(ServantRewardAction_StateDetail_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateDetail___begin_b__1_0(ServantRewardAction_StateDetail_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  Il2CppClass *klass; // x8
  int interopData_low; // w21
  Il2CppClass *v5; // x8
  CommonUI_o *v6; // x19
  UserCommandCodeEntity_o *v7; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22
  System_Action_o *v9; // x23
  UserServantEntity_o *v10; // x21
  ServantStatusDialog_EndDelegate_o *v11; // x22
  System_Action_o *v12; // x23
  __int64 v13; // x2

  v2 = (Il2CppObject *)this;
  if ( (byte_596D932 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateDetail_detailEnd__);
    sub_2213A60(&Method_ServantRewardAction_StateDetail_detailOpen__);
    this = (ServantRewardAction_StateDetail_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D932 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_17;
  interopData_low = LOBYTE(klass->_1.interopData);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = v2[1].klass;
  v6 = (CommonUI_o *)this;
  if ( interopData_low )
  {
    if ( v5 )
    {
      v7 = (UserCommandCodeEntity_o *)v5->_1.klass;
      v8 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(v8, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0);
      v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v9, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0);
      if ( v6 )
      {
        CommonUI__OpenServantStatusDialog_37385832(v6, 6, v7, v8, v9, 0);
        return;
      }
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
  if ( !v5 )
    goto LABEL_17;
  v10 = *(UserServantEntity_o **)&v5->_2.thread_static_fields_offset;
  v11 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v11, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v13);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  this = (ServantRewardAction_StateDetail_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v13);
    this = (ServantRewardAction_StateDetail_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_17;
  CommonUI__OpenServantStatusDialog_37382876(v6, 6, v10, v11, v12, HIDWORD(this[7].fields.that->fields.m_CachedPtr), 0);
}


void ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596D933 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__);
    byte_596D933 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596D935 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D935 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.that) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, v5);
}


void ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596D934 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D934 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.that) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, v5);
}


void ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct ServantRewardAction_o *that; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_596D92F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateDetail__begin_b__1_0__);
    byte_596D92F = 1;
  }
  this->fields.that = servantrewardAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)servantrewardAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  that = this->fields.that;
  if ( !that )
    goto LABEL_10;
  if ( (that->fields.mPlayFlag & 0x20) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(that, v10);
  }
  ServantRewardAction__SetState(that, 7, v11);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction_StateDetail__detailEnd(
        ServantRewardAction_StateDetail_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  System_Action_o *v11; // x20
  Il2CppClass *v12; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_596D931 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__);
    this = (ServantRewardAction_StateDetail_o *)sub_2213A60(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__);
    byte_596D931 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_11;
  if ( ((__int64)klass->_1.declaringType & 1) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(this, isDecide);
  }
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0);
  v12 = v3[1].klass;
  if ( !v12 )
    goto LABEL_11;
  EventTutorialMaster__CheckTutorial(-1, 11, v11, (int32_t)v12->_1.castClass, 0, 0, 0, 0);
}


void ServantRewardAction_StateDetail__detailOpen(ServantRewardAction_StateDetail_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  CommonUI_o *v5; // x19

  if ( (byte_596D930 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D930 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v4);
  if ( !v5 )
    sub_2213CDC(Instance, v3);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void ServantRewardAction_StateDetail__end(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateDetail__update(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateEnd___ctor(ServantRewardAction_StateEnd_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateEnd__begin(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_596D938 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__);
    sub_2213A60(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo);
    byte_596D938 = 1;
  }
  v4 = sub_2213CCC(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_13;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 16) + 80LL) & 4) == 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
      if ( *(_QWORD *)v13 )
      {
        ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v13 + 96LL), 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(Instance, v6);
  }
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v16 )
    goto LABEL_13;
  CommonUI__maskFadeout((CommonUI_o *)v16, 1, DEFAULT_FADE_TIME, v19, 0);
}


void ServantRewardAction_StateEnd__end(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateEnd__update(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_2213CDC(this, 0);
  ServantRewardAction__SetState(that, 0, method);
}


void ServantRewardAction_StateEnd___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateEnd___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateEnd___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateEnd___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantRewardAction_o *that; // x8

  if ( (byte_596D939 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596D939 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0), (that = this->fields.that) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  ActionExtensions__Call(that->fields.mEndAct, 0);
}


void ServantRewardAction_StateNone___ctor(ServantRewardAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateNone__begin(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateNone__end(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateNone__update(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateNumDisplay___ctor(ServantRewardAction_StateNumDisplay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateNumDisplay__begin(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateNumDisplay_o *v4; // x19
  __int64 v5; // x8
  UnityEngine_AnimationClip_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x22
  __int64 v10; // x2
  struct SimpleAnimation_o *v11; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v13; // x20
  System_String_o *v14; // x0
  SimpleAnimation_State_o *Item; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  MissionNaviTransitionBoardItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v25; // x21
  System_String_o *v26; // x0
  UnityEngine_Animation_o *v27; // x20
  System_String_o *v28; // x0
  UnityEngine_AnimationState_o *v29; // x0

  v4 = this;
  if ( (byte_596D928 & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D928 = 1;
  }
  if ( !that )
    goto LABEL_27;
  this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayObj;
  v5 = 224;
  if ( that->fields.servantNum < 10 )
    v5 = 216;
  if ( !this )
    goto LABEL_27;
  v6 = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0, 0) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplaySimpleAnimation;
    if ( this )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)this, v6, 0);
      v11 = that->fields.numDisplaySimpleAnimation;
      if ( v11 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)v11->fields.m_Clip;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_78552168(v11, name, 0);
          v13 = that->fields.numDisplaySimpleAnimation;
          if ( v13 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)v13->fields.m_Clip;
            if ( this )
            {
              v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              Item = SimpleAnimation__get_Item(v13, v14, 0);
              v22 = (int)Item;
              v4->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (MissionNaviTransitionBoardItem_o *)&v4->fields.mSimpleAnimState;
LABEL_25:
              sub_2213A04(p_mSimpleAnimState, v22, v16, v17, v18, v19, v20, v21);
              return;
            }
          }
        }
      }
    }
    goto LABEL_27;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v10);
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0, 0) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayAnimation;
    if ( this )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)this, v6, 0);
      v25 = that->fields.numDisplayAnimation;
      if ( v25 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.numDisplayAnimation,
                                                          0);
        if ( this )
        {
          v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_83078544(v25, v26, 0);
          v27 = that->fields.numDisplayAnimation;
          if ( v27 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(v27, 0);
            if ( this )
            {
              v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              v29 = UnityEngine_Animation__get_Item(v27, v28, 0);
              v22 = (int)v29;
              v4->fields.mAnimState = v29;
              p_mSimpleAnimState = (MissionNaviTransitionBoardItem_o *)&v4->fields;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, that);
  }
}


void ServantRewardAction_StateNumDisplay__end(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateNumDisplay__update(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateNumDisplay_o *v4; // x20
  __int64 v5; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v7; // x2
  struct SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  __int64 v10; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v12; // x20
  System_String_o *v13; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  __int64 v15; // x2
  struct SimpleAnimation_o *v16; // x20
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0

  v4 = this;
  if ( (byte_596D929 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D929 = 1;
  }
  if ( !that )
    goto LABEL_40;
  if ( that->fields.isSkip )
    goto LABEL_8;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, method);
  if ( CTouch__isTouchPush(0) )
  {
LABEL_8:
    this = (ServantRewardAction_StateNumDisplay_o *)v4->fields.mAnimState;
    if ( !this )
      goto LABEL_40;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 1.0, 0);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)v8->fields.m_Clip;
    if ( !this )
      goto LABEL_40;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v8, name, 0) )
      goto LABEL_24;
LABEL_23:
    that->fields.isPlayFinish = 1;
    goto LABEL_24;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v7);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = that->fields.mAnimation;
    if ( !v12 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
    if ( !this )
      goto LABEL_40;
    v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( !UnityEngine_Animation__IsPlaying(v12, v13, 0) )
      goto LABEL_23;
  }
LABEL_24:
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v10);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = that->fields.numDisplaySimpleAnimation;
    if ( v16 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)v16->fields.m_Clip;
      if ( this )
      {
        v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( SimpleAnimation__IsPlaying(v16, v17, 0) )
          return;
LABEL_37:
        if ( that->fields.isPlayFinish )
          ServantRewardAction__SetState(that, 3, v18);
        return;
      }
    }
    goto LABEL_40;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v15);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplayAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = that->fields.numDisplayAnimation;
    if ( v20 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                        that->fields.numDisplayAnimation,
                                                        0);
      if ( this )
      {
        v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( UnityEngine_Animation__IsPlaying(v20, v21, 0) )
          return;
        goto LABEL_37;
      }
    }
LABEL_40:
    sub_2213CDC(this, that);
  }
}


void ServantRewardAction_StatePlay___ctor(ServantRewardAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StatePlay__begin(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *ComponentInParent_object; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *cardRoot; // x22
  UnityEngine_GameObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_AnimationClip_o *mAnimCommandCode; // x21
  int32_t mSvtType; // w8
  struct UnityEngine_AnimationClip_o **p_mAnimCommandCodeNew; // x8
  UnityEngine_Object_o *mSimpleAnimation; // x22
  __int64 v20; // x2
  struct SimpleAnimation_o *v21; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v23; // x20
  System_String_o *v24; // x0
  struct SimpleAnimation_State_o *Item; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  MissionNaviTransitionBoardItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v35; // x21
  System_String_o *v36; // x0
  UnityEngine_Animation_o *v37; // x20
  System_String_o *v38; // x0
  struct UnityEngine_AnimationState_o *v39; // x0

  if ( (byte_596D926 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInParent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantCommentManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596D926 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, that, method);
  gameObject = (UnityEngine_GameObject_o *)ServantCommentManager__GetUiChangeType(0);
  if ( (_DWORD)gameObject == 2 )
  {
    if ( !that )
      goto LABEL_51;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
    if ( !gameObject )
      goto LABEL_51;
    ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                 gameObject,
                                 (const MethodInfo_38B73F8 *)Method_UnityEngine_GameObject_GetComponentInParent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object, 0, 0) )
    {
      cardRoot = (UnityEngine_Object_o *)that->fields.cardRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      if ( UnityEngine_Object__op_Inequality(cardRoot, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                   that->fields.cardRoot,
                                                   (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
        if ( !ComponentInParent_object || !gameObject )
          goto LABEL_51;
        UIPanel__set_depth((UIPanel_o *)gameObject, LODWORD(ComponentInParent_object[20].klass) + 1, 0);
      }
    }
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_51;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)gameObject, 0);
  if ( !that )
    goto LABEL_51;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( that->fields.mIsCommandCode )
  {
    if ( (that->fields.mPlayFlag & 0x10) == 0 )
    {
      mAnimCommandCode = that->fields.mAnimCommandCode;
      goto LABEL_30;
    }
    p_mAnimCommandCodeNew = &that->fields.mAnimCommandCodeNew;
  }
  else
  {
    mAnimCommandCode = that->fields.mAnimNormal;
    if ( (that->fields.mPlayFlag & 0x10) == 0 )
      goto LABEL_30;
    mSvtType = that->fields.mSvtType;
    if ( mSvtType == 6 )
    {
      p_mAnimCommandCodeNew = &that->fields.mAnimSvtEquipNew;
    }
    else
    {
      if ( mSvtType != 1 )
        goto LABEL_30;
      p_mAnimCommandCodeNew = &that->fields.mAnimSvtNew;
    }
  }
  mAnimCommandCode = *p_mAnimCommandCodeNew;
LABEL_30:
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)that->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)gameObject, mAnimCommandCode, 0);
      v21 = that->fields.mSimpleAnimation;
      if ( v21 )
      {
        gameObject = (UnityEngine_GameObject_o *)v21->fields.m_Clip;
        if ( gameObject )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__Play_78552168(v21, name, 0);
          v23 = that->fields.mSimpleAnimation;
          if ( v23 )
          {
            gameObject = (UnityEngine_GameObject_o *)v23->fields.m_Clip;
            if ( gameObject )
            {
              v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
              Item = SimpleAnimation__get_Item(v23, v24, 0);
              v32 = (int)Item;
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimState;
LABEL_48:
              sub_2213A04(p_mSimpleAnimState, v32, v26, v27, v28, v29, v30, v31);
              return;
            }
          }
        }
      }
    }
    goto LABEL_51;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v20);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)that->fields.mAnimation;
    if ( gameObject )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)gameObject, mAnimCommandCode, 0);
      v35 = that->fields.mAnimation;
      if ( v35 )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
        if ( gameObject )
        {
          v36 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_83078544(v35, v36, 0);
          v37 = that->fields.mAnimation;
          if ( v37 )
          {
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(v37, 0);
            if ( gameObject )
            {
              v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
              v39 = UnityEngine_Animation__get_Item(v37, v38, 0);
              v32 = (int)v39;
              this->fields.mAnimState = v39;
              p_mSimpleAnimState = (MissionNaviTransitionBoardItem_o *)&this->fields;
              goto LABEL_48;
            }
          }
        }
      }
    }
LABEL_51:
    sub_2213CDC(gameObject, v6);
  }
}


void ServantRewardAction_StatePlay__end(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StatePlay__update(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_AnimationState_o *isTouchPush; // x0
  const MethodInfo *v6; // x1
  float totalTime; // s8
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  __int64 v12; // x2
  struct SimpleAnimation_o *v13; // x20
  System_String_o *name; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0
  int32_t v19; // w1

  if ( (byte_596D927 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D927 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, method);
  isTouchPush = (UnityEngine_AnimationState_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( !that )
      goto LABEL_33;
    isTouchPush = this->fields.mAnimState;
    that->fields.isSkip = 1;
    if ( !isTouchPush )
      goto LABEL_33;
    UnityEngine_AnimationState__set_normalizedTime(isTouchPush, 1.0, 0);
  }
  totalTime = this->fields.totalTime;
  this->fields.totalTime = totalTime + RealTime__get_deltaTime(0);
  if ( !that )
    goto LABEL_33;
  if ( ServantRewardAction__GetState(that, v6) == 1 && that->fields.isDispNum )
  {
    numPlayStartSec = that->fields.numPlayStartSec;
    if ( numPlayStartSec != 0.0 && numPlayStartSec <= this->fields.totalTime )
      ServantRewardAction__SetState(that, 2, v9);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v13 = that->fields.mSimpleAnimation;
    if ( v13 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)v13->fields.m_Clip;
      if ( isTouchPush )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0);
        if ( SimpleAnimation__IsPlaying(v13, name, 0) )
          return;
LABEL_29:
        if ( that->fields.isDispNum )
          v19 = 2;
        else
          v19 = 3;
        ServantRewardAction__SetState(that, v19, v15);
        return;
      }
    }
    goto LABEL_33;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v12);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v17 = that->fields.mAnimation;
    if ( v17 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( isTouchPush )
      {
        v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0);
        if ( UnityEngine_Animation__IsPlaying(v17, v18, 0) )
          return;
        goto LABEL_29;
      }
    }
LABEL_33:
    sub_2213CDC(isTouchPush, v6);
  }
}


void ServantRewardAction_StateSecretTreasureDevice___ctor(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateSecretTreasureDevice__begin(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_596D936 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__);
    sub_2213A60(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo);
    byte_596D936 = 1;
  }
  v4 = sub_2213CCC(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v17 )
LABEL_8:
    sub_2213CDC(v5, v6);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0);
}


void ServantRewardAction_StateSecretTreasureDevice__end(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateSecretTreasureDevice__update(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CommonUI_o *v7; // x20
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596D937 & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__);
    byte_596D937 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  v7 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_2213CCC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v7 )
LABEL_8:
    sub_2213CDC(Instance, v4);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v7, mServantId, _9__1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(0, isDecide);
  ServantRewardAction__SetState(that, 5, method);
}


void ServantRewardAction_StateTalk___ctor(ServantRewardAction_StateTalk_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateTalk__begin(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // d0
  char v16; // w8
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v18; // x22
  int32_t v19; // w1
  ServantVoiceEntity_o *v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *SummonScriptId; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  __int64 v37; // x2
  _BOOL4 v38; // w22
  System_Action_o *v39; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596D92D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__);
    sub_2213A60(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo);
    byte_596D92D = 1;
  }
  entity = 0;
  v4 = sub_2213CCC(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = rewardAction;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)rewardAction, v7, v8, v9, v10, v11, v12);
  v14 = *(_QWORD *)(v4 + 16);
  if ( !v14 )
    goto LABEL_31;
  v15 = *(_QWORD *)(v14 + 72);
  *(_QWORD *)(v4 + 24) = v15;
  v16 = *(_BYTE *)(v14 + 80);
  *(_BYTE *)(v4 + 33) = v16 & 1;
  *(_BYTE *)(v4 + 32) = (v16 & 8) != 0;
  *(_BYTE *)(v4 + 34) = (v16 & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !*(_QWORD *)v13 )
    goto LABEL_31;
  v18 = (ServantVoiceMaster_o *)Instance;
  Instance = *(DataManager_o **)(*(_QWORD *)v13 + 272LL);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  if ( !v18 )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v19 = 4;
  else
    v19 = 3;
  v20 = ServantVoiceMaster__getEntity(v18, v19, SvtVoiceId, *(_DWORD *)(v4 + 28), 0);
  *(_QWORD *)(v4 + 40) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), 0, v21, v22, v23, v24, v25, v26);
  if ( v20 )
  {
    SummonScriptId = ServantVoiceEntity__GetSummonScriptId(v20, SvtVoiceId, 0);
    *(_QWORD *)(v4 + 40) = SummonScriptId;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)SummonScriptId, v30, v31, v32, v33, v34, v35);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27, v28);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         *(_DWORD *)(v4 + 24),
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36, v37);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  *(_DWORD *)(v4 + 24),
                                  0);
    if ( !entity )
      goto LABEL_31;
    v38 = ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0) && Instance != 0;
  }
  else
  {
    v38 = 0;
  }
  v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v4,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( v38 )
  {
    if ( *(_QWORD *)v13 )
    {
      Instance = *(DataManager_o **)(*(_QWORD *)v13 + 264LL);
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v39, 0);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_2213CDC(Instance, v6);
  }
  ActionExtensions__Call(v39, 0);
LABEL_29:
  if ( !*(_QWORD *)v13 )
    goto LABEL_31;
  *(_DWORD *)(*(_QWORD *)v13 + 280LL) = 0;
}


void ServantRewardAction_StateTalk__end(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateTalk__update(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateTalk___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  ScriptManager_o *v7; // x20
  System_Action_o *_9__1; // x24
  _BOOL4 isEventSvtGet; // w26
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 checkQuestOpen; // w27
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596D92E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__);
    byte_596D92E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  v7 = (ScriptManager_o *)Instance;
  _9__1 = this->fields.__9__1;
  isEventSvtGet = this->fields.isEventSvtGet;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v7 )
LABEL_8:
    sub_2213CDC(Instance, v4);
  ScriptManager__PlayGacha_51574240(
    v7,
    userSvtEntity,
    svtId,
    limitCount,
    isEventSvtGet,
    checkQuestOpen,
    _9__1,
    this->fields.isEventJoinSkip,
    rewardAction->fields._PresentDialogMessageId_k__BackingField,
    this->fields.summonScriptId,
    0);
}


void ServantRewardAction_StateTalk___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantRewardAction_o *rewardAction; // x0

  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    sub_2213CDC(0, method);
  ServantRewardAction__SetState(rewardAction, 6, v2);
}


void ServantRewardAction_StateTouchWait___ctor(ServantRewardAction_StateTouchWait_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction_StateTouchWait___begin_b__1_0(
        ServantRewardAction_StateTouchWait_o *this,
        bool decide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596D92C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D92C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  this->fields.isWaitCloseDialog = 0;
}


void ServantRewardAction_StateTouchWait__begin(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateTouchWait_o *v4; // x19
  System_String_o *v5; // x20
  EventServantEntity_o *EventServant_50197900; // x0
  EventServantEntity_o *v7; // x22
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  ServantRewardAction_StateTouchWait_o *v11; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x21
  Il2CppObject *Instance; // x22
  NotificationDialog_ClickDelegate_o *v18; // x23
  System_Nullable_float__o p_titlePosY; // x0
  System_Nullable_float__o v20; // x0
  System_Nullable_int__o p_messageWidgetSizeY; // x0
  System_Nullable_float__o p_buttonPosY; // x0
  System_Nullable_int__o v23; // x0
  System_Nullable_int__o p_buttonWidgetSizeY; // x0
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+60h] [xbp-70h] BYREF
  System_Nullable_int__o v26; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_float__o v29; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+88h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_596D92A & 1) == 0 )
  {
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__);
    sub_2213A60(&StringLiteral_12999/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (ServantRewardAction_StateTouchWait_o *)sub_2213A60(&StringLiteral_12998/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/);
    byte_596D92A = 1;
  }
  entity = 0;
  v4->fields.isWaitCloseDialog = 0;
  if ( !that )
    goto LABEL_26;
  this = (ServantRewardAction_StateTouchWait_o *)that->fields.mScreenTouchInfo;
  if ( !this )
    goto LABEL_26;
  this = (ServantRewardAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( that->fields.mSvtType == 12 && (that->fields.mPlayFlag & 0x10) != 0 )
  {
    this = (ServantRewardAction_StateTouchWait_o *)that->fields.userSvtEntity;
    if ( !this )
      goto LABEL_26;
    v5 = (System_String_o *)StringLiteral_1/*""*/;
    EventServant_50197900 = UserServantEntity__getEventServant_50197900((UserServantEntity_o *)this, 1, 0);
    if ( EventServant_50197900
      && (v7 = EventServant_50197900,
          v8 = EventServantEntity__GetGetMessage(EventServant_50197900, 0),
          !System_String__IsNullOrEmpty(v8, 0)) )
    {
      Message = EventServantEntity__GetGetMessage(v7, 0);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_26;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_26;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_20;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12998/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, 0);
      if ( !entity )
        goto LABEL_26;
      v11 = this;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0, 0);
      Message = System_String__Format((System_String_o *)v11, Name, 0);
    }
    v5 = Message;
LABEL_20:
    if ( System_String__IsNullOrEmpty(v5, 0) )
      return;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12999/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0);
    v4->fields.isWaitCloseDialog = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v18,
      (Il2CppObject *)v4,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v20 = (System_Nullable_float__o)&v29;
    v29 = 0;
    System_Nullable_float____ctor(v20, 8.0, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v23 = (System_Nullable_int__o)&v26;
    v26 = 0;
    System_Nullable_int____ctor(v23, 217, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_37376108(
        (CommonUI_o *)Instance,
        v16,
        v5,
        v18,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v29,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v26,
        buttonWidgetSizeY,
        0);
      return;
    }
LABEL_26:
    sub_2213CDC(this, that);
  }
}


void ServantRewardAction_StateTouchWait__end(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void ServantRewardAction_StateTouchWait__update(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  int32_t mSvtType; // w8
  bool v11; // zf

  if ( (byte_596D92B & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D92B = 1;
  }
  if ( !this->fields.isWaitCloseDialog )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that, method);
    isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0);
    if ( ((unsigned __int8)isTouchPush & 1) != 0 )
    {
      if ( that )
      {
        isTouchPush = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo;
        if ( isTouchPush )
        {
          isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0);
          if ( isTouchPush )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0);
            if ( that->fields.mIsCommandCode )
            {
LABEL_11:
              v9 = 5;
LABEL_26:
              ServantRewardAction__SetState(that, v9, v8);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType == 7 )
            {
              if ( (that->fields.mPlayFlag & 1) != 0 )
                goto LABEL_11;
              goto LABEL_25;
            }
            if ( mSvtType != 6 )
            {
              if ( mSvtType == 1 )
              {
                v11 = (that->fields.mPlayFlag & 0x10) == 0;
                goto LABEL_21;
              }
LABEL_25:
              v9 = 7;
              goto LABEL_26;
            }
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              v11 = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0) == 0;
LABEL_21:
              if ( v11 )
                v9 = 5;
              else
                v9 = 4;
              goto LABEL_26;
            }
          }
        }
      }
      sub_2213CDC(isTouchPush, v6);
    }
  }
}


void ServantRewardAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D93A & 1) == 0 )
  {
    sub_2213A60(&ServantRewardAction___c_TypeInfo);
    byte_596D93A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantRewardAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantRewardAction___c_TypeInfo->static_fields->__9 = (struct ServantRewardAction___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantRewardAction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantRewardAction___c___Update_b__47_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}
void ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x20
  Il2CppObject *v28; // x21
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4D299EE & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_ServantRewardAction___ctor__);
    sub_1C94098(&Method_CStateManager_ServantRewardAction__add__);
    sub_1C94098(&CStateManager_ServantRewardAction__TypeInfo);
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateDetail_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateEnd_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateNone_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateNumDisplay_TypeInfo);
    sub_1C94098(&ServantRewardAction_StatePlay_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateTalk_TypeInfo);
    sub_1C94098(&ServantRewardAction_StateTouchWait_TypeInfo);
    byte_4D299EE = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C942E4(CStateManager_ServantRewardAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_33E65C4 *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_30;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_30;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateNumDisplay_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_30;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v20, 0);
    if ( !v19 )
      goto LABEL_30;
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateTalk_TypeInfo);
    System_Object___ctor(v22, 0);
    if ( !v21 )
      goto LABEL_30;
    CStateManager_object___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateDetail_TypeInfo);
    System_Object___ctor(v24, 0);
    if ( !v23 )
      goto LABEL_30;
    CStateManager_object___add(
      v23,
      5,
      (IState_T__o *)v24,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateSecretTreasureDevice_TypeInfo);
    System_Object___ctor(v26, 0);
    if ( !v25 )
      goto LABEL_30;
    CStateManager_object___add(
      v25,
      6,
      (IState_T__o *)v26,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1C942E4(ServantRewardAction_StateEnd_TypeInfo);
    System_Object___ctor(v28, 0);
    if ( !v27 )
      goto LABEL_30;
    CStateManager_object___add(
      v27,
      7,
      (IState_T__o *)v28,
      (const MethodInfo_33E666C *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v29);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v32 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__Instantiate_object_(
              v32,
              (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v33, (UnityEngine_Component_o *)this, 0);
        if ( !byte_4D25F19 )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F19 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        if ( v33 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v33,
                                         (const MethodInfo_31F49F4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v33;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&this->fields.particleObj,
              (int32_t)v33,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            goto LABEL_27;
          }
        }
LABEL_30:
        sub_1C942F0(ComponentInChildren_object, v14);
      }
    }
  }
LABEL_27:
  this->fields._PresentDialogMessageId_k__BackingField = 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0);
}


int32_t ServantRewardAction__GetState(ServantRewardAction_o *this, const MethodInfo *method)
{
  ServantRewardAction_o *v2; // x19
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D299F5 & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_1C94098(&Method_CStateManager_ServantRewardAction__getState__);
    byte_4D299F5 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C942F0(this, method);
  return mFSM->fields.m_state;
}


void ServantRewardAction__Play(
        ServantRewardAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = 0;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_mEndAct, (int32_t)end_act, (int32_t)method, v4, v5, v6, v7, v8);
}


void ServantRewardAction__Play_37848740(
        ServantRewardAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = is_from_treasure_box;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_mEndAct,
    (int32_t)end_act,
    (int32_t)end_act,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__SetState(ServantRewardAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D299F6 & 1) == 0 )
  {
    sub_1C94098(&Method_CStateManager_ServantRewardAction__setState__);
    byte_4D299F6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C942F0(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33E66F8 *)Method_CStateManager_ServantRewardAction__setState__);
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

  if ( (byte_4D299F1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D299F1 = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_1C942F0(Instance, v18);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0;
  }
  if ( isDoEffect )
    v20 = is_svt_new | play_flag | 0x10;
  else
    v20 = is_svt_new | play_flag;
  ServantRewardAction__Setup_37846328(
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
    sub_1C942F0(this, 0);
  isNew = qri->fields.isNew;
  userSvtId = qri->fields.userSvtId;
  if ( isNew || qri->fields.isGetEffect )
    play_flag |= 0x10u;
  ServantRewardAction__SetupCommandCode_37847988(this, userSvtId, play_flag, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__SetupCommandCode_37847964(
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
  ServantRewardAction__SetupCommandCode_37847988(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void ServantRewardAction__SetupCommandCode_37847988(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        int32_t play_flag,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *mUICharaGraph; // x23
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Object_o *gameObject; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *Entity; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *ComponentInChildren_object__51981160; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x1
  UnityEngine_GameObject_o *mCardParent; // x21
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x22
  System_Action_o *v49; // x23
  struct UICharaGraphTexture_o *TexturePrefab_41415276; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7

  if ( (byte_4D299F4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantRewardAction__SetupCommandCode_b__57_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D299F4 = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v7) == 7 )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0, 0) )
    {
      Instance = (UnityEngine_Component_o *)*p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_21;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
      *p_mUICharaGraph = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mUICharaGraph, 0, v13, v14, v15, v16, v17, v18);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_345DA1C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mUserCommandCodeEntity,
          (int32_t)Entity,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity, 0, v26, v27, v28, v29, v30, v31);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( Instance )
        {
          ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                                   Instance,
                                                   (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51981160;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
            (int32_t)ComponentInChildren_object__51981160,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( Instance )
          {
            v39 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                    Instance,
                    (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v39;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation,
              (int32_t)v39,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51981160(
                                                      Instance,
                                                      (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
                  ServantRewardAction__SetupScreenTouchInfo(this, v46);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v49 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v49,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__57_0__,
                    0);
                  TexturePrefab_41415276 = CharaGraphManager__CreateTexturePrefab_41415276(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v49,
                                             0);
                  this->fields.mUICharaGraph = TexturePrefab_41415276;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&this->fields.mUICharaGraph,
                    (int32_t)TexturePrefab_41415276,
                    v51,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C942F0(Instance, v10);
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
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  GrandQuestFolderBoardItem_o *p_mScreenTouchInfo; // x19
  __int64 v5; // x1
  UnityEngine_Object_o *mTouchParent; // x21
  bool v7; // w22
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  float v11; // s0
  UnityEngine_GameObject_o *v12; // x20
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D299F0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D299F0 = 1;
  }
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mScreenTouchInfo = (GrandQuestFolderBoardItem_o *)&this->fields.mScreenTouchInfo;
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    mTouchParent = (UnityEngine_Object_o *)this->fields.mTouchParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality(mTouchParent, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v7 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !Instance )
        goto LABEL_19;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0);
      v11 = -265.0;
      v12 = ScreeenTouchInfo;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0), !Instance) )
      {
LABEL_19:
        sub_1C942F0(transform, v5);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0);
      v12 = ScreeenTouchInfo;
      v11 = 0.0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, v11, 0);
    if ( !v12 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v12,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (GrandQuestFolderBoardItem_c *)Component_object;
    sub_1C9403C(p_mScreenTouchInfo, (int32_t)Component_object, v14, v15, v16, v17, v18, v19);
  }
  transform = (UnityEngine_Transform_o *)p_mScreenTouchInfo->klass;
  if ( !p_mScreenTouchInfo->klass )
    goto LABEL_19;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__Setup_37846328(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *mUICharaGraph; // x26
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  void *servantGetObj; // x0
  UnityEngine_Object_o *gameObject; // x26
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w8
  UnityEngine_Object_o *numText; // x21
  UILabel_o *v53; // x21
  System_String_o *v54; // x22
  Il2CppObject *v55; // x0
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v73; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t servantNum; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D299F3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_ServantRewardAction__Setup_b__53_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_6912/*"GACHA_EFFECT_SVT_NUM"*/);
    byte_4D299F3 = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v13) == 7) )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0, 0) )
    {
      servantGetObj = *p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantGetObj,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
      *p_mUICharaGraph = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mUICharaGraph, 0, v25, v26, v27, v28, v29, v30);
    }
    this->fields.mUserCommandCodeEntity = 0;
    this->fields.mIsCommandCode = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mUserCommandCodeEntity, 0, v17, v18, v19, v20, v21, v22);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userSvtEntity,
      (int32_t)usrSvtEntity,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)servantGetObj,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.mAnimation,
        (int32_t)Component_object,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v44 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)servantGetObj,
                (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v44;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation,
          (int32_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 109) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0);
              servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_object_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v51 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v51;
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
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( !UnityEngine_Object__op_Inequality(numText, 0, 0) )
                          goto LABEL_38;
                        servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_object_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_38:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v73 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                              System_Action___ctor(
                                v73,
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
                                                v73,
                                                0,
                                                0);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_1C9403C(
                                (GrandQuestFolderBoardItem_o *)&this->fields.mUICharaGraph,
                                (int32_t)TexturePrefab,
                                v75,
                                v76,
                                v77,
                                v78,
                                v79,
                                v80);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v53 = this->fields.numText;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_6912/*"GACHA_EFFECT_SVT_NUM"*/, 0);
                            servantNum = this->fields.servantNum;
                            v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum);
                            servantGetObj = System_String__Format(v54, v55, 0);
                            if ( v53 )
                            {
                              UILabel__set_text(v53, (System_String_o *)servantGetObj, 0);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v56 = UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = (struct UnityEngine_Animation_o *)v56;
                                sub_1C9403C(
                                  (GrandQuestFolderBoardItem_o *)&this->fields.numDisplayAnimation,
                                  (int32_t)v56,
                                  v57,
                                  v58,
                                  v59,
                                  v60,
                                  v61,
                                  v62);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v63 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)servantGetObj,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = (struct SimpleAnimation_o *)v63;
                                  sub_1C9403C(
                                    (GrandQuestFolderBoardItem_o *)&this->fields.numDisplaySimpleAnimation,
                                    (int32_t)v63,
                                    v64,
                                    v65,
                                    v66,
                                    v67,
                                    v68,
                                    v69);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_1C942F0(servantGetObj, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantRewardAction__Setup_37847480(
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
  ServantRewardAction__Setup_37846328(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


void ServantRewardAction__Setup_37847504(
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

  if ( (byte_4D299F2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D299F2 = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
    {
      sub_1C942F0(Instance, v14);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0;
  }
  ServantRewardAction__Setup_37846328(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    play_flag,
    method);
}


void ServantRewardAction__Setup_37847792(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  int64_t userSvtId; // x2
  int32_t limitCount; // w3
  _BOOL4 isNew; // w9
  int32_t objectId; // w1
  char v10; // w6
  const MethodInfo *v11; // [xsp+0h] [xbp-20h]

  if ( !qri )
    sub_1C942F0(this, 0);
  userSvtId = qri->fields.userSvtId;
  limitCount = qri->fields.limitCount;
  isNew = qri->fields.isNew;
  objectId = qri->fields.objectId;
  v10 = isNew || qri->fields.isGetEffect;
  ServantRewardAction__Setup(this, objectId, userSvtId, limitCount, qri->fields.num, isNew, v10, play_flag, v11);
}


void ServantRewardAction__Update(ServantRewardAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CStateManager_T__o *mFSM; // x0
  char mPlayFlag; // w8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  float mFadeInTime; // s8
  CommonUI_o *v9; // x20
  AvalonSceneManager_c *v10; // x0
  ServantRewardAction___c_c *v11; // x0
  System_Action_o *_9__47_0; // x21
  Il2CppObject *v13; // x22
  struct ServantRewardAction___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D299EF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_CStateManager_ServantRewardAction__update__);
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction___c__Update_b__47_0__);
    sub_1C94098(&ServantRewardAction___c_TypeInfo);
    byte_4D299EF = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_33E66D4 *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v9 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v10 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v10 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v10->static_fields->DEFAULT_FADE_TIME;
      }
      v11 = ServantRewardAction___c_TypeInfo;
      if ( !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo);
        v11 = ServantRewardAction___c_TypeInfo;
      }
      _9__47_0 = v11->static_fields->__9__47_0;
      if ( !_9__47_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = ServantRewardAction___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__47_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__47_0, v13, Method_ServantRewardAction___c__Update_b__47_0__, 0);
        static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        static_fields->__9__47_0 = _9__47_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__47_0,
          (int32_t)_9__47_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      if ( !v9 )
        sub_1C942F0(v11, v7);
      CommonUI__maskFadein(v9, mFadeInTime, _9__47_0, 0);
    }
    ServantRewardAction__SetState(this, 1, v3);
  }
}


void ServantRewardAction___SetupCommandCode_b__57_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20

  if ( (byte_4D299F8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D299F8 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0);
      return;
    }
LABEL_17:
    sub_1C942F0(gameObject, v4);
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  UnityEngine_Object_o *numDisplayAnimation; // x20

  if ( (byte_4D299F7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D299F7 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0);
    }
  }
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)this->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplaySimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0);
      return;
    }
LABEL_27:
    sub_1C942F0(gameObject, v4);
  }
  numDisplayAnimation = (UnityEngine_Object_o *)this->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int interopData_low; // w21
  Il2CppClass *v5; // x8
  CommonUI_o *v6; // x20
  UserCommandCodeEntity_o *v7; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22
  System_Action_o *v9; // x23
  UserServantEntity_o *v10; // x21
  ServantStatusDialog_EndDelegate_o *v11; // x22
  System_Action_o *v12; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_4D29A05 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateDetail_detailEnd__);
    this = (ServantRewardAction_StateDetail_o *)sub_1C94098(&Method_ServantRewardAction_StateDetail_detailOpen__);
    byte_4D29A05 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_10;
  interopData_low = LOBYTE(klass->_1.interopData);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = v2[1].klass;
  if ( !v5 )
    goto LABEL_10;
  v6 = (CommonUI_o *)this;
  if ( interopData_low )
  {
    v7 = (UserCommandCodeEntity_o *)v5->_1.klass;
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v8, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0);
    v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v9, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0);
    if ( v6 )
    {
      CommonUI__OpenServantStatusDialog_31596060(v6, 6, v7, v8, v9, 0);
      return;
    }
LABEL_10:
    sub_1C942F0(this, method);
  }
  v10 = *(UserServantEntity_o **)&v5->_2.thread_static_fields_offset;
  v11 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v11, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0);
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0);
  if ( !v6 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_31592892(v6, 6, v10, v11, v12, 0);
}


void ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D29A06 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__);
    byte_4D29A06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0);
  if ( !v5 )
    sub_1C942F0(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D29A08 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29A08 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.that) == 0) )
  {
    sub_1C942F0(Instance, v4);
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

  if ( (byte_4D29A07 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29A07 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0, 0), (Instance = (CommonUI_o *)this->fields.that) == 0) )
  {
    sub_1C942F0(Instance, v4);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, v5);
}


void ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct ServantRewardAction_o *that; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4D29A02 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateDetail__begin_b__1_0__);
    byte_4D29A02 = 1;
  }
  this->fields.that = servantrewardAction;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)servantrewardAction,
    (int32_t)method,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v16, 0);
      return;
    }
LABEL_10:
    sub_1C942F0(that, v10);
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
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  System_Action_o *v9; // x20
  Il2CppClass *v10; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_4D29A04 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__);
    this = (ServantRewardAction_StateDetail_o *)sub_1C94098(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__);
    byte_4D29A04 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_11;
  if ( ((__int64)klass->_1.declaringType & 1) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v8, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v8, 0);
      return;
    }
LABEL_11:
    sub_1C942F0(this, isDecide);
  }
  v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v9, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0);
  v10 = v3[1].klass;
  if ( !v10 )
    goto LABEL_11;
  EventTutorialMaster__CheckTutorial(-1, 11, v9, (int32_t)v10->_1.castClass, 0, 0, 0, 0);
}


void ServantRewardAction_StateDetail__detailOpen(ServantRewardAction_StateDetail_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19

  if ( (byte_4D29A03 & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D29A03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C942F0(Instance, v3);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x21
  Il2CppObject *v14; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4D29A0B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__);
    sub_1C94098(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo);
    byte_4D29A0B = 1;
  }
  v4 = sub_1C942E4(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_13;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_13;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 16) + 80LL) & 4) == 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1C942F0(Instance, v6);
  }
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v4,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v14 )
    goto LABEL_13;
  CommonUI__maskFadeout((CommonUI_o *)v14, 1, DEFAULT_FADE_TIME, v17, 0);
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
    sub_1C942F0(this, 0);
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

  if ( (byte_4D29A0C & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D29A0C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0), (that = this->fields.that) == 0) )
  {
    sub_1C942F0(Instance, v4);
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
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x22
  struct SimpleAnimation_o *v8; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  SimpleAnimation_State_o *Item; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  GrandQuestFolderBoardItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v22; // x21
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  UnityEngine_AnimationState_o *v26; // x0

  v4 = this;
  if ( (byte_4D299FB & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D299FB = 1;
  }
  if ( !that )
    goto LABEL_27;
  this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayObj;
  v5 = 216;
  if ( that->fields.servantNum >= 10 )
    v5 = 224;
  if ( !this )
    goto LABEL_27;
  v6 = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0, 0) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplaySimpleAnimation;
    if ( this )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)this, v6, 0);
      v8 = that->fields.numDisplaySimpleAnimation;
      if ( v8 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)v8->fields.m_Clip;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_67362784(v8, name, 0);
          v10 = that->fields.numDisplaySimpleAnimation;
          if ( v10 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)v10->fields.m_Clip;
            if ( this )
            {
              v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              Item = SimpleAnimation__get_Item(v10, v11, 0);
              v19 = (int)Item;
              v4->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (GrandQuestFolderBoardItem_o *)&v4->fields.mSimpleAnimState;
LABEL_25:
              sub_1C9403C(p_mSimpleAnimState, v19, v13, v14, v15, v16, v17, v18);
              return;
            }
          }
        }
      }
    }
    goto LABEL_27;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0, 0) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayAnimation;
    if ( this )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)this, v6, 0);
      v22 = that->fields.numDisplayAnimation;
      if ( v22 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.numDisplayAnimation,
                                                          0);
        if ( this )
        {
          v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_71854448(v22, v23, 0);
          v24 = that->fields.numDisplayAnimation;
          if ( v24 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(v24, 0);
            if ( this )
            {
              v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              v26 = UnityEngine_Animation__get_Item(v24, v25, 0);
              v19 = (int)v26;
              v4->fields.mAnimState = v26;
              p_mSimpleAnimState = (GrandQuestFolderBoardItem_o *)&v4->fields;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C942F0(this, that);
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
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  struct SimpleAnimation_o *v12; // x20
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  v4 = this;
  if ( (byte_4D299FC & 1) == 0 )
  {
    sub_1C94098(&CTouch_TypeInfo);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D299FC = 1;
  }
  if ( !that )
    goto LABEL_40;
  if ( that->fields.isSkip )
    goto LABEL_8;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0) )
  {
LABEL_8:
    this = (ServantRewardAction_StateNumDisplay_o *)v4->fields.mAnimState;
    if ( !this )
      goto LABEL_40;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 1.0, 0);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.mSimpleAnimation;
    if ( !v6 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)v6->fields.m_Clip;
    if ( !this )
      goto LABEL_40;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v6, name, 0) )
      goto LABEL_24;
LABEL_23:
    that->fields.isPlayFinish = 1;
    goto LABEL_24;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.mAnimation;
    if ( !v9 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
    if ( !this )
      goto LABEL_40;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( !UnityEngine_Animation__IsPlaying(v9, v10, 0) )
      goto LABEL_23;
  }
LABEL_24:
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = that->fields.numDisplaySimpleAnimation;
    if ( v12 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)v12->fields.m_Clip;
      if ( this )
      {
        v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( SimpleAnimation__IsPlaying(v12, v13, 0) )
          return;
LABEL_37:
        if ( that->fields.isPlayFinish )
          ServantRewardAction__SetState(that, 3, v14);
        return;
      }
    }
    goto LABEL_40;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplayAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = that->fields.numDisplayAnimation;
    if ( v16 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                        that->fields.numDisplayAnimation,
                                                        0);
      if ( this )
      {
        v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( UnityEngine_Animation__IsPlaying(v16, v17, 0) )
          return;
        goto LABEL_37;
      }
    }
LABEL_40:
    sub_1C942F0(this, that);
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
  Il2CppObject *ComponentInParent_object; // x21
  UnityEngine_Object_o *cardRoot; // x22
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_AnimationClip_o *mAnimCommandCodeNew; // x21
  int32_t mSvtType; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x22
  struct SimpleAnimation_o *v13; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v15; // x20
  System_String_o *v16; // x0
  struct SimpleAnimation_State_o *Item; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  GrandQuestFolderBoardItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v27; // x21
  System_String_o *v28; // x0
  UnityEngine_Animation_o *v29; // x20
  System_String_o *v30; // x0
  struct UnityEngine_AnimationState_o *v31; // x0

  if ( (byte_4D299F9 & 1) == 0 )
  {
    sub_1C94098(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInParent_UIPanel___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantCommentManager_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D299F9 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)ServantCommentManager__GetUiChangeType(0);
  if ( (_DWORD)gameObject == 2 )
  {
    if ( !that )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
    if ( !gameObject )
      goto LABEL_50;
    ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                 gameObject,
                                 (const MethodInfo_31F4D70 *)Method_UnityEngine_GameObject_GetComponentInParent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object, 0, 0) )
    {
      cardRoot = (UnityEngine_Object_o *)that->fields.cardRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(cardRoot, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                   that->fields.cardRoot,
                                                   (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
        if ( !ComponentInParent_object || !gameObject )
          goto LABEL_50;
        UIPanel__set_depth((UIPanel_o *)gameObject, LODWORD(ComponentInParent_object[20].klass) + 1, 0);
      }
    }
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_50;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)gameObject, 0);
  if ( !that )
    goto LABEL_50;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  if ( !byte_4D25F1E )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F1E = 1;
  }
  GameObjectExtensions__SetLocalScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( that->fields.mIsCommandCode )
  {
    if ( (that->fields.mPlayFlag & 0x10) != 0 )
      mAnimCommandCodeNew = that->fields.mAnimCommandCodeNew;
    else
      mAnimCommandCodeNew = that->fields.mAnimCommandCode;
  }
  else
  {
    mAnimCommandCodeNew = that->fields.mAnimNormal;
    if ( (that->fields.mPlayFlag & 0x10) != 0 )
    {
      mSvtType = that->fields.mSvtType;
      if ( mSvtType == 6 )
      {
        mAnimCommandCodeNew = that->fields.mAnimSvtEquipNew;
      }
      else if ( mSvtType == 1 )
      {
        mAnimCommandCodeNew = that->fields.mAnimSvtNew;
      }
    }
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)that->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)gameObject, mAnimCommandCodeNew, 0);
      v13 = that->fields.mSimpleAnimation;
      if ( v13 )
      {
        gameObject = (UnityEngine_GameObject_o *)v13->fields.m_Clip;
        if ( gameObject )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__Play_67362784(v13, name, 0);
          v15 = that->fields.mSimpleAnimation;
          if ( v15 )
          {
            gameObject = (UnityEngine_GameObject_o *)v15->fields.m_Clip;
            if ( gameObject )
            {
              v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
              Item = SimpleAnimation__get_Item(v15, v16, 0);
              v24 = (int)Item;
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimState;
LABEL_47:
              sub_1C9403C(p_mSimpleAnimState, v24, v18, v19, v20, v21, v22, v23);
              return;
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)that->fields.mAnimation;
    if ( gameObject )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)gameObject, mAnimCommandCodeNew, 0);
      v27 = that->fields.mAnimation;
      if ( v27 )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
        if ( gameObject )
        {
          v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_71854448(v27, v28, 0);
          v29 = that->fields.mAnimation;
          if ( v29 )
          {
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(v29, 0);
            if ( gameObject )
            {
              v30 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
              v31 = UnityEngine_Animation__get_Item(v29, v30, 0);
              v24 = (int)v31;
              this->fields.mAnimState = v31;
              p_mSimpleAnimState = (GrandQuestFolderBoardItem_o *)&this->fields;
              goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C942F0(gameObject, v6);
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
  const MethodInfo *v8; // x2
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v11; // x20
  System_String_o *name; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v15; // x20
  System_String_o *v16; // x0
  int32_t v17; // w1

  if ( (byte_4D299FA & 1) == 0 )
  {
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D299FA = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( !that )
      goto LABEL_33;
    that->fields.isSkip = 1;
    isTouchPush = this->fields.mAnimState;
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
      ServantRewardAction__SetState(that, 2, v8);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v11 = that->fields.mSimpleAnimation;
    if ( v11 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)v11->fields.m_Clip;
      if ( isTouchPush )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0);
        if ( SimpleAnimation__IsPlaying(v11, name, 0) )
          return;
LABEL_29:
        if ( that->fields.isDispNum )
          v17 = 2;
        else
          v17 = 3;
        ServantRewardAction__SetState(that, v17, v13);
        return;
      }
    }
    goto LABEL_33;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v15 = that->fields.mAnimation;
    if ( v15 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( isTouchPush )
      {
        v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0);
        if ( UnityEngine_Animation__IsPlaying(v15, v16, 0) )
          return;
        goto LABEL_29;
      }
    }
LABEL_33:
    sub_1C942F0(isTouchPush, v6);
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
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4D29A09 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__);
    sub_1C94098(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo);
    byte_4D29A09 = 1;
  }
  v4 = sub_1C942E4(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = that;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v4,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( !v15 )
LABEL_8:
    sub_1C942F0(v5, v6);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0);
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
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D29A0A & 1) == 0 )
  {
    sub_1C94098(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__);
    byte_4D29A0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C942E4(CombineResultEffectComponent_ClickDelegate_TypeInfo);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v8 )
LABEL_8:
    sub_1C942F0(Instance, v4);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v8, mServantId, _9__1, 0);
}


void ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C942F0(0, isDecide);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // d0
  char v16; // w9
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v18; // x22
  int32_t v19; // w1
  ServantVoiceEntity_o *v20; // x0
  ServantVoiceEntity_o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_String_o *SummonScriptId; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int v35; // w22
  System_Action_o *v36; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D29A00 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__);
    sub_1C94098(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo);
    byte_4D29A00 = 1;
  }
  entity = 0;
  v4 = sub_1C942E4(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_31;
  *(_QWORD *)(v4 + 16) = rewardAction;
  v13 = v4 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)rewardAction, v7, v8, v9, v10, v11, v12);
  v14 = *(_QWORD *)(v4 + 16);
  if ( !v14 )
    goto LABEL_31;
  v15 = *(_QWORD *)(v14 + 72);
  *(_QWORD *)(v4 + 24) = v15;
  v16 = *(_DWORD *)(v14 + 80);
  *(_BYTE *)(v4 + 33) = v16 & 1;
  *(_BYTE *)(v4 + 32) = (v16 & 8) != 0;
  *(_BYTE *)(v4 + 34) = (v16 & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v15, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
  v21 = v20;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), 0, v22, v23, v24, v25, v26, v27);
  if ( v21 )
  {
    SummonScriptId = ServantVoiceEntity__GetSummonScriptId(v21, SvtVoiceId, 0);
    *(_QWORD *)(v4 + 40) = SummonScriptId;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)SummonScriptId, v29, v30, v31, v32, v33, v34);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         *(_DWORD *)(v4 + 24),
         (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  *(_DWORD *)(v4 + 24),
                                  0);
    if ( !entity )
      goto LABEL_31;
    v35 = (Instance != 0) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
  }
  else
  {
    v35 = 0;
  }
  v36 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v4,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0);
  if ( v35 )
  {
    if ( *(_QWORD *)v13 )
    {
      Instance = *(DataManager_o **)(*(_QWORD *)v13 + 264LL);
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v36, 0);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1C942F0(Instance, v6);
  }
  ActionExtensions__Call(v36, 0);
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
  System_Action_o *_9__1; // x24
  ScriptManager_o *v8; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D29A01 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__);
    byte_4D29A01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v8 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14, v15, v16, v17, v18);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v8 )
LABEL_8:
    sub_1C942F0(Instance, v4);
  ScriptManager__PlayGacha_45348992(
    v8,
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D299FF & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D299FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
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
  EventServantEntity_o *EventServant_43967832; // x0
  EventServantEntity_o *v7; // x22
  System_String_o *v8; // x0
  ServantRewardAction_StateTouchWait_o *v9; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x21
  Il2CppObject *Instance; // x22
  NotificationDialog_ClickDelegate_o *v15; // x23
  System_Nullable_float__o p_titlePosY; // x0
  System_Nullable_float__o v17; // x0
  System_Nullable_int__o p_messageWidgetSizeY; // x0
  System_Nullable_float__o p_buttonPosY; // x0
  System_Nullable_int__o v20; // x0
  System_Nullable_int__o p_buttonWidgetSizeY; // x0
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+60h] [xbp-70h] BYREF
  System_Nullable_int__o v23; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_float__o v26; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+88h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4D299FD & 1) == 0 )
  {
    sub_1C94098(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__);
    sub_1C94098(&StringLiteral_12527/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    this = (ServantRewardAction_StateTouchWait_o *)sub_1C94098(&StringLiteral_12526/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/);
    byte_4D299FD = 1;
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
    EventServant_43967832 = UserServantEntity__getEventServant_43967832((UserServantEntity_o *)this, 1, 0);
    if ( EventServant_43967832
      && (v7 = EventServant_43967832,
          v8 = EventServantEntity__GetGetMessage(EventServant_43967832, 0),
          !System_String__IsNullOrEmpty(v8, 0)) )
    {
      Message = EventServantEntity__GetGetMessage(v7, 0);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_26;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_26;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_20;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, 0);
      if ( !entity )
        goto LABEL_26;
      v9 = this;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0, 0);
      Message = System_String__Format((System_String_o *)v9, Name, 0);
    }
    v5 = Message;
LABEL_20:
    if ( System_String__IsNullOrEmpty(v5, 0) )
      return;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12527/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0);
    v4->fields.isWaitCloseDialog = 1;
    v13 = v12;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (NotificationDialog_ClickDelegate_o *)sub_1C942E4(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v15,
      (Il2CppObject *)v4,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    v17 = (System_Nullable_float__o)&v26;
    v26 = 0;
    System_Nullable_float____ctor(v17, 8.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    v20 = (System_Nullable_int__o)&v23;
    v23 = 0;
    System_Nullable_int____ctor(v20, 217, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_31585792(
        (CommonUI_o *)Instance,
        v13,
        v5,
        v15,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v26,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v23,
        buttonWidgetSizeY,
        0);
      return;
    }
LABEL_26:
    sub_1C942F0(this, that);
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
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  int32_t mSvtType; // w8

  if ( (byte_4D299FE & 1) == 0 )
  {
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D299FE = 1;
  }
  if ( !this->fields.isWaitCloseDialog )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
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
              v8 = 5;
LABEL_12:
              ServantRewardAction__SetState(that, v8, v7);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v8 = 7;
                goto LABEL_12;
              }
              if ( (that->fields.mPlayFlag & 0x10) == 0 )
                goto LABEL_11;
              goto LABEL_22;
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0) )
                goto LABEL_11;
LABEL_22:
              v8 = 4;
              goto LABEL_12;
            }
          }
        }
      }
      sub_1C942F0(isTouchPush, v6);
    }
  }
}


void ServantRewardAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D29A0D & 1) == 0 )
  {
    sub_1C94098(&ServantRewardAction___c_TypeInfo);
    byte_4D29A0D = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantRewardAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantRewardAction___c_TypeInfo->static_fields->__9 = (struct ServantRewardAction___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantRewardAction___c_TypeInfo->static_fields,
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
void __fastcall ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_T__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v24; // x1
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x21
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x21
  Il2CppObject *v32; // x22
  CStateManager_T__o *v33; // x21
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x21
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x20
  Il2CppObject *v38; // x21
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v42; // x21
  Il2CppObject *v43; // x21
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_4A2B3D6 & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_ServantRewardAction___ctor__, method);
    sub_1B761C0(&Method_CStateManager_ServantRewardAction__add__, v3);
    sub_1B761C0(&CStateManager_ServantRewardAction__TypeInfo, v4);
    sub_1B761C0(&CTouch_TypeInfo, v5);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v6);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&ServantRewardAction_StateDetail_TypeInfo, v9);
    sub_1B761C0(&ServantRewardAction_StateEnd_TypeInfo, v10);
    sub_1B761C0(&ServantRewardAction_StateNone_TypeInfo, v11);
    sub_1B761C0(&ServantRewardAction_StateNumDisplay_TypeInfo, v12);
    sub_1B761C0(&ServantRewardAction_StatePlay_TypeInfo, v13);
    sub_1B761C0(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo, v14);
    sub_1B761C0(&ServantRewardAction_StateTalk_TypeInfo, v15);
    sub_1B761C0(&ServantRewardAction_StateTouchWait_TypeInfo, v16);
    byte_4A2B3D6 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v18 = (CStateManager_T__o *)sub_1B7640C(CStateManager_ServantRewardAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_308D27C *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v18;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v18, v19, v20);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v22 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !mFSM )
      goto LABEL_30;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StatePlay_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_30;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateNumDisplay_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_30;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v29 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_30;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v31 = (CStateManager_T__o *)*p_mFSM;
    v32 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateTalk_TypeInfo);
    System_Object___ctor(v32, 0LL);
    if ( !v31 )
      goto LABEL_30;
    CStateManager_object___add(
      v31,
      4,
      (IState_T__o *)v32,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v33 = (CStateManager_T__o *)*p_mFSM;
    v34 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateDetail_TypeInfo);
    System_Object___ctor(v34, 0LL);
    if ( !v33 )
      goto LABEL_30;
    CStateManager_object___add(
      v33,
      5,
      (IState_T__o *)v34,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v35 = (CStateManager_T__o *)*p_mFSM;
    v36 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateSecretTreasureDevice_TypeInfo);
    System_Object___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_30;
    CStateManager_object___add(
      v35,
      6,
      (IState_T__o *)v36,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    v37 = (CStateManager_T__o *)*p_mFSM;
    v38 = (Il2CppObject *)sub_1B7640C(ServantRewardAction_StateEnd_TypeInfo);
    System_Object___ctor(v38, 0LL);
    if ( !v37 )
      goto LABEL_30;
    CStateManager_object___add(
      v37,
      7,
      (IState_T__o *)v38,
      (const MethodInfo_308D324 *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v39);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v42 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__Instantiate_object_(
              v42,
              (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v43, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4A28BB1 )
        {
          sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v44);
          byte_4A28BB1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v43,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v43 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v43,
                                         (const MethodInfo_2EB1C1C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v43;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v43, v45, v46);
            goto LABEL_27;
          }
        }
LABEL_30:
        sub_1B7641C(ComponentInChildren_object, v24);
      }
    }
  }
LABEL_27:
  this->fields._PresentDialogMessageId_k__BackingField = 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__init(0LL);
}


int32_t __fastcall ServantRewardAction__GetState(ServantRewardAction_o *this, const MethodInfo *method)
{
  ServantRewardAction_o *v2; // x19
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A2B3DD & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_1B761C0(&Method_CStateManager_ServantRewardAction__getState__, method);
    byte_4A2B3DD = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B7641C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall ServantRewardAction__Play(
        ServantRewardAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = 0;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_mEndAct, (int32_t)end_act, (int32_t)method, v4);
}


void __fastcall ServantRewardAction__Play_34434660(
        ServantRewardAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = is_from_treasure_box;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_mEndAct, (int32_t)end_act, (int32_t)end_act, (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetState(ServantRewardAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A2B3DE & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_ServantRewardAction__setState__, *(_QWORD *)&state);
    byte_4A2B3DE = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B7641C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_308D3B0 *)Method_CStateManager_ServantRewardAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup(
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
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x2
  int v22; // w5

  if ( (byte_4A2B3D9 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_1B761C0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A2B3D9 = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B7641C(Instance, v20);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_30FF92C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  if ( isDoEffect )
    v22 = is_svt_new | play_flag | 0x10;
  else
    v22 = is_svt_new | play_flag;
  ServantRewardAction__Setup_34432224(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    v22,
    (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  int64_t userSvtId; // x21
  const MethodInfo *v7; // x3
  int v8; // w2

  if ( !qri )
    sub_1B7641C(this, 0LL);
  userSvtId = qri->fields.userSvtId;
  if ( QuestRewardInfo__isDoGetEff(qri, 0LL) )
    v8 = play_flag | 0x10;
  else
    v8 = play_flag;
  ServantRewardAction__SetupCommandCode_34433908(this, userSvtId, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_34433884(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        bool is_svt_new,
        bool isDoEffect,
        int32_t play_flag,
        const MethodInfo *method)
{
  int v6; // w2

  if ( isDoEffect )
    v6 = is_svt_new | play_flag | 0x10;
  else
    v6 = is_svt_new | play_flag;
  ServantRewardAction__SetupCommandCode_34433908(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode_34433908(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        int32_t play_flag,
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
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *mUICharaGraph; // x23
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  __int64 v18; // x1
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Object_o *gameObject; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *ComponentInChildren_object__48599312; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *mCardParent; // x21
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x22
  System_Action_o *v37; // x23
  struct UICharaGraphTexture_o *TexturePrefab_37730684; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A2B3DC & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, user_command_code_id);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v10);
    sub_1B761C0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v11);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v12);
    sub_1B761C0(&Method_ServantRewardAction__SetupCommandCode_b__56_0__, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A2B3DC = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v15) == 7 )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      Instance = (UnityEngine_Component_o *)*p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_21;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph, 0, v21, v22);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_30FF92C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_1B76164(
          (ServantStatusBattleListViewItem_o *)&this->fields.mUserCommandCodeEntity,
          (int32_t)Entity,
          v24,
          v25);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0LL;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v26, v27);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( Instance )
        {
          ComponentInChildren_object__48599312 = UnityEngine_Component__GetComponentInChildren_object__48599312(
                                                   Instance,
                                                   (const MethodInfo_2E59110 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48599312;
          sub_1B76164(
            (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
            (int32_t)ComponentInChildren_object__48599312,
            v29,
            v30);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
          if ( Instance )
          {
            v31 = UnityEngine_Component__GetComponentInChildren_object__48599312(
                    Instance,
                    (const MethodInfo_2E59110 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v31;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v31, v32, v33);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48599312(
                                                      Instance,
                                                      (const MethodInfo_2E59110 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
              if ( Instance )
              {
                BYTE5(Instance[4].monitor) = 1;
                Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  this->fields.mIsDoneLoad = 0;
                  ServantRewardAction__SetupScreenTouchInfo(this, v34);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v37 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v37,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__56_0__,
                    0LL);
                  TexturePrefab_37730684 = CharaGraphManager__CreateTexturePrefab_37730684(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v37,
                                             0LL);
                  this->fields.mUICharaGraph = TexturePrefab_37730684;
                  sub_1B76164(
                    (ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph,
                    (int32_t)TexturePrefab_37730684,
                    v39,
                    v40);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B7641C(Instance, v18);
  }
}


int32_t __fastcall ServantRewardAction__SetupPlayFlag(
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


void __fastcall ServantRewardAction__SetupScreenTouchInfo(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_mScreenTouchInfo; // x19
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *mTouchParent; // x21
  bool v9; // w22
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  int v13; // s0
  UnityEngine_GameObject_o *v14; // x20
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A2B3D8 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A2B3D8 = 1;
  }
  p_mScreenTouchInfo = (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    mTouchParent = (UnityEngine_Object_o *)this->fields.mTouchParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality(mTouchParent, 0LL, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v9 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_19;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0LL);
      v13 = -1014726656;
      v14 = ScreeenTouchInfo;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL), !Instance) )
      {
LABEL_19:
        sub_1B7641C(transform, v7);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0LL);
      v14 = ScreeenTouchInfo;
      v13 = 0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, *(float *)&v13, 0LL);
    if ( !v14 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v14,
                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (ServantStatusBattleListViewItem_c *)Component_object;
    sub_1B76164(p_mScreenTouchInfo, (int32_t)Component_object, v16, v17);
  }
  transform = (UnityEngine_Transform_o *)p_mScreenTouchInfo->klass;
  if ( !p_mScreenTouchInfo->klass )
    goto LABEL_19;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_34432224(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
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
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *mUICharaGraph; // x26
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  void *servantGetObj; // x0
  UnityEngine_Object_o *gameObject; // x26
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *Component_object; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w8
  UnityEngine_Object_o *numText; // x21
  UILabel_o *v44; // x21
  System_String_o *v45; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v59; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t servantNum; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A2B3DB & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&servant_id);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v16);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17);
    sub_1B761C0(&int_TypeInfo, v18);
    sub_1B761C0(&LocalizationManager_TypeInfo, v19);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v20);
    sub_1B761C0(&Method_ServantRewardAction__Setup_b__52_0__, v21);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B761C0(&StringLiteral_6868/*"GACHA_EFFECT_SVT_NUM"*/, v23);
    byte_4A2B3DB = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v24) == 7) )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      servantGetObj = *p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)servantGetObj,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph, 0, v32, v33);
    }
    this->fields.mUserCommandCodeEntity = 0LL;
    this->fields.mIsCommandCode = 0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mUserCommandCodeEntity, 0, v28, v29);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)usrSvtEntity, v34, v35);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)servantGetObj,
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v37, v38);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v39 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)servantGetObj,
                (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v39;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v39, v40, v41);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 109) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
              servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_object_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v42 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v42;
                    ServantRewardAction__SetupScreenTouchInfo(this, v27);
                    servantGetObj = this->fields.numDisplayObj;
                    if ( servantGetObj )
                    {
                      servantGetObj = UnityEngine_GameObject__get_gameObject(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        0LL);
                      if ( servantGetObj )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
                        if ( this->fields.servantNum < 2 )
                          goto LABEL_38;
                        numText = (UnityEngine_Object_o *)this->fields.numText;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( !UnityEngine_Object__op_Inequality(numText, 0LL, 0LL) )
                          goto LABEL_38;
                        servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_object_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_38:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v59 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                              System_Action___ctor(
                                v59,
                                (Il2CppObject *)this,
                                Method_ServantRewardAction__Setup_b__52_0__,
                                0LL);
                              TexturePrefab = CharaGraphManager__CreateTexturePrefab(
                                                mCardParent,
                                                mServantId,
                                                mLimitCount,
                                                0,
                                                1,
                                                0,
                                                v59,
                                                0,
                                                0LL);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_1B76164(
                                (ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph,
                                (int32_t)TexturePrefab,
                                v61,
                                v62);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v44 = this->fields.numText;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6868/*"GACHA_EFFECT_SVT_NUM"*/, 0LL);
                            servantNum = this->fields.servantNum;
                            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum, v46, v47, v48);
                            servantGetObj = System_String__Format(v45, v49, 0LL);
                            if ( v44 )
                            {
                              UILabel__set_text(v44, (System_String_o *)servantGetObj, 0LL);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v50 = UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = (struct UnityEngine_Animation_o *)v50;
                                sub_1B76164(
                                  (ServantStatusBattleListViewItem_o *)&this->fields.numDisplayAnimation,
                                  (int32_t)v50,
                                  v51,
                                  v52);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v53 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)servantGetObj,
                                          (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = (struct SimpleAnimation_o *)v53;
                                  sub_1B76164(
                                    (ServantStatusBattleListViewItem_o *)&this->fields.numDisplaySimpleAnimation,
                                    (int32_t)v53,
                                    v54,
                                    v55);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_1B7641C(servantGetObj, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_34433376(
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
  int v9; // w5

  if ( isDoEffect )
    v9 = is_svt_new | play_flag | 0x10;
  else
    v9 = is_svt_new | play_flag;
  ServantRewardAction__Setup_34432224(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_34433400(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x2

  if ( (byte_4A2B3DA & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_1B761C0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A2B3DA = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B7641C(Instance, v16);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_30FF92C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_34432224(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    play_flag,
    method);
}


void __fastcall ServantRewardAction__Setup_34433688(
        ServantRewardAction_o *this,
        QuestRewardInfo_o *qri,
        int32_t play_flag,
        const MethodInfo *method)
{
  int64_t userSvtId; // x21
  int32_t limitCount; // w22
  int32_t objectId; // w23
  int32_t num; // w24
  bool isNew; // w25
  bool Eff; // w0
  const MethodInfo *v12; // [xsp+0h] [xbp-50h]

  if ( !qri )
    sub_1B7641C(this, 0LL);
  userSvtId = qri->fields.userSvtId;
  limitCount = qri->fields.limitCount;
  objectId = qri->fields.objectId;
  num = qri->fields.num;
  isNew = qri->fields.isNew;
  Eff = QuestRewardInfo__isDoGetEff(qri, 0LL);
  ServantRewardAction__Setup(this, objectId, userSvtId, limitCount, num, isNew, Eff, play_flag, v12);
}


void __fastcall ServantRewardAction__Update(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CStateManager_T__o *mFSM; // x0
  char mPlayFlag; // w8
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  float mFadeInTime; // s8
  CommonUI_o *v15; // x20
  AvalonSceneManager_c *v16; // x0
  ServantRewardAction___c_c *v17; // x0
  System_Action_o *_9__46_0; // x21
  Il2CppObject *v19; // x22
  struct ServantRewardAction___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A2B3D7 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_CStateManager_ServantRewardAction__update__, v4);
    sub_1B761C0(&CTouch_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B761C0(&Method_ServantRewardAction___c__Update_b__46_0__, v7);
    sub_1B761C0(&ServantRewardAction___c_TypeInfo, v8);
    byte_4A2B3D7 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_308D38C *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v15 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v16 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v16 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v16->static_fields->DEFAULT_FADE_TIME;
      }
      v17 = ServantRewardAction___c_TypeInfo;
      if ( !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo);
        v17 = ServantRewardAction___c_TypeInfo;
      }
      _9__46_0 = v17->static_fields->__9__46_0;
      if ( !_9__46_0 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = ServantRewardAction___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v17->static_fields->__9;
        _9__46_0 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        System_Action___ctor(_9__46_0, v19, Method_ServantRewardAction___c__Update_b__46_0__, 0LL);
        static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        static_fields->__9__46_0 = _9__46_0;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v21, v22);
      }
      if ( !v15 )
        sub_1B7641C(v17, v13);
      CommonUI__maskFadein(v15, mFadeInTime, _9__46_0, 0LL);
    }
    ServantRewardAction__SetState(this, 1, v9);
  }
}


void __fastcall ServantRewardAction___SetupCommandCode_b__56_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20

  if ( (byte_4A2B3E0 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2B3E0 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v5);
    byte_4A28BB1 = 1;
  }
  GameObjectExtensions__SetLocalScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_1B7641C(gameObject, v4);
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
  }
}


void __fastcall ServantRewardAction___Setup_b__52_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  UnityEngine_Object_o *numDisplayAnimation; // x20

  if ( (byte_4A2B3DF & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2B3DF = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v5);
    byte_4A28BB1 = 1;
  }
  GameObjectExtensions__SetLocalScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( !gameObject )
      goto LABEL_27;
    SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.mAnimation;
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
    }
  }
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)this->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplaySimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
      return;
    }
LABEL_27:
    sub_1B7641C(gameObject, v4);
  }
  numDisplayAnimation = (UnityEngine_Object_o *)this->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplayAnimation;
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)gameObject, 0LL);
  }
}


int32_t __fastcall ServantRewardAction__get_PresentDialogMessageId(
        ServantRewardAction_o *this,
        const MethodInfo *method)
{
  return this->fields._PresentDialogMessageId_k__BackingField;
}


void __fastcall ServantRewardAction__set_PresentDialogMessageId(
        ServantRewardAction_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PresentDialogMessageId_k__BackingField = value;
}


void __fastcall ServantRewardAction_StateDetail___ctor(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___begin_b__1_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  int interopData_low; // w21
  Il2CppClass *v9; // x8
  CommonUI_o *v10; // x20
  UserCommandCodeEntity_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  System_Action_o *v13; // x23
  UserServantEntity_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  System_Action_o *v16; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_4A2B3ED & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_ServantRewardAction_StateDetail_detailEnd__, v5);
    this = (ServantRewardAction_StateDetail_o *)sub_1B761C0(&Method_ServantRewardAction_StateDetail_detailOpen__, v6);
    byte_4A2B3ED = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_10;
  interopData_low = LOBYTE(klass->_1.interopData);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = v2[1].klass;
  if ( !v9 )
    goto LABEL_10;
  v10 = (CommonUI_o *)this;
  if ( interopData_low )
  {
    v11 = (UserCommandCodeEntity_o *)v9->_1.klass;
    v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v12, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0LL);
    v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v13, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
    if ( v10 )
    {
      CommonUI__OpenServantStatusDialog_30431696(v10, 6, v11, v12, v13, 0LL);
      return;
    }
LABEL_10:
    sub_1B7641C(this, method);
  }
  v14 = *(UserServantEntity_o **)&v9->_2.thread_static_fields_offset;
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v15, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0LL);
  v16 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v16, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
  if ( !v10 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30428604(v10, 6, v14, v15, v16, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A2B3EE & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, v5);
    byte_4A2B3EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0LL);
  if ( !v8 )
    sub_1B7641C(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A2B3F0 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A2B3F0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_1B7641C(Instance, v4);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, v5);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A2B3EF & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A2B3EF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_1B7641C(Instance, v4);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, v5);
}


void __fastcall ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct ServantRewardAction_o *that; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4A2B3EA & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, servantrewardAction);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B761C0(&Method_ServantRewardAction_StateDetail__begin_b__1_0__, v8);
    byte_4A2B3EA = 1;
  }
  this->fields.that = servantrewardAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)servantrewardAction, (int32_t)method, v3);
  that = this->fields.that;
  if ( !that )
    goto LABEL_10;
  if ( (that->fields.mPlayFlag & 0x20) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_10:
    sub_1B7641C(that, v9);
  }
  ServantRewardAction__SetState(that, 7, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateDetail__detailEnd(
        ServantRewardAction_StateDetail_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  System_Action_o *v13; // x20
  Il2CppClass *v14; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_4A2B3EC & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, v6);
    this = (ServantRewardAction_StateDetail_o *)sub_1B761C0(
                                                  &Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__,
                                                  v7);
    byte_4A2B3EC = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_11;
  if ( ((__int64)klass->_1.declaringType & 1) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v12, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
      return;
    }
LABEL_11:
    sub_1B7641C(this, isDecide);
  }
  v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v13, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0LL);
  v14 = v3[1].klass;
  if ( !v14 )
    goto LABEL_11;
  EventTutorialMaster__CheckTutorial(-1, 11, v13, (int32_t)v14->_1.castClass, 0, 0, 0, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__detailOpen(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4A2B3EB & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A2B3EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1B7641C(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__end(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateDetail__update(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateEnd___ctor(ServantRewardAction_StateEnd_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateEnd__begin(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x21
  Il2CppObject *v15; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4A2B3F3 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, that);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B761C0(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1B761C0(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, v8);
    byte_4A2B3F3 = 1;
  }
  v9 = sub_1B7640C(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = that;
  v14 = v9 + 16;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)that, v12, v13);
  if ( !*(_QWORD *)(v9 + 16) )
    goto LABEL_13;
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 16) + 80LL) & 4) == 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( *(_QWORD *)v14 )
      {
        ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v14 + 96LL), 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B7641C(Instance, v11);
  }
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
    goto LABEL_13;
  CommonUI__maskFadeout((CommonUI_o *)v15, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall ServantRewardAction_StateEnd__end(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateEnd__update(
        ServantRewardAction_StateEnd_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1B7641C(this, 0LL);
  ServantRewardAction__SetState(that, 0, method);
}


void __fastcall ServantRewardAction_StateEnd___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateEnd___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateEnd___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateEnd___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantRewardAction_o *that; // x8

  if ( (byte_4A2B3F4 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A2B3F4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL), (that = this->fields.that) == 0LL) )
  {
    sub_1B7641C(Instance, v4);
  }
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall ServantRewardAction_StateNone___ctor(ServantRewardAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateNone__begin(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNone__end(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNone__update(
        ServantRewardAction_StateNone_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNumDisplay___ctor(
        ServantRewardAction_StateNumDisplay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateNumDisplay__begin(
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
  int32_t v15; // w1
  ServantStatusBattleListViewItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v18; // x21
  System_String_o *v19; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_AnimationState_o *v22; // x0

  v4 = this;
  if ( (byte_4A2B3E3 & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, that);
    byte_4A2B3E3 = 1;
  }
  if ( !that )
    goto LABEL_27;
  this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayObj;
  v5 = 216LL;
  if ( that->fields.servantNum >= 10 )
    v5 = 224LL;
  if ( !this )
    goto LABEL_27;
  v6 = *(UnityEngine_AnimationClip_o **)((char *)&that->klass + v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplaySimpleAnimation;
    if ( this )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)this, v6, 0LL);
      v8 = that->fields.numDisplaySimpleAnimation;
      if ( v8 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)v8[1].monitor;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_63672732(v8, name, 0LL);
          v10 = that->fields.numDisplaySimpleAnimation;
          if ( v10 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)v10[1].monitor;
            if ( this )
            {
              v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              Item = SimpleAnimation__get_Item(v10, v11, 0LL);
              v15 = (int)Item;
              v4->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mSimpleAnimState;
LABEL_25:
              sub_1B76164(p_mSimpleAnimState, v15, v13, v14);
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
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayAnimation;
    if ( this )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)this, v6, 0LL);
      v18 = that->fields.numDisplayAnimation;
      if ( v18 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.numDisplayAnimation,
                                                          0LL);
        if ( this )
        {
          v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_69032500(v18, v19, 0LL);
          v20 = that->fields.numDisplayAnimation;
          if ( v20 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(v20, 0LL);
            if ( this )
            {
              v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              v22 = UnityEngine_Animation__get_Item(v20, v21, 0LL);
              v15 = (int)v22;
              v4->fields.mAnimState = v22;
              p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1B7641C(this, that);
  }
}


void __fastcall ServantRewardAction_StateNumDisplay__end(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateNumDisplay__update(
        ServantRewardAction_StateNumDisplay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateNumDisplay_o *v4; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v10; // x20
  System_String_o *v11; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  struct SimpleAnimation_o *v13; // x20
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0

  v4 = this;
  if ( (byte_4A2B3E4 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, that);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    byte_4A2B3E4 = 1;
  }
  if ( !that )
    goto LABEL_40;
  if ( that->fields.isSkip )
    goto LABEL_8;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
LABEL_8:
    this = (ServantRewardAction_StateNumDisplay_o *)v4->fields.mAnimState;
    if ( !this )
      goto LABEL_40;
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = that->fields.mSimpleAnimation;
    if ( !v7 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_40;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v7, name, 0LL) )
      goto LABEL_24;
LABEL_23:
    that->fields.isPlayFinish = 1;
    goto LABEL_24;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = that->fields.mAnimation;
    if ( !v10 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_40;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( !UnityEngine_Animation__IsPlaying(v10, v11, 0LL) )
      goto LABEL_23;
  }
LABEL_24:
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = that->fields.numDisplaySimpleAnimation;
    if ( v13 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)v13[1].monitor;
      if ( this )
      {
        v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( SimpleAnimation__IsPlaying(v13, v14, 0LL) )
          return;
LABEL_37:
        if ( that->fields.isPlayFinish )
          ServantRewardAction__SetState(that, 3, v15);
        return;
      }
    }
    goto LABEL_40;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = that->fields.numDisplayAnimation;
    if ( v17 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                        that->fields.numDisplayAnimation,
                                                        0LL);
      if ( this )
      {
        v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v17, v18, 0LL) )
          return;
        goto LABEL_37;
      }
    }
LABEL_40:
    sub_1B7641C(this, that);
  }
}


void __fastcall ServantRewardAction_StatePlay___ctor(ServantRewardAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StatePlay__begin(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x21
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
  int32_t v20; // w1
  ServantStatusBattleListViewItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x20
  System_String_o *v26; // x0
  struct UnityEngine_AnimationState_o *v27; // x0

  if ( (byte_4A2B3E1 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, that);
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    byte_4A2B3E1 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !that )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !byte_4A28BB6 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4A28BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)that->fields.mSimpleAnimation;
    if ( Instance )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)Instance, mAnimCommandCodeNew, 0LL);
      v13 = that->fields.mSimpleAnimation;
      if ( v13 )
      {
        Instance = (MissionNotifyManager_o *)v13[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          Instance = (MissionNotifyManager_o *)SimpleAnimation__Play_63672732(v13, name, 0LL);
          v15 = that->fields.mSimpleAnimation;
          if ( v15 )
          {
            Instance = (MissionNotifyManager_o *)v15[1].monitor;
            if ( Instance )
            {
              v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
              Item = SimpleAnimation__get_Item(v15, v16, 0LL);
              v20 = (int)Item;
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimState;
LABEL_33:
              sub_1B76164(p_mSimpleAnimState, v20, v18, v19);
              return;
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)that->fields.mAnimation;
    if ( Instance )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)Instance, mAnimCommandCodeNew, 0LL);
      v23 = that->fields.mAnimation;
      if ( v23 )
      {
        Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
        if ( Instance )
        {
          v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          Instance = (MissionNotifyManager_o *)UnityEngine_Animation__Play_69032500(v23, v24, 0LL);
          v25 = that->fields.mAnimation;
          if ( v25 )
          {
            Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v25, 0LL);
            if ( Instance )
            {
              v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
              v27 = UnityEngine_Animation__get_Item(v25, v26, 0LL);
              v20 = (int)v27;
              this->fields.mAnimState = v27;
              p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&this->fields;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1B7641C(Instance, v7);
  }
}


void __fastcall ServantRewardAction_StatePlay__end(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StatePlay__update(
        ServantRewardAction_StatePlay_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_AnimationState_o *isTouchPush; // x0
  const MethodInfo *v7; // x1
  float totalTime; // s8
  const MethodInfo *v9; // x2
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v12; // x20
  System_String_o *name; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0
  int32_t v18; // w1

  if ( (byte_4A2B3E2 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, that);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    byte_4A2B3E2 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( !that )
      goto LABEL_33;
    that->fields.isSkip = 1;
    isTouchPush = this->fields.mAnimState;
    if ( !isTouchPush )
      goto LABEL_33;
    UnityEngine_AnimationState__set_normalizedTime(isTouchPush, 1.0, 0LL);
  }
  totalTime = this->fields.totalTime;
  this->fields.totalTime = totalTime + RealTime__get_deltaTime(0LL);
  if ( !that )
    goto LABEL_33;
  if ( ServantRewardAction__GetState(that, v7) == 1 && that->fields.isDispNum )
  {
    numPlayStartSec = that->fields.numPlayStartSec;
    if ( numPlayStartSec != 0.0 && numPlayStartSec <= this->fields.totalTime )
      ServantRewardAction__SetState(that, 2, v9);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v12 = that->fields.mSimpleAnimation;
    if ( v12 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)v12[1].monitor;
      if ( isTouchPush )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( SimpleAnimation__IsPlaying(v12, name, 0LL) )
          return;
LABEL_29:
        if ( that->fields.isDispNum )
          v18 = 2;
        else
          v18 = 3;
        ServantRewardAction__SetState(that, v18, v14);
        return;
      }
    }
    goto LABEL_33;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v16 = that->fields.mAnimation;
    if ( v16 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( isTouchPush )
      {
        v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v16, v17, 0LL) )
          return;
        goto LABEL_29;
      }
    }
LABEL_33:
    sub_1B7641C(isTouchPush, v7);
  }
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___ctor(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice__begin(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4A2B3F1 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, that);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__, v6);
    sub_1B761C0(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, v7);
    byte_4A2B3F1 = 1;
  }
  v8 = sub_1B7640C(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = that;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)that, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v8,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v15 )
LABEL_8:
    sub_1B7641C(v9, v10);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice__end(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice__update(
        ServantRewardAction_StateSecretTreasureDevice_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A2B3F2 & 1) == 0 )
  {
    sub_1B761C0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B761C0(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__, v4);
    byte_4A2B3F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v10 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B7640C(CombineResultEffectComponent_ClickDelegate_TypeInfo);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !v10 )
LABEL_8:
    sub_1B7641C(Instance, v6);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v10, mServantId, _9__1, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B7641C(0LL, isDecide);
  ServantRewardAction__SetState(that, 5, method);
}


void __fastcall ServantRewardAction_StateTalk___ctor(ServantRewardAction_StateTalk_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateTalk__begin(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x19
  __int64 v18; // x8
  __int64 v19; // d0
  char v20; // w9
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v22; // x22
  int32_t v23; // w1
  ServantVoiceEntity_o *v24; // x0
  ServantVoiceEntity_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *SummonScriptId; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int v31; // w22
  System_Action_o *v32; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A2B3E8 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, rewardAction);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantVoiceMaster___, v6);
    sub_1B761C0(&DataManager_TypeInfo, v7);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B761C0(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__, v10);
    sub_1B761C0(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, v11);
    byte_4A2B3E8 = 1;
  }
  entity = 0LL;
  v12 = sub_1B7640C(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_31;
  *(_QWORD *)(v12 + 16) = rewardAction;
  v17 = v12 + 16;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)rewardAction, v15, v16);
  v18 = *(_QWORD *)(v12 + 16);
  if ( !v18 )
    goto LABEL_31;
  v19 = *(_QWORD *)(v18 + 72);
  *(_QWORD *)(v12 + 24) = v19;
  v20 = *(_DWORD *)(v18 + 80);
  *(_BYTE *)(v12 + 33) = v20 & 1;
  *(_BYTE *)(v12 + 32) = (v20 & 8) != 0;
  *(_BYTE *)(v12 + 34) = (v20 & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v19, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !*(_QWORD *)v17 )
    goto LABEL_31;
  v22 = (ServantVoiceMaster_o *)Instance;
  Instance = *(DataManager_o **)(*(_QWORD *)v17 + 264LL);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  if ( !v22 )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v23 = 4;
  else
    v23 = 3;
  v24 = ServantVoiceMaster__getEntity(v22, v23, SvtVoiceId, *(_DWORD *)(v12 + 28), 0LL);
  *(_QWORD *)(v12 + 40) = 0LL;
  v25 = v24;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 40), 0, v26, v27);
  if ( v25 )
  {
    SummonScriptId = ServantVoiceEntity__GetSummonScriptId(v25, SvtVoiceId, 0LL);
    *(_QWORD *)(v12 + 40) = SummonScriptId;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)SummonScriptId, v29, v30);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         *(_DWORD *)(v12 + 24),
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  *(_DWORD *)(v12 + 24),
                                  0LL);
    if ( !entity )
      goto LABEL_31;
    v31 = (Instance != 0LL) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v31 = 0;
  }
  v32 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v12,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( v31 )
  {
    if ( *(_QWORD *)v17 )
    {
      Instance = *(DataManager_o **)(*(_QWORD *)v17 + 256LL);
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v32, 0LL);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1B7641C(Instance, v14);
  }
  ActionExtensions__Call(v32, 0LL);
LABEL_29:
  if ( !*(_QWORD *)v17 )
    goto LABEL_31;
  *(_DWORD *)(*(_QWORD *)v17 + 272LL) = 0;
}


void __fastcall ServantRewardAction_StateTalk__end(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateTalk__update(
        ServantRewardAction_StateTalk_o *this,
        ServantRewardAction_o *rewardAction,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction_StateTalk___c__DisplayClass0_0___begin_b__0(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  System_Action_o *_9__1; // x24
  ScriptManager_o *v10; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A2B3E9 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v3);
    sub_1B761C0(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__, v4);
    byte_4A2B3E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v10 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v10 )
LABEL_8:
    sub_1B7641C(Instance, v6);
  ScriptManager__PlayGacha_41243244(
    v10,
    userSvtEntity,
    svtId,
    limitCount,
    isEventSvtGet,
    checkQuestOpen,
    _9__1,
    this->fields.isEventJoinSkip,
    rewardAction->fields._PresentDialogMessageId_k__BackingField,
    this->fields.summonScriptId,
    0LL);
}


void __fastcall ServantRewardAction_StateTalk___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateTalk___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantRewardAction_o *rewardAction; // x0

  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    sub_1B7641C(0LL, method);
  ServantRewardAction__SetState(rewardAction, 6, v2);
}


void __fastcall ServantRewardAction_StateTouchWait___ctor(
        ServantRewardAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateTouchWait___begin_b__1_0(
        ServantRewardAction_StateTouchWait_o *this,
        bool decide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A2B3E7 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_4A2B3E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  this->fields.isWaitCloseDialog = 0;
}


void __fastcall ServantRewardAction_StateTouchWait__begin(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ServantRewardAction_StateTouchWait_o *v4; // x19
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
  __int64 v15; // x1
  System_String_o *v16; // x20
  EventServantEntity_o *EventServant_40033348; // x0
  EventServantEntity_o *v18; // x22
  System_String_o *v19; // x0
  ServantRewardAction_StateTouchWait_o *v20; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  Il2CppObject *Instance; // x22
  NotificationDialog_ClickDelegate_o *v26; // x23
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+60h] [xbp-70h] BYREF
  System_Nullable_int__o v28; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_float__o v31; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+88h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v35; // 0:x0.8
  System_Nullable_int__o p_messageWidgetSizeY; // 0:x0.8
  System_Nullable_float__o p_buttonPosY; // 0:x0.8
  System_Nullable_int__o v38; // 0:x0.8
  System_Nullable_int__o p_buttonWidgetSizeY; // 0:x0.8

  v4 = this;
  if ( (byte_4A2B3E5 & 1) == 0 )
  {
    sub_1B761C0(&NotificationDialog_ClickDelegate_TypeInfo, that);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B761C0(&LocalizationManager_TypeInfo, v7);
    sub_1B761C0(&Method_System_Nullable_int___ctor__, v8);
    sub_1B761C0(&Method_System_Nullable_float___ctor__, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B761C0(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__, v12);
    sub_1B761C0(&StringLiteral_12368/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, v13);
    sub_1B761C0(&StringLiteral_1/*""*/, v14);
    this = (ServantRewardAction_StateTouchWait_o *)sub_1B761C0(&StringLiteral_12367/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, v15);
    byte_4A2B3E5 = 1;
  }
  entity = 0LL;
  v4->fields.isWaitCloseDialog = 0;
  if ( !that )
    goto LABEL_26;
  this = (ServantRewardAction_StateTouchWait_o *)that->fields.mScreenTouchInfo;
  if ( !this )
    goto LABEL_26;
  this = (ServantRewardAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( that->fields.mSvtType == 12 && (that->fields.mPlayFlag & 0x10) != 0 )
  {
    this = (ServantRewardAction_StateTouchWait_o *)that->fields.userSvtEntity;
    if ( !this )
      goto LABEL_26;
    v16 = (System_String_o *)StringLiteral_1/*""*/;
    EventServant_40033348 = UserServantEntity__getEventServant_40033348((UserServantEntity_o *)this, 1, 0LL);
    if ( EventServant_40033348
      && (v18 = EventServant_40033348,
          v19 = EventServantEntity__GetGetMessage(EventServant_40033348, 0LL),
          !System_String__IsNullOrEmpty(v19, 0LL)) )
    {
      Message = EventServantEntity__GetGetMessage(v18, 0LL);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_26;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_26;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_30FF7D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_20;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12367/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/,
                                                       0LL);
      if ( !entity )
        goto LABEL_26;
      v20 = this;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0LL);
      Message = System_String__Format((System_String_o *)v20, Name, 0LL);
    }
    v16 = Message;
LABEL_20:
    if ( System_String__IsNullOrEmpty(v16, 0LL) )
      return;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12368/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0LL);
    v4->fields.isWaitCloseDialog = 1;
    v24 = v23;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (NotificationDialog_ClickDelegate_o *)sub_1B7640C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v26,
      (Il2CppObject *)v4,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0LL);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0LL;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
    v35 = (System_Nullable_float__o)&v31;
    v31 = 0LL;
    System_Nullable_float____ctor(v35, 8.0, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_35F42F0 *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0LL;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
    v38 = (System_Nullable_int__o)&v28;
    v28 = 0LL;
    System_Nullable_int____ctor(v38, 217, (const MethodInfo_35F42F0 *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_35F42F0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30421532(
        (CommonUI_o *)Instance,
        v24,
        v16,
        v26,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v31,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v28,
        buttonWidgetSizeY,
        0LL);
      return;
    }
LABEL_26:
    sub_1B7641C(this, that);
  }
}


void __fastcall ServantRewardAction_StateTouchWait__end(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantRewardAction_StateTouchWait__update(
        ServantRewardAction_StateTouchWait_o *this,
        ServantRewardAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  int32_t mSvtType; // w8

  if ( (byte_4A2B3E6 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, that);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantVoiceMaster___, v5);
    sub_1B761C0(&DataManager_TypeInfo, v6);
    byte_4A2B3E6 = 1;
  }
  if ( !this->fields.isWaitCloseDialog )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0LL);
    if ( ((unsigned __int8)isTouchPush & 1) != 0 )
    {
      if ( that )
      {
        isTouchPush = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo;
        if ( isTouchPush )
        {
          isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0LL);
          if ( isTouchPush )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
            if ( that->fields.mIsCommandCode )
            {
LABEL_11:
              v10 = 5;
LABEL_12:
              ServantRewardAction__SetState(that, v10, v9);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v10 = 7;
                goto LABEL_12;
              }
              if ( (that->fields.mPlayFlag & 0x10) == 0 )
                goto LABEL_11;
              goto LABEL_22;
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0LL) )
                goto LABEL_11;
LABEL_22:
              v10 = 4;
              goto LABEL_12;
            }
          }
        }
      }
      sub_1B7641C(isTouchPush, v8);
    }
  }
}


void __fastcall ServantRewardAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2B3F5 & 1) == 0 )
  {
    sub_1B761C0(&ServantRewardAction___c_TypeInfo, v1);
    byte_4A2B3F5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(ServantRewardAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantRewardAction___c_TypeInfo->static_fields->__9 = (struct ServantRewardAction___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)ServantRewardAction___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction___c___Update_b__46_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}
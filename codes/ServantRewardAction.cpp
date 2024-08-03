void __fastcall ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v17; // x1
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_T__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x22
  CStateManager_T__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x22
  CStateManager_T__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppObject *v42; // x22
  CStateManager_T__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  ServantRewardAction_StateDetail_o *v46; // x22
  CStateManager_T__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  ServantRewardAction_StateSecretTreasureDevice_o *v50; // x22
  CStateManager_T__o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  ServantRewardAction_StateEnd_o *v54; // x21
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v58; // x21
  Il2CppObject *v59; // x21
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3

  if ( (byte_49F98D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_ServantRewardAction___ctor__, method);
    sub_1B640C8(&Method_CStateManager_ServantRewardAction__add__, v4);
    sub_1B640C8(&CStateManager_ServantRewardAction__TypeInfo, v5);
    sub_1B640C8(&CTouch_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&ServantRewardAction_StateDetail_TypeInfo, v10);
    sub_1B640C8(&ServantRewardAction_StateEnd_TypeInfo, v11);
    sub_1B640C8(&ServantRewardAction_StateNone_TypeInfo, v12);
    sub_1B640C8(&ServantRewardAction_StateNumDisplay_TypeInfo, v13);
    sub_1B640C8(&ServantRewardAction_StatePlay_TypeInfo, v14);
    sub_1B640C8(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo, v15);
    sub_1B640C8(&ServantRewardAction_StateTalk_TypeInfo, v16);
    sub_1B640C8(&ServantRewardAction_StateTouchWait_TypeInfo, v17);
    byte_49F98D3 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v19 = (CStateManager_T__o *)sub_1B64314(CStateManager_ServantRewardAction__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v19,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_30612BC *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v19, v20, v21);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v25 = (Il2CppObject *)sub_1B64314(ServantRewardAction_StateNone_TypeInfo, v23, v24);
    System_Object___ctor(v25, 0LL);
    if ( !mFSM )
      goto LABEL_30;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v25,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v27 = (CStateManager_T__o *)*p_mFSM;
    v30 = (Il2CppObject *)sub_1B64314(ServantRewardAction_StatePlay_TypeInfo, v28, v29);
    System_Object___ctor(v30, 0LL);
    if ( !v27 )
      goto LABEL_30;
    CStateManager_object___add(
      v27,
      1,
      (IState_T__o *)v30,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v31 = (CStateManager_T__o *)*p_mFSM;
    v34 = (Il2CppObject *)sub_1B64314(ServantRewardAction_StateNumDisplay_TypeInfo, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v31 )
      goto LABEL_30;
    CStateManager_object___add(
      v31,
      2,
      (IState_T__o *)v34,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v35 = (CStateManager_T__o *)*p_mFSM;
    v38 = (Il2CppObject *)sub_1B64314(ServantRewardAction_StateTouchWait_TypeInfo, v36, v37);
    System_Object___ctor(v38, 0LL);
    if ( !v35 )
      goto LABEL_30;
    CStateManager_object___add(
      v35,
      3,
      (IState_T__o *)v38,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v39 = (CStateManager_T__o *)*p_mFSM;
    v42 = (Il2CppObject *)sub_1B64314(ServantRewardAction_StateTalk_TypeInfo, v40, v41);
    System_Object___ctor(v42, 0LL);
    if ( !v39 )
      goto LABEL_30;
    CStateManager_object___add(
      v39,
      4,
      (IState_T__o *)v42,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v43 = (CStateManager_T__o *)*p_mFSM;
    v46 = (ServantRewardAction_StateDetail_o *)sub_1B64314(ServantRewardAction_StateDetail_TypeInfo, v44, v45);
    ServantRewardAction_StateDetail___ctor(v46, 0LL);
    if ( !v43 )
      goto LABEL_30;
    CStateManager_object___add(
      v43,
      5,
      (IState_T__o *)v46,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v47 = (CStateManager_T__o *)*p_mFSM;
    v50 = (ServantRewardAction_StateSecretTreasureDevice_o *)sub_1B64314(
                                                               ServantRewardAction_StateSecretTreasureDevice_TypeInfo,
                                                               v48,
                                                               v49);
    ServantRewardAction_StateSecretTreasureDevice___ctor(v50, 0LL);
    if ( !v47 )
      goto LABEL_30;
    CStateManager_object___add(
      v47,
      6,
      (IState_T__o *)v50,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    v51 = (CStateManager_T__o *)*p_mFSM;
    v54 = (ServantRewardAction_StateEnd_o *)sub_1B64314(ServantRewardAction_StateEnd_TypeInfo, v52, v53);
    ServantRewardAction_StateEnd___ctor(v54, 0LL);
    if ( !v51 )
      goto LABEL_30;
    CStateManager_object___add(
      v51,
      7,
      (IState_T__o *)v54,
      (const MethodInfo_3061364 *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v55);
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
      v58 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v59 = UnityEngine_Object__Instantiate_object_(
              v58,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v59, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v59, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v60);
          byte_49F7111 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v59,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v59 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v59,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v59;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v59, v61, v62);
            goto LABEL_27;
          }
        }
LABEL_30:
        sub_1B64324(ComponentInChildren_object);
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
  if ( (byte_49F98DA & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_1B640C8(&Method_CStateManager_ServantRewardAction__getState__, method);
    byte_49F98DA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mEndAct, (int32_t)end_act, (int32_t)method, v4);
}


void __fastcall ServantRewardAction__Play_34311172(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mEndAct, (int32_t)end_act, (int32_t)end_act, (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetState(ServantRewardAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F98DB & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_ServantRewardAction__setState__, *(_QWORD *)&state);
    byte_49F98DB = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_ServantRewardAction__setState__);
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
  Il2CppObject *Entity; // x2
  int v21; // w5

  if ( (byte_49F98D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_49F98D6 = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  if ( isDoEffect )
    v21 = is_svt_new | play_flag | 0x10;
  else
    v21 = is_svt_new | play_flag;
  ServantRewardAction__Setup_34308736(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    v21,
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
    sub_1B64324(this);
  userSvtId = qri->fields.userSvtId;
  if ( QuestRewardInfo__isDoGetEff(qri, 0LL) )
    v8 = play_flag | 0x10;
  else
    v8 = play_flag;
  ServantRewardAction__SetupCommandCode_34310420(this, userSvtId, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_34310396(
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
  ServantRewardAction__SetupCommandCode_34310420(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


void __fastcall ServantRewardAction__SetupCommandCode_34310420(
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
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Object_o *gameObject; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Entity; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *mCardParent; // x21
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x23
  struct UICharaGraphTexture_o *TexturePrefab_37595888; // x0
  int32_t v40; // w2
  int32_t v41; // w3

  if ( (byte_49F98D9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, user_command_code_id);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v8);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_ServantRewardAction__SetupCommandCode_b__56_0__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F98D9 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph, 0, v20, v21);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.mUserCommandCodeEntity,
          (int32_t)Entity,
          v23,
          v24);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, 0, v25, v26);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( Instance )
        {
          ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                   Instance,
                                                   (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48431348;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.mAnimation,
            (int32_t)ComponentInChildren_object__48431348,
            v28,
            v29);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
          if ( Instance )
          {
            v30 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                    Instance,
                    (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v30;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v30, v31, v32);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                      Instance,
                                                      (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
                  ServantRewardAction__SetupScreenTouchInfo(this, v33);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
                  System_Action___ctor(
                    v38,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__56_0__,
                    0LL);
                  TexturePrefab_37595888 = CharaGraphManager__CreateTexturePrefab_37595888(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v38,
                                             0LL);
                  this->fields.mUICharaGraph = TexturePrefab_37595888;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph,
                    (int32_t)TexturePrefab_37595888,
                    v40,
                    v41);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B64324(Instance);
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
  UnityEngine_Object_o *mTouchParent; // x21
  bool v8; // w22
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  int v12; // s0
  UnityEngine_GameObject_o *v13; // x20
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49F98D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49F98D5 = 1;
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
    v8 = UnityEngine_Object__op_Equality(mTouchParent, 0LL, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v8 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_19;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0LL);
      v12 = -1014726656;
      v13 = ScreeenTouchInfo;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL), !Instance) )
      {
LABEL_19:
        sub_1B64324(transform);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0LL);
      v13 = ScreeenTouchInfo;
      v12 = 0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, *(float *)&v12, 0LL);
    if ( !v13 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v13,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (ServantStatusBattleListViewItem_c *)Component_object;
    sub_1B6406C(p_mScreenTouchInfo, (int32_t)Component_object, v15, v16);
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
void __fastcall ServantRewardAction__Setup_34308736(
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
  int32_t v27; // w2
  int32_t v28; // w3
  void *servantGetObj; // x0
  UnityEngine_Object_o *gameObject; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  const MethodInfo *v41; // x1
  int32_t v42; // w8
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *numText; // x21
  UILabel_o *v46; // x21
  System_String_o *v47; // x22
  Il2CppObject *v48; // x0
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v58; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t servantNum; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49F98D8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&servant_id);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v16);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&Method_ServantRewardAction__Setup_b__52_0__, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&StringLiteral_6841/*"GACHA_EFFECT_SVT_NUM"*/, v23);
    byte_49F98D8 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph, 0, v31, v32);
    }
    this->fields.mUserCommandCodeEntity = 0LL;
    this->fields.mIsCommandCode = 0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mUserCommandCodeEntity, 0, v27, v28);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtEntity, (int32_t)usrSvtEntity, v33, v34);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)servantGetObj,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v36, v37);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v38 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)servantGetObj,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v38;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation, (int32_t)v38, v39, v40);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 109) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
              servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_object_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v42 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v42;
                    ServantRewardAction__SetupScreenTouchInfo(this, v41);
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
                        servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_object_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_38:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v58 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
                              System_Action___ctor(
                                v58,
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
                                                v58,
                                                0,
                                                0LL);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_1B6406C(
                                (ServantStatusBattleListViewItem_o *)&this->fields.mUICharaGraph,
                                (int32_t)TexturePrefab,
                                v60,
                                v61);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v46 = this->fields.numText;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_6841/*"GACHA_EFFECT_SVT_NUM"*/, 0LL);
                            servantNum = this->fields.servantNum;
                            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum);
                            servantGetObj = System_String__Format(v47, v48, 0LL);
                            if ( v46 )
                            {
                              UILabel__set_text(v46, (System_String_o *)servantGetObj, 0LL);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v49 = UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = (struct UnityEngine_Animation_o *)v49;
                                sub_1B6406C(
                                  (ServantStatusBattleListViewItem_o *)&this->fields.numDisplayAnimation,
                                  (int32_t)v49,
                                  v50,
                                  v51);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v52 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)servantGetObj,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = (struct SimpleAnimation_o *)v52;
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)&this->fields.numDisplaySimpleAnimation,
                                    (int32_t)v52,
                                    v53,
                                    v54);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_1B64324(servantGetObj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_34309888(
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
  ServantRewardAction__Setup_34308736(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_34309912(
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
  Il2CppObject *Entity; // x2

  if ( (byte_49F98D7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49F98D7 = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_34308736(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    play_flag,
    method);
}


void __fastcall ServantRewardAction__Setup_34310200(
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
    sub_1B64324(this);
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
  __int64 v14; // x2
  float mFadeInTime; // s8
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x0
  ServantRewardAction___c_c *v18; // x0
  System_Action_o *_9__46_0; // x21
  Il2CppObject *v20; // x22
  struct ServantRewardAction___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49F98D4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_CStateManager_ServantRewardAction__update__, v4);
    sub_1B640C8(&CTouch_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_ServantRewardAction___c__Update_b__46_0__, v7);
    sub_1B640C8(&ServantRewardAction___c_TypeInfo, v8);
    byte_49F98D4 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30613CC *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v16 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v17 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v17 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v17->static_fields->DEFAULT_FADE_TIME;
      }
      v18 = ServantRewardAction___c_TypeInfo;
      if ( !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo);
        v18 = ServantRewardAction___c_TypeInfo;
      }
      _9__46_0 = v18->static_fields->__9__46_0;
      if ( !_9__46_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = ServantRewardAction___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__46_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
        System_Action___ctor(_9__46_0, v20, Method_ServantRewardAction___c__Update_b__46_0__, 0LL);
        static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        static_fields->__9__46_0 = _9__46_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v22, v23);
      }
      if ( !v16 )
        sub_1B64324(v18);
      CommonUI__maskFadein(v16, mFadeInTime, _9__46_0, 0LL);
    }
    ServantRewardAction__SetState(this, 1, v9);
  }
}


void __fastcall ServantRewardAction___SetupCommandCode_b__56_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20

  if ( (byte_49F98DD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F98DD = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F7111 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
    sub_1B64324(gameObject);
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
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  UnityEngine_Object_o *numDisplayAnimation; // x20

  if ( (byte_49F98DC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F98DC = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F7111 = 1;
  }
  GameObjectExtensions__SetLocalScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
    sub_1B64324(gameObject);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppClass *v11; // x8
  CommonUI_o *v12; // x20
  UserCommandCodeEntity_o *v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x23
  UserServantEntity_o *v18; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x23

  v2 = (Il2CppObject *)this;
  if ( (byte_49F98F2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_ServantRewardAction_StateDetail_detailEnd__, v5);
    this = (ServantRewardAction_StateDetail_o *)sub_1B640C8(&Method_ServantRewardAction_StateDetail_detailOpen__, v6);
    byte_49F98F2 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_10;
  interopData_low = LOBYTE(klass->_1.interopData);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = v2[1].klass;
  if ( !v11 )
    goto LABEL_10;
  v12 = (CommonUI_o *)this;
  if ( interopData_low )
  {
    v13 = (UserCommandCodeEntity_o *)v11->_1.klass;
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
    ServantStatusDialog_EndDelegate___ctor(v14, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0LL);
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v17, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
    if ( v12 )
    {
      CommonUI__OpenServantStatusDialog_30357696(v12, 6, v13, v14, v17, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(this);
  }
  v18 = *(UserServantEntity_o **)&v11->_2.thread_static_fields_offset;
  v19 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
  ServantStatusDialog_EndDelegate___ctor(v19, v2, Method_ServantRewardAction_StateDetail_detailEnd__, 0LL);
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(v22, v2, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
  if ( !v12 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30354604(v12, 6, v18, v19, v22, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_49F98F3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, v5);
    byte_49F98F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0LL);
  if ( !v10 )
    sub_1B64324(v13);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_49F98F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F98F5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_49F98F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F98F4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
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
  struct ServantRewardAction_o *that; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_49F98EF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, servantrewardAction);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_ServantRewardAction_StateDetail__begin_b__1_0__, v8);
    byte_49F98EF = 1;
  }
  this->fields.that = servantrewardAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)servantrewardAction, (int32_t)method, v3);
  that = this->fields.that;
  if ( !that )
    goto LABEL_10;
  if ( (that->fields.mPlayFlag & 0x20) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(that);
  }
  ServantRewardAction__SetState(that, 7, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  System_Action_o *v15; // x20
  Il2CppClass *v16; // x8

  v3 = (Il2CppObject *)this;
  if ( (byte_49F98F1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, v6);
    this = (ServantRewardAction_StateDetail_o *)sub_1B640C8(
                                                  &Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__,
                                                  v7);
    byte_49F98F1 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_11;
  if ( ((__int64)klass->_1.declaringType & 1) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v14, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(this);
  }
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v15, v3, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0LL);
  v16 = v3[1].klass;
  if ( !v16 )
    goto LABEL_11;
  EventTutorialMaster__CheckTutorial(-1, 11, v15, (int32_t)v16->_1.castClass, 0, 0, 0, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__detailOpen(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x19

  if ( (byte_49F98F0 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_49F98F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1B64324(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_49F98F8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B640C8(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__, v7);
    sub_1B640C8(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, v8);
    byte_49F98F8 = 1;
  }
  v9 = sub_1B64314(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = that;
  v13 = v9 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)that, v11, v12);
  if ( !*(_QWORD *)(v9 + 16) )
    goto LABEL_13;
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 16) + 80LL) & 4) == 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( *(_QWORD *)v13 )
      {
        ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v13 + 96LL), 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B64324(Instance);
  }
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v16 )
    goto LABEL_13;
  CommonUI__maskFadeout((CommonUI_o *)v16, 1, DEFAULT_FADE_TIME, v19, 0LL);
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
    sub_1B64324(this);
  ServantRewardAction__SetState(that, 0, 0LL);
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
  struct ServantRewardAction_o *that; // x8

  if ( (byte_49F98F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49F98F9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL), (that = this->fields.that) == 0LL) )
  {
    sub_1B64324(Instance);
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
  if ( (byte_49F98E0 & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    byte_49F98E0 = 1;
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
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_63513060(v8, name, 0LL);
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
              sub_1B6406C(p_mSimpleAnimState, v15, v13, v14);
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
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_68872828(v18, v19, 0LL);
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
    sub_1B64324(this);
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
  if ( (byte_49F98E1 & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, that);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F98E1 = 1;
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
    sub_1B64324(this);
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
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_AnimationClip_o *mAnimCommandCodeNew; // x21
  int32_t mSvtType; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x22
  struct SimpleAnimation_o *v12; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v14; // x20
  System_String_o *v15; // x0
  struct SimpleAnimation_State_o *Item; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  ServantStatusBattleListViewItem_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v22; // x21
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  struct UnityEngine_AnimationState_o *v26; // x0

  if ( (byte_49F98DE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    byte_49F98DE = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !that )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_49F7116 = 1;
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
      v12 = that->fields.mSimpleAnimation;
      if ( v12 )
      {
        Instance = (MissionNotifyManager_o *)v12[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          Instance = (MissionNotifyManager_o *)SimpleAnimation__Play_63513060(v12, name, 0LL);
          v14 = that->fields.mSimpleAnimation;
          if ( v14 )
          {
            Instance = (MissionNotifyManager_o *)v14[1].monitor;
            if ( Instance )
            {
              v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
              Item = SimpleAnimation__get_Item(v14, v15, 0LL);
              v19 = (int)Item;
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimState;
LABEL_33:
              sub_1B6406C(p_mSimpleAnimState, v19, v17, v18);
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
      v22 = that->fields.mAnimation;
      if ( v22 )
      {
        Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
        if ( Instance )
        {
          v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          Instance = (MissionNotifyManager_o *)UnityEngine_Animation__Play_68872828(v22, v23, 0LL);
          v24 = that->fields.mAnimation;
          if ( v24 )
          {
            Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v24, 0LL);
            if ( Instance )
            {
              v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
              v26 = UnityEngine_Animation__get_Item(v24, v25, 0LL);
              v19 = (int)v26;
              this->fields.mAnimState = v26;
              p_mSimpleAnimState = (ServantStatusBattleListViewItem_o *)&this->fields;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1B64324(Instance);
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
  float totalTime; // s8
  const MethodInfo *v8; // x1
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

  if ( (byte_49F98DF & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, that);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F98DF = 1;
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
  if ( ServantRewardAction__GetState(that, v8) == 1 && that->fields.isDispNum )
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
    sub_1B64324(isTouchPush);
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_49F98F6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__, v6);
    sub_1B640C8(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, v7);
    byte_49F98F6 = 1;
  }
  v8 = sub_1B64314(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)that, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v8,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1B64324(v9);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
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
  __int64 v7; // x2
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F98F7 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__, v4);
    byte_49F98F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                              CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                              v6,
                                                              v7);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v12, v13);
  }
  if ( !v11 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v11, mServantId, _9__1, 0LL);
}


void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1B64324(0LL);
  ServantRewardAction__SetState(that, 5, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // d0
  char v19; // w9
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v21; // x22
  int32_t v22; // w1
  ServantVoiceEntity_o *v23; // x0
  ServantVoiceEntity_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *SummonScriptId; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  int v32; // w22
  System_Action_o *v33; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F98E5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, rewardAction);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantVoiceMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__, v10);
    sub_1B640C8(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, v11);
    byte_49F98E5 = 1;
  }
  entity = 0LL;
  v12 = sub_1B64314(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, rewardAction, method);
  ServantRewardAction_StateTalk___c__DisplayClass0_0___ctor(
    (ServantRewardAction_StateTalk___c__DisplayClass0_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_31;
  *(_QWORD *)(v12 + 16) = rewardAction;
  v16 = v12 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)rewardAction, v14, v15);
  v17 = *(_QWORD *)(v12 + 16);
  if ( !v17 )
    goto LABEL_31;
  v18 = *(_QWORD *)(v17 + 72);
  *(_QWORD *)(v12 + 24) = v18;
  v19 = *(_DWORD *)(v17 + 80);
  *(_BYTE *)(v12 + 33) = v19 & 1;
  *(_BYTE *)(v12 + 32) = (v19 & 8) != 0;
  *(_BYTE *)(v12 + 34) = (v19 & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v18, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !*(_QWORD *)v16 )
    goto LABEL_31;
  v21 = (ServantVoiceMaster_o *)Instance;
  Instance = *(DataManager_o **)(*(_QWORD *)v16 + 264LL);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  if ( !v21 )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v22 = 4;
  else
    v22 = 3;
  v23 = ServantVoiceMaster__getEntity(v21, v22, SvtVoiceId, *(_DWORD *)(v12 + 28), 0LL);
  *(_QWORD *)(v12 + 40) = 0LL;
  v24 = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 40), 0, v25, v26);
  if ( v24 )
  {
    SummonScriptId = ServantVoiceEntity__GetSummonScriptId(v24, SvtVoiceId, 0LL);
    *(_QWORD *)(v12 + 40) = SummonScriptId;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)SummonScriptId, v28, v29);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         *(_DWORD *)(v12 + 24),
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  *(_DWORD *)(v12 + 24),
                                  0LL);
    if ( !entity )
      goto LABEL_31;
    v32 = (Instance != 0LL) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v32 = 0;
  }
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v12,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( v32 )
  {
    if ( *(_QWORD *)v16 )
    {
      Instance = *(DataManager_o **)(*(_QWORD *)v16 + 256LL);
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v33, 0LL);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1B64324(Instance);
  }
  ActionExtensions__Call(v33, 0LL);
LABEL_29:
  if ( !*(_QWORD *)v16 )
    goto LABEL_31;
  *(_DWORD *)(*(_QWORD *)v16 + 272LL) = 0;
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
  __int64 v7; // x2
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  System_Action_o *_9__1; // x24
  ScriptManager_o *v11; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49F98EE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v3);
    sub_1B640C8(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__, v4);
    byte_49F98EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v11 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v16, v17);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v11 )
LABEL_8:
    sub_1B64324(Instance);
  ScriptManager__PlayGacha_41065816(
    v11,
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
  ServantRewardAction_o *rewardAction; // x0

  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    sub_1B64324(0LL);
  ServantRewardAction__SetState(rewardAction, 6, 0LL);
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

  if ( (byte_49F98E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide);
    byte_49F98E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  EventServantEntity_o *EventServant_39884712; // x0
  EventServantEntity_o *v18; // x22
  System_String_o *v19; // x0
  ServantRewardAction_StateTouchWait_o *v20; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  Il2CppObject *Instance; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  NotificationDialog_ClickDelegate_o *v28; // x23
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+60h] [xbp-70h] BYREF
  System_Nullable_int__o v30; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_float__o v33; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+88h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v37; // 0:x0.8
  System_Nullable_int__o p_messageWidgetSizeY; // 0:x0.8
  System_Nullable_float__o p_buttonPosY; // 0:x0.8
  System_Nullable_int__o v40; // 0:x0.8
  System_Nullable_int__o p_buttonWidgetSizeY; // 0:x0.8

  v4 = this;
  if ( (byte_49F98E2 & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, that);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v8);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__, v12);
    sub_1B640C8(&StringLiteral_12317/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    this = (ServantRewardAction_StateTouchWait_o *)sub_1B640C8(&StringLiteral_12316/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, v15);
    byte_49F98E2 = 1;
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
    EventServant_39884712 = UserServantEntity__getEventServant_39884712((UserServantEntity_o *)this, 1, 0LL);
    if ( EventServant_39884712
      && (v18 = EventServant_39884712,
          v19 = EventServantEntity__GetGetMessage(EventServant_39884712, 0LL),
          !System_String__IsNullOrEmpty(v19, 0LL)) )
    {
      Message = EventServantEntity__GetGetMessage(v18, 0LL);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_26;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_26;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_20;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12316/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/,
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
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0LL);
    v4->fields.isWaitCloseDialog = 1;
    v24 = v23;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v26, v27);
    NotificationDialog_ClickDelegate___ctor(
      v28,
      (Il2CppObject *)v4,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0LL);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0LL;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    v37 = (System_Nullable_float__o)&v33;
    v33 = 0LL;
    System_Nullable_float____ctor(v37, 8.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0LL;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    v40 = (System_Nullable_int__o)&v30;
    v30 = 0LL;
    System_Nullable_int____ctor(v40, 217, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30347532(
        (CommonUI_o *)Instance,
        v24,
        v16,
        v28,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v33,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v30,
        buttonWidgetSizeY,
        0LL);
      return;
    }
LABEL_26:
    sub_1B64324(this);
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
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  int32_t mSvtType; // w8

  if ( (byte_49F98E3 & 1) == 0 )
  {
    sub_1B640C8(&CTouch_TypeInfo, that);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantVoiceMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    byte_49F98E3 = 1;
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
              v9 = 5;
LABEL_12:
              ServantRewardAction__SetState(that, v9, v8);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v9 = 7;
                goto LABEL_12;
              }
              if ( (that->fields.mPlayFlag & 0x10) == 0 )
                goto LABEL_11;
              goto LABEL_22;
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0LL) )
                goto LABEL_11;
LABEL_22:
              v9 = 4;
              goto LABEL_12;
            }
          }
        }
      }
      sub_1B64324(isTouchPush);
    }
  }
}


void __fastcall ServantRewardAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F98FA & 1) == 0 )
  {
    sub_1B640C8(&ServantRewardAction___c_TypeInfo, v1);
    byte_49F98FA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantRewardAction___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantRewardAction___c_TypeInfo->static_fields->__9 = (struct ServantRewardAction___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ServantRewardAction___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction___c___Update_b__46_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}
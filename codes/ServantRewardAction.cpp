void __fastcall ServantRewardAction___ctor(ServantRewardAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantRewardAction__Awake(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct CStateManager_ServantRewardAction__o **p_mFSM; // x20
  CStateManager_T__o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *v45; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v47; // x1
  CStateManager_T__o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *v52; // x22
  CStateManager_T__o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  Il2CppObject *v57; // x22
  CStateManager_T__o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  Il2CppObject *v62; // x22
  CStateManager_T__o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  ServantRewardAction_StateTalk_o *v67; // x22
  CStateManager_T__o *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  ServantRewardAction_StateDetail_o *v72; // x22
  CStateManager_T__o *v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  ServantRewardAction_StateSecretTreasureDevice_o *v77; // x22
  CStateManager_T__o *v78; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  ServantRewardAction_StateEnd_o *v82; // x21
  const MethodInfo *v83; // x2
  UnityEngine_Object_o *particleObj; // x21
  __int64 v85; // x1
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v87; // x21
  Il2CppObject *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7

  if ( (byte_4B1360A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_ServantRewardAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_ServantRewardAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_ServantRewardAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&CTouch_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantRewardAction_StateDetail_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantRewardAction_StateEnd_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantRewardAction_StateNone_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantRewardAction_StateNumDisplay_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantRewardAction_StatePlay_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantRewardAction_StateSecretTreasureDevice_TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantRewardAction_StateTalk_TypeInfo, v29, v30);
    sub_1BCA7E0(&ServantRewardAction_StateTouchWait_TypeInfo, v31, v32);
    byte_4B1360A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v34 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_ServantRewardAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v34,
      (Il2CppObject *)this,
      8,
      (const MethodInfo_313FBC4 *)Method_CStateManager_ServantRewardAction___ctor__);
    this->fields.mFSM = (struct CStateManager_ServantRewardAction__o *)v34;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v34, v35, v36, v37, v38, v39, v40);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v45 = (Il2CppObject *)sub_1BCAA2C(ServantRewardAction_StateNone_TypeInfo, v42, v43, v44);
    System_Object___ctor(v45, 0LL);
    if ( !mFSM )
      goto LABEL_30;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v45,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v48 = (CStateManager_T__o *)*p_mFSM;
    v52 = (Il2CppObject *)sub_1BCAA2C(ServantRewardAction_StatePlay_TypeInfo, v49, v50, v51);
    System_Object___ctor(v52, 0LL);
    if ( !v48 )
      goto LABEL_30;
    CStateManager_object___add(
      v48,
      1,
      (IState_T__o *)v52,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v53 = (CStateManager_T__o *)*p_mFSM;
    v57 = (Il2CppObject *)sub_1BCAA2C(ServantRewardAction_StateNumDisplay_TypeInfo, v54, v55, v56);
    System_Object___ctor(v57, 0LL);
    if ( !v53 )
      goto LABEL_30;
    CStateManager_object___add(
      v53,
      2,
      (IState_T__o *)v57,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v58 = (CStateManager_T__o *)*p_mFSM;
    v62 = (Il2CppObject *)sub_1BCAA2C(ServantRewardAction_StateTouchWait_TypeInfo, v59, v60, v61);
    System_Object___ctor(v62, 0LL);
    if ( !v58 )
      goto LABEL_30;
    CStateManager_object___add(
      v58,
      3,
      (IState_T__o *)v62,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v63 = (CStateManager_T__o *)*p_mFSM;
    v67 = (ServantRewardAction_StateTalk_o *)sub_1BCAA2C(ServantRewardAction_StateTalk_TypeInfo, v64, v65, v66);
    ServantRewardAction_StateTalk___ctor(v67, 0LL);
    if ( !v63 )
      goto LABEL_30;
    CStateManager_object___add(
      v63,
      4,
      (IState_T__o *)v67,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v68 = (CStateManager_T__o *)*p_mFSM;
    v72 = (ServantRewardAction_StateDetail_o *)sub_1BCAA2C(ServantRewardAction_StateDetail_TypeInfo, v69, v70, v71);
    ServantRewardAction_StateDetail___ctor(v72, 0LL);
    if ( !v68 )
      goto LABEL_30;
    CStateManager_object___add(
      v68,
      5,
      (IState_T__o *)v72,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v73 = (CStateManager_T__o *)*p_mFSM;
    v77 = (ServantRewardAction_StateSecretTreasureDevice_o *)sub_1BCAA2C(
                                                               ServantRewardAction_StateSecretTreasureDevice_TypeInfo,
                                                               v74,
                                                               v75,
                                                               v76);
    ServantRewardAction_StateSecretTreasureDevice___ctor(v77, 0LL);
    if ( !v73 )
      goto LABEL_30;
    CStateManager_object___add(
      v73,
      6,
      (IState_T__o *)v77,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    v78 = (CStateManager_T__o *)*p_mFSM;
    v82 = (ServantRewardAction_StateEnd_o *)sub_1BCAA2C(ServantRewardAction_StateEnd_TypeInfo, v79, v80, v81);
    ServantRewardAction_StateEnd___ctor(v82, 0LL);
    if ( !v78 )
      goto LABEL_30;
    CStateManager_object___add(
      v78,
      7,
      (IState_T__o *)v82,
      (const MethodInfo_313FC6C *)Method_CStateManager_ServantRewardAction__add__);
    ServantRewardAction__SetState(this, 0, v83);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v87 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85);
      v88 = UnityEngine_Object__Instantiate_object_(
              v87,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v88, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v88, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v89, v90);
          byte_4B109C1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v88,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v88 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v88,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v88;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v88,
              v91,
              v92,
              v93,
              v94,
              v95,
              v96);
            goto LABEL_27;
          }
        }
LABEL_30:
        sub_1BCAA3C(ComponentInChildren_object, v47);
      }
    }
  }
LABEL_27:
  this->fields._PresentDialogMessageId_k__BackingField = 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v85);
  CTouch__init(0LL);
}


int32_t __fastcall ServantRewardAction__GetState(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantRewardAction_o *v3; // x19
  struct CStateManager_ServantRewardAction__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B13611 & 1) == 0 )
  {
    this = (ServantRewardAction_o *)sub_1BCA7E0(&Method_CStateManager_ServantRewardAction__getState__, method, v2);
    byte_4B13611 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall ServantRewardAction__Play(
        ServantRewardAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = 0;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_1BCA784((PartyOrganizationUtility_o *)p_mEndAct, (int64_t)end_act, (int64_t)method, v4, v5, v6, v7, v8);
}


void __fastcall ServantRewardAction__Play_35299796(
        ServantRewardAction_o *this,
        bool is_from_treasure_box,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o **p_mEndAct; // x0

  this->fields.mEndAct = end_act;
  p_mEndAct = &this->fields.mEndAct;
  *((_BYTE *)p_mEndAct + 12) = is_from_treasure_box;
  *((_BYTE *)p_mEndAct - 7) = 1;
  *((float *)p_mEndAct - 1) = fade_in_time;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_mEndAct,
    (int64_t)end_act,
    (int64_t)end_act,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetState(ServantRewardAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13612 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_ServantRewardAction__setState__, *(_QWORD *)&state, method);
    byte_4B13612 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_ServantRewardAction__setState__);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x2
  int v24; // w5

  if ( (byte_4B1360D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id, user_svt_id);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B1360D = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v22);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  if ( isDoEffect )
    v24 = is_svt_new | play_flag | 0x10;
  else
    v24 = is_svt_new | play_flag;
  ServantRewardAction__Setup_35297360(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    v24,
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
    sub_1BCAA3C(this, 0LL);
  userSvtId = qri->fields.userSvtId;
  if ( QuestRewardInfo__isDoGetEff(qri, 0LL) )
    v8 = play_flag | 0x10;
  else
    v8 = play_flag;
  ServantRewardAction__SetupCommandCode_35299044(this, userSvtId, v8, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_35299020(
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
  ServantRewardAction__SetupCommandCode_35299044(this, user_command_code_id, v6, (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__SetupCommandCode_35299044(
        ServantRewardAction_o *this,
        int64_t user_command_code_id,
        int32_t play_flag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *mUICharaGraph; // x23
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  __int64 v26; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 v28; // x1
  UnityEngine_Object_o *gameObject; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Entity; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  const MethodInfo *v63; // x1
  UnityEngine_GameObject_o *mCardParent; // x21
  UserCommandCodeEntity_o *mUserCommandCodeEntity; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Action_o *v69; // x23
  struct UICharaGraphTexture_o *TexturePrefab_38625912; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4B13610 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, user_command_code_id, *(_QWORD *)&play_flag);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ServantRewardAction__SetupCommandCode_b__56_0__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B13610 = 1;
  }
  if ( !ServantRewardAction__GetState(this, (const MethodInfo *)user_command_code_id)
    || ServantRewardAction__GetState(this, v23) == 7 )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    p_mUICharaGraph = &this->fields.mUICharaGraph;
    if ( UnityEngine_Object__op_Inequality(mUICharaGraph, 0LL, 0LL) )
    {
      Instance = (UnityEngine_Component_o *)*p_mUICharaGraph;
      if ( !*p_mUICharaGraph )
        goto LABEL_21;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mUICharaGraph, 0LL, v30, v31, v32, v33, v34, v35);
    }
    this->fields.mIsCommandCode = 1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   user_command_code_id,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
        this->fields.mUserCommandCodeEntity = (struct UserCommandCodeEntity_o *)Entity;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mUserCommandCodeEntity,
          (int64_t)Entity,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        this->fields.mServantId = 0;
        this->fields.userSvtEntity = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtEntity, 0LL, v43, v44, v45, v46, v47, v48);
        this->fields.mSvtType = 1;
        this->fields.mLimitCount = 0;
        this->fields.mPlayFlag = play_flag;
        Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( Instance )
        {
          ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                   Instance,
                                                   (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
          this->fields.mAnimation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.mAnimation,
            (int64_t)ComponentInChildren_object__49322392,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
          if ( Instance )
          {
            v56 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                    Instance,
                    (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
            this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v56;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
              (int64_t)v56,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62);
            Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                      Instance,
                                                      (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
                  ServantRewardAction__SetupScreenTouchInfo(this, v63);
                  mUserCommandCodeEntity = this->fields.mUserCommandCodeEntity;
                  mCardParent = this->fields.mCardParent;
                  v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v66, v67, v68);
                  System_Action___ctor(
                    v69,
                    (Il2CppObject *)this,
                    Method_ServantRewardAction__SetupCommandCode_b__56_0__,
                    0LL);
                  TexturePrefab_38625912 = CharaGraphManager__CreateTexturePrefab_38625912(
                                             mCardParent,
                                             mUserCommandCodeEntity,
                                             0,
                                             v69,
                                             0LL);
                  this->fields.mUICharaGraph = TexturePrefab_38625912;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&this->fields.mUICharaGraph,
                    (int64_t)TexturePrefab_38625912,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(Instance, v26);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationUtility_o *p_mScreenTouchInfo; // x19
  UnityEngine_Object_o *mScreenTouchInfo; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *mTouchParent; // x21
  bool v12; // w22
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  int v16; // s0
  UnityEngine_GameObject_o *v17; // x20
  Il2CppObject *Component_object; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1360C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1360C = 1;
  }
  p_mScreenTouchInfo = (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo;
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    mTouchParent = (UnityEngine_Object_o *)this->fields.mTouchParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v12 = UnityEngine_Object__op_Equality(mTouchParent, 0LL, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v12 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_19;
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0LL);
      v16 = -1014726656;
      v17 = ScreeenTouchInfo;
    }
    else
    {
      transform = (UnityEngine_Transform_o *)this->fields.mTouchParent;
      if ( !transform
        || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL), !Instance) )
      {
LABEL_19:
        sub_1BCAA3C(transform, v10);
      }
      ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, transform, 0, 0LL);
      v17 = ScreeenTouchInfo;
      v16 = 0;
    }
    GameObjectExtensions__SetLocalPositionY(ScreeenTouchInfo, *(float *)&v16, 0LL);
    if ( !v17 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v17,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    p_mScreenTouchInfo->klass = (PartyOrganizationUtility_c *)Component_object;
    sub_1BCA784(p_mScreenTouchInfo, (int64_t)Component_object, v19, v20, v21, v22, v23, v24);
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
void __fastcall ServantRewardAction__Setup_35297360(
        ServantRewardAction_o *this,
        int32_t servant_id,
        UserServantEntity_o *usrSvtEntity,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
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
  const MethodInfo *v35; // x1
  UnityEngine_Object_o *mUICharaGraph; // x26
  struct UICharaGraphTexture_o **p_mUICharaGraph; // x20
  const MethodInfo *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *servantGetObj; // x0
  __int64 v46; // x1
  UnityEngine_Object_o *gameObject; // x26
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *Component_object; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppObject *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int32_t v74; // w8
  __int64 v75; // x2
  __int64 v76; // x3
  UnityEngine_Object_o *numText; // x21
  UILabel_o *v78; // x21
  System_String_o *v79; // x22
  Il2CppObject *v80; // x0
  Il2CppObject *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  UnityEngine_GameObject_o *mCardParent; // x21
  int32_t mServantId; // w22
  int32_t mLimitCount; // w23
  System_Action_o *v98; // x24
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int32_t servantNum; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B1360F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&servant_id, usrSvtEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_ServantRewardAction__Setup_b__52_0__, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&StringLiteral_6992/*"GACHA_EFFECT_SVT_NUM"*/, v33, v34);
    byte_4B1360F = 1;
  }
  if ( usrSvtEntity
    && (!ServantRewardAction__GetState(this, *(const MethodInfo **)&servant_id)
     || ServantRewardAction__GetState(this, v35) == 7) )
  {
    mUICharaGraph = (UnityEngine_Object_o *)this->fields.mUICharaGraph;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      *p_mUICharaGraph = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mUICharaGraph, 0LL, v48, v49, v50, v51, v52, v53);
    }
    this->fields.mUserCommandCodeEntity = 0LL;
    this->fields.mIsCommandCode = 0;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mUserCommandCodeEntity, 0LL, v39, v40, v41, v42, v43, v44);
    this->fields.userSvtEntity = usrSvtEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userSvtEntity,
      (int64_t)usrSvtEntity,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    servantGetObj = this->fields.servantGetObj;
    this->fields.mServantId = servant_id;
    this->fields.mLimitCount = limit_count;
    this->fields.mPlayFlag = play_flag;
    this->fields.servantNum = svt_num;
    if ( servantGetObj )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)servantGetObj,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mAnimation,
        (int64_t)Component_object,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      servantGetObj = this->fields.servantGetObj;
      if ( servantGetObj )
      {
        v67 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)servantGetObj,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)v67;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
          (int64_t)v67,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
        servantGetObj = this->fields.servantGetObj;
        this->fields.isSkip = 0;
        this->fields.isPlayFinish = 0;
        if ( servantGetObj )
        {
          servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)servantGetObj,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
          if ( servantGetObj )
          {
            *((_BYTE *)servantGetObj + 109) = 1;
            servantGetObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( servantGetObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantGetObj, 0, 0LL);
              servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( servantGetObj )
              {
                servantGetObj = DataManager__GetMasterData_object_(
                                  (DataManager_o *)servantGetObj,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( servantGetObj )
                {
                  servantGetObj = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( servantGetObj )
                  {
                    v74 = *((_DWORD *)servantGetObj + 21);
                    this->fields.mIsDoneLoad = 0;
                    this->fields.mSvtType = v74;
                    ServantRewardAction__SetupScreenTouchInfo(this, v38);
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
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
                        if ( !UnityEngine_Object__op_Inequality(numText, 0LL, 0LL) )
                          goto LABEL_38;
                        servantGetObj = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( servantGetObj )
                        {
                          servantGetObj = DataManager__GetMasterData_object_(
                                            (DataManager_o *)servantGetObj,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( servantGetObj )
                          {
                            if ( !DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servantGetObj,
                                    this->fields.mServantId,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
                            {
LABEL_38:
                              mCardParent = this->fields.mCardParent;
                              mServantId = this->fields.mServantId;
                              mLimitCount = this->fields.mLimitCount;
                              v98 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v75, v76);
                              System_Action___ctor(
                                v98,
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
                                                v98,
                                                0,
                                                0LL);
                              this->fields.mUICharaGraph = TexturePrefab;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)&this->fields.mUICharaGraph,
                                (int64_t)TexturePrefab,
                                v100,
                                v101,
                                v102,
                                v103,
                                v104,
                                v105);
                              return;
                            }
                            this->fields.isDispNum = 1;
                            v78 = this->fields.numText;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
                            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_6992/*"GACHA_EFFECT_SVT_NUM"*/, 0LL);
                            servantNum = this->fields.servantNum;
                            v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &servantNum);
                            servantGetObj = System_String__Format(v79, v80, 0LL);
                            if ( v78 )
                            {
                              UILabel__set_text(v78, (System_String_o *)servantGetObj, 0LL);
                              servantGetObj = this->fields.numDisplayObj;
                              if ( servantGetObj )
                              {
                                v81 = UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)servantGetObj,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
                                this->fields.numDisplayAnimation = (struct UnityEngine_Animation_o *)v81;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)&this->fields.numDisplayAnimation,
                                  (int64_t)v81,
                                  v82,
                                  v83,
                                  v84,
                                  v85,
                                  v86,
                                  v87);
                                servantGetObj = this->fields.numDisplayObj;
                                if ( servantGetObj )
                                {
                                  v88 = UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)servantGetObj,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
                                  this->fields.numDisplaySimpleAnimation = (struct SimpleAnimation_o *)v88;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&this->fields.numDisplaySimpleAnimation,
                                    (int64_t)v88,
                                    v89,
                                    v90,
                                    v91,
                                    v92,
                                    v93,
                                    v94);
                                  servantGetObj = this->fields.numDisplayObj;
                                  if ( servantGetObj )
                                  {
                                    servantGetObj = UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)servantGetObj,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
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
    sub_1BCAA3C(servantGetObj, v38);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_35298512(
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
  ServantRewardAction__Setup_35297360(
    this,
    servant_id,
    usrSvtEntity,
    limit_count,
    svt_num,
    v9,
    (const MethodInfo *)isDoEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction__Setup_35298536(
        ServantRewardAction_o *this,
        int32_t servant_id,
        int64_t user_svt_id,
        int32_t limit_count,
        int32_t svt_num,
        int32_t play_flag,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x2

  if ( (byte_4B1360E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&servant_id, user_svt_id);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1360E = 1;
  }
  if ( user_svt_id )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v18);
    }
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               user_svt_id,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  else
  {
    Entity = 0LL;
  }
  ServantRewardAction__Setup_35297360(
    this,
    servant_id,
    (UserServantEntity_o *)Entity,
    limit_count,
    svt_num,
    play_flag,
    method);
}


void __fastcall ServantRewardAction__Setup_35298824(
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x2
  CStateManager_T__o *mFSM; // x0
  char mPlayFlag; // w8
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  float mFadeInTime; // s8
  CommonUI_o *v24; // x20
  AvalonSceneManager_c *v25; // x0
  ServantRewardAction___c_c *v26; // x0
  System_Action_o *_9__46_0; // x21
  Il2CppObject *v28; // x22
  struct ServantRewardAction___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B1360B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CStateManager_ServantRewardAction__update__, v6, v7);
    sub_1BCA7E0(&CTouch_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_ServantRewardAction___c__Update_b__46_0__, v12, v13);
    sub_1BCA7E0(&ServantRewardAction___c_TypeInfo, v14, v15);
    byte_4B1360B = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_ServantRewardAction__update__);
  if ( this->fields.mIsPlayReq && this->fields.mIsDoneLoad )
  {
    mPlayFlag = this->fields.mPlayFlag;
    this->fields.mIsPlayReq = 0;
    if ( (mPlayFlag & 2) != 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      mFadeInTime = this->fields.mFadeInTime;
      v24 = (CommonUI_o *)Instance;
      if ( mFadeInTime <= 0.0 )
      {
        v25 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v20);
          v25 = AvalonSceneManager_TypeInfo;
        }
        mFadeInTime = v25->static_fields->DEFAULT_FADE_TIME;
      }
      v26 = ServantRewardAction___c_TypeInfo;
      if ( !ServantRewardAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantRewardAction___c_TypeInfo, v20);
        v26 = ServantRewardAction___c_TypeInfo;
      }
      _9__46_0 = v26->static_fields->__9__46_0;
      if ( !_9__46_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26, v20);
          v26 = ServantRewardAction___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__46_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
        System_Action___ctor(_9__46_0, v28, Method_ServantRewardAction___c__Update_b__46_0__, 0LL);
        static_fields = ServantRewardAction___c_TypeInfo->static_fields;
        static_fields->__9__46_0 = _9__46_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__46_0,
          (int64_t)_9__46_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( !v24 )
        sub_1BCAA3C(v26, v20);
      CommonUI__maskFadein(v24, mFadeInTime, _9__46_0, 0LL);
    }
    ServantRewardAction__SetState(this, 1, v16);
  }
}


void __fastcall ServantRewardAction___SetupCommandCode_b__56_0(ServantRewardAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20

  if ( (byte_4B13614 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13614 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.mSimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(gameObject, v5);
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x20
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  UnityEngine_Object_o *numDisplayAnimation; // x20

  if ( (byte_4B13613 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13613 = 1;
  }
  this->fields.mIsDoneLoad = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v7);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.numDisplaySimpleAnimation;
    if ( gameObject )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)gameObject, 0LL);
      return;
    }
LABEL_27:
    sub_1BCAA3C(gameObject, v5);
  }
  numDisplayAnimation = (UnityEngine_Object_o *)this->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppClass *klass; // x8
  int interopData_low; // w21
  __int64 v14; // x2
  __int64 v15; // x3
  Il2CppClass *v16; // x8
  CommonUI_o *v17; // x20
  UserCommandCodeEntity_o *v18; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  UserServantEntity_o *v24; // x21
  ServantStatusDialog_EndDelegate_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x23

  v3 = (Il2CppObject *)this;
  if ( (byte_4B13629 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ServantRewardAction_StateDetail_detailEnd__, v8, v9);
    this = (ServantRewardAction_StateDetail_o *)sub_1BCA7E0(
                                                  &Method_ServantRewardAction_StateDetail_detailOpen__,
                                                  v10,
                                                  v11);
    byte_4B13629 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_10;
  interopData_low = LOBYTE(klass->_1.interopData);
  this = (ServantRewardAction_StateDetail_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = v3[1].klass;
  if ( !v16 )
    goto LABEL_10;
  v17 = (CommonUI_o *)this;
  if ( interopData_low )
  {
    v18 = (UserCommandCodeEntity_o *)v16->_1.klass;
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, method, v14, v15);
    ServantStatusDialog_EndDelegate___ctor(v19, v3, Method_ServantRewardAction_StateDetail_detailEnd__, 0LL);
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
    System_Action___ctor(v23, v3, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
    if ( v17 )
    {
      CommonUI__OpenServantStatusDialog_30778960(v17, 6, v18, v19, v23, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  v24 = *(UserServantEntity_o **)&v16->_2.thread_static_fields_offset;
  v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, method, v14, v15);
  ServantStatusDialog_EndDelegate___ctor(v25, v3, Method_ServantRewardAction_StateDetail_detailEnd__, 0LL);
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
  System_Action___ctor(v29, v3, Method_ServantRewardAction_StateDetail_detailOpen__, 0LL);
  if ( !v17 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30775868(v17, 6, v24, v25, v29, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_0(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1362A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, v8, v9);
    byte_4B1362A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__detailEnd_b__5_2__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_1(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1362C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1362C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail___detailEnd_b__5_2(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1362B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1362B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL), (Instance = (CommonUI_o *)this->fields.that) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  ServantRewardAction__SetState((ServantRewardAction_o *)Instance, 7, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__begin(
        ServantRewardAction_StateDetail_o *this,
        ServantRewardAction_o *servantrewardAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  struct ServantRewardAction_o *that; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4B13626 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, servantrewardAction, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_ServantRewardAction_StateDetail__begin_b__1_0__, v14, v15);
    byte_4B13626 = 1;
  }
  this->fields.that = servantrewardAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)servantrewardAction,
    (int64_t)method,
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v18);
      v22 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
    v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ServantRewardAction_StateDetail__begin_b__1_0__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v24, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(that, v16);
  }
  ServantRewardAction__SetState(that, 7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateDetail__detailEnd(
        ServantRewardAction_StateDetail_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppClass *klass; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  System_Action_o *v21; // x20
  Il2CppClass *v22; // x8

  v4 = (Il2CppObject *)this;
  if ( (byte_4B13628 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, v9, v10);
    this = (ServantRewardAction_StateDetail_o *)sub_1BCA7E0(
                                                  &Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__,
                                                  v11,
                                                  v12);
    byte_4B13628 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_11;
  if ( ((__int64)klass->_1.declaringType & 1) == 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
    System_Action___ctor(v20, v4, Method_ServantRewardAction_StateDetail__detailEnd_b__5_1__, 0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v20, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(this, isDecide);
  }
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v21, v4, Method_ServantRewardAction_StateDetail__detailEnd_b__5_0__, 0LL);
  v22 = v4[1].klass;
  if ( !v22 )
    goto LABEL_11;
  EventTutorialMaster__CheckTutorial(-1, 11, v21, (int32_t)v22->_1.castClass, 0, 0, 0, 0LL);
}


void __fastcall ServantRewardAction_StateDetail__detailOpen(
        ServantRewardAction_StateDetail_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4B13627 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B13627 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6);
  if ( !v7 )
    sub_1BCAA3C(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  Il2CppObject *v28; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_4B1362F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__, v11, v12);
    sub_1BCA7E0(&ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, v13, v14);
    byte_4B1362F = 1;
  }
  v15 = sub_1BCAA2C(ServantRewardAction_StateEnd___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 16) = that;
  v24 = v15 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)that, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v15 + 16) )
    goto LABEL_13;
  if ( (*(_BYTE *)(*(_QWORD *)(v15 + 16) + 80LL) & 4) == 0 )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( *(_QWORD *)v24 )
      {
        ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v24 + 96LL), 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(Instance, v17);
  }
  v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v25);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v15,
    Method_ServantRewardAction_StateEnd___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v28 )
    goto LABEL_13;
  CommonUI__maskFadeout((CommonUI_o *)v28, 1, DEFAULT_FADE_TIME, v31, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct ServantRewardAction_o *that; // x8

  if ( (byte_4B13630 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B13630 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL), (that = this->fields.that) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
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
  __int64 v7; // x1
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x22
  struct SimpleAnimation_o *v9; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  struct SimpleAnimation_State_o *Item; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  PartyOrganizationUtility_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *numDisplayAnimation; // x22
  UnityEngine_Animation_o *v22; // x21
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0

  v4 = this;
  if ( (byte_4B13617 & 1) == 0 )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B13617 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplaySimpleAnimation;
    if ( this )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)this, v6, 0LL);
      v9 = that->fields.numDisplaySimpleAnimation;
      if ( v9 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)v9[1].monitor;
        if ( this )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)SimpleAnimation__Play_64539336(v9, name, 0LL);
          v11 = that->fields.numDisplaySimpleAnimation;
          if ( v11 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)v11[1].monitor;
            if ( this )
            {
              v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              Item = SimpleAnimation__get_Item(v11, v12, 0LL);
              v4->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (PartyOrganizationUtility_o *)&v4->fields.mSimpleAnimState;
LABEL_25:
              sub_1BCA784(p_mSimpleAnimState, (int64_t)Item, v14, v15, v16, v17, v18, v19);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  if ( UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL) )
  {
    this = (ServantRewardAction_StateNumDisplay_o *)that->fields.numDisplayAnimation;
    if ( this )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)this, v6, 0LL);
      v22 = that->fields.numDisplayAnimation;
      if ( v22 )
      {
        this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.numDisplayAnimation,
                                                          0LL);
        if ( this )
        {
          v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__Play_69899248(v22, v23, 0LL);
          v24 = that->fields.numDisplayAnimation;
          if ( v24 )
          {
            this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(v24, 0LL);
            if ( this )
            {
              v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              Item = (struct SimpleAnimation_State_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
              v4->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
              p_mSimpleAnimState = (PartyOrganizationUtility_o *)&v4->fields;
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BCAA3C(this, that);
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
  __int64 v6; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v11; // x20
  System_String_o *v12; // x0
  UnityEngine_Object_o *numDisplaySimpleAnimation; // x20
  struct SimpleAnimation_o *v14; // x20
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *numDisplayAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0

  v4 = this;
  if ( (byte_4B13618 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, that, method);
    this = (ServantRewardAction_StateNumDisplay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13618 = 1;
  }
  if ( !that )
    goto LABEL_40;
  if ( that->fields.isSkip )
    goto LABEL_8;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.mSimpleAnimation;
    if ( !v8 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_40;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v8, name, 0LL) )
      goto LABEL_24;
LABEL_23:
    that->fields.isPlayFinish = 1;
    goto LABEL_24;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = that->fields.mAnimation;
    if ( !v11 )
      goto LABEL_40;
    this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
    if ( !this )
      goto LABEL_40;
    v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( !UnityEngine_Animation__IsPlaying(v11, v12, 0LL) )
      goto LABEL_23;
  }
LABEL_24:
  numDisplaySimpleAnimation = (UnityEngine_Object_o *)that->fields.numDisplaySimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplaySimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = that->fields.numDisplaySimpleAnimation;
    if ( v14 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)v14[1].monitor;
      if ( this )
      {
        v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( SimpleAnimation__IsPlaying(v14, v15, 0LL) )
          return;
LABEL_37:
        if ( that->fields.isPlayFinish )
          ServantRewardAction__SetState(that, 3, v16);
        return;
      }
    }
    goto LABEL_40;
  }
  numDisplayAnimation = (UnityEngine_Object_o *)that->fields.numDisplayAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Object__op_Inequality(numDisplayAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = that->fields.numDisplayAnimation;
    if ( v18 )
    {
      this = (ServantRewardAction_StateNumDisplay_o *)UnityEngine_Animation__get_clip(
                                                        that->fields.numDisplayAnimation,
                                                        0LL);
      if ( this )
      {
        v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v18, v19, 0LL) )
          return;
        goto LABEL_37;
      }
    }
LABEL_40:
    sub_1BCAA3C(this, that);
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
  __int64 v6; // x2
  MissionNotifyManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v12; // x1
  UnityEngine_AnimationClip_o *mAnimCommandCodeNew; // x21
  int32_t mSvtType; // w8
  UnityEngine_Object_o *mSimpleAnimation; // x22
  struct SimpleAnimation_o *v16; // x21
  System_String_o *name; // x0
  struct SimpleAnimation_o *v18; // x20
  System_String_o *v19; // x0
  struct SimpleAnimation_State_o *Item; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  PartyOrganizationUtility_o *p_mSimpleAnimState; // x19
  UnityEngine_Object_o *mAnimation; // x22
  UnityEngine_Animation_o *v29; // x21
  System_String_o *v30; // x0
  UnityEngine_Animation_o *v31; // x20
  System_String_o *v32; // x0

  if ( (byte_4B13615 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5, v6);
    byte_4B13615 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !that )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v10);
    byte_4B109C6 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)that->fields.mSimpleAnimation;
    if ( Instance )
    {
      SimpleAnimation__set_clip((SimpleAnimation_o *)Instance, mAnimCommandCodeNew, 0LL);
      v16 = that->fields.mSimpleAnimation;
      if ( v16 )
      {
        Instance = (MissionNotifyManager_o *)v16[1].monitor;
        if ( Instance )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          Instance = (MissionNotifyManager_o *)SimpleAnimation__Play_64539336(v16, name, 0LL);
          v18 = that->fields.mSimpleAnimation;
          if ( v18 )
          {
            Instance = (MissionNotifyManager_o *)v18[1].monitor;
            if ( Instance )
            {
              v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
              Item = SimpleAnimation__get_Item(v18, v19, 0LL);
              this->fields.mSimpleAnimState = Item;
              p_mSimpleAnimState = (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimState;
LABEL_33:
              sub_1BCA784(p_mSimpleAnimState, (int64_t)Item, v21, v22, v23, v24, v25, v26);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)that->fields.mAnimation;
    if ( Instance )
    {
      UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)Instance, mAnimCommandCodeNew, 0LL);
      v29 = that->fields.mAnimation;
      if ( v29 )
      {
        Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
        if ( Instance )
        {
          v30 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
          Instance = (MissionNotifyManager_o *)UnityEngine_Animation__Play_69899248(v29, v30, 0LL);
          v31 = that->fields.mAnimation;
          if ( v31 )
          {
            Instance = (MissionNotifyManager_o *)UnityEngine_Animation__get_clip(v31, 0LL);
            if ( Instance )
            {
              v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)Instance, 0LL);
              Item = (struct SimpleAnimation_State_o *)UnityEngine_Animation__get_Item(v31, v32, 0LL);
              this->fields.mAnimState = (struct UnityEngine_AnimationState_o *)Item;
              p_mSimpleAnimState = (PartyOrganizationUtility_o *)&this->fields;
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(Instance, v8);
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
  __int64 v6; // x2
  UnityEngine_AnimationState_o *isTouchPush; // x0
  const MethodInfo *v8; // x1
  float totalTime; // s8
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  float numPlayStartSec; // s0
  UnityEngine_Object_o *mSimpleAnimation; // x20
  struct SimpleAnimation_o *v14; // x20
  System_String_o *name; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0
  int32_t v20; // w1

  if ( (byte_4B13616 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, that, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13616 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that);
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
      ServantRewardAction__SetState(that, 2, v11);
  }
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v14 = that->fields.mSimpleAnimation;
    if ( v14 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)v14[1].monitor;
      if ( isTouchPush )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( SimpleAnimation__IsPlaying(v14, name, 0LL) )
          return;
LABEL_29:
        if ( that->fields.isDispNum )
          v20 = 2;
        else
          v20 = 3;
        ServantRewardAction__SetState(that, v20, v16);
        return;
      }
    }
    goto LABEL_33;
  }
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    v18 = that->fields.mAnimation;
    if ( v18 )
    {
      isTouchPush = (UnityEngine_AnimationState_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( isTouchPush )
      {
        v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)isTouchPush, 0LL);
        if ( UnityEngine_Animation__IsPlaying(v18, v19, 0LL) )
          return;
        goto LABEL_29;
      }
    }
LABEL_33:
    sub_1BCAA3C(isTouchPush, v8);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  AvalonSceneManager_c *v26; // x8
  CommonUI_o *v27; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4B1362D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__, v9, v10);
    sub_1BCA7E0(&ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, v11, v12);
    byte_4B1362D = 1;
  }
  v13 = sub_1BCAA2C(ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)that, v16, v17, v18, v19, v20, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  v27 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v23);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v13,
    Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( !v27 )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  CommonUI__maskFadeout(v27, 1, DEFAULT_FADE_TIME, v29, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct ServantRewardAction_o *that; // x8
  int32_t mServantId; // w21
  CombineResultEffectComponent_ClickDelegate_o *_9__1; // x22
  CommonUI_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1362E & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__, v6, v7);
    byte_4B1362E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  that = this->fields.that;
  if ( !that )
    goto LABEL_8;
  mServantId = that->fields.mServantId;
  _9__1 = this->fields.__9__1;
  v15 = (CommonUI_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                              CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                              v9,
                                                              v10,
                                                              v11);
    CombineResultEffectComponent_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v16, v17, v18, v19, v20, v21);
  }
  if ( !v15 )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v15, mServantId, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0___begin_b__1(
        ServantRewardAction_StateSecretTreasureDevice___c__DisplayClass0_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantRewardAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, isDecide);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v21; // x20
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x19
  __int64 v31; // x8
  __int64 v32; // d0
  char v33; // w9
  int32_t SvtVoiceId; // w21
  ServantVoiceMaster_o *v35; // x22
  int32_t v36; // w1
  ServantVoiceEntity_o *v37; // x0
  ServantVoiceEntity_o *v38; // x23
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  System_String_o *SummonScriptId; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  int v56; // w22
  System_Action_o *v57; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B13624 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, rewardAction, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantVoiceMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__, v17, v18);
    sub_1BCA7E0(&ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, v19, v20);
    byte_4B13624 = 1;
  }
  entity = 0LL;
  v21 = sub_1BCAA2C(ServantRewardAction_StateTalk___c__DisplayClass0_0_TypeInfo, rewardAction, method, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_31;
  *(_QWORD *)(v21 + 16) = rewardAction;
  v30 = v21 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)rewardAction, v24, v25, v26, v27, v28, v29);
  v31 = *(_QWORD *)(v21 + 16);
  if ( !v31 )
    goto LABEL_31;
  v32 = *(_QWORD *)(v31 + 72);
  *(_QWORD *)(v21 + 24) = v32;
  v33 = *(_DWORD *)(v31 + 80);
  *(_BYTE *)(v21 + 33) = v33 & 1;
  *(_BYTE *)(v21 + 32) = (v33 & 8) != 0;
  *(_BYTE *)(v21 + 34) = (v33 & 0x40) != 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v32, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !*(_QWORD *)v30 )
    goto LABEL_31;
  v35 = (ServantVoiceMaster_o *)Instance;
  Instance = *(DataManager_o **)(*(_QWORD *)v30 + 264LL);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  if ( !v35 )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
    v36 = 4;
  else
    v36 = 3;
  v37 = ServantVoiceMaster__getEntity(v35, v36, SvtVoiceId, *(_DWORD *)(v21 + 28), 0LL);
  *(_QWORD *)(v21 + 40) = 0LL;
  v38 = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), 0LL, v39, v40, v41, v42, v43, v44);
  if ( v38 )
  {
    SummonScriptId = ServantVoiceEntity__GetSummonScriptId(v38, SvtVoiceId, 0LL);
    *(_QWORD *)(v21 + 40) = SummonScriptId;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)SummonScriptId, v47, v48, v49, v50, v51, v52);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         *(_DWORD *)(v21 + 24),
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantVoiceMaster___);
    if ( !Instance )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)Instance,
                                  *(_DWORD *)(v21 + 24),
                                  0LL);
    if ( !entity )
      goto LABEL_31;
    v56 = (Instance != 0LL) & ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  }
  else
  {
    v56 = 0;
  }
  v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v21,
    Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__0__,
    0LL);
  if ( v56 )
  {
    if ( *(_QWORD *)v30 )
    {
      Instance = *(DataManager_o **)(*(_QWORD *)v30 + 256LL);
      if ( Instance )
      {
        UICharaGraphTexture__ExecuteCharaGraphFadeout((UICharaGraphTexture_o *)Instance, 0.5, v57, 0LL);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1BCAA3C(Instance, v23);
  }
  ActionExtensions__Call(v57, 0LL);
LABEL_29:
  if ( !*(_QWORD *)v30 )
    goto LABEL_31;
  *(_DWORD *)(*(_QWORD *)v30 + 272LL) = 0;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct ServantRewardAction_o *rewardAction; // x8
  UserServantEntity_o *userSvtEntity; // x21
  System_Action_o *_9__1; // x24
  ScriptManager_o *v15; // x20
  int32_t svtId; // w22
  int32_t limitCount; // w23
  _BOOL4 isEventSvtGet; // w26
  _BOOL4 checkQuestOpen; // w27
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B13625 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__, v6, v7);
    byte_4B13625 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
  rewardAction = this->fields.rewardAction;
  if ( !rewardAction )
    goto LABEL_8;
  userSvtEntity = rewardAction->fields.userSvtEntity;
  _9__1 = this->fields.__9__1;
  v15 = (ScriptManager_o *)Instance;
  svtId = this->fields.svtId;
  limitCount = this->fields.limitCount;
  isEventSvtGet = this->fields.isEventSvtGet;
  checkQuestOpen = this->fields.checkQuestOpen;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantRewardAction_StateTalk___c__DisplayClass0_0__begin_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v20, v21, v22, v23, v24, v25);
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_8;
  }
  if ( !v15 )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  ScriptManager__PlayGacha_42157540(
    v15,
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v5; // x1

  if ( (byte_4B1361B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, decide, method);
    byte_4B1361B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x20
  EventServantEntity_o *EventServant_40949736; // x0
  EventServantEntity_o *v29; // x22
  System_String_o *v30; // x0
  __int64 v31; // x1
  ServantRewardAction_StateTouchWait_o *v32; // x20
  Il2CppObject *Name; // x0
  System_String_o *Message; // x0
  __int64 v35; // x1
  System_String_o *v36; // x0
  System_String_o *v37; // x21
  Il2CppObject *Instance; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  NotificationDialog_ClickDelegate_o *v42; // x23
  System_Nullable_int__o buttonWidgetSizeY; // [xsp+60h] [xbp-70h] BYREF
  System_Nullable_int__o v44; // [xsp+68h] [xbp-68h] BYREF
  System_Nullable_float__o buttonPosY; // [xsp+70h] [xbp-60h] BYREF
  System_Nullable_int__o messageWidgetSizeY; // [xsp+78h] [xbp-58h] BYREF
  System_Nullable_float__o v47; // [xsp+80h] [xbp-50h] BYREF
  System_Nullable_float__o titlePosY; // [xsp+88h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-38h] BYREF
  System_Nullable_float__o p_titlePosY; // 0:x0.8
  System_Nullable_float__o v51; // 0:x0.8
  System_Nullable_int__o p_messageWidgetSizeY; // 0:x0.8
  System_Nullable_float__o p_buttonPosY; // 0:x0.8
  System_Nullable_int__o v54; // 0:x0.8
  System_Nullable_int__o p_buttonWidgetSizeY; // 0:x0.8

  v4 = this;
  if ( (byte_4B13619 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, that, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_ServantRewardAction_StateTouchWait__begin_b__1_0__, v19, v20);
    sub_1BCA7E0(&StringLiteral_12528/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    this = (ServantRewardAction_StateTouchWait_o *)sub_1BCA7E0(&StringLiteral_12527/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, v25, v26);
    byte_4B13619 = 1;
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
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    EventServant_40949736 = UserServantEntity__getEventServant_40949736((UserServantEntity_o *)this, 1, 0LL);
    if ( EventServant_40949736
      && (v29 = EventServant_40949736,
          v30 = EventServantEntity__GetGetMessage(EventServant_40949736, 0LL),
          !System_String__IsNullOrEmpty(v30, 0LL)) )
    {
      Message = EventServantEntity__GetGetMessage(v29, 0LL);
    }
    else
    {
      this = (ServantRewardAction_StateTouchWait_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_26;
      this = (ServantRewardAction_StateTouchWait_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !this )
        goto LABEL_26;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              that->fields.mServantId,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        goto LABEL_20;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      this = (ServantRewardAction_StateTouchWait_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12527/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/,
                                                       0LL);
      if ( !entity )
        goto LABEL_26;
      v32 = this;
      Name = (Il2CppObject *)ServantEntity__GetName((ServantEntity_o *)entity, 0, 0, -1, 0, 0LL);
      Message = System_String__Format((System_String_o *)v32, Name, 0LL);
    }
    v27 = Message;
LABEL_20:
    if ( System_String__IsNullOrEmpty(v27, 0LL) )
      return;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12528/*"SUMMON_SERVANT_MATERIAL_TD_GET_TITLE"*/, 0LL);
    v4->fields.isWaitCloseDialog = 1;
    v37 = v36;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v42 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v39, v40, v41);
    NotificationDialog_ClickDelegate___ctor(
      v42,
      (Il2CppObject *)v4,
      Method_ServantRewardAction_StateTouchWait__begin_b__1_0__,
      0LL);
    p_titlePosY = (System_Nullable_float__o)&titlePosY;
    titlePosY = 0LL;
    System_Nullable_float____ctor(p_titlePosY, 170.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    v51 = (System_Nullable_float__o)&v47;
    v47 = 0LL;
    System_Nullable_float____ctor(v51, 8.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    p_messageWidgetSizeY = (System_Nullable_int__o)&messageWidgetSizeY;
    messageWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_messageWidgetSizeY,
      270,
      (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    p_buttonPosY = (System_Nullable_float__o)&buttonPosY;
    buttonPosY = 0LL;
    System_Nullable_float____ctor(
      p_buttonPosY,
      -162.5,
      (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    v54 = (System_Nullable_int__o)&v44;
    v44 = 0LL;
    System_Nullable_int____ctor(v54, 217, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    p_buttonWidgetSizeY = (System_Nullable_int__o)&buttonWidgetSizeY;
    buttonWidgetSizeY = 0LL;
    System_Nullable_int____ctor(
      p_buttonWidgetSizeY,
      55,
      (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog_30768824(
        (CommonUI_o *)Instance,
        v37,
        v27,
        v42,
        -1,
        0,
        0,
        0,
        0,
        0,
        titlePosY,
        v47,
        30,
        5,
        messageWidgetSizeY,
        0,
        buttonPosY,
        v44,
        buttonWidgetSizeY,
        0LL);
      return;
    }
LABEL_26:
    sub_1BCAA3C(this, that);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  int32_t mSvtType; // w8

  if ( (byte_4B1361A & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, that, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantVoiceMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B1361A = 1;
  }
  if ( !this->fields.isWaitCloseDialog )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, that);
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
              v13 = 5;
LABEL_12:
              ServantRewardAction__SetState(that, v13, v12);
              return;
            }
            mSvtType = that->fields.mSvtType;
            if ( mSvtType != 6 )
            {
              if ( mSvtType != 1 )
              {
                v13 = 7;
                goto LABEL_12;
              }
              if ( (that->fields.mPlayFlag & 0x10) == 0 )
                goto LABEL_11;
              goto LABEL_22;
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
            isTouchPush = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( isTouchPush )
            {
              if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(
                      (ServantVoiceMaster_o *)isTouchPush,
                      that->fields.mServantId,
                      0LL) )
                goto LABEL_11;
LABEL_22:
              v13 = 4;
              goto LABEL_12;
            }
          }
        }
      }
      sub_1BCAA3C(isTouchPush, v10);
    }
  }
}


void __fastcall ServantRewardAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13631 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantRewardAction___c_TypeInfo, v1, v2);
    byte_4B13631 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantRewardAction___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantRewardAction___c_TypeInfo->static_fields->__9 = (struct ServantRewardAction___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantRewardAction___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantRewardAction___c___ctor(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantRewardAction___c___Update_b__46_0(ServantRewardAction___c_o *this, const MethodInfo *method)
{
  ;
}
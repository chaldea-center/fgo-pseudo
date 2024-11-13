void __fastcall QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_T__o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CStateManager_T__o *fsm; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_T__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  Il2CppObject *v41; // x22
  CStateManager_T__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x2

  if ( (byte_4B1317F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardHarvestAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestRewardHarvestAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestRewardHarvestAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestRewardHarvestAction_StateNone_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestRewardHarvestAction_StatePlay_TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v15, v16);
    byte_4B1317F = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestRewardHarvestAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v29 = (Il2CppObject *)sub_1BCAA2C(QuestRewardHarvestAction_StateNone_TypeInfo, v26, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v32 = (CStateManager_T__o *)*p_fsm;
    v36 = (Il2CppObject *)sub_1BCAA2C(QuestRewardHarvestAction_StatePlay_TypeInfo, v33, v34, v35);
    System_Object___ctor(v36, 0LL);
    if ( !v32 )
      goto LABEL_9;
    CStateManager_object___add(
      v32,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v37 = (CStateManager_T__o *)*p_fsm;
    v41 = (Il2CppObject *)sub_1BCAA2C(QuestRewardHarvestAction_StateItemLabel_TypeInfo, v38, v39, v40);
    System_Object___ctor(v41, 0LL);
    if ( !v37
      || (CStateManager_object___add(
            v37,
            2,
            (IState_T__o *)v41,
            (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v42 = (CStateManager_T__o *)*p_fsm,
          v46 = (Il2CppObject *)sub_1BCAA2C(QuestRewardHarvestAction_StateTouchWait_TypeInfo, v43, v44, v45),
          System_Object___ctor(v46, 0LL),
          !v42) )
    {
LABEL_9:
      sub_1BCAA3C(v30, v31);
    }
    CStateManager_object___add(
      v42,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v47);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardHarvestAction_o *v3; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v3 = this;
  if ( (byte_4B13183 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_1BCA7E0(
                                           &Method_CStateManager_QuestRewardHarvestAction__getState__,
                                           method,
                                           v2);
    byte_4B13183 = 1;
  }
  fsm = v3->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_4B13182 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_QuestRewardHarvestAction__Play_b__12_0__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    byte_4B13182 = 1;
  }
  this->fields.endAct = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)end_act, (int64_t)method, v4, v5, v6, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v20);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(gameObject, v19);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B13184 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardHarvestAction__setState__, *(_QWORD *)&state, method);
    byte_4B13184 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void __fastcall QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
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
  __int64 transform; // x0
  __int64 v50; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x1
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v69; // x21
  System_String_o *name; // x0
  __int64 v71; // x8
  __int64 v72; // x21
  __int64 v73; // x9
  SimpleAnimation_State_c **v74; // x10
  __int64 v75; // x0
  UnityEngine_Animation_o *v76; // x22
  UnityEngine_Animation_o *v77; // x22
  System_String_o *v78; // x0
  UnityEngine_Animation_o *v79; // x21
  System_String_o *v80; // x0
  SimpleAnimation_o *v81; // x21
  System_String_o *v82; // x0
  __int64 v83; // x8
  __int64 v84; // x21
  __int64 v85; // x9
  SimpleAnimation_State_c **v86; // x10
  __int64 v87; // x0
  struct UISprite_array *itemSprite; // x8
  unsigned __int64 v89; // x22
  __int64 v90; // x23
  UnityEngine_Object_o *v91; // x21
  struct UISprite_array *v92; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  unsigned __int64 v95; // x22
  __int64 v96; // x23
  UnityEngine_Object_o *v97; // x21
  struct UILabel_array *v98; // x8
  UnityEngine_GameObject_o *v99; // x0
  unsigned __int64 v100; // x26
  __int64 v101; // x29
  struct UISprite_array *v102; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v104; // x10
  QuestRewardInfo_o *v105; // x28
  UnityEngine_Object_o *v106; // x22
  struct UILabel_array *v107; // x8
  UnityEngine_Object_o *v108; // x22
  struct UISprite_array *v109; // x8
  UnityEngine_GameObject_o *v110; // x0
  __int64 v111; // x1
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v116; // x8
  __int64 v117; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v119; // x0
  System_String_o *v120; // x0
  struct UILabel_array *v121; // x8
  UILabel_o *v122; // x23
  System_String_o *v123; // x24
  Il2CppObject *v124; // x0
  struct UILabel_array *v125; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v127; // x9
  UnityEngine_Object_o *v128; // x22
  struct UnityEngine_GameObject_array *v129; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v133; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v142; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v143; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B13181 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, infos, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_10986/*"QUEST_CLEAR_REWARD_GET"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_25418/*"×"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_25713/*"＋"*/, v47, v48);
    byte_4B13181 = 1;
  }
  v143 = 0LL;
  entity = 0LL;
  v142 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  p_animation = &this->fields.animation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animation,
    (int64_t)ComponentInChildren_object__49322392,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  v59 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v59;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.simpleAnimation, (int64_t)v59, v61, v62, v63, v64, v65, v66);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v69 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v69[1].monitor;
    if ( !transform )
      goto LABEL_153;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v69, name, 0LL);
    if ( !transform )
      goto LABEL_153;
    v71 = *(_QWORD *)transform;
    v72 = transform;
    v73 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v74 = (SimpleAnimation_State_c **)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *(v74 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v73;
        v74 += 2;
        if ( !v73 )
          goto LABEL_15;
      }
      v75 = v71 + 16LL * (*(_DWORD *)v74 + 8) + 312;
    }
    else
    {
LABEL_15:
      v75 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 8LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v75)(v72, *(_QWORD *)(v75 + 8), 0.0);
    v81 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v81[1].monitor;
    if ( !transform )
      goto LABEL_153;
    v82 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v81, v82, 0LL);
    if ( !transform )
      goto LABEL_153;
    v83 = *(_QWORD *)transform;
    v84 = transform;
    v85 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v86 = (SimpleAnimation_State_c **)(*(_QWORD *)(v83 + 176) + 8LL);
      while ( *(v86 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v85;
        v86 += 2;
        if ( !v85 )
          goto LABEL_34;
      }
      v87 = v83 + 16LL * (*(_DWORD *)v86 + 6) + 312;
    }
    else
    {
LABEL_34:
      v87 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v87)(v84, *(_QWORD *)(v87 + 8), 0.0);
  }
  else
  {
    v76 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v76, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v77 = *p_animation;
      if ( !*p_animation )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_153;
      v78 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v77, v78, 0LL);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v79 = *p_animation;
      if ( !v79 )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(v79, 0LL);
      if ( !transform )
        goto LABEL_153;
      v80 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v79, v80, 0LL);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    }
  }
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__49322392(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_153;
  *(_BYTE *)(transform + 109) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite && (int)*(_QWORD *)&itemSprite->max_length >= 1 )
  {
    v89 = 0LL;
    v90 = (unsigned int)*(_QWORD *)&itemSprite->max_length - 1LL;
    while ( v89 < itemSprite->max_length )
    {
      v91 = (UnityEngine_Object_o *)itemSprite->m_Items[v89];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
      transform = UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v92 = this->fields.itemSprite;
        if ( !v92 )
          goto LABEL_153;
        if ( v89 >= v92->max_length )
          break;
        transform = (__int64)v92->m_Items[v89];
        if ( !transform )
          goto LABEL_153;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        transform = (__int64)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( v90 == v89 )
        goto LABEL_56;
      itemSprite = this->fields.itemSprite;
      ++v89;
      if ( !itemSprite )
        goto LABEL_153;
    }
LABEL_143:
    sub_1BCAA44(transform, v50);
  }
LABEL_56:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel && (int)*(_QWORD *)&itemLabel->max_length >= 1 )
  {
    v95 = 0LL;
    v96 = (unsigned int)*(_QWORD *)&itemLabel->max_length - 1LL;
    while ( v95 < itemLabel->max_length )
    {
      v97 = (UnityEngine_Object_o *)itemLabel->m_Items[v95];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
      transform = UnityEngine_Object__op_Inequality(v97, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v98 = this->fields.itemLabel;
        if ( !v98 )
          goto LABEL_153;
        if ( v95 >= v98->max_length )
          goto LABEL_143;
        transform = (__int64)v98->m_Items[v95];
        if ( !transform )
          goto LABEL_153;
        v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        transform = (__int64)GameObjectExtensions__GetParent(v99, 0LL);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( v96 == v95 )
        goto LABEL_72;
      itemLabel = this->fields.itemLabel;
      ++v95;
      if ( !itemLabel )
        goto LABEL_153;
    }
    goto LABEL_143;
  }
LABEL_72:
  if ( !infos )
LABEL_153:
    sub_1BCAA3C(transform, v50);
  if ( (int)*(_QWORD *)&infos->max_length >= 1 )
  {
    v100 = 0LL;
    v101 = (unsigned int)*(_QWORD *)&infos->max_length - 1LL;
    arg1 = (Il2CppObject *)StringLiteral_25418/*"×"*/;
    while ( 1 )
    {
      v102 = this->fields.itemSprite;
      if ( !v102 )
        goto LABEL_153;
      max_length = v102->max_length;
      if ( (__int64)v100 < (int)max_length )
      {
        v104 = this->fields.itemLabel;
        if ( !v104 )
          goto LABEL_153;
        if ( (__int64)v100 < (int)v104->max_length )
        {
          if ( v100 >= max_length )
            goto LABEL_143;
          v105 = infos->m_Items[v100];
          v106 = (UnityEngine_Object_o *)v102->m_Items[v100];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
          transform = UnityEngine_Object__op_Equality(v106, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v107 = this->fields.itemLabel;
            if ( !v107 )
              goto LABEL_153;
            if ( v100 >= v107->max_length )
              goto LABEL_143;
            v108 = (UnityEngine_Object_o *)v107->m_Items[v100];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
            transform = UnityEngine_Object__op_Equality(v108, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v109 = this->fields.itemSprite;
              if ( !v109 )
                goto LABEL_153;
              if ( v100 >= v109->max_length )
                goto LABEL_143;
              transform = (__int64)v109->m_Items[v100];
              if ( !transform )
                goto LABEL_153;
              v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v110,
                                   (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v111);
              transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) == 0 )
                break;
            }
          }
        }
      }
LABEL_141:
      if ( v101 == v100 )
        goto LABEL_144;
      if ( ++v100 >= infos->max_length )
        goto LABEL_143;
    }
    if ( !v105 || !Component_object )
      goto LABEL_153;
    ItemIconComponent__SetGift_38855180(
      (ItemIconComponent_o *)Component_object,
      v105->fields.type,
      v105->fields.objectId,
      v105->fields.num,
      0,
      0LL);
    type = v105->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_153;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v142,
                v105->fields.objectId,
                (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v142;
        if ( !v142 )
          goto LABEL_153;
        klass = ServantEntity__GetName((ServantEntity_o *)v142, -1, 0, -1, 0, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          goto LABEL_118;
        v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v143,
                      v105->fields.objectId,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v143 )
          goto LABEL_153;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v143[2].klass;
        v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_118:
          v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(klass, 0LL);
          v117 = StringLiteral_25418/*"×"*/;
          monitor = v120;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v105->fields.objectId,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_153;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0LL);
        v116 = (__int64 *)&StringLiteral_25713/*"＋"*/;
        if ( !IsCountableWithPlus )
          v116 = &StringLiteral_25418/*"×"*/;
        v117 = *v116;
LABEL_119:
        arg1 = (Il2CppObject *)v117;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0LL);
        if ( (transform & 1) == 0 )
        {
          v121 = this->fields.itemLabel;
          if ( !v121 )
            goto LABEL_153;
          if ( v100 >= v121->max_length )
            goto LABEL_143;
          v122 = v121->m_Items[v100];
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
          v123 = LocalizationManager__Get((System_String_o *)StringLiteral_10986/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
          num = v105->fields.num;
          v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          transform = (__int64)System_String__Format_62415660(v123, (Il2CppObject *)monitor, arg1, v124, 0LL);
          if ( !v122 )
            goto LABEL_153;
          UILabel__set_text(v122, (System_String_o *)transform, 0LL);
          v125 = this->fields.itemLabel;
          if ( !v125 )
            goto LABEL_153;
          if ( v100 >= v125->max_length )
            goto LABEL_143;
          transform = (__int64)v125->m_Items[v100];
          if ( !transform )
            goto LABEL_153;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        imageFrame = this->fields.imageFrame;
        if ( imageFrame )
        {
          v127 = imageFrame->max_length;
          if ( (__int64)v100 < (int)v127 )
          {
            if ( v100 >= v127 )
              goto LABEL_143;
            v128 = (UnityEngine_Object_o *)imageFrame->m_Items[v100];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
            transform = UnityEngine_Object__op_Inequality(v128, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v129 = this->fields.imageFrame;
              if ( !v129 )
                goto LABEL_153;
              if ( v100 >= v129->max_length )
                goto LABEL_143;
              transform = (__int64)v129->m_Items[v100];
              if ( !transform )
                goto LABEL_153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v105->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v119, v50);
    goto LABEL_118;
  }
LABEL_144:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (__int64)CommonUI__CreateScreeenTouchInfo(
                             (CommonUI_o *)Instance,
                             (UnityEngine_Transform_o *)transform,
                             0,
                             0LL);
      if ( transform )
      {
        v133 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)transform,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v133;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
          (int64_t)v133,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139);
        goto LABEL_150;
      }
    }
    goto LABEL_153;
  }
LABEL_150:
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_153;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void __fastcall QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B13180 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardHarvestAction__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B13180 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestRewardHarvestAction__update__);
}


void __fastcall QuestRewardHarvestAction___Play_b__12_0(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardHarvestAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___ctor(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel__begin(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
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
  __int64 v21; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x8
  __int64 v34; // x8
  unsigned __int64 v35; // x25
  __int64 v36; // x29
  System_Action_o **v37; // x21
  __int64 v38; // x22
  __int64 v39; // x8
  UnityEngine_Object_o *v40; // x23
  __int64 v41; // x8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *Component_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  ManagerConfig_c *v56; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v60; // x23
  float x; // s10
  float v62; // s11
  float v63; // s12
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Action_o *v67; // x24
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B13187 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardHarvestAction_StateItemLabel_begin__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v13, v14);
    sub_1BCA7E0(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v17, v18);
    sub_1BCA7E0(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v19, v20);
    byte_4B13187 = 1;
  }
  v21 = sub_1BCAA2C(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_30;
  *(_QWORD *)(v21 + 16) = that;
  v30 = v21 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)that, v24, v25, v26, v27, v28, v29);
  if ( !*(_QWORD *)(v21 + 16) )
    goto LABEL_30;
  v33 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 72LL);
  if ( !v33 )
    goto LABEL_30;
  v34 = *(_QWORD *)(v33 + 24);
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    v36 = (unsigned int)v34;
    v37 = (System_Action_o **)(v21 + 24);
    while ( 1 )
    {
      v38 = sub_1BCAA2C(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v23, v31, v32);
      System_Object___ctor((Il2CppObject *)v38, 0LL);
      if ( !*(_QWORD *)v30 )
        break;
      v39 = *(_QWORD *)(*(_QWORD *)v30 + 72LL);
      if ( !v39 )
        break;
      if ( v35 >= *(unsigned int *)(v39 + 24) )
        goto LABEL_31;
      v40 = *(UnityEngine_Object_o **)(v39 + 8 * v35 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v30 )
          break;
        v41 = *(_QWORD *)(*(_QWORD *)v30 + 72LL);
        if ( !v41 )
          break;
        if ( v35 >= *(unsigned int *)(v41 + 24) )
LABEL_31:
          sub_1BCAA44(gameObject, v23);
        gameObject = *(UnityEngine_GameObject_o **)(v41 + 8 * v35 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v38 )
          break;
        *(_QWORD *)(v38 + 16) = gameObject;
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)gameObject, v42, v43, v44, v45, v46, v47);
        gameObject = *(UnityEngine_GameObject_o **)(v38 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v38 + 16),
                             (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v38 + 24) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 24), (int64_t)Component_object, v49, v50, v51, v52, v53, v54);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v38 + 16), 0LL);
        v56 = ManagerConfig_TypeInfo;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v55);
          v56 = ManagerConfig_TypeInfo;
        }
        WIDTH = v56->static_fields->WIDTH;
        v80 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v38 + 16), 0LL);
        v60 = *(MoveObject_o **)(v38 + 24);
        x = v80.fields.x;
        v62 = v80.fields.y;
        v63 = v80.fields.z;
        v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v64, v65, v66);
        System_Action___ctor(
          v67,
          (Il2CppObject *)v38,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v70 = *v37;
        if ( !*v37 )
        {
          v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v68, v69);
          System_Action___ctor(
            v70,
            (Il2CppObject *)v21,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          *(_QWORD *)(v21 + 24) = v70;
          sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)v70, v71, v72, v73, v74, v75, v76);
        }
        if ( !v60 )
          break;
        v81.fields.x = (float)WIDTH;
        v81.fields.y = y;
        v81.fields.z = z;
        v82.fields.x = x;
        v82.fields.y = v62;
        v82.fields.z = v63;
        MoveObject__Play(v60, v81, v82, 0.25, v67, v70, 0.0, 17, 0LL);
      }
      if ( v36 == ++v35 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1BCAA3C(gameObject, v23);
  }
LABEL_27:
  v77 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v77 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v78 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v77, v77[4]);
  OverwriteAssetSoundName__PlaySystemSe(v78, 4, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel__end(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateItemLabel__update(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardHarvestAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(0LL, method);
  QuestRewardHarvestAction__SetState(that, 3, v2);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___begin_b__0(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1BCAA3C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateNone___ctor(
        QuestRewardHarvestAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateNone__begin(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateNone__end(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateNone__update(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StatePlay___ctor(
        QuestRewardHarvestAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StatePlay__begin(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x19
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x19
  System_String_o *v28; // x0
  QuestRewardHarvestAction_StatePlay_c *v29; // x8
  QuestRewardHarvestAction_StatePlay_o *v30; // x19
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B13185 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    byte_4B13185 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v19 = that->fields.animation;
    if ( v19 )
    {
      this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v19, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = that->fields.animation;
          if ( !v21 )
            goto LABEL_49;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_49;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_69899248(v21, v22, 0LL);
        }
        v23 = that->fields.animation;
        if ( v23 )
        {
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v25 = that->fields.animation;
              if ( v25 )
              {
                this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(v25, 0LL);
                if ( this )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(this, that);
  }
  v7 = that->fields.simpleAnimation;
  if ( !v7 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_49;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v7, v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_49;
    this = (QuestRewardHarvestAction_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_49;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_64539336(v9, v10, 0LL);
  }
  v11 = that->fields.simpleAnimation;
  if ( !v11 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v11[1].monitor;
  if ( !this )
    goto LABEL_49;
  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v11, v12, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v14 = this;
  v15 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_20;
    }
    v17 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v17 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v17)(
                                                   v14,
                                                   *(_QWORD *)(v17 + 8),
                                                   0.0);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_49;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_49;
  v29 = this->klass;
  v30 = this;
  v31 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_46;
    }
    v33 = (__int64)(&v29[1]._1.namespaze + 2 * *v32);
  }
  else
  {
LABEL_46:
    v33 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 1.0);
}


void __fastcall QuestRewardHarvestAction_StatePlay__end(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StatePlay__update(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B13186 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1BCA7E0(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4,
                                                     v5);
    byte_4B13186 = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v7, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, v12);
      return;
    }
LABEL_21:
    sub_1BCAA3C(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = that->fields.animation;
    if ( !v10 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_21;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v11, 0LL) )
      return;
    goto LABEL_17;
  }
}


void __fastcall QuestRewardHarvestAction_StateTouchWait___ctor(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateTouchWait__begin(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardHarvestAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0LL
    || (this = (QuestRewardHarvestAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_1BCAA3C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateTouchWait__end(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardHarvestAction_StateTouchWait__update(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
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
  __int64 v19; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x19
  __int64 v29; // x1
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x2

  if ( (byte_4B13188 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CTouch_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardHarvestAction_StateTouchWait_update__, v13, v14);
    sub_1BCA7E0(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v15, v16);
    sub_1BCA7E0(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v17, v18);
    byte_4B13188 = 1;
  }
  v19 = sub_1BCAA2C(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_18;
  *(_QWORD *)(v19 + 16) = that;
  v28 = v19 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)that, v22, v23, v24, v25, v26, v27);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v29);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v28 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v28 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v30 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v30 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
          OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v32);
            v36 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
          v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
          System_Action___ctor(
            v38,
            (Il2CppObject *)v19,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v38, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v28;
            if ( *(_QWORD *)v28 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v39);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(isTouchPush, v21);
  }
}


void __fastcall QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardHarvestAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}
void __fastcall QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_T__o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x20
  Il2CppObject *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_4BB160C & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestRewardHarvestAction___ctor__, method);
    sub_1C13D24(&Method_CStateManager_QuestRewardHarvestAction__add__, v3);
    sub_1C13D24(&CStateManager_QuestRewardHarvestAction__TypeInfo, v4);
    sub_1C13D24(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v5);
    sub_1C13D24(&QuestRewardHarvestAction_StateNone_TypeInfo, v6);
    sub_1C13D24(&QuestRewardHarvestAction_StatePlay_TypeInfo, v7);
    sub_1C13D24(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v8);
    byte_4BB160C = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v10 = (CStateManager_T__o *)sub_1C13F70(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31C327C *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v10;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v18 = (Il2CppObject *)sub_1C13F70(QuestRewardHarvestAction_StateNone_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v21 = (CStateManager_T__o *)*p_fsm;
    v22 = (Il2CppObject *)sub_1C13F70(QuestRewardHarvestAction_StatePlay_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_9;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v23 = (CStateManager_T__o *)*p_fsm;
    v24 = (Il2CppObject *)sub_1C13F70(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23
      || (CStateManager_object___add(
            v23,
            2,
            (IState_T__o *)v24,
            (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v25 = (CStateManager_T__o *)*p_fsm,
          v26 = (Il2CppObject *)sub_1C13F70(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v26, 0LL),
          !v25) )
    {
LABEL_9:
      sub_1C13F80(v19, v20);
    }
    CStateManager_object___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_31C3324 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v27);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4BB1610 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_1C13D24(&Method_CStateManager_QuestRewardHarvestAction__getState__, method);
    byte_4BB1610 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C13F80(this, method);
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
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v18; // x0
  System_Action_o *v19; // x21

  if ( (byte_4BB160F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, end_act);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v12);
    sub_1C13D24(&Method_QuestRewardHarvestAction__Play_b__12_0__, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4BB160F = 1;
  }
  this->fields.endAct = end_act;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)end_act, (int64_t)method, v4, v5, v6, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v18 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v18->static_fields->DEFAULT_FADE_TIME;
  }
  v19 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_1C13F80(gameObject, v16);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BB1611 & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestRewardHarvestAction__setState__, *(_QWORD *)&state);
    byte_4BB1611 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C13F80(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_31C33B0 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void __fastcall QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 transform; // x0
  __int64 v28; // x1
  Il2CppObject *ComponentInChildren_object__49832308; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *v37; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v46; // x21
  System_String_o *name; // x0
  __int64 v48; // x8
  __int64 v49; // x21
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0
  UnityEngine_Animation_o *v53; // x22
  UnityEngine_Animation_o *v54; // x22
  System_String_o *v55; // x0
  UnityEngine_Animation_o *v56; // x21
  System_String_o *v57; // x0
  SimpleAnimation_o *v58; // x21
  System_String_o *v59; // x0
  __int64 v60; // x8
  __int64 v61; // x21
  __int64 v62; // x9
  SimpleAnimation_State_c **v63; // x10
  __int64 v64; // x0
  struct UISprite_array *itemSprite; // x8
  unsigned __int64 v66; // x22
  __int64 v67; // x23
  UnityEngine_Object_o *v68; // x21
  struct UISprite_array *v69; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  unsigned __int64 v72; // x22
  __int64 v73; // x23
  UnityEngine_Object_o *v74; // x21
  struct UILabel_array *v75; // x8
  UnityEngine_GameObject_o *v76; // x0
  unsigned __int64 v77; // x26
  __int64 v78; // x29
  struct UISprite_array *v79; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v81; // x10
  QuestRewardInfo_o *v82; // x28
  UnityEngine_Object_o *v83; // x22
  struct UILabel_array *v84; // x8
  UnityEngine_Object_o *v85; // x22
  struct UISprite_array *v86; // x8
  UnityEngine_GameObject_o *v87; // x0
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v92; // x8
  __int64 v93; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v95; // x0
  System_String_o *v96; // x0
  struct UILabel_array *v97; // x8
  UILabel_o *v98; // x23
  System_String_o *v99; // x24
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  Il2CppObject *v103; // x0
  struct UILabel_array *v104; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v106; // x9
  UnityEngine_Object_o *v107; // x22
  struct UnityEngine_GameObject_array *v108; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v121; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v122; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BB160E & 1) == 0 )
  {
    sub_1C13D24(&AndroidBackKeyManager_TypeInfo, infos);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_EquipMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1C13D24(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v14);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_1C13D24(&int_TypeInfo, v16);
    sub_1C13D24(&LocalizationManager_TypeInfo, v17);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v18);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C13D24(&SimpleAnimation_State_TypeInfo, v22);
    sub_1C13D24(&StringLiteral_11041/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v23);
    sub_1C13D24(&StringLiteral_25567/*"{}"*/, v24);
    sub_1C13D24(&StringLiteral_1/*""*/, v25);
    sub_1C13D24(&StringLiteral_25864/*"󡀀"*/, v26);
    byte_4BB160E = 1;
  }
  v122 = 0LL;
  entity = 0LL;
  v121 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  ComponentInChildren_object__49832308 = UnityEngine_Component__GetComponentInChildren_object__49832308(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49832308;
  p_animation = &this->fields.animation;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.animation,
    (int64_t)ComponentInChildren_object__49832308,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  v37 = UnityEngine_Component__GetComponentInChildren_object__49832308(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v37;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.simpleAnimation, (int64_t)v37, v39, v40, v41, v42, v43, v44);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v46 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v46[1].monitor;
    if ( !transform )
      goto LABEL_153;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v46, name, 0LL);
    if ( !transform )
      goto LABEL_153;
    v48 = *(_QWORD *)transform;
    v49 = transform;
    v50 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v51 = (SimpleAnimation_State_c **)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v50;
        v51 += 2;
        if ( !v50 )
          goto LABEL_15;
      }
      v52 = v48 + 16LL * (*(_DWORD *)v51 + 8) + 312;
    }
    else
    {
LABEL_15:
      v52 = sub_1C65D04(transform, SimpleAnimation_State_TypeInfo, 8LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 0.0);
    v58 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v58[1].monitor;
    if ( !transform )
      goto LABEL_153;
    v59 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v58, v59, 0LL);
    if ( !transform )
      goto LABEL_153;
    v60 = *(_QWORD *)transform;
    v61 = transform;
    v62 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v63 = (SimpleAnimation_State_c **)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *(v63 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v62;
        v63 += 2;
        if ( !v62 )
          goto LABEL_34;
      }
      v64 = v60 + 16LL * (*(_DWORD *)v63 + 6) + 312;
    }
    else
    {
LABEL_34:
      v64 = sub_1C65D04(transform, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v64)(v61, *(_QWORD *)(v64 + 8), 0.0);
  }
  else
  {
    v53 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v54 = *p_animation;
      if ( !*p_animation )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_153;
      v55 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v54, v55, 0LL);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v56 = *p_animation;
      if ( !v56 )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(v56, 0LL);
      if ( !transform )
        goto LABEL_153;
      v57 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v56, v57, 0LL);
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
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__49832308(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F86174 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_153;
  *(_BYTE *)(transform + 109) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite && (int)*(_QWORD *)&itemSprite->max_length >= 1 )
  {
    v66 = 0LL;
    v67 = (unsigned int)*(_QWORD *)&itemSprite->max_length - 1LL;
    while ( v66 < itemSprite->max_length )
    {
      v68 = (UnityEngine_Object_o *)itemSprite->m_Items[v66];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v69 = this->fields.itemSprite;
        if ( !v69 )
          goto LABEL_153;
        if ( v66 >= v69->max_length )
          break;
        transform = (__int64)v69->m_Items[v66];
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
      if ( v67 == v66 )
        goto LABEL_56;
      itemSprite = this->fields.itemSprite;
      ++v66;
      if ( !itemSprite )
        goto LABEL_153;
    }
LABEL_143:
    sub_1C13F88(transform, v28);
  }
LABEL_56:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel && (int)*(_QWORD *)&itemLabel->max_length >= 1 )
  {
    v72 = 0LL;
    v73 = (unsigned int)*(_QWORD *)&itemLabel->max_length - 1LL;
    while ( v72 < itemLabel->max_length )
    {
      v74 = (UnityEngine_Object_o *)itemLabel->m_Items[v72];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v75 = this->fields.itemLabel;
        if ( !v75 )
          goto LABEL_153;
        if ( v72 >= v75->max_length )
          goto LABEL_143;
        transform = (__int64)v75->m_Items[v72];
        if ( !transform )
          goto LABEL_153;
        v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        transform = (__int64)GameObjectExtensions__GetParent(v76, 0LL);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( v73 == v72 )
        goto LABEL_72;
      itemLabel = this->fields.itemLabel;
      ++v72;
      if ( !itemLabel )
        goto LABEL_153;
    }
    goto LABEL_143;
  }
LABEL_72:
  if ( !infos )
LABEL_153:
    sub_1C13F80(transform, v28);
  if ( (int)*(_QWORD *)&infos->max_length >= 1 )
  {
    v77 = 0LL;
    v78 = (unsigned int)*(_QWORD *)&infos->max_length - 1LL;
    arg1 = (Il2CppObject *)StringLiteral_25567/*"{}"*/;
    while ( 1 )
    {
      v79 = this->fields.itemSprite;
      if ( !v79 )
        goto LABEL_153;
      max_length = v79->max_length;
      if ( (__int64)v77 < (int)max_length )
      {
        v81 = this->fields.itemLabel;
        if ( !v81 )
          goto LABEL_153;
        if ( (__int64)v77 < (int)v81->max_length )
        {
          if ( v77 >= max_length )
            goto LABEL_143;
          v82 = infos->m_Items[v77];
          v83 = (UnityEngine_Object_o *)v79->m_Items[v77];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = UnityEngine_Object__op_Equality(v83, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v84 = this->fields.itemLabel;
            if ( !v84 )
              goto LABEL_153;
            if ( v77 >= v84->max_length )
              goto LABEL_143;
            v85 = (UnityEngine_Object_o *)v84->m_Items[v77];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Equality(v85, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v86 = this->fields.itemSprite;
              if ( !v86 )
                goto LABEL_153;
              if ( v77 >= v86->max_length )
                goto LABEL_143;
              transform = (__int64)v86->m_Items[v77];
              if ( !transform )
                goto LABEL_153;
              v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v87,
                                   (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) == 0 )
                break;
            }
          }
        }
      }
LABEL_141:
      if ( v78 == v77 )
        goto LABEL_144;
      if ( ++v77 >= infos->max_length )
        goto LABEL_143;
    }
    if ( !v82 || !Component_object )
      goto LABEL_153;
    ItemIconComponent__SetGift_39286592(
      (ItemIconComponent_o *)Component_object,
      v82->fields.type,
      v82->fields.objectId,
      v82->fields.num,
      0,
      0LL);
    type = v82->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_153;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v121,
                v82->fields.objectId,
                (const MethodInfo_3238670 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v121;
        if ( !v121 )
          goto LABEL_153;
        klass = ServantEntity__GetName((ServantEntity_o *)v121, -1, 0, -1, 0, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          goto LABEL_118;
        v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v122,
                      v82->fields.objectId,
                      (const MethodInfo_3238670 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v122 )
          goto LABEL_153;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v122[2].klass;
        v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_118:
          v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47526452(klass, 0LL);
          v93 = StringLiteral_25567/*"{}"*/;
          monitor = v96;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v82->fields.objectId,
                      (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_153;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0LL);
        v92 = (__int64 *)&StringLiteral_25864/*"󡀀"*/;
        if ( !IsCountableWithPlus )
          v92 = &StringLiteral_25567/*"{}"*/;
        v93 = *v92;
LABEL_119:
        arg1 = (Il2CppObject *)v93;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0LL);
        if ( (transform & 1) == 0 )
        {
          v97 = this->fields.itemLabel;
          if ( !v97 )
            goto LABEL_153;
          if ( v77 >= v97->max_length )
            goto LABEL_143;
          v98 = v97->m_Items[v77];
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v99 = LocalizationManager__Get((System_String_o *)StringLiteral_11041/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
          num = v82->fields.num;
          v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v100, v101, v102);
          transform = (__int64)System_String__Format_62982384(v99, (Il2CppObject *)monitor, arg1, v103, 0LL);
          if ( !v98 )
            goto LABEL_153;
          UILabel__set_text(v98, (System_String_o *)transform, 0LL);
          v104 = this->fields.itemLabel;
          if ( !v104 )
            goto LABEL_153;
          if ( v77 >= v104->max_length )
            goto LABEL_143;
          transform = (__int64)v104->m_Items[v77];
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
          v106 = imageFrame->max_length;
          if ( (__int64)v77 < (int)v106 )
          {
            if ( v77 >= v106 )
              goto LABEL_143;
            v107 = (UnityEngine_Object_o *)imageFrame->m_Items[v77];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality(v107, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v108 = this->fields.imageFrame;
              if ( !v108 )
                goto LABEL_153;
              if ( v77 >= v108->max_length )
                goto LABEL_143;
              transform = (__int64)v108->m_Items[v77];
              if ( !transform )
                goto LABEL_153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v82->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v95);
    goto LABEL_118;
  }
LABEL_144:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v112 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)transform,
                 (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v112;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
          (int64_t)v112,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
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
  __int64 v3; // x1
  CStateManager_T__o *fsm; // x0

  if ( (byte_4BB160D & 1) == 0 )
  {
    sub_1C13D24(&Method_CStateManager_QuestRewardHarvestAction__update__, method);
    sub_1C13D24(&CTouch_TypeInfo, v3);
    byte_4BB160D = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_31C338C *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  __int64 v25; // x29
  System_Action_o **v26; // x21
  __int64 v27; // x22
  __int64 v28; // x8
  UnityEngine_Object_o *v29; // x23
  __int64 v30; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  ManagerConfig_c *v44; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v48; // x23
  float x; // s10
  float v50; // s11
  float v51; // s12
  System_Action_o *v52; // x24
  System_Action_o *v53; // x22
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BB1614 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, that);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_QuestRewardHarvestAction_StateItemLabel_begin__, v7);
    sub_1C13D24(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1C13D24(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    sub_1C13D24(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v10);
    sub_1C13D24(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v11);
    byte_4BB1614 = 1;
  }
  v12 = sub_1C13F70(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  *(_QWORD *)(v12 + 16) = that;
  v21 = v12 + 16;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)that, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v12 + 16) )
    goto LABEL_30;
  v22 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 72LL);
  if ( !v22 )
    goto LABEL_30;
  v23 = *(_QWORD *)(v22 + 24);
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = (unsigned int)v23;
    v26 = (System_Action_o **)(v12 + 24);
    while ( 1 )
    {
      v27 = sub_1C13F70(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v27, 0LL);
      if ( !*(_QWORD *)v21 )
        break;
      v28 = *(_QWORD *)(*(_QWORD *)v21 + 72LL);
      if ( !v28 )
        break;
      if ( v24 >= *(unsigned int *)(v28 + 24) )
        goto LABEL_31;
      v29 = *(UnityEngine_Object_o **)(v28 + 8 * v24 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v21 )
          break;
        v30 = *(_QWORD *)(*(_QWORD *)v21 + 72LL);
        if ( !v30 )
          break;
        if ( v24 >= *(unsigned int *)(v30 + 24) )
LABEL_31:
          sub_1C13F88(gameObject, v14);
        gameObject = *(UnityEngine_GameObject_o **)(v30 + 8 * v24 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v27 )
          break;
        *(_QWORD *)(v27 + 16) = gameObject;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)gameObject, v31, v32, v33, v34, v35, v36);
        gameObject = *(UnityEngine_GameObject_o **)(v27 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v27 + 16),
                             (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v27 + 24) = Component_object;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)Component_object, v38, v39, v40, v41, v42, v43);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v27 + 16), 0LL);
        v44 = ManagerConfig_TypeInfo;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v44 = ManagerConfig_TypeInfo;
        }
        WIDTH = v44->static_fields->WIDTH;
        v63 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v27 + 16), 0LL);
        v48 = *(MoveObject_o **)(v27 + 24);
        x = v63.fields.x;
        v50 = v63.fields.y;
        v51 = v63.fields.z;
        v52 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          v52,
          (Il2CppObject *)v27,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v53 = *v26;
        if ( !*v26 )
        {
          v53 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v53,
            (Il2CppObject *)v12,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          *(_QWORD *)(v12 + 24) = v53;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)v53, v54, v55, v56, v57, v58, v59);
        }
        if ( !v48 )
          break;
        v64.fields.x = (float)WIDTH;
        v64.fields.y = y;
        v64.fields.z = z;
        v65.fields.x = x;
        v65.fields.y = v50;
        v65.fields.z = v51;
        MoveObject__Play(v48, v64, v65, 0.25, v52, v53, 0.0, 17, 0LL);
      }
      if ( v25 == ++v24 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1C13F80(gameObject, v14);
  }
LABEL_27:
  v60 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v60 = (_QWORD *)sub_1C13D3C(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v61 = (System_Reflection_MethodBase_o *)sub_1C13D08(v60, v60[4]);
  OverwriteAssetSoundName__PlaySystemSe(v61, 4, 0, 0LL);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(this, method);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v13; // x20
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x19
  System_String_o *v25; // x0
  struct SimpleAnimation_o *v26; // x19
  System_String_o *v27; // x0
  QuestRewardHarvestAction_StatePlay_c *v28; // x8
  QuestRewardHarvestAction_StatePlay_o *v29; // x19
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4BB1612 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C13D24(&SimpleAnimation_State_TypeInfo, v4);
    byte_4BB1612 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.animation;
    if ( v18 )
    {
      this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.animation;
          if ( !v20 )
            goto LABEL_49;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_70466396(v20, v21, 0LL);
        }
        v22 = that->fields.animation;
        if ( v22 )
        {
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v24 = that->fields.animation;
              if ( v24 )
              {
                this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0LL);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
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
    sub_1C13F80(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestRewardHarvestAction_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_65106228(v8, v9, 0LL);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_1C65D04(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v16)(
                                                   v13,
                                                   *(_QWORD *)(v16 + 8),
                                                   0.0);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.namespaze + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_1C65D04(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4BB1613 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C13D24(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_4BB1613 = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_1C13F80(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.animation;
    if ( !v9 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_21;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
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
    sub_1C13F80(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x19
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x2

  if ( (byte_4BB1615 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, that);
    sub_1C13D24(&AndroidBackKeyManager_TypeInfo, v4);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&CTouch_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C13D24(&Method_QuestRewardHarvestAction_StateTouchWait_update__, v8);
    sub_1C13D24(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v9);
    sub_1C13D24(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v10);
    byte_4BB1615 = 1;
  }
  v11 = sub_1C13F70(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = that;
  v20 = v11 + 16;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)that, v14, v15, v16, v17, v18, v19);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v20 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v20 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v21 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1C13D3C(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v22 = (System_Reflection_MethodBase_o *)sub_1C13D08(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v24 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v24 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
          v26 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v26,
            (Il2CppObject *)v11,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v26, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v20;
            if ( *(_QWORD *)v20 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v27);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C13F80(isTouchPush, v13);
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
    sub_1C13F80(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}
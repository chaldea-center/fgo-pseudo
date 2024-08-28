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
  int32_t v11; // w2
  int32_t v12; // w3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x20
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4A1CB54 & 1) == 0 )
  {
    sub_1B715CC(&Method_CStateManager_QuestRewardHarvestAction___ctor__, method);
    sub_1B715CC(&Method_CStateManager_QuestRewardHarvestAction__add__, v3);
    sub_1B715CC(&CStateManager_QuestRewardHarvestAction__TypeInfo, v4);
    sub_1B715CC(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v5);
    sub_1B715CC(&QuestRewardHarvestAction_StateNone_TypeInfo, v6);
    sub_1B715CC(&QuestRewardHarvestAction_StatePlay_TypeInfo, v7);
    sub_1B715CC(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v8);
    byte_4A1CB54 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v10 = (CStateManager_T__o *)sub_1B71818(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_308625C *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v10;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v10, v11, v12);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v14 = (Il2CppObject *)sub_1B71818(QuestRewardHarvestAction_StateNone_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v14,
      (const MethodInfo_3086304 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v17 = (CStateManager_T__o *)*p_fsm;
    v18 = (Il2CppObject *)sub_1B71818(QuestRewardHarvestAction_StatePlay_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_9;
    CStateManager_object___add(
      v17,
      1,
      (IState_T__o *)v18,
      (const MethodInfo_3086304 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v19 = (CStateManager_T__o *)*p_fsm;
    v20 = (Il2CppObject *)sub_1B71818(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v19
      || (CStateManager_object___add(
            v19,
            2,
            (IState_T__o *)v20,
            (const MethodInfo_3086304 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v21 = (CStateManager_T__o *)*p_fsm,
          v22 = (Il2CppObject *)sub_1B71818(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v22, 0LL),
          !v21) )
    {
LABEL_9:
      sub_1B71828(v15, v16);
    }
    CStateManager_object___add(
      v21,
      3,
      (IState_T__o *)v22,
      (const MethodInfo_3086304 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v23);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4A1CB58 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_1B715CC(&Method_CStateManager_QuestRewardHarvestAction__getState__, method);
    byte_4A1CB58 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1B71828(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v14; // x0
  System_Action_o *v15; // x21

  if ( (byte_4A1CB57 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, end_act);
    sub_1B715CC(&AvalonSceneManager_TypeInfo, v8);
    sub_1B715CC(&Method_QuestRewardHarvestAction__Play_b__12_0__, v9);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A1CB57 = 1;
  }
  this->fields.endAct = end_act;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v14 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v14->static_fields->DEFAULT_FADE_TIME;
  }
  v15 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_1B71828(gameObject, v12);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A1CB59 & 1) == 0 )
  {
    sub_1B715CC(&Method_CStateManager_QuestRewardHarvestAction__setState__, *(_QWORD *)&state);
    byte_4A1CB59 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B71828(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3086390 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
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
  Il2CppObject *ComponentInChildren_object__48570608; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v38; // x21
  System_String_o *name; // x0
  __int64 v40; // x8
  __int64 v41; // x21
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  UnityEngine_Animation_o *v45; // x22
  UnityEngine_Animation_o *v46; // x22
  System_String_o *v47; // x0
  UnityEngine_Animation_o *v48; // x21
  System_String_o *v49; // x0
  SimpleAnimation_o *v50; // x21
  System_String_o *v51; // x0
  __int64 v52; // x8
  __int64 v53; // x21
  __int64 v54; // x9
  SimpleAnimation_State_c **v55; // x10
  __int64 v56; // x0
  struct UISprite_array *itemSprite; // x8
  unsigned __int64 v58; // x22
  __int64 v59; // x23
  UnityEngine_Object_o *v60; // x21
  struct UISprite_array *v61; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  unsigned __int64 v64; // x22
  __int64 v65; // x23
  UnityEngine_Object_o *v66; // x21
  struct UILabel_array *v67; // x8
  UnityEngine_GameObject_o *v68; // x0
  unsigned __int64 v69; // x26
  __int64 v70; // x29
  struct UISprite_array *v71; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v73; // x10
  QuestRewardInfo_o *v74; // x28
  UnityEngine_Object_o *v75; // x22
  struct UILabel_array *v76; // x8
  UnityEngine_Object_o *v77; // x22
  struct UISprite_array *v78; // x8
  UnityEngine_GameObject_o *v79; // x0
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v84; // x8
  __int64 v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v87; // x0
  System_String_o *v88; // x0
  struct UILabel_array *v89; // x8
  UILabel_o *v90; // x23
  System_String_o *v91; // x24
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x0
  struct UILabel_array *v96; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v98; // x9
  UnityEngine_Object_o *v99; // x22
  struct UnityEngine_GameObject_array *v100; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v109; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v110; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A1CB56 & 1) == 0 )
  {
    sub_1B715CC(&AndroidBackKeyManager_TypeInfo, infos);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1B715CC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12);
    sub_1B715CC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v14);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_1B715CC(&int_TypeInfo, v16);
    sub_1B715CC(&LocalizationManager_TypeInfo, v17);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v18);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B715CC(&SimpleAnimation_State_TypeInfo, v22);
    sub_1B715CC(&StringLiteral_10811/*"QUEST_CLEAR_REWARD_GET"*/, v23);
    sub_1B715CC(&StringLiteral_25104/*"×"*/, v24);
    sub_1B715CC(&StringLiteral_1/*""*/, v25);
    sub_1B715CC(&StringLiteral_25399/*"＋"*/, v26);
    byte_4A1CB56 = 1;
  }
  v110 = 0LL;
  entity = 0LL;
  v109 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  ComponentInChildren_object__48570608 = UnityEngine_Component__GetComponentInChildren_object__48570608(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_2E520F0 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__48570608;
  p_animation = &this->fields.animation;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.animation,
    (int32_t)ComponentInChildren_object__48570608,
    v31,
    v32);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_153;
  v33 = UnityEngine_Component__GetComponentInChildren_object__48570608(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_2E520F0 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v33;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)v33, v35, v36);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v38 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v38[1].monitor;
    if ( !transform )
      goto LABEL_153;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v38, name, 0LL);
    if ( !transform )
      goto LABEL_153;
    v40 = *(_QWORD *)transform;
    v41 = transform;
    v42 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v42;
        v43 += 2;
        if ( !v42 )
          goto LABEL_15;
      }
      v44 = v40 + 16LL * (*(_DWORD *)v43 + 8) + 312;
    }
    else
    {
LABEL_15:
      v44 = sub_1BC35AC(transform, SimpleAnimation_State_TypeInfo, 8LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v44)(v41, *(_QWORD *)(v44 + 8), 0.0);
    v50 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v50[1].monitor;
    if ( !transform )
      goto LABEL_153;
    v51 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v50, v51, 0LL);
    if ( !transform )
      goto LABEL_153;
    v52 = *(_QWORD *)transform;
    v53 = transform;
    v54 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v55 = (SimpleAnimation_State_c **)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *(v55 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v54;
        v55 += 2;
        if ( !v54 )
          goto LABEL_34;
      }
      v56 = v52 + 16LL * (*(_DWORD *)v55 + 6) + 312;
    }
    else
    {
LABEL_34:
      v56 = sub_1BC35AC(transform, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v56)(v53, *(_QWORD *)(v56 + 8), 0.0);
  }
  else
  {
    v45 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v46 = *p_animation;
      if ( !*p_animation )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_153;
      v47 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v46, v47, 0LL);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v48 = *p_animation;
      if ( !v48 )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(v48, 0LL);
      if ( !transform )
        goto LABEL_153;
      v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v48, v49, 0LL);
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
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__48570608(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2E520F0 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_153;
  *(_BYTE *)(transform + 109) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite && (int)*(_QWORD *)&itemSprite->max_length >= 1 )
  {
    v58 = 0LL;
    v59 = (unsigned int)*(_QWORD *)&itemSprite->max_length - 1LL;
    while ( v58 < itemSprite->max_length )
    {
      v60 = (UnityEngine_Object_o *)itemSprite->m_Items[v58];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v61 = this->fields.itemSprite;
        if ( !v61 )
          goto LABEL_153;
        if ( v58 >= v61->max_length )
          break;
        transform = (__int64)v61->m_Items[v58];
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
      if ( v59 == v58 )
        goto LABEL_56;
      itemSprite = this->fields.itemSprite;
      ++v58;
      if ( !itemSprite )
        goto LABEL_153;
    }
LABEL_143:
    sub_1B71830(transform, v28);
  }
LABEL_56:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel && (int)*(_QWORD *)&itemLabel->max_length >= 1 )
  {
    v64 = 0LL;
    v65 = (unsigned int)*(_QWORD *)&itemLabel->max_length - 1LL;
    while ( v64 < itemLabel->max_length )
    {
      v66 = (UnityEngine_Object_o *)itemLabel->m_Items[v64];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v67 = this->fields.itemLabel;
        if ( !v67 )
          goto LABEL_153;
        if ( v64 >= v67->max_length )
          goto LABEL_143;
        transform = (__int64)v67->m_Items[v64];
        if ( !transform )
          goto LABEL_153;
        v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        transform = (__int64)GameObjectExtensions__GetParent(v68, 0LL);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      }
      if ( v65 == v64 )
        goto LABEL_72;
      itemLabel = this->fields.itemLabel;
      ++v64;
      if ( !itemLabel )
        goto LABEL_153;
    }
    goto LABEL_143;
  }
LABEL_72:
  if ( !infos )
LABEL_153:
    sub_1B71828(transform, v28);
  if ( (int)*(_QWORD *)&infos->max_length >= 1 )
  {
    v69 = 0LL;
    v70 = (unsigned int)*(_QWORD *)&infos->max_length - 1LL;
    arg1 = (Il2CppObject *)StringLiteral_25104/*"×"*/;
    while ( 1 )
    {
      v71 = this->fields.itemSprite;
      if ( !v71 )
        goto LABEL_153;
      max_length = v71->max_length;
      if ( (__int64)v69 < (int)max_length )
      {
        v73 = this->fields.itemLabel;
        if ( !v73 )
          goto LABEL_153;
        if ( (__int64)v69 < (int)v73->max_length )
        {
          if ( v69 >= max_length )
            goto LABEL_143;
          v74 = infos->m_Items[v69];
          v75 = (UnityEngine_Object_o *)v71->m_Items[v69];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = UnityEngine_Object__op_Equality(v75, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v76 = this->fields.itemLabel;
            if ( !v76 )
              goto LABEL_153;
            if ( v69 >= v76->max_length )
              goto LABEL_143;
            v77 = (UnityEngine_Object_o *)v76->m_Items[v69];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Equality(v77, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v78 = this->fields.itemSprite;
              if ( !v78 )
                goto LABEL_153;
              if ( v69 >= v78->max_length )
                goto LABEL_143;
              transform = (__int64)v78->m_Items[v69];
              if ( !transform )
                goto LABEL_153;
              v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v79,
                                   (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
      if ( v70 == v69 )
        goto LABEL_144;
      if ( ++v69 >= infos->max_length )
        goto LABEL_143;
    }
    if ( !v74 || !Component_object )
      goto LABEL_153;
    ItemIconComponent__SetGift_37939160(
      (ItemIconComponent_o *)Component_object,
      v74->fields.type,
      v74->fields.objectId,
      v74->fields.num,
      0,
      0LL);
    type = v74->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_153;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v109,
                v74->fields.objectId,
                (const MethodInfo_30F87B4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v109;
        if ( !v109 )
          goto LABEL_153;
        klass = ServantEntity__GetName((ServantEntity_o *)v109, -1, 0, -1, 0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          goto LABEL_118;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v110,
                      v74->fields.objectId,
                      (const MethodInfo_30F87B4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v110 )
          goto LABEL_153;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v110[2].klass;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_118:
          v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46344112(klass, 0LL);
          v85 = StringLiteral_25104/*"×"*/;
          monitor = v88;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v74->fields.objectId,
                      (const MethodInfo_30F87B4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_153;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0LL);
        v84 = (__int64 *)&StringLiteral_25399/*"＋"*/;
        if ( !IsCountableWithPlus )
          v84 = &StringLiteral_25104/*"×"*/;
        v85 = *v84;
LABEL_119:
        arg1 = (Il2CppObject *)v85;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0LL);
        if ( (transform & 1) == 0 )
        {
          v89 = this->fields.itemLabel;
          if ( !v89 )
            goto LABEL_153;
          if ( v69 >= v89->max_length )
            goto LABEL_143;
          v90 = v89->m_Items[v69];
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_10811/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
          num = v74->fields.num;
          v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v92, v93, v94);
          transform = (__int64)System_String__Format_61519944(v91, (Il2CppObject *)monitor, arg1, v95, 0LL);
          if ( !v90 )
            goto LABEL_153;
          UILabel__set_text(v90, (System_String_o *)transform, 0LL);
          v96 = this->fields.itemLabel;
          if ( !v96 )
            goto LABEL_153;
          if ( v69 >= v96->max_length )
            goto LABEL_143;
          transform = (__int64)v96->m_Items[v69];
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
          v98 = imageFrame->max_length;
          if ( (__int64)v69 < (int)v98 )
          {
            if ( v69 >= v98 )
              goto LABEL_143;
            v99 = (UnityEngine_Object_o *)imageFrame->m_Items[v69];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality(v99, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v100 = this->fields.imageFrame;
              if ( !v100 )
                goto LABEL_153;
              if ( v69 >= v100->max_length )
                goto LABEL_143;
              transform = (__int64)v100->m_Items[v69];
              if ( !transform )
                goto LABEL_153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v74->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v87);
    goto LABEL_118;
  }
LABEL_144:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v104 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)transform,
                 (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v104;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.screenTouchInfo, (int32_t)v104, v105, v106);
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

  if ( (byte_4A1CB55 & 1) == 0 )
  {
    sub_1B715CC(&Method_CStateManager_QuestRewardHarvestAction__update__, method);
    sub_1B715CC(&CTouch_TypeInfo, v3);
    byte_4A1CB55 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_308636C *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned __int64 v20; // x25
  __int64 v21; // x29
  System_Action_o **v22; // x21
  __int64 v23; // x22
  __int64 v24; // x8
  UnityEngine_Object_o *v25; // x23
  __int64 v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  ManagerConfig_c *v32; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v36; // x23
  float x; // s10
  float v38; // s11
  float v39; // s12
  System_Action_o *v40; // x24
  System_Action_o *v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4A1CB5C & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, that);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_1B715CC(&ManagerConfig_TypeInfo, v5);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B715CC(&Method_QuestRewardHarvestAction_StateItemLabel_begin__, v7);
    sub_1B715CC(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_1B715CC(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    sub_1B715CC(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v10);
    sub_1B715CC(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v11);
    byte_4A1CB5C = 1;
  }
  v12 = sub_1B71818(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  *(_QWORD *)(v12 + 16) = that;
  v17 = v12 + 16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)that, v15, v16);
  if ( !*(_QWORD *)(v12 + 16) )
    goto LABEL_30;
  v18 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 72LL);
  if ( !v18 )
    goto LABEL_30;
  v19 = *(_QWORD *)(v18 + 24);
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)v19;
    v22 = (System_Action_o **)(v12 + 24);
    while ( 1 )
    {
      v23 = sub_1B71818(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( !*(_QWORD *)v17 )
        break;
      v24 = *(_QWORD *)(*(_QWORD *)v17 + 72LL);
      if ( !v24 )
        break;
      if ( v20 >= *(unsigned int *)(v24 + 24) )
        goto LABEL_31;
      v25 = *(UnityEngine_Object_o **)(v24 + 8 * v20 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v17 )
          break;
        v26 = *(_QWORD *)(*(_QWORD *)v17 + 72LL);
        if ( !v26 )
          break;
        if ( v20 >= *(unsigned int *)(v26 + 24) )
LABEL_31:
          sub_1B71830(gameObject, v14);
        gameObject = *(UnityEngine_GameObject_o **)(v26 + 8 * v20 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v23 )
          break;
        *(_QWORD *)(v23 + 16) = gameObject;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)gameObject, v27, v28);
        gameObject = *(UnityEngine_GameObject_o **)(v23 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v23 + 16),
                             (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v23 + 24) = Component_object;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)Component_object, v30, v31);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 16), 0LL);
        v32 = ManagerConfig_TypeInfo;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v32 = ManagerConfig_TypeInfo;
        }
        WIDTH = v32->static_fields->WIDTH;
        v47 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v23 + 16), 0LL);
        v36 = *(MoveObject_o **)(v23 + 24);
        x = v47.fields.x;
        v38 = v47.fields.y;
        v39 = v47.fields.z;
        v40 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
        System_Action___ctor(
          v40,
          (Il2CppObject *)v23,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v41 = *v22;
        if ( !*v22 )
        {
          v41 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(
            v41,
            (Il2CppObject *)v12,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          *(_QWORD *)(v12 + 24) = v41;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)v41, v42, v43);
        }
        if ( !v36 )
          break;
        v48.fields.x = (float)WIDTH;
        v48.fields.y = y;
        v48.fields.z = z;
        v49.fields.x = x;
        v49.fields.y = v38;
        v49.fields.z = v39;
        MoveObject__Play(v36, v48, v49, 0.25, v40, v41, 0.0, 17, 0LL);
      }
      if ( v21 == ++v20 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1B71828(gameObject, v14);
  }
LABEL_27:
  v44 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v44 = (_QWORD *)sub_1B715E4(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v45 = (System_Reflection_MethodBase_o *)sub_1B715B0(v44, v44[4]);
  OverwriteAssetSoundName__PlaySystemSe(v45, 4, 0LL);
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
    sub_1B71828(0LL, method);
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
    sub_1B71828(this, method);
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

  if ( (byte_4A1CB5A & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1B715CC(&SimpleAnimation_State_TypeInfo, v4);
    byte_4A1CB5A = 1;
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
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_69002944(v20, v21, 0LL);
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
    sub_1B71828(this, that);
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_63643176(v8, v9, 0LL);
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
    v16 = sub_1BC35AC(this, SimpleAnimation_State_TypeInfo, 6LL);
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
    v32 = sub_1BC35AC(this, SimpleAnimation_State_TypeInfo, 8LL);
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

  if ( (byte_4A1CB5B & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1B715CC(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_4A1CB5B = 1;
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_1B71828(this, that);
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
    sub_1B71828(this, that);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x2

  if ( (byte_4A1CB5D & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, that);
    sub_1B715CC(&AndroidBackKeyManager_TypeInfo, v4);
    sub_1B715CC(&AvalonSceneManager_TypeInfo, v5);
    sub_1B715CC(&CTouch_TypeInfo, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B715CC(&Method_QuestRewardHarvestAction_StateTouchWait_update__, v8);
    sub_1B715CC(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v9);
    sub_1B715CC(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v10);
    byte_4A1CB5D = 1;
  }
  v11 = sub_1B71818(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = that;
  v16 = v11 + 16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)that, v14, v15);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v16 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v16 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v17 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v17 = (_QWORD *)sub_1B715E4(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v18 = (System_Reflection_MethodBase_o *)sub_1B715B0(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v20 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
          v22 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v11,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v16;
            if ( *(_QWORD *)v16 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v23);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B71828(isTouchPush, v13);
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
    sub_1B71828(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}
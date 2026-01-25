void QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4CEB34C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardHarvestAction___ctor__);
    sub_1C7BAE8(&Method_CStateManager_QuestRewardHarvestAction__add__);
    sub_1C7BAE8(&CStateManager_QuestRewardHarvestAction__TypeInfo);
    sub_1C7BAE8(&QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    sub_1C7BAE8(&QuestRewardHarvestAction_StateNone_TypeInfo);
    sub_1C7BAE8(&QuestRewardHarvestAction_StatePlay_TypeInfo);
    sub_1C7BAE8(&QuestRewardHarvestAction_StateTouchWait_TypeInfo);
    byte_4CEB34C = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C7BD34(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_33B93F0 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_1C7BD34(QuestRewardHarvestAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_1C7BD34(QuestRewardHarvestAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v17 = (CStateManager_T__o *)*p_fsm;
    v18 = (Il2CppObject *)sub_1C7BD34(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v19 = (CStateManager_T__o *)*p_fsm,
          v20 = (Il2CppObject *)sub_1C7BD34(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v20, 0),
          !v19) )
    {
LABEL_9:
      sub_1C7BD40(v13, v14);
    }
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v21);
  }
}


int32_t QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4CEB350 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_1C7BAE8(&Method_CStateManager_QuestRewardHarvestAction__getState__);
    byte_4CEB350 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C7BD40(this, method);
  return fsm->fields.m_state;
}


void QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_4CEB34F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardHarvestAction__Play_b__12_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB34F = 1;
  }
  this->fields.endAct = end_act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endAct,
    (int32_t)end_act,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v15 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v15->static_fields->DEFAULT_FADE_TIME;
  }
  v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C7BD40(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardHarvestAction__SetState(QuestRewardHarvestAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CEB351 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardHarvestAction__setState__);
    byte_4CEB351 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C7BD40(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33B9524 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v24; // x21
  System_String_o *name; // x0
  __int64 v26; // x8
  __int64 v27; // x21
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  UnityEngine_Animation_o *v31; // x22
  UnityEngine_Animation_o *v32; // x22
  System_String_o *v33; // x0
  UnityEngine_Animation_o *v34; // x21
  System_String_o *v35; // x0
  SimpleAnimation_o *v36; // x21
  System_String_o *v37; // x0
  __int64 v38; // x8
  __int64 v39; // x21
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0
  struct UISprite_array *itemSprite; // x8
  unsigned __int64 v44; // x22
  __int64 v45; // x23
  UnityEngine_Object_o *v46; // x21
  struct UISprite_array *v47; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  unsigned __int64 v50; // x22
  __int64 v51; // x23
  UnityEngine_Object_o *v52; // x21
  struct UILabel_array *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  unsigned __int64 v55; // x26
  __int64 v56; // x29
  struct UISprite_array *v57; // x8
  unsigned __int64 max_length_low; // x9
  struct UILabel_array *v59; // x10
  QuestRewardInfo_o *v60; // x28
  UnityEngine_Object_o *v61; // x22
  struct UILabel_array *v62; // x8
  UnityEngine_Object_o *v63; // x22
  struct UISprite_array *v64; // x8
  UnityEngine_GameObject_o *v65; // x0
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v70; // x8
  __int64 v71; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v73; // x0
  System_String_o *v74; // x0
  struct UILabel_array *v75; // x8
  UILabel_o *v76; // x23
  System_String_o *v77; // x24
  Il2CppObject *v78; // x0
  struct UILabel_array *v79; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v81; // x9
  UnityEngine_Object_o *v82; // x22
  struct UnityEngine_GameObject_array *v83; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v96; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v97; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CEB34E & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidBackKeyManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10890/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_1C7BAE8(&StringLiteral_25522/*"×"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_25831/*"＋"*/);
    byte_4CEB34E = 1;
  }
  v97 = 0;
  entity = 0;
  v96 = 0;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51801640;
  p_animation = &this->fields.animation;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.animation,
    (int32_t)ComponentInChildren_object__51801640,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  v15 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v15;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimation, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( (transform & 1) != 0 )
  {
    v24 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v24->fields.m_Clip;
    if ( !transform )
      goto LABEL_153;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v24, name, 0);
    if ( !transform )
      goto LABEL_153;
    v26 = *(_QWORD *)transform;
    v27 = transform;
    v28 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_15;
      }
      v30 = v26 + 16LL * (*(_DWORD *)v29 + 8) + 312;
    }
    else
    {
LABEL_15:
      v30 = sub_1C51E70(transform, SimpleAnimation_State_TypeInfo, 8);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v30)(v27, *(_QWORD *)(v30 + 8), 0.0);
    v36 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v36->fields.m_Clip;
    if ( !transform )
      goto LABEL_153;
    v37 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v36, v37, 0);
    if ( !transform )
      goto LABEL_153;
    v38 = *(_QWORD *)transform;
    v39 = transform;
    v40 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v40;
        v41 += 2;
        if ( !v40 )
          goto LABEL_34;
      }
      v42 = v38 + 16LL * (*(_DWORD *)v41 + 6) + 312;
    }
    else
    {
LABEL_34:
      v42 = sub_1C51E70(transform, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v42)(v39, *(_QWORD *)(v42 + 8), 0.0);
  }
  else
  {
    v31 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0, 0);
    if ( (transform & 1) != 0 )
    {
      v32 = *p_animation;
      if ( !*p_animation )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( !transform )
        goto LABEL_153;
      v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v32, v33, 0);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
      v34 = *p_animation;
      if ( !v34 )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(v34, 0);
      if ( !transform )
        goto LABEL_153;
      v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v34, v35, 0);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0);
    }
  }
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__51801640(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_153;
  *(_BYTE *)(transform + 109) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite && (int)itemSprite->max_length >= 1 )
  {
    v44 = 0;
    v45 = (unsigned int)itemSprite->max_length - 1LL;
    while ( v44 < LODWORD(itemSprite->max_length) )
    {
      v46 = (UnityEngine_Object_o *)itemSprite->m_Items[v44];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v46, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v47 = this->fields.itemSprite;
        if ( !v47 )
          goto LABEL_153;
        if ( v44 >= LODWORD(v47->max_length) )
          break;
        transform = (__int64)v47->m_Items[v44];
        if ( !transform )
          goto LABEL_153;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        transform = (__int64)GameObjectExtensions__GetParent(gameObject, 0);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( v45 == v44 )
        goto LABEL_56;
      itemSprite = this->fields.itemSprite;
      ++v44;
      if ( !itemSprite )
        goto LABEL_153;
    }
LABEL_143:
    sub_1C7BD48(transform);
  }
LABEL_56:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel && (int)itemLabel->max_length >= 1 )
  {
    v50 = 0;
    v51 = (unsigned int)itemLabel->max_length - 1LL;
    while ( v50 < LODWORD(itemLabel->max_length) )
    {
      v52 = (UnityEngine_Object_o *)itemLabel->m_Items[v50];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v52, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v53 = this->fields.itemLabel;
        if ( !v53 )
          goto LABEL_153;
        if ( v50 >= LODWORD(v53->max_length) )
          goto LABEL_143;
        transform = (__int64)v53->m_Items[v50];
        if ( !transform )
          goto LABEL_153;
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        transform = (__int64)GameObjectExtensions__GetParent(v54, 0);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( v51 == v50 )
        goto LABEL_72;
      itemLabel = this->fields.itemLabel;
      ++v50;
      if ( !itemLabel )
        goto LABEL_153;
    }
    goto LABEL_143;
  }
LABEL_72:
  if ( !infos )
LABEL_153:
    sub_1C7BD40(transform, v6);
  if ( (int)infos->max_length >= 1 )
  {
    v55 = 0;
    v56 = (unsigned int)infos->max_length - 1LL;
    arg1 = (Il2CppObject *)StringLiteral_25522/*"×"*/;
    while ( 1 )
    {
      v57 = this->fields.itemSprite;
      if ( !v57 )
        goto LABEL_153;
      max_length_low = LODWORD(v57->max_length);
      if ( (__int64)v55 < (int)max_length_low )
      {
        v59 = this->fields.itemLabel;
        if ( !v59 )
          goto LABEL_153;
        if ( (__int64)v55 < SLODWORD(v59->max_length) )
        {
          if ( v55 >= max_length_low )
            goto LABEL_143;
          v60 = infos->m_Items[v55];
          v61 = (UnityEngine_Object_o *)v57->m_Items[v55];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = UnityEngine_Object__op_Equality(v61, 0, 0);
          if ( (transform & 1) == 0 )
          {
            v62 = this->fields.itemLabel;
            if ( !v62 )
              goto LABEL_153;
            if ( v55 >= LODWORD(v62->max_length) )
              goto LABEL_143;
            v63 = (UnityEngine_Object_o *)v62->m_Items[v55];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Equality(v63, 0, 0);
            if ( (transform & 1) == 0 )
            {
              v64 = this->fields.itemSprite;
              if ( !v64 )
                goto LABEL_153;
              if ( v55 >= LODWORD(v64->max_length) )
                goto LABEL_143;
              transform = (__int64)v64->m_Items[v55];
              if ( !transform )
                goto LABEL_153;
              v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v65,
                                   (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (transform & 1) == 0 )
                break;
            }
          }
        }
      }
LABEL_141:
      if ( v56 == v55 )
        goto LABEL_144;
      if ( ++v55 >= LODWORD(infos->max_length) )
        goto LABEL_143;
    }
    if ( !v60 || !Component_object )
      goto LABEL_153;
    ItemIconComponent__SetGift_41487788(
      (ItemIconComponent_o *)Component_object,
      v60->fields.type,
      v60->fields.objectId,
      v60->fields.num,
      0,
      0);
    type = v60->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_153;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v96,
                v60->fields.objectId,
                (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v96;
        if ( !v96 )
          goto LABEL_153;
        klass = ServantEntity__GetName((ServantEntity_o *)v96, -1, 0, -1, 0, 0);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          goto LABEL_118;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v97,
                      v60->fields.objectId,
                      (const MethodInfo_342E348 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v97 )
          goto LABEL_153;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v97[2].klass;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_118:
          v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49485620(klass, 0);
          v71 = StringLiteral_25522/*"×"*/;
          monitor = v74;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v60->fields.objectId,
                      (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_153;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0);
        v70 = (__int64 *)&StringLiteral_25831/*"＋"*/;
        if ( !IsCountableWithPlus )
          v70 = &StringLiteral_25522/*"×"*/;
        v71 = *v70;
LABEL_119:
        arg1 = (Il2CppObject *)v71;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0);
        if ( (transform & 1) == 0 )
        {
          v75 = this->fields.itemLabel;
          if ( !v75 )
            goto LABEL_153;
          if ( v55 >= LODWORD(v75->max_length) )
            goto LABEL_143;
          v76 = v75->m_Items[v55];
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v77 = LocalizationManager__Get((System_String_o *)StringLiteral_10890/*"QUEST_CLEAR_REWARD_GET"*/, 0);
          num = v60->fields.num;
          v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          transform = (__int64)System_String__Format_64218288(v77, (Il2CppObject *)monitor, arg1, v78, 0);
          if ( !v76 )
            goto LABEL_153;
          UILabel__set_text(v76, (System_String_o *)transform, 0);
          v79 = this->fields.itemLabel;
          if ( !v79 )
            goto LABEL_153;
          if ( v55 >= LODWORD(v79->max_length) )
            goto LABEL_143;
          transform = (__int64)v79->m_Items[v55];
          if ( !transform )
            goto LABEL_153;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_153;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        }
        imageFrame = this->fields.imageFrame;
        if ( imageFrame )
        {
          v81 = LODWORD(imageFrame->max_length);
          if ( (__int64)v55 < (int)v81 )
          {
            if ( v55 >= v81 )
              goto LABEL_143;
            v82 = (UnityEngine_Object_o *)imageFrame->m_Items[v55];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality(v82, 0, 0);
            if ( (transform & 1) != 0 )
            {
              v83 = this->fields.imageFrame;
              if ( !v83 )
                goto LABEL_153;
              if ( v55 >= LODWORD(v83->max_length) )
                goto LABEL_143;
              transform = (__int64)v83->m_Items[v55];
              if ( !transform )
                goto LABEL_153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v60->fields.type == 1, 0);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v73);
    goto LABEL_118;
  }
LABEL_144:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      transform = (__int64)CommonUI__CreateScreeenTouchInfo(
                             (CommonUI_o *)Instance,
                             (UnityEngine_Transform_o *)transform,
                             0,
                             0);
      if ( transform )
      {
        v87 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v87;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.screenTouchInfo,
          (int32_t)v87,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
        goto LABEL_150;
      }
    }
    goto LABEL_153;
  }
LABEL_150:
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_153;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_153;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CEB34D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardHarvestAction__update__);
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CEB34D = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_33B9500 *)Method_CStateManager_QuestRewardHarvestAction__update__);
}


void QuestRewardHarvestAction___Play_b__12_0(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardHarvestAction__SetState(this, 1, v2);
}


void QuestRewardHarvestAction_StateItemLabel___ctor(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StateItemLabel__begin(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  unsigned __int64 v16; // x25
  __int64 v17; // x29
  System_Action_o **v18; // x21
  __int64 v19; // x22
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x23
  __int64 v22; // x8
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  ManagerConfig_c *v36; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v40; // x23
  float x; // s10
  float v42; // s11
  float v43; // s12
  System_Action_o *v44; // x24
  System_Action_o *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4CEB354 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardHarvestAction_StateItemLabel_begin__);
    sub_1C7BAE8(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C7BAE8(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__);
    sub_1C7BAE8(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
    byte_4CEB354 = 1;
  }
  v4 = sub_1C7BD34(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_30;
  v14 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 72LL);
  if ( !v14 )
    goto LABEL_30;
  v15 = *(_QWORD *)(v14 + 24);
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    v17 = (unsigned int)v15;
    v18 = (System_Action_o **)(v4 + 24);
    while ( 1 )
    {
      v19 = sub_1C7BD34(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0);
      if ( !*(_QWORD *)v13 )
        break;
      v20 = *(_QWORD *)(*(_QWORD *)v13 + 72LL);
      if ( !v20 )
        break;
      if ( v16 >= *(unsigned int *)(v20 + 24) )
        goto LABEL_31;
      v21 = *(UnityEngine_Object_o **)(v20 + 8 * v16 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v13 )
          break;
        v22 = *(_QWORD *)(*(_QWORD *)v13 + 72LL);
        if ( !v22 )
          break;
        if ( v16 >= *(unsigned int *)(v22 + 24) )
LABEL_31:
          sub_1C7BD48(gameObject);
        gameObject = *(UnityEngine_GameObject_o **)(v22 + 8 * v16 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !v19 )
          break;
        *(_QWORD *)(v19 + 16) = gameObject;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 16), (int32_t)gameObject, v23, v24, v25, v26, v27, v28);
        gameObject = *(UnityEngine_GameObject_o **)(v19 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v19 + 16),
                             (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v19 + 24) = Component_object;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 24), (int32_t)Component_object, v30, v31, v32, v33, v34, v35);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v19 + 16), 0);
        v36 = ManagerConfig_TypeInfo;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v36 = ManagerConfig_TypeInfo;
        }
        WIDTH = v36->static_fields->WIDTH;
        v55 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v19 + 16), 0);
        v40 = *(MoveObject_o **)(v19 + 24);
        x = v55.fields.x;
        v42 = v55.fields.y;
        v43 = v55.fields.z;
        v44 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v19,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0);
        v45 = *v18;
        if ( !*v18 )
        {
          v45 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(
            v45,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0);
          *(_QWORD *)(v4 + 24) = v45;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)v45, v46, v47, v48, v49, v50, v51);
        }
        if ( !v40 )
          break;
        v56.fields.x = (float)WIDTH;
        v56.fields.y = y;
        v56.fields.z = z;
        v57.fields.x = x;
        v57.fields.y = v42;
        v57.fields.z = v43;
        MoveObject__Play(v40, v56, v57, 0.25, v44, v45, 0.0, 17, 0);
      }
      if ( v17 == ++v16 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1C7BD40(gameObject, v6);
  }
LABEL_27:
  v52 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v52 = (_QWORD *)sub_1C7BB00(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v53 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v52, v52[4]);
  OverwriteAssetSoundName__PlaySystemSe(v53, 4, 0, 0);
}


void QuestRewardHarvestAction_StateItemLabel__end(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StateItemLabel__update(
        QuestRewardHarvestAction_StateItemLabel_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___begin_b__1(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRewardHarvestAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_1C7BD40(0, method);
  QuestRewardHarvestAction__SetState(that, 3, v2);
}


void QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___begin_b__0(
        QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C7BD40(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, mo->fields.mNow, 0);
}


void QuestRewardHarvestAction_StateNone___ctor(QuestRewardHarvestAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StateNone__begin(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StateNone__end(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StateNone__update(
        QuestRewardHarvestAction_StateNone_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StatePlay___ctor(QuestRewardHarvestAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StatePlay__begin(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x19
  System_String_o *v24; // x0
  struct SimpleAnimation_o *v25; // x19
  System_String_o *v26; // x0
  QuestRewardHarvestAction_StatePlay_c *v27; // x8
  QuestRewardHarvestAction_StatePlay_o *v28; // x19
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4CEB352 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB352 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v17 = that->fields.animation;
    if ( v17 )
    {
      this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v19 = that->fields.animation;
          if ( !v19 )
            goto LABEL_49;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( !this )
            goto LABEL_49;
          v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_71613624(v19, v20, 0);
        }
        v21 = that->fields.animation;
        if ( v21 )
        {
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( this )
          {
            v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v21, v22, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v23 = that->fields.animation;
              if ( v23 )
              {
                this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(v23, 0);
                if ( this )
                {
                  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
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
    sub_1C7BD40(this, that);
  }
  v5 = that->fields.simpleAnimation;
  if ( !v5 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v5->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v5, v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_49;
    this = (QuestRewardHarvestAction_StatePlay_o *)v7->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_67121960(v7, v8, 0);
  }
  v9 = that->fields.simpleAnimation;
  if ( !v9 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v9->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_20;
    }
    v15 = (__int64)(&klass->vtable._6_end + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v15 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v15)(
                                                   v12,
                                                   *(_QWORD *)(v15 + 8),
                                                   0.0);
  v25 = that->fields.simpleAnimation;
  if ( !v25 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v25->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0);
  if ( !this )
    goto LABEL_49;
  v27 = this->klass;
  v28 = this;
  v29 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_46;
    }
    v31 = (__int64)(&v27[1]._1.name + 2 * *v30);
  }
  else
  {
LABEL_46:
    v31 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 1.0);
}


void QuestRewardHarvestAction_StatePlay__end(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StatePlay__update(
        QuestRewardHarvestAction_StatePlay_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4CEB353 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB353 = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)v5->fields.m_Clip;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v5, name, 0) )
      return;
LABEL_17:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardHarvestAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C7BD40(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.animation;
    if ( !v8 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
    if ( !this )
      goto LABEL_21;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0) )
      return;
    goto LABEL_17;
  }
}


void QuestRewardHarvestAction_StateTouchWait___ctor(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StateTouchWait__begin(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardHarvestAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0
    || (this = (QuestRewardHarvestAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0 )
  {
    sub_1C7BD40(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestRewardHarvestAction_StateTouchWait__end(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardHarvestAction_StateTouchWait__update(
        QuestRewardHarvestAction_StateTouchWait_o *this,
        QuestRewardHarvestAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x2

  if ( (byte_4CEB355 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AndroidBackKeyManager_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_QuestRewardHarvestAction_StateTouchWait_update__);
    sub_1C7BAE8(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C7BAE8(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4CEB355 = 1;
  }
  v4 = sub_1C7BD34(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v14 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C7BB00(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v15 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v17 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
          v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v19, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v20);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C7BD40(isTouchPush, v6);
  }
}


void QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardHarvestAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C7BD40(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}
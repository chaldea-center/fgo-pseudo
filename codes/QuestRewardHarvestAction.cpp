void QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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

  if ( (byte_5935283 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestRewardHarvestAction___ctor__);
    sub_21FFC50(&Method_CStateManager_QuestRewardHarvestAction__add__);
    sub_21FFC50(&CStateManager_QuestRewardHarvestAction__TypeInfo);
    sub_21FFC50(&QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    sub_21FFC50(&QuestRewardHarvestAction_StateNone_TypeInfo);
    sub_21FFC50(&QuestRewardHarvestAction_StatePlay_TypeInfo);
    sub_21FFC50(&QuestRewardHarvestAction_StateTouchWait_TypeInfo);
    byte_5935283 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E505AC *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_21FFEBC(QuestRewardHarvestAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_21FFEBC(QuestRewardHarvestAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v17 = (CStateManager_T__o *)*p_fsm;
    v18 = (Il2CppObject *)sub_21FFEBC(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_3E5065C *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v19 = (CStateManager_T__o *)*p_fsm,
          v20 = (Il2CppObject *)sub_21FFEBC(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v20, 0),
          !v19) )
    {
LABEL_9:
      sub_21FFECC(v13, v14);
    }
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v21);
  }
}


int32_t QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_5935287 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_21FFC50(&Method_CStateManager_QuestRewardHarvestAction__getState__);
    byte_5935287 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_21FFECC(this, method);
  return fsm->fields.m_state;
}


void QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x0
  System_Action_o *v18; // x21

  if ( (byte_5935286 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_QuestRewardHarvestAction__Play_b__12_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5935286 = 1;
  }
  this->fields.endAct = end_act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v17 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
      v17 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v17->static_fields->DEFAULT_FADE_TIME;
  }
  v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_21FFECC(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardHarvestAction__SetState(QuestRewardHarvestAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_5935288 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestRewardHarvestAction__setState__);
    byte_5935288 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *simpleAnimation; // x23
  __int64 v26; // x2
  SimpleAnimation_o *v27; // x21
  System_String_o *name; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_Animation_o *v34; // x22
  UnityEngine_Animation_o *v35; // x22
  System_String_o *v36; // x0
  UnityEngine_Animation_o *v37; // x21
  System_String_o *v38; // x0
  SimpleAnimation_o *v39; // x21
  System_String_o *v40; // x0
  __int64 v41; // x8
  __int64 v42; // x21
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  __int64 v46; // x2
  struct UISprite_array *itemSprite; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v49; // x22
  __int64 v50; // x23
  struct UISprite_array *v51; // x8
  UnityEngine_Object_o *v52; // x21
  struct UISprite_array *v53; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  il2cpp_array_size_t v56; // x8
  unsigned __int64 v57; // x22
  __int64 v58; // x23
  struct UILabel_array *v59; // x8
  UnityEngine_Object_o *v60; // x21
  struct UILabel_array *v61; // x8
  UnityEngine_GameObject_o *v62; // x0
  unsigned __int64 v63; // x26
  __int64 v64; // x29
  struct UISprite_array *v65; // x8
  unsigned __int64 max_length_low; // x9
  struct UILabel_array *v67; // x10
  QuestRewardInfo_o *v68; // x28
  UnityEngine_Object_o *v69; // x22
  struct UILabel_array *v70; // x8
  UnityEngine_Object_o *v71; // x22
  struct UISprite_array *v72; // x8
  UnityEngine_GameObject_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v80; // x8
  __int64 v81; // x8
  __int64 v82; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v84; // x0
  System_String_o *v85; // x0
  struct UILabel_array *v86; // x8
  UILabel_o *v87; // x23
  System_String_o *v88; // x24
  Il2CppObject *v89; // x0
  struct UILabel_array *v90; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v92; // x9
  UnityEngine_Object_o *v93; // x22
  struct UnityEngine_GameObject_array *v94; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v107; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v108; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5935285 & 1) == 0 )
  {
    sub_21FFC50(&AndroidBackKeyManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&StringLiteral_11302/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_21FFC50(&StringLiteral_26616/*"×"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_26924/*"＋"*/);
    byte_5935285 = 1;
  }
  v108 = 0;
  entity = 0;
  v107 = 0;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_151;
  ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58644924;
  p_animation = &this->fields.animation;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animation,
    (int32_t)ComponentInChildren_object__58644924,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_151;
  v15 = UnityEngine_Component__GetComponentInChildren_object__58644924(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v15;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( (transform & 1) != 0 )
  {
    v27 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_151;
    transform = (__int64)v27->fields.m_Clip;
    if ( !transform )
      goto LABEL_151;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v27, name, 0);
    if ( !transform )
      goto LABEL_151;
    v29 = *(_QWORD *)transform;
    v30 = transform;
    v31 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v31;
        v32 += 2;
        if ( !v31 )
          goto LABEL_15;
      }
      v33 = v29 + 16LL * (*(_DWORD *)v32 + 8) + 312;
    }
    else
    {
LABEL_15:
      v33 = sub_2237E2C(transform, SimpleAnimation_State_TypeInfo, 8);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, double))v33)(v30, *(_QWORD *)(v33 + 8), 0.0);
    v39 = *p_simpleAnimation;
    if ( !*p_simpleAnimation
      || (transform = (__int64)v39->fields.m_Clip) == 0
      || (v40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0),
          (transform = (__int64)SimpleAnimation__get_Item(v39, v40, 0)) == 0) )
    {
LABEL_151:
      sub_21FFECC(transform, v6);
    }
    v41 = *(_QWORD *)transform;
    v42 = transform;
    v43 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v43;
        v44 += 2;
        if ( !v43 )
          goto LABEL_34;
      }
      v45 = v41 + 16LL * (*(_DWORD *)v44 + 6) + 312;
    }
    else
    {
LABEL_34:
      v45 = sub_2237E2C(transform, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(__int64, _QWORD, double))v45)(v42, *(_QWORD *)(v45 + 8), 0.0);
  }
  else
  {
    v34 = *p_animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v26);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0);
    if ( (transform & 1) != 0 )
    {
      v35 = *p_animation;
      if ( !*p_animation )
        goto LABEL_151;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( !transform )
        goto LABEL_151;
      v36 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v35, v36, 0);
      if ( !transform )
        goto LABEL_151;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
      v37 = *p_animation;
      if ( !v37 )
        goto LABEL_151;
      transform = (__int64)UnityEngine_Animation__get_clip(v37, 0);
      if ( !transform )
        goto LABEL_151;
      v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v37, v38, 0);
      if ( !transform )
        goto LABEL_151;
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0);
    }
  }
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_151;
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__58644924(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_151;
  itemSprite = this->fields.itemSprite;
  *(_BYTE *)(transform + 109) = 1;
  if ( itemSprite )
  {
    max_length = itemSprite->max_length;
    if ( (int)max_length >= 1 )
    {
      v49 = 0;
      v50 = (unsigned int)max_length;
      do
      {
        v51 = this->fields.itemSprite;
        if ( !v51 )
          goto LABEL_151;
        if ( v49 >= LODWORD(v51->max_length) )
          goto LABEL_152;
        v52 = (UnityEngine_Object_o *)v51->m_Items[v49];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
        transform = UnityEngine_Object__op_Inequality(v52, 0, 0);
        if ( (transform & 1) != 0 )
        {
          v53 = this->fields.itemSprite;
          if ( !v53 )
            goto LABEL_151;
          if ( v49 >= LODWORD(v53->max_length) )
LABEL_152:
            sub_21FFED4(transform);
          transform = (__int64)v53->m_Items[v49];
          if ( !transform )
            goto LABEL_151;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          transform = (__int64)GameObjectExtensions__GetParent(gameObject, 0);
          if ( !transform )
            goto LABEL_151;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_151;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        }
      }
      while ( v50 != ++v49 );
    }
  }
  itemLabel = this->fields.itemLabel;
  if ( itemLabel )
  {
    v56 = itemLabel->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0;
      v58 = (unsigned int)v56;
      do
      {
        v59 = this->fields.itemLabel;
        if ( !v59 )
          goto LABEL_151;
        if ( v57 >= LODWORD(v59->max_length) )
          goto LABEL_152;
        v60 = (UnityEngine_Object_o *)v59->m_Items[v57];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
        transform = UnityEngine_Object__op_Inequality(v60, 0, 0);
        if ( (transform & 1) != 0 )
        {
          v61 = this->fields.itemLabel;
          if ( !v61 )
            goto LABEL_151;
          if ( v57 >= LODWORD(v61->max_length) )
            goto LABEL_152;
          transform = (__int64)v61->m_Items[v57];
          if ( !transform )
            goto LABEL_151;
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          transform = (__int64)GameObjectExtensions__GetParent(v62, 0);
          if ( !transform )
            goto LABEL_151;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_151;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        }
      }
      while ( v58 != ++v57 );
    }
  }
  if ( !infos )
    goto LABEL_151;
  if ( (int)infos->max_length >= 1 )
  {
    v63 = 0;
    v64 = (unsigned int)infos->max_length;
    arg1 = (Il2CppObject *)StringLiteral_26616/*"×"*/;
    while ( 1 )
    {
      if ( v63 >= LODWORD(infos->max_length) )
        goto LABEL_152;
      v65 = this->fields.itemSprite;
      if ( !v65 )
        goto LABEL_151;
      max_length_low = LODWORD(v65->max_length);
      if ( (__int64)v63 < (int)max_length_low )
      {
        v67 = this->fields.itemLabel;
        if ( !v67 )
          goto LABEL_151;
        if ( (__int64)v63 < SLODWORD(v67->max_length) )
        {
          if ( v63 >= max_length_low )
            goto LABEL_152;
          v68 = infos->m_Items[v63];
          v69 = (UnityEngine_Object_o *)v65->m_Items[v63];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
          transform = UnityEngine_Object__op_Equality(v69, 0, 0);
          if ( (transform & 1) == 0 )
          {
            v70 = this->fields.itemLabel;
            if ( !v70 )
              goto LABEL_151;
            if ( v63 >= LODWORD(v70->max_length) )
              goto LABEL_152;
            v71 = (UnityEngine_Object_o *)v70->m_Items[v63];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
            transform = UnityEngine_Object__op_Equality(v71, 0, 0);
            if ( (transform & 1) == 0 )
            {
              v72 = this->fields.itemSprite;
              if ( !v72 )
                goto LABEL_151;
              if ( v63 >= LODWORD(v72->max_length) )
                goto LABEL_152;
              transform = (__int64)v72->m_Items[v63];
              if ( !transform )
                goto LABEL_151;
              v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v73,
                                   (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74, v75);
              transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (transform & 1) == 0 )
                break;
            }
          }
        }
      }
LABEL_141:
      if ( v64 == ++v63 )
        goto LABEL_142;
    }
    if ( !v68 || !Component_object )
      goto LABEL_151;
    ItemIconComponent__SetGift_47936840(
      (ItemIconComponent_o *)Component_object,
      v68->fields.type,
      v68->fields.objectId,
      v68->fields.num,
      0,
      0);
    type = v68->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_151;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_151;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v107,
                v68->fields.objectId,
                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v107;
        if ( !v107 )
          goto LABEL_151;
        klass = ServantEntity__GetName((ServantEntity_o *)v107, -1, 0, -1, 0, 0);
        if ( *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_118;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_151;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_151;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v108,
                      v68->fields.objectId,
                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v108 )
          goto LABEL_151;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v108[2].klass;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
        {
LABEL_118:
          v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(klass, 0);
          v81 = StringLiteral_26616/*"×"*/;
          monitor = v85;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_151;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_151;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v68->fields.objectId,
                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_151;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0);
        v80 = (__int64 *)&StringLiteral_26924/*"＋"*/;
        if ( !IsCountableWithPlus )
          v80 = &StringLiteral_26616/*"×"*/;
        v81 = *v80;
LABEL_119:
        arg1 = (Il2CppObject *)v81;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0);
        if ( (transform & 1) == 0 )
        {
          v86 = this->fields.itemLabel;
          if ( !v86 )
            goto LABEL_151;
          if ( v63 >= LODWORD(v86->max_length) )
            goto LABEL_152;
          v87 = v86->m_Items[v63];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v46);
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11302/*"QUEST_CLEAR_REWARD_GET"*/, 0);
          num = v68->fields.num;
          v89 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &num);
          transform = (__int64)System_String__Format_75484644(v88, (Il2CppObject *)monitor, arg1, v89, 0);
          if ( !v87 )
            goto LABEL_151;
          UILabel__set_text(v87, (System_String_o *)transform, 0);
          v90 = this->fields.itemLabel;
          if ( !v90 )
            goto LABEL_151;
          if ( v63 >= LODWORD(v90->max_length) )
            goto LABEL_152;
          transform = (__int64)v90->m_Items[v63];
          if ( !transform )
            goto LABEL_151;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_151;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
        }
        imageFrame = this->fields.imageFrame;
        if ( imageFrame )
        {
          v92 = LODWORD(imageFrame->max_length);
          if ( (__int64)v63 < (int)v92 )
          {
            if ( v63 >= v92 )
              goto LABEL_152;
            v93 = (UnityEngine_Object_o *)imageFrame->m_Items[v63];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
            transform = UnityEngine_Object__op_Inequality(v93, 0, 0);
            if ( (transform & 1) != 0 )
            {
              v94 = this->fields.imageFrame;
              if ( !v94 )
                goto LABEL_151;
              if ( v63 >= LODWORD(v94->max_length) )
                goto LABEL_152;
              transform = (__int64)v94->m_Items[v63];
              if ( !transform )
                goto LABEL_151;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v68->fields.type == 1, 0);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v84, v6, v82);
    goto LABEL_118;
  }
LABEL_142:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_151;
    transform = (__int64)CommonUI__CreateScreeenTouchInfo(
                           (CommonUI_o *)Instance,
                           (UnityEngine_Transform_o *)transform,
                           0,
                           0);
    if ( !transform )
      goto LABEL_151;
    v98 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)transform,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v98;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_151;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_5935284 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestRewardHarvestAction__update__);
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5935284 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3E506C4 *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  __int64 v17; // x27
  __int64 v18; // x21
  __int64 v19; // x2
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x22
  __int64 v22; // x8
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  __int64 v37; // x2
  float y; // s8
  ManagerConfig_c *v39; // x0
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v42; // x22
  float x; // s10
  float v44; // s11
  float v45; // s12
  System_Action_o *v46; // x23
  System_Action_o *v47; // x21
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_593528B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestRewardHarvestAction_StateItemLabel_begin__);
    sub_21FFC50(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_21FFC50(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__);
    sub_21FFC50(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
    byte_593528B = 1;
  }
  v4 = sub_21FFEBC(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
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
    while ( 1 )
    {
      v18 = sub_21FFEBC(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v18, 0);
      if ( !*(_QWORD *)v13 )
        break;
      v20 = *(_QWORD *)(*(_QWORD *)v13 + 72LL);
      if ( !v20 )
        break;
      if ( v16 >= *(unsigned int *)(v20 + 24) )
        goto LABEL_31;
      v21 = *(UnityEngine_Object_o **)(v20 + 8 * v16 + 32);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
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
          sub_21FFED4(gameObject);
        gameObject = *(UnityEngine_GameObject_o **)(v22 + 8 * v16 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !v18 )
          break;
        *(_QWORD *)(v18 + 16) = gameObject;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 16), (int32_t)gameObject, v23, v24, v25, v26, v27, v28);
        gameObject = *(UnityEngine_GameObject_o **)(v18 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v18 + 16),
                             (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v18 + 24) = Component_object;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v18 + 24),
          (int32_t)Component_object,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v18 + 16), 0);
        y = LocalPosition.fields.y;
        v39 = ManagerConfig_TypeInfo;
        z = LocalPosition.fields.z;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v36, v37);
          v39 = ManagerConfig_TypeInfo;
        }
        WIDTH = v39->static_fields->WIDTH;
        v57 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v18 + 16), 0);
        v42 = *(MoveObject_o **)(v18 + 24);
        x = v57.fields.x;
        v44 = v57.fields.y;
        v45 = v57.fields.z;
        v46 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v46,
          (Il2CppObject *)v18,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0);
        v47 = *(System_Action_o **)(v4 + 24);
        if ( !v47 )
        {
          v47 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v47,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0);
          *(_QWORD *)(v4 + 24) = v47;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)v47, v48, v49, v50, v51, v52, v53);
        }
        if ( !v42 )
          break;
        v58.fields.x = (float)WIDTH;
        v58.fields.y = y;
        v58.fields.z = z;
        v59.fields.x = x;
        v59.fields.y = v44;
        v59.fields.z = v45;
        MoveObject__Play(v42, v58, v59, 0.25, v46, v47, 0.0, 17, 0);
      }
      if ( v17 == ++v16 )
        goto LABEL_27;
    }
LABEL_30:
    sub_21FFECC(gameObject, v6);
  }
LABEL_27:
  v54 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v54 = (_QWORD *)sub_21FFC68(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v55 = (System_Reflection_MethodBase_o *)sub_21FFC34(v54, v54[4]);
  OverwriteAssetSoundName__PlaySystemSe(v55, 4, 0, 0);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(this, method);
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
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
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

  if ( (byte_5935289 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5935289 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.animation;
    if ( v18 )
    {
      this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.animation;
          if ( !v20 )
            goto LABEL_49;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_82865240(v20, v21, 0);
        }
        v22 = that->fields.animation;
        if ( v22 )
        {
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v24 = that->fields.animation;
              if ( v24 )
              {
                this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0);
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
    sub_21FFECC(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestRewardHarvestAction_StatePlay_o *)v8->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_78338864(v8, v9, 0);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v10->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._6_end + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, double))v16)(
                                                   v13,
                                                   *(_QWORD *)(v16 + 8),
                                                   0.0);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestRewardHarvestAction_StatePlay_o *)v26->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.name + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
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
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_593528A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593528A = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)v6->fields.m_Clip;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v6, name, 0) )
      return;
LABEL_17:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardHarvestAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_21FFECC(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.animation;
    if ( !v9 )
      goto LABEL_21;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
    if ( !this )
      goto LABEL_21;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0) )
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
    sub_21FFECC(this, that);
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
  intptr_t isTouchPush; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_GameObject_o **v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *v16; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x2

  if ( (byte_593528C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AndroidBackKeyManager_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_QuestRewardHarvestAction_StateTouchWait_update__);
    sub_21FFC50(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_21FFC50(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_593528C = 1;
  }
  v4 = sub_21FFEBC(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = (UnityEngine_GameObject_o **)(v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
  isTouchPush = CTouch__isTouchPush(0);
  if ( (isTouchPush & 1) != 0 )
  {
    v16 = *v13;
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( v16 )
    {
      isTouchPush = v16[3].fields.m_CachedPtr;
      if ( isTouchPush )
      {
        isTouchPush = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0);
          v17 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v17 = (_QWORD *)sub_21FFC68(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v22 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19, v20);
            v22 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
          v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v24,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v24, 0);
            isTouchPush = (intptr_t)*v13;
            if ( *v13 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v25);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_21FFECC(isTouchPush, v6);
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
    sub_21FFECC(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}
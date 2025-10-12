void QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C3475C & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestRewardHarvestAction___ctor__);
    sub_1C32C20(&Method_CStateManager_QuestRewardHarvestAction__add__);
    sub_1C32C20(&CStateManager_QuestRewardHarvestAction__TypeInfo);
    sub_1C32C20(&QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    sub_1C32C20(&QuestRewardHarvestAction_StateNone_TypeInfo);
    sub_1C32C20(&QuestRewardHarvestAction_StatePlay_TypeInfo);
    sub_1C32C20(&QuestRewardHarvestAction_StateTouchWait_TypeInfo);
    byte_4C3475C = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C32E6C(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3322708 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C32E6C(QuestRewardHarvestAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v10 = (CStateManager_T__o *)*p_fsm;
    v11 = (Il2CppObject *)sub_1C32E6C(QuestRewardHarvestAction_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10 )
      goto LABEL_9;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v12 = (CStateManager_T__o *)*p_fsm;
    v13 = (Il2CppObject *)sub_1C32E6C(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12
      || (CStateManager_object___add(
            v12,
            2,
            (IState_T__o *)v13,
            (const MethodInfo_33227B0 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v14 = (CStateManager_T__o *)*p_fsm,
          v15 = (Il2CppObject *)sub_1C32E6C(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
LABEL_9:
      sub_1C32E7C(v9);
    }
    CStateManager_object___add(
      v14,
      3,
      (IState_T__o *)v15,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v16);
  }
}


int32_t QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4C34760 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_1C32C20(&Method_CStateManager_QuestRewardHarvestAction__getState__);
    byte_4C34760 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(this);
  return fsm->fields.m_state;
}


void QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x0
  System_Action_o *v11; // x21

  if ( (byte_4C3475F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_QuestRewardHarvestAction__Play_b__12_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3475F = 1;
  }
  this->fields.endAct = end_act;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v10->static_fields->DEFAULT_FADE_TIME;
  }
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C32E7C(gameObject);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v11, 0);
}


void QuestRewardHarvestAction__SetState(QuestRewardHarvestAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C34761 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestRewardHarvestAction__setState__);
    byte_4C34761 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332283C *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 transform; // x0
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v15; // x21
  System_String_o *name; // x0
  __int64 v17; // x8
  __int64 v18; // x21
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Animation_o *v22; // x22
  UnityEngine_Animation_o *v23; // x22
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x21
  System_String_o *v26; // x0
  SimpleAnimation_o *v27; // x21
  System_String_o *v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  struct UISprite_array *itemSprite; // x8
  unsigned __int64 v35; // x22
  __int64 v36; // x23
  UnityEngine_Object_o *v37; // x21
  struct UISprite_array *v38; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  unsigned __int64 v41; // x22
  __int64 v42; // x23
  UnityEngine_Object_o *v43; // x21
  struct UILabel_array *v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  unsigned __int64 v46; // x26
  __int64 v47; // x29
  struct UISprite_array *v48; // x8
  unsigned __int64 max_length_low; // x9
  struct UILabel_array *v50; // x10
  QuestRewardInfo_o *v51; // x28
  UnityEngine_Object_o *v52; // x22
  struct UILabel_array *v53; // x8
  UnityEngine_Object_o *v54; // x22
  struct UISprite_array *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v61; // x8
  __int64 v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v64; // x0
  System_String_o *v65; // x0
  struct UILabel_array *v66; // x8
  UILabel_o *v67; // x23
  System_String_o *v68; // x24
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x5
  __int64 v73; // x6
  __int64 v74; // x7
  Il2CppObject *v75; // x0
  struct UILabel_array *v76; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v78; // x9
  UnityEngine_Object_o *v79; // x22
  struct UnityEngine_GameObject_array *v80; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v89; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v90; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3475E & 1) == 0 )
  {
    sub_1C32C20(&AndroidBackKeyManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    sub_1C32C20(&StringLiteral_10848/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_1C32C20(&StringLiteral_25262/*"×"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_25571/*"＋"*/);
    byte_4C3475E = 1;
  }
  v90 = 0;
  entity = 0;
  v89 = 0;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51199524;
  p_animation = &this->fields.animation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animation, (int32_t)ComponentInChildren_object__51199524, v8, v9);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  v10 = UnityEngine_Component__GetComponentInChildren_object__51199524(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v10;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnimation, (int32_t)v10, v12, v13);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( (transform & 1) != 0 )
  {
    v15 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v15->fields.m_Clip;
    if ( !transform )
      goto LABEL_153;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v15, name, 0);
    if ( !transform )
      goto LABEL_153;
    v17 = *(_QWORD *)transform;
    v18 = transform;
    v19 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v20 = (SimpleAnimation_State_c **)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_15;
      }
      v21 = v17 + 16LL * (*(_DWORD *)v20 + 8) + 312;
    }
    else
    {
LABEL_15:
      v21 = sub_1C83438(transform, SimpleAnimation_State_TypeInfo, 8);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
    v27 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v27->fields.m_Clip;
    if ( !transform )
      goto LABEL_153;
    v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v27, v28, 0);
    if ( !transform )
      goto LABEL_153;
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
          goto LABEL_34;
      }
      v33 = v29 + 16LL * (*(_DWORD *)v32 + 6) + 312;
    }
    else
    {
LABEL_34:
      v33 = sub_1C83438(transform, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 0.0);
  }
  else
  {
    v22 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0);
    if ( (transform & 1) != 0 )
    {
      v23 = *p_animation;
      if ( !*p_animation )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( !transform )
        goto LABEL_153;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v23, v24, 0);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
      v25 = *p_animation;
      if ( !v25 )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(v25, 0);
      if ( !transform )
        goto LABEL_153;
      v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v25, v26, 0);
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
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__51199524(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_153;
  *(_BYTE *)(transform + 109) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite && (int)itemSprite->max_length >= 1 )
  {
    v35 = 0;
    v36 = (unsigned int)itemSprite->max_length - 1LL;
    while ( v35 < LODWORD(itemSprite->max_length) )
    {
      v37 = (UnityEngine_Object_o *)itemSprite->m_Items[v35];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v37, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v38 = this->fields.itemSprite;
        if ( !v38 )
          goto LABEL_153;
        if ( v35 >= LODWORD(v38->max_length) )
          break;
        transform = (__int64)v38->m_Items[v35];
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
      if ( v36 == v35 )
        goto LABEL_56;
      itemSprite = this->fields.itemSprite;
      ++v35;
      if ( !itemSprite )
        goto LABEL_153;
    }
LABEL_143:
    sub_1C32E84(transform);
  }
LABEL_56:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel && (int)itemLabel->max_length >= 1 )
  {
    v41 = 0;
    v42 = (unsigned int)itemLabel->max_length - 1LL;
    while ( v41 < LODWORD(itemLabel->max_length) )
    {
      v43 = (UnityEngine_Object_o *)itemLabel->m_Items[v41];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v43, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v44 = this->fields.itemLabel;
        if ( !v44 )
          goto LABEL_153;
        if ( v41 >= LODWORD(v44->max_length) )
          goto LABEL_143;
        transform = (__int64)v44->m_Items[v41];
        if ( !transform )
          goto LABEL_153;
        v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        transform = (__int64)GameObjectExtensions__GetParent(v45, 0);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( v42 == v41 )
        goto LABEL_72;
      itemLabel = this->fields.itemLabel;
      ++v41;
      if ( !itemLabel )
        goto LABEL_153;
    }
    goto LABEL_143;
  }
LABEL_72:
  if ( !infos )
LABEL_153:
    sub_1C32E7C(transform);
  if ( (int)infos->max_length >= 1 )
  {
    v46 = 0;
    v47 = (unsigned int)infos->max_length - 1LL;
    arg1 = (Il2CppObject *)StringLiteral_25262/*"×"*/;
    while ( 1 )
    {
      v48 = this->fields.itemSprite;
      if ( !v48 )
        goto LABEL_153;
      max_length_low = LODWORD(v48->max_length);
      if ( (__int64)v46 < (int)max_length_low )
      {
        v50 = this->fields.itemLabel;
        if ( !v50 )
          goto LABEL_153;
        if ( (__int64)v46 < SLODWORD(v50->max_length) )
        {
          if ( v46 >= max_length_low )
            goto LABEL_143;
          v51 = infos->m_Items[v46];
          v52 = (UnityEngine_Object_o *)v48->m_Items[v46];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = UnityEngine_Object__op_Equality(v52, 0, 0);
          if ( (transform & 1) == 0 )
          {
            v53 = this->fields.itemLabel;
            if ( !v53 )
              goto LABEL_153;
            if ( v46 >= LODWORD(v53->max_length) )
              goto LABEL_143;
            v54 = (UnityEngine_Object_o *)v53->m_Items[v46];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Equality(v54, 0, 0);
            if ( (transform & 1) == 0 )
            {
              v55 = this->fields.itemSprite;
              if ( !v55 )
                goto LABEL_153;
              if ( v46 >= LODWORD(v55->max_length) )
                goto LABEL_143;
              transform = (__int64)v55->m_Items[v46];
              if ( !transform )
                goto LABEL_153;
              v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v56,
                                   (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
      if ( v47 == v46 )
        goto LABEL_144;
      if ( ++v46 >= LODWORD(infos->max_length) )
        goto LABEL_143;
    }
    if ( !v51 || !Component_object )
      goto LABEL_153;
    ItemIconComponent__SetGift_40822420(
      (ItemIconComponent_o *)Component_object,
      v51->fields.type,
      v51->fields.objectId,
      v51->fields.num,
      0,
      0);
    type = v51->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_153;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v89,
                v51->fields.objectId,
                (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v89;
        if ( !v89 )
          goto LABEL_153;
        klass = ServantEntity__GetName((ServantEntity_o *)v89, -1, 0, -1, 0, 0);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          goto LABEL_118;
        v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v90,
                      v51->fields.objectId,
                      (const MethodInfo_3396884 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v90 )
          goto LABEL_153;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v90[2].klass;
        v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_118:
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(klass, 0);
          v62 = StringLiteral_25262/*"×"*/;
          monitor = v65;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v51->fields.objectId,
                      (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_153;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0);
        v61 = (__int64 *)&StringLiteral_25571/*"＋"*/;
        if ( !IsCountableWithPlus )
          v61 = &StringLiteral_25262/*"×"*/;
        v62 = *v61;
LABEL_119:
        arg1 = (Il2CppObject *)v62;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0);
        if ( (transform & 1) == 0 )
        {
          v66 = this->fields.itemLabel;
          if ( !v66 )
            goto LABEL_153;
          if ( v46 >= LODWORD(v66->max_length) )
            goto LABEL_143;
          v67 = v66->m_Items[v46];
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10848/*"QUEST_CLEAR_REWARD_GET"*/, 0);
          num = v51->fields.num;
          v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v69, v70, v71, v72, v73, v74);
          transform = (__int64)System_String__Format_63559904(v68, (Il2CppObject *)monitor, arg1, v75, 0);
          if ( !v67 )
            goto LABEL_153;
          UILabel__set_text(v67, (System_String_o *)transform, 0);
          v76 = this->fields.itemLabel;
          if ( !v76 )
            goto LABEL_153;
          if ( v46 >= LODWORD(v76->max_length) )
            goto LABEL_143;
          transform = (__int64)v76->m_Items[v46];
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
          v78 = LODWORD(imageFrame->max_length);
          if ( (__int64)v46 < (int)v78 )
          {
            if ( v46 >= v78 )
              goto LABEL_143;
            v79 = (UnityEngine_Object_o *)imageFrame->m_Items[v46];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality(v79, 0, 0);
            if ( (transform & 1) != 0 )
            {
              v80 = this->fields.imageFrame;
              if ( !v80 )
                goto LABEL_153;
              if ( v46 >= LODWORD(v80->max_length) )
                goto LABEL_143;
              transform = (__int64)v80->m_Items[v46];
              if ( !transform )
                goto LABEL_153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v51->fields.type == 1, 0);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v64);
    goto LABEL_118;
  }
LABEL_144:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v84 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v84;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)v84, v85, v86);
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

  if ( (byte_4C3475D & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestRewardHarvestAction__update__);
    sub_1C32C20(&CTouch_TypeInfo);
    byte_4C3475D = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3322818 *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  __int64 v12; // x29
  System_Action_o **v13; // x21
  __int64 v14; // x22
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x23
  __int64 v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ManagerConfig_c *v23; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v27; // x23
  float x; // s10
  float v29; // s11
  float v30; // s12
  System_Action_o *v31; // x24
  System_Action_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C34764 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_QuestRewardHarvestAction_StateItemLabel_begin__);
    sub_1C32C20(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C32C20(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    sub_1C32C20(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__);
    sub_1C32C20(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
    byte_4C34764 = 1;
  }
  v4 = sub_1C32E6C(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_30;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 72LL);
  if ( !v9 )
    goto LABEL_30;
  v10 = *(_QWORD *)(v9 + 24);
  if ( (int)v10 >= 1 )
  {
    v11 = 0;
    v12 = (unsigned int)v10;
    v13 = (System_Action_o **)(v4 + 24);
    while ( 1 )
    {
      v14 = sub_1C32E6C(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( !*(_QWORD *)v8 )
        break;
      v15 = *(_QWORD *)(*(_QWORD *)v8 + 72LL);
      if ( !v15 )
        break;
      if ( v11 >= *(unsigned int *)(v15 + 24) )
        goto LABEL_31;
      v16 = *(UnityEngine_Object_o **)(v15 + 8 * v11 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v16, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v8 )
          break;
        v17 = *(_QWORD *)(*(_QWORD *)v8 + 72LL);
        if ( !v17 )
          break;
        if ( v11 >= *(unsigned int *)(v17 + 24) )
LABEL_31:
          sub_1C32E84(gameObject);
        gameObject = *(UnityEngine_GameObject_o **)(v17 + 8 * v11 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !v14 )
          break;
        *(_QWORD *)(v14 + 16) = gameObject;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 16), (int32_t)gameObject, v18, v19);
        gameObject = *(UnityEngine_GameObject_o **)(v14 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v14 + 16),
                             (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v14 + 24) = Component_object;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 24), (int32_t)Component_object, v21, v22);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v14 + 16), 0);
        v23 = ManagerConfig_TypeInfo;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v23 = ManagerConfig_TypeInfo;
        }
        WIDTH = v23->static_fields->WIDTH;
        v38 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v14 + 16), 0);
        v27 = *(MoveObject_o **)(v14 + 24);
        x = v38.fields.x;
        v29 = v38.fields.y;
        v30 = v38.fields.z;
        v31 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v31,
          (Il2CppObject *)v14,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0);
        v32 = *v13;
        if ( !*v13 )
        {
          v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0);
          *(_QWORD *)(v4 + 24) = v32;
          sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 24), (int32_t)v32, v33, v34);
        }
        if ( !v27 )
          break;
        v39.fields.x = (float)WIDTH;
        v39.fields.y = y;
        v39.fields.z = z;
        v40.fields.x = x;
        v40.fields.y = v29;
        v40.fields.z = v30;
        MoveObject__Play(v27, v39, v40, 0.25, v31, v32, 0.0, 17, 0);
      }
      if ( v12 == ++v11 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1C32E7C(gameObject);
  }
LABEL_27:
  v35 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1C32C38(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v36 = (System_Reflection_MethodBase_o *)sub_1C32C04(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 4, 0, 0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C34762 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C34762 = 1;
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
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_70968924(v19, v20, 0);
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
    sub_1C32E7C(this);
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_66464300(v7, v8, 0);
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
    v15 = sub_1C83438(this, SimpleAnimation_State_TypeInfo, 6);
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
    v31 = sub_1C83438(this, SimpleAnimation_State_TypeInfo, 8);
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

  if ( (byte_4C34763 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C34763 = 1;
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardHarvestAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4C34765 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AndroidBackKeyManager_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_QuestRewardHarvestAction_StateTouchWait_update__);
    sub_1C32C20(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C32C20(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C34765 = 1;
  }
  v4 = sub_1C32E6C(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v8 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v8 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v9 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C32C38(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v12 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
          v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v8;
            if ( *(_QWORD *)v8 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v15);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(isTouchPush);
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
    sub_1C32E7C(this);
  ActionExtensions__Call(that->fields.endAct, 0);
}
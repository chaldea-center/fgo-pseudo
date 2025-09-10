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
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4C24088 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestRewardHarvestAction___ctor__);
    sub_1C2D490(&Method_CStateManager_QuestRewardHarvestAction__add__);
    sub_1C2D490(&CStateManager_QuestRewardHarvestAction__TypeInfo);
    sub_1C2D490(&QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    sub_1C2D490(&QuestRewardHarvestAction_StateNone_TypeInfo);
    sub_1C2D490(&QuestRewardHarvestAction_StatePlay_TypeInfo);
    sub_1C2D490(&QuestRewardHarvestAction_StateTouchWait_TypeInfo);
    byte_4C24088 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C2D6DC(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3313C68 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C2D6DC(QuestRewardHarvestAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v11 = (CStateManager_T__o *)*p_fsm;
    v12 = (Il2CppObject *)sub_1C2D6DC(QuestRewardHarvestAction_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11 )
      goto LABEL_9;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v13 = (CStateManager_T__o *)*p_fsm;
    v14 = (Il2CppObject *)sub_1C2D6DC(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    System_Object___ctor(v14, 0);
    if ( !v13
      || (CStateManager_object___add(
            v13,
            2,
            (IState_T__o *)v14,
            (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v15 = (CStateManager_T__o *)*p_fsm,
          v16 = (Il2CppObject *)sub_1C2D6DC(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v16, 0),
          !v15) )
    {
LABEL_9:
      sub_1C2D6EC(v9, v10);
    }
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v17);
  }
}


int32_t QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4C2408C & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_1C2D490(&Method_CStateManager_QuestRewardHarvestAction__getState__);
    byte_4C2408C = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(this, method);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v11; // x0
  System_Action_o *v12; // x21

  if ( (byte_4C2408B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_QuestRewardHarvestAction__Play_b__12_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2408B = 1;
  }
  this->fields.endAct = end_act;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v11 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v11->static_fields->DEFAULT_FADE_TIME;
  }
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(gameObject, v9);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardHarvestAction__SetState(QuestRewardHarvestAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C2408D & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestRewardHarvestAction__setState__);
    byte_4C2408D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3313D9C *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__51139460; // x0
  UnityEngine_Animation_o **p_animation; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v16; // x21
  System_String_o *name; // x0
  __int64 v18; // x8
  __int64 v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Animation_o *v23; // x22
  UnityEngine_Animation_o *v24; // x22
  System_String_o *v25; // x0
  UnityEngine_Animation_o *v26; // x21
  System_String_o *v27; // x0
  SimpleAnimation_o *v28; // x21
  System_String_o *v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x2
  struct UISprite_array *itemSprite; // x8
  unsigned __int64 v37; // x22
  __int64 v38; // x23
  UnityEngine_Object_o *v39; // x21
  struct UISprite_array *v40; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  unsigned __int64 v43; // x22
  __int64 v44; // x23
  UnityEngine_Object_o *v45; // x21
  struct UILabel_array *v46; // x8
  UnityEngine_GameObject_o *v47; // x0
  unsigned __int64 v48; // x26
  __int64 v49; // x29
  struct UISprite_array *v50; // x8
  unsigned __int64 max_length_low; // x9
  struct UILabel_array *v52; // x10
  QuestRewardInfo_o *v53; // x28
  UnityEngine_Object_o *v54; // x22
  struct UILabel_array *v55; // x8
  UnityEngine_Object_o *v56; // x22
  struct UISprite_array *v57; // x8
  UnityEngine_GameObject_o *v58; // x0
  Il2CppObject *Component_object; // x22
  int32_t type; // w8
  System_String_o *monitor; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v63; // x8
  __int64 v64; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v66; // x0
  System_String_o *v67; // x0
  struct UILabel_array *v68; // x8
  UILabel_o *v69; // x23
  System_String_o *v70; // x24
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  struct UILabel_array *v75; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v77; // x9
  UnityEngine_Object_o *v78; // x22
  struct UnityEngine_GameObject_array *v79; // x8
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  Il2CppObject *arg1; // [xsp+8h] [xbp-88h]
  int32_t num; // [xsp+14h] [xbp-7Ch] BYREF
  Il2CppObject *v88; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v89; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C2408A & 1) == 0 )
  {
    sub_1C2D490(&AndroidBackKeyManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_10842/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_1C2D490(&StringLiteral_25244/*"×"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_25551/*"＋"*/);
    byte_4C2408A = 1;
  }
  v89 = 0;
  entity = 0;
  v88 = 0;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                           (UnityEngine_Component_o *)transform,
                                           (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51139460;
  p_animation = &this->fields.animation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animation, (int32_t)ComponentInChildren_object__51139460, v9, v10);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_153;
  v11 = UnityEngine_Component__GetComponentInChildren_object__51139460(
          (UnityEngine_Component_o *)transform,
          (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)v11;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.simpleAnimation, (int32_t)v11, v13, v14);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( (transform & 1) != 0 )
  {
    v16 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v16->fields.m_Clip;
    if ( !transform )
      goto LABEL_153;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v16, name, 0);
    if ( !transform )
      goto LABEL_153;
    v18 = *(_QWORD *)transform;
    v19 = transform;
    v20 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v21 = (SimpleAnimation_State_c **)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_15;
      }
      v22 = v18 + 16LL * (*(_DWORD *)v21 + 8) + 312;
    }
    else
    {
LABEL_15:
      v22 = sub_1C7DCA8(transform, SimpleAnimation_State_TypeInfo, 8);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
    v28 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_153;
    transform = (__int64)v28->fields.m_Clip;
    if ( !transform )
      goto LABEL_153;
    v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
    transform = (__int64)SimpleAnimation__get_Item(v28, v29, 0);
    if ( !transform )
      goto LABEL_153;
    v30 = *(_QWORD *)transform;
    v31 = transform;
    v32 = *(unsigned __int16 *)(*(_QWORD *)transform + 302LL);
    if ( *(_WORD *)(*(_QWORD *)transform + 302LL) )
    {
      v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = v30 + 16LL * (*(_DWORD *)v33 + 6) + 312;
    }
    else
    {
LABEL_34:
      v34 = sub_1C7DCA8(transform, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 0.0);
  }
  else
  {
    v23 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
    if ( (transform & 1) != 0 )
    {
      v24 = *p_animation;
      if ( !*p_animation )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( !transform )
        goto LABEL_153;
      v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v24, v25, 0);
      if ( !transform )
        goto LABEL_153;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
      v26 = *p_animation;
      if ( !v26 )
        goto LABEL_153;
      transform = (__int64)UnityEngine_Animation__get_clip(v26, 0);
      if ( !transform )
        goto LABEL_153;
      v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
      transform = (__int64)UnityEngine_Animation__get_Item(v26, v27, 0);
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
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_object__51139460(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_153;
  *(_BYTE *)(transform + 109) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite && (int)itemSprite->max_length >= 1 )
  {
    v37 = 0;
    v38 = (unsigned int)itemSprite->max_length - 1LL;
    while ( v37 < LODWORD(itemSprite->max_length) )
    {
      v39 = (UnityEngine_Object_o *)itemSprite->m_Items[v37];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v39, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v40 = this->fields.itemSprite;
        if ( !v40 )
          goto LABEL_153;
        if ( v37 >= LODWORD(v40->max_length) )
          break;
        transform = (__int64)v40->m_Items[v37];
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
      if ( v38 == v37 )
        goto LABEL_56;
      itemSprite = this->fields.itemSprite;
      ++v37;
      if ( !itemSprite )
        goto LABEL_153;
    }
LABEL_143:
    sub_1C2D6F4(transform, v6, v35);
  }
LABEL_56:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel && (int)itemLabel->max_length >= 1 )
  {
    v43 = 0;
    v44 = (unsigned int)itemLabel->max_length - 1LL;
    while ( v43 < LODWORD(itemLabel->max_length) )
    {
      v45 = (UnityEngine_Object_o *)itemLabel->m_Items[v43];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality(v45, 0, 0);
      if ( (transform & 1) != 0 )
      {
        v46 = this->fields.itemLabel;
        if ( !v46 )
          goto LABEL_153;
        if ( v43 >= LODWORD(v46->max_length) )
          goto LABEL_143;
        transform = (__int64)v46->m_Items[v43];
        if ( !transform )
          goto LABEL_153;
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        transform = (__int64)GameObjectExtensions__GetParent(v47, 0);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
      }
      if ( v44 == v43 )
        goto LABEL_72;
      itemLabel = this->fields.itemLabel;
      ++v43;
      if ( !itemLabel )
        goto LABEL_153;
    }
    goto LABEL_143;
  }
LABEL_72:
  if ( !infos )
LABEL_153:
    sub_1C2D6EC(transform, v6);
  if ( (int)infos->max_length >= 1 )
  {
    v48 = 0;
    v49 = (unsigned int)infos->max_length - 1LL;
    arg1 = (Il2CppObject *)StringLiteral_25244/*"×"*/;
    while ( 1 )
    {
      v50 = this->fields.itemSprite;
      if ( !v50 )
        goto LABEL_153;
      max_length_low = LODWORD(v50->max_length);
      if ( (__int64)v48 < (int)max_length_low )
      {
        v52 = this->fields.itemLabel;
        if ( !v52 )
          goto LABEL_153;
        if ( (__int64)v48 < SLODWORD(v52->max_length) )
        {
          if ( v48 >= max_length_low )
            goto LABEL_143;
          v53 = infos->m_Items[v48];
          v54 = (UnityEngine_Object_o *)v50->m_Items[v48];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = UnityEngine_Object__op_Equality(v54, 0, 0);
          if ( (transform & 1) == 0 )
          {
            v55 = this->fields.itemLabel;
            if ( !v55 )
              goto LABEL_153;
            if ( v48 >= LODWORD(v55->max_length) )
              goto LABEL_143;
            v56 = (UnityEngine_Object_o *)v55->m_Items[v48];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Equality(v56, 0, 0);
            if ( (transform & 1) == 0 )
            {
              v57 = this->fields.itemSprite;
              if ( !v57 )
                goto LABEL_153;
              if ( v48 >= LODWORD(v57->max_length) )
                goto LABEL_143;
              transform = (__int64)v57->m_Items[v48];
              if ( !transform )
                goto LABEL_153;
              v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
              Component_object = GameObjectExtensions__SafeGetComponent_object_(
                                   v58,
                                   (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
      if ( v49 == v48 )
        goto LABEL_144;
      if ( ++v48 >= LODWORD(infos->max_length) )
        goto LABEL_143;
    }
    if ( !v53 || !Component_object )
      goto LABEL_153;
    ItemIconComponent__SetGift_40700316(
      (ItemIconComponent_o *)Component_object,
      v53->fields.type,
      v53->fields.objectId,
      v53->fields.num,
      0,
      0);
    type = v53->fields.type;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_153;
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                &v88,
                v53->fields.objectId,
                (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_120;
        transform = (__int64)v88;
        if ( !v88 )
          goto LABEL_153;
        klass = ServantEntity__GetName((ServantEntity_o *)v88, -1, 0, -1, 0, 0);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          goto LABEL_118;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &v89,
                      v53->fields.objectId,
                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !v89 )
          goto LABEL_153;
        klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v89[2].klass;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_118:
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(klass, 0);
          v64 = StringLiteral_25244/*"×"*/;
          monitor = v67;
          goto LABEL_119;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_153;
        transform = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)transform,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_153;
        transform = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
                      &entity,
                      v53->fields.objectId,
                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_120;
        if ( !entity )
          goto LABEL_153;
        monitor = (System_String_o *)entity[1].monitor;
        IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)entity[3].klass, 0);
        v63 = (__int64 *)&StringLiteral_25551/*"＋"*/;
        if ( !IsCountableWithPlus )
          v63 = &StringLiteral_25244/*"×"*/;
        v64 = *v63;
LABEL_119:
        arg1 = (Il2CppObject *)v64;
LABEL_120:
        transform = System_String__IsNullOrEmpty(monitor, 0);
        if ( (transform & 1) == 0 )
        {
          v68 = this->fields.itemLabel;
          if ( !v68 )
            goto LABEL_153;
          if ( v48 >= LODWORD(v68->max_length) )
            goto LABEL_143;
          v69 = v68->m_Items[v48];
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_10842/*"QUEST_CLEAR_REWARD_GET"*/, 0);
          num = v53->fields.num;
          v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v71, v72, v73);
          transform = (__int64)System_String__Format_63499224(v70, (Il2CppObject *)monitor, arg1, v74, 0);
          if ( !v69 )
            goto LABEL_153;
          UILabel__set_text(v69, (System_String_o *)transform, 0);
          v75 = this->fields.itemLabel;
          if ( !v75 )
            goto LABEL_153;
          if ( v48 >= LODWORD(v75->max_length) )
            goto LABEL_143;
          transform = (__int64)v75->m_Items[v48];
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
          v77 = LODWORD(imageFrame->max_length);
          if ( (__int64)v48 < (int)v77 )
          {
            if ( v48 >= v77 )
              goto LABEL_143;
            v78 = (UnityEngine_Object_o *)imageFrame->m_Items[v48];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality(v78, 0, 0);
            if ( (transform & 1) != 0 )
            {
              v79 = this->fields.imageFrame;
              if ( !v79 )
                goto LABEL_153;
              if ( v48 >= LODWORD(v79->max_length) )
                goto LABEL_143;
              transform = (__int64)v79->m_Items[v48];
              if ( !transform )
                goto LABEL_153;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v53->fields.type == 1, 0);
            }
          }
        }
        goto LABEL_141;
      default:
        goto LABEL_120;
    }
    j_il2cpp_runtime_class_init_0(v66);
    goto LABEL_118;
  }
LABEL_144:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v83 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)v83;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)v83, v84, v85);
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

  if ( (byte_4C24089 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestRewardHarvestAction__update__);
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C24089 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3313D78 *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  const MethodInfo *v8; // x3
  __int64 v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  __int64 v13; // x29
  System_Action_o **v14; // x21
  __int64 v15; // x22
  __int64 v16; // x2
  __int64 v17; // x8
  UnityEngine_Object_o *v18; // x23
  __int64 v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ManagerConfig_c *v25; // x0
  float y; // s8
  float z; // s9
  int WIDTH; // s13
  MoveObject_o *v29; // x23
  float x; // s10
  float v31; // s11
  float v32; // s12
  System_Action_o *v33; // x24
  System_Action_o *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C24090 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_QuestRewardHarvestAction_StateItemLabel_begin__);
    sub_1C2D490(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_1C2D490(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    sub_1C2D490(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__);
    sub_1C2D490(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
    byte_4C24090 = 1;
  }
  v4 = sub_1C2D6DC(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_30;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 72LL);
  if ( !v10 )
    goto LABEL_30;
  v11 = *(_QWORD *)(v10 + 24);
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    v13 = (unsigned int)v11;
    v14 = (System_Action_o **)(v4 + 24);
    while ( 1 )
    {
      v15 = sub_1C2D6DC(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( !*(_QWORD *)v9 )
        break;
      v17 = *(_QWORD *)(*(_QWORD *)v9 + 72LL);
      if ( !v17 )
        break;
      if ( v12 >= *(unsigned int *)(v17 + 24) )
        goto LABEL_31;
      v18 = *(UnityEngine_Object_o **)(v17 + 8 * v12 + 32);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v18, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v9 )
          break;
        v19 = *(_QWORD *)(*(_QWORD *)v9 + 72LL);
        if ( !v19 )
          break;
        if ( v12 >= *(unsigned int *)(v19 + 24) )
LABEL_31:
          sub_1C2D6F4(gameObject, v6, v16);
        gameObject = *(UnityEngine_GameObject_o **)(v19 + 8 * v12 + 32);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !v15 )
          break;
        *(_QWORD *)(v15 + 16) = gameObject;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 16), (int32_t)gameObject, v20, v21);
        gameObject = *(UnityEngine_GameObject_o **)(v15 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        Component_object = GameObjectExtensions__SafeGetComponent_object_(
                             *(UnityEngine_GameObject_o **)(v15 + 16),
                             (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v15 + 24) = Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 24), (int32_t)Component_object, v23, v24);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v15 + 16), 0);
        v25 = ManagerConfig_TypeInfo;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v25 = ManagerConfig_TypeInfo;
        }
        WIDTH = v25->static_fields->WIDTH;
        v40 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v15 + 16), 0);
        v29 = *(MoveObject_o **)(v15 + 24);
        x = v40.fields.x;
        v31 = v40.fields.y;
        v32 = v40.fields.z;
        v33 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v15,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0);
        v34 = *v14;
        if ( !*v14 )
        {
          v34 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v34,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0);
          *(_QWORD *)(v4 + 24) = v34;
          sub_1C2D434((CGThumbnailListItem_o *)(v4 + 24), (int32_t)v34, v35, v36);
        }
        if ( !v29 )
          break;
        v41.fields.x = (float)WIDTH;
        v41.fields.y = y;
        v41.fields.z = z;
        v42.fields.x = x;
        v42.fields.y = v31;
        v42.fields.z = v32;
        MoveObject__Play(v29, v41, v42, 0.25, v33, v34, 0.0, 17, 0);
      }
      if ( v13 == ++v12 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1C2D6EC(gameObject, v6);
  }
LABEL_27:
  v37 = Method_QuestRewardHarvestAction_StateItemLabel_begin__;
  if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateItemLabel_begin__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1C2D4A8(Method_QuestRewardHarvestAction_StateItemLabel_begin__);
  v38 = (System_Reflection_MethodBase_o *)sub_1C2D474(v37, v37[4]);
  OverwriteAssetSoundName__PlaySystemSe(v38, 4, 0, 0);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2408E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C2408E = 1;
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
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_70908988(v19, v20, 0);
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
    sub_1C2D6EC(this, that);
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_66404364(v7, v8, 0);
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
    v15 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 6);
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
    v31 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 8);
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

  if ( (byte_4C2408F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2408F = 1;
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardHarvestAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C2D6EC(this, that);
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
    sub_1C2D6EC(this, that);
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
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4C24091 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AndroidBackKeyManager_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_QuestRewardHarvestAction_StateTouchWait_update__);
    sub_1C2D490(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C2D490(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C24091 = 1;
  }
  v4 = sub_1C2D6DC(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
    if ( *(_QWORD *)v9 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 88LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v10 = Method_QuestRewardHarvestAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardHarvestAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C2D4A8(Method_QuestRewardHarvestAction_StateTouchWait_update__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v13 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
          v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v9;
            if ( *(_QWORD *)v9 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)isTouchPush, 0, v16);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(isTouchPush, v6);
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
    sub_1C2D6EC(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}
void __fastcall QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x21
  QuestRewardHarvestAction_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  QuestRewardHarvestAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  QuestRewardHarvestAction_StateItemLabel_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x20
  QuestRewardHarvestAction_StateTouchWait_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_43898F7 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardHarvestAction___ctor__);
    sub_B775C4(&Method_CStateManager_QuestRewardHarvestAction__add__);
    sub_B775C4(&CStateManager_QuestRewardHarvestAction__TypeInfo);
    sub_B775C4(&QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    sub_B775C4(&QuestRewardHarvestAction_StateNone_TypeInfo);
    sub_B775C4(&QuestRewardHarvestAction_StatePlay_TypeInfo);
    sub_B775C4(&QuestRewardHarvestAction_StateTouchWait_TypeInfo);
    byte_43898F7 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.fsm, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    fsm = this->fields.fsm;
    v12 = (QuestRewardHarvestAction_StateNone_o *)sub_B77694(QuestRewardHarvestAction_StateNone_TypeInfo);
    QuestRewardHarvestAction_StateNone___ctor(v12, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v16 = (QuestRewardHarvestAction_StatePlay_o *)sub_B77694(QuestRewardHarvestAction_StatePlay_TypeInfo);
    QuestRewardHarvestAction_StatePlay___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v18 = (QuestRewardHarvestAction_StateItemLabel_o *)sub_B77694(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    QuestRewardHarvestAction_StateItemLabel___ctor(v18, 0LL);
    if ( !v17
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v20 = (QuestRewardHarvestAction_StateTouchWait_o *)sub_B77694(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          QuestRewardHarvestAction_StateTouchWait___ctor(v20, 0LL),
          !v19) )
    {
LABEL_9:
      sub_B7769C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v21);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_43898FB & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_B775C4(&Method_CStateManager_QuestRewardHarvestAction__getState__);
    byte_43898FB = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B7769C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardHarvestAction__Play(
        QuestRewardHarvestAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_43898FA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_QuestRewardHarvestAction__Play_b__12_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43898FA = 1;
  }
  this->fields.endAct = end_act;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)end_act,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v15 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v15->static_fields->DEFAULT_FADE_TIME;
  }
  v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B7769C(gameObject, v13);
  CommonUI__maskFadein(Instance, fade_in_time, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_43898FC & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardHarvestAction__setState__);
    byte_43898FC = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void __fastcall QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v6; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct SimpleAnimation_o *v15; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v24; // x21
  System_String_o *name; // x0
  __int64 v26; // x8
  __int64 v27; // x21
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **v29; // x11
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
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0
  struct UISprite_array *itemSprite; // x8
  __int64 v44; // x9
  __int64 v45; // x22
  __int64 v46; // x23
  UnityEngine_Object_o *v47; // x21
  struct UISprite_array *v48; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  __int64 v51; // x9
  __int64 v52; // x22
  __int64 v53; // x23
  UnityEngine_Object_o *v54; // x21
  struct UILabel_array *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x8
  signed __int64 v58; // x27
  unsigned __int64 v59; // x26
  struct UISprite_array *v60; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v62; // x10
  QuestRewardInfo_o *v63; // x21
  UnityEngine_Object_o *v64; // x22
  struct UILabel_array *v65; // x8
  UnityEngine_Object_o *v66; // x22
  struct UISprite_array *v67; // x8
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Object_o *Component_UIWidget; // x22
  int32_t type; // w8
  System_String_o *age; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v73; // x8
  __int64 v74; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v75; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v76; // x0
  System_String_o *v77; // x0
  struct UILabel_array *v78; // x8
  UILabel_o *v79; // x23
  System_String_o *v80; // x24
  __int64 v81; // x2
  Il2CppObject *v82; // x0
  struct UILabel_array *v83; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v85; // x9
  UnityEngine_Object_o *v86; // x22
  struct UnityEngine_GameObject_array *v87; // x8
  __int64 v88; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  AndroidBackKeyManager_c *v99; // x0
  Il2CppObject *arg1; // [xsp+8h] [xbp-78h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  WarEntity_o *v102; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *v103; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_43898F9 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_11124/*"QUEST_CLEAR_REWARD_GET"*/);
    sub_B775C4(&StringLiteral_24193/*"×"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_24460/*"＋"*/);
    byte_43898F9 = 1;
  }
  v103 = 0LL;
  entity = 0LL;
  v102 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  v15 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v15;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v24 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v24[1].monitor;
    if ( !transform )
      goto LABEL_168;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v24, name, 0LL);
    if ( !transform )
      goto LABEL_168;
    v26 = *(_QWORD *)transform;
    v27 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v28 = 0LL;
      v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v28;
        v29 += 2;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_16;
      }
      v30 = v26 + 16LL * (*(_DWORD *)v29 + 8) + 312;
    }
    else
    {
LABEL_16:
      v30 = sub_B0F4C0(transform, SimpleAnimation_State_TypeInfo, 8LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v30)(v27, *(_QWORD *)(v30 + 8), 0.0);
    v36 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v36[1].monitor;
    if ( !transform )
      goto LABEL_168;
    v37 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v36, v37, 0LL);
    if ( !transform )
      goto LABEL_168;
    v38 = *(_QWORD *)transform;
    v39 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v40 = 0LL;
      v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v40;
        v41 += 2;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_36;
      }
      v42 = v38 + 16LL * (*(_DWORD *)v41 + 6) + 312;
    }
    else
    {
LABEL_36:
      v42 = sub_B0F4C0(transform, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v42)(v39, *(_QWORD *)(v42 + 8), 0.0);
  }
  else
  {
    v31 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v32 = *p_animation;
      if ( !*p_animation )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_168;
      v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v32, v33, 0LL);
      if ( !transform )
        goto LABEL_168;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v34 = *p_animation;
      if ( !v34 )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(v34, 0LL);
      if ( !transform )
        goto LABEL_168;
      v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v34, v35, 0LL);
      if ( !transform )
        goto LABEL_168;
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
    }
  }
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  transform = (__int64)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_168;
  *(_BYTE *)(transform + 101) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite )
  {
    v44 = *(_QWORD *)&itemSprite->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = (int)v44;
      v46 = 4LL;
      while ( v46 - 4 < (unsigned __int64)itemSprite->max_length )
      {
        v47 = (UnityEngine_Object_o *)*((_QWORD *)&itemSprite->obj.klass + v46);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v48 = this->fields.itemSprite;
          if ( !v48 )
            goto LABEL_168;
          if ( v46 - 4 >= (unsigned __int64)v48->max_length )
            break;
          transform = *((_QWORD *)&v48->obj.klass + v46);
          if ( !transform )
            goto LABEL_168;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          transform = (__int64)GameObjectExtensions__GetParent(gameObject, 0LL);
          if ( !transform )
            goto LABEL_168;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        if ( v46 - 3 >= v45 )
          goto LABEL_59;
        itemSprite = this->fields.itemSprite;
        ++v46;
        if ( !itemSprite )
          goto LABEL_168;
      }
LABEL_154:
      v88 = sub_B776C8(transform);
      sub_B77668(v88, 0LL);
    }
  }
LABEL_59:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel )
  {
    v51 = *(_QWORD *)&itemLabel->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = (int)v51;
      v53 = 4LL;
      while ( v53 - 4 < (unsigned __int64)itemLabel->max_length )
      {
        v54 = (UnityEngine_Object_o *)*((_QWORD *)&itemLabel->obj.klass + v53);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v55 = this->fields.itemLabel;
          if ( !v55 )
            goto LABEL_168;
          if ( v53 - 4 >= (unsigned __int64)v55->max_length )
            goto LABEL_154;
          transform = *((_QWORD *)&v55->obj.klass + v53);
          if ( !transform )
            goto LABEL_168;
          v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          transform = (__int64)GameObjectExtensions__GetParent(v56, 0LL);
          if ( !transform )
            goto LABEL_168;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        if ( v53 - 3 >= v52 )
          goto LABEL_76;
        itemLabel = this->fields.itemLabel;
        ++v53;
        if ( !itemLabel )
          goto LABEL_168;
      }
      goto LABEL_154;
    }
  }
LABEL_76:
  if ( !infos )
LABEL_168:
    sub_B7769C(transform, v6);
  v57 = *(_QWORD *)&infos->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = (int)v57;
    v59 = 0LL;
    arg1 = (Il2CppObject *)StringLiteral_24193/*"×"*/;
    while ( 1 )
    {
      v60 = this->fields.itemSprite;
      if ( !v60 )
        goto LABEL_168;
      max_length = v60->max_length;
      if ( (__int64)v59 < (int)max_length )
      {
        v62 = this->fields.itemLabel;
        if ( !v62 )
          goto LABEL_168;
        if ( (__int64)v59 < (int)v62->max_length )
        {
          if ( v59 >= max_length )
            goto LABEL_154;
          v63 = infos->m_Items[v59];
          v64 = (UnityEngine_Object_o *)v60->m_Items[v59];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v65 = this->fields.itemLabel;
            if ( !v65 )
              goto LABEL_168;
            if ( v59 >= v65->max_length )
              goto LABEL_154;
            v66 = (UnityEngine_Object_o *)v65->m_Items[v59];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Equality(v66, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v67 = this->fields.itemSprite;
              if ( !v67 )
                goto LABEL_168;
              if ( v59 >= v67->max_length )
                goto LABEL_154;
              transform = (__int64)v67->m_Items[v59];
              if ( !transform )
                goto LABEL_168;
              v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_UIWidget = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                             v68,
                                                             (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              transform = UnityEngine_Object__op_Equality(Component_UIWidget, 0LL, 0LL);
              if ( (transform & 1) == 0 )
                break;
            }
          }
        }
      }
LABEL_152:
      if ( (__int64)++v59 >= v58 )
        goto LABEL_155;
      if ( v59 >= infos->max_length )
        goto LABEL_154;
    }
    if ( !v63 || !Component_UIWidget )
      goto LABEL_168;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)Component_UIWidget,
      v63->fields.type,
      v63->fields.objectId,
      v63->fields.num,
      0,
      0LL);
    type = v63->fields.type;
    age = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                &v102,
                v63->fields.objectId,
                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_129;
        transform = (__int64)v102;
        if ( !v102 )
          goto LABEL_168;
        v75 = ServantEntity__GetName((ServantEntity_o *)v102, -1, 0, -1, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_127;
        }
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &v103,
                      v63->fields.objectId,
                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !v103 )
          goto LABEL_168;
        v75 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v103->fields.name;
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_127:
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(v75, 0LL);
          v74 = StringLiteral_24193/*"×"*/;
          age = v77;
          goto LABEL_128;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &entity,
                      v63->fields.objectId,
                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !entity )
          goto LABEL_168;
        age = entity->fields.age;
        IsCountableWithPlus = ItemType__IsCountableWithPlus(entity->fields.bannerId, 0LL);
        v73 = (__int64 *)&StringLiteral_24460/*"＋"*/;
        if ( !IsCountableWithPlus )
          v73 = &StringLiteral_24193/*"×"*/;
        v74 = *v73;
LABEL_128:
        arg1 = (Il2CppObject *)v74;
LABEL_129:
        transform = System_String__IsNullOrEmpty(age, 0LL);
        if ( (transform & 1) == 0 )
        {
          v78 = this->fields.itemLabel;
          if ( !v78 )
            goto LABEL_168;
          if ( v59 >= v78->max_length )
            goto LABEL_154;
          v79 = v78->m_Items[v59];
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
          num = v63->fields.num;
          v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v81);
          transform = (__int64)System_String__Format_44903000(v80, (Il2CppObject *)age, arg1, v82, 0LL);
          if ( !v79 )
            goto LABEL_168;
          UILabel__set_text(v79, (System_String_o *)transform, 0LL);
          v83 = this->fields.itemLabel;
          if ( !v83 )
            goto LABEL_168;
          if ( v59 >= v83->max_length )
            goto LABEL_154;
          transform = (__int64)v83->m_Items[v59];
          if ( !transform )
            goto LABEL_168;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        imageFrame = this->fields.imageFrame;
        if ( imageFrame )
        {
          v85 = imageFrame->max_length;
          if ( (__int64)v59 < (int)v85 )
          {
            if ( v59 >= v85 )
              goto LABEL_154;
            v86 = (UnityEngine_Object_o *)imageFrame->m_Items[v59];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Inequality(v86, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v87 = this->fields.imageFrame;
              if ( !v87 )
                goto LABEL_168;
              if ( v59 >= v87->max_length )
                goto LABEL_154;
              transform = (__int64)v87->m_Items[v59];
              if ( !transform )
                goto LABEL_168;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v63->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_152;
      default:
        goto LABEL_129;
    }
    j_il2cpp_runtime_class_init_0(v76);
    goto LABEL_127;
  }
LABEL_155:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98);
        goto LABEL_162;
      }
    }
    goto LABEL_168;
  }
LABEL_162:
  transform = (__int64)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_168;
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_168;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  v99 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v99 = AndroidBackKeyManager_TypeInfo;
  }
  v99->static_fields->ToastEnabled = 1;
}


void __fastcall QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_43898F8 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestRewardHarvestAction__update__);
    sub_B775C4(&CTouch_TypeInfo);
    byte_43898F8 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  __int64 v4; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  System_Action_o **v16; // x21
  __int64 v17; // x25
  __int64 v18; // x26
  __int64 v19; // x22
  __int64 v20; // x8
  UnityEngine_Object_o *v21; // x23
  __int64 v22; // x8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float y; // s9
  float z; // s10
  ManagerConfig_c *v38; // x0
  int WIDTH; // s14
  MoveObject_o *v40; // x23
  float x; // s11
  float v42; // s12
  float v43; // s13
  System_Action_o *v44; // x24
  System_Action_o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x8
  __int64 v53; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_438B19E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__);
    sub_B775C4(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
    sub_B775C4(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__);
    sub_B775C4(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
    byte_438B19E = 1;
  }
  v4 = sub_B77694(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_33;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  if ( !*(_QWORD *)(v4 + 16) )
    goto LABEL_33;
  v14 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 64LL);
  if ( !v14 )
    goto LABEL_33;
  v15 = *(_QWORD *)(v14 + 24);
  if ( (int)v15 >= 1 )
  {
    v16 = (System_Action_o **)(v4 + 24);
    v17 = (int)v15;
    v18 = 4LL;
    while ( 1 )
    {
      v19 = sub_B77694(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(
        (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *)v19,
        0LL);
      if ( !*(_QWORD *)v13 )
        break;
      v20 = *(_QWORD *)(*(_QWORD *)v13 + 64LL);
      if ( !v20 )
        break;
      if ( v18 - 4 >= (unsigned __int64)*(unsigned int *)(v20 + 24) )
        goto LABEL_34;
      v21 = *(UnityEngine_Object_o **)(v20 + 8 * v18);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v13 )
          break;
        v22 = *(_QWORD *)(*(_QWORD *)v13 + 64LL);
        if ( !v22 )
          break;
        if ( v18 - 4 >= (unsigned __int64)*(unsigned int *)(v22 + 24) )
        {
LABEL_34:
          v53 = sub_B776C8(gameObject);
          sub_B77668(v53, 0LL);
        }
        gameObject = *(UnityEngine_GameObject_o **)(v22 + 8 * v18);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v19 )
          break;
        *(_QWORD *)(v19 + 16) = gameObject;
        sub_B77560(
          (BattleServantConfConponent_o *)(v19 + 16),
          (System_Int32_array **)gameObject,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        gameObject = *(UnityEngine_GameObject_o **)(v19 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      *(UnityEngine_GameObject_o **)(v19 + 16),
                                                      (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v19 + 24) = Component_UIWidget;
        sub_B77560((BattleServantConfConponent_o *)(v19 + 24), Component_UIWidget, v30, v31, v32, v33, v34, v35);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v19 + 16), 0LL);
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v38 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v38 = ManagerConfig_TypeInfo;
        }
        WIDTH = v38->static_fields->WIDTH;
        v55 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v19 + 16), 0LL);
        v40 = *(MoveObject_o **)(v19 + 24);
        x = v55.fields.x;
        v42 = v55.fields.y;
        v43 = v55.fields.z;
        v44 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          v44,
          (Il2CppObject *)v19,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v45 = *v16;
        if ( !*v16 )
        {
          v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v45,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          *(_QWORD *)(v4 + 24) = v45;
          sub_B77560(
            (BattleServantConfConponent_o *)(v4 + 24),
            (System_Int32_array **)v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
        }
        if ( !v40 )
          break;
        v56.fields.x = (float)WIDTH;
        v56.fields.y = y;
        v56.fields.z = z;
        v57.fields.x = x;
        v57.fields.y = v42;
        v57.fields.z = v43;
        MoveObject__Play(v40, v56, v57, 0.25, v44, v45, 0.0, 17, 0LL);
      }
      v52 = v18 - 3;
      ++v18;
      if ( v52 >= v17 )
        goto LABEL_29;
    }
LABEL_33:
    sub_B7769C(gameObject, v6);
  }
LABEL_29:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(4, 0LL);
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
  QuestRewardHarvestAction_o *that; // x0

  that = this->fields.that;
  if ( !that )
    sub_B7769C(0LL, method);
  QuestRewardHarvestAction__SetState(that, 3, 0LL);
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
    sub_B7769C(this, method);
  GameObjectExtensions__SetLocalPosition(this->fields.tgt_obj, *(UnityEngine_Vector3_o *)&mo->fields.mNow.fields.y, 0LL);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v12; // x20
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
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
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0

  if ( (byte_438B19F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438B19F = 1;
  }
  if ( !that )
    goto LABEL_51;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v17 = that->fields.animation;
    if ( v17 )
    {
      this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v19 = that->fields.animation;
          if ( !v19 )
            goto LABEL_51;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_51745976(v19, v20, 0LL);
        }
        v21 = that->fields.animation;
        if ( v21 )
        {
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v21, v22, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v23 = that->fields.animation;
              if ( v23 )
              {
                this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(v23, 0LL);
                if ( this )
                {
                  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
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
LABEL_51:
    sub_B7769C(this, that);
  }
  v5 = that->fields.simpleAnimation;
  if ( !v5 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v5[1].monitor;
  if ( !this )
    goto LABEL_51;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v5, v6, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_51;
    this = (QuestRewardHarvestAction_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_51;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_16815192(v7, v8, 0LL);
  }
  v9 = that->fields.simpleAnimation;
  if ( !v9 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_51;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v12 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v15 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v15 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v15)(
                                                   v12,
                                                   *(_QWORD *)(v15 + 8),
                                                   0.0);
  v25 = that->fields.simpleAnimation;
  if ( !v25 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v25[1].monitor;
  if ( !this )
    goto LABEL_51;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0LL);
  if ( !this )
    goto LABEL_51;
  v27 = this->klass;
  v28 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v31 = (__int64)(&v27[1]._1.namespaze + 2 * *v30);
  }
  else
  {
LABEL_48:
    v31 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 1.0);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0

  if ( (byte_438B1A0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B1A0 = 1;
  }
  if ( !that )
    goto LABEL_23;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_23;
    this = (QuestRewardHarvestAction_StatePlay_o *)v5[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v5, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B7769C(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.animation;
    if ( !v8 )
      goto LABEL_23;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_23;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0LL) )
      return;
    goto LABEL_19;
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
    sub_B7769C(this, that);
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
  __int64 v4; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x22

  if ( (byte_438B1A1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B775C4(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_438B1A1 = 1;
  }
  v4 = sub_B77694(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_24;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    gameObject = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    }
    **(_BYTE **)&gameObject[7].fields.m_CachedPtr = 0;
    if ( *(_QWORD *)v13 )
    {
      gameObject = *(UnityEngine_Component_o **)(*(_QWORD *)v13 + 80LL);
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v15 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
          v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v4,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
            gameObject = *(UnityEngine_Component_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)gameObject, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_B7769C(gameObject, v6);
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
    sub_B7769C(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}
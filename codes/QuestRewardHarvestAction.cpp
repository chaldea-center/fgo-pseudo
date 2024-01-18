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
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x21
  QuestRewardHarvestAction_StateNone_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  QuestRewardHarvestAction_StatePlay_o *v22; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x21
  QuestRewardHarvestAction_StateItemLabel_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x20
  QuestRewardHarvestAction_StateTouchWait_o *v26; // x21
  const MethodInfo *v27; // x2

  if ( (byte_418AF6F & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardHarvestAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestRewardHarvestAction__add__, v3);
    sub_B2C35C(&CStateManager_QuestRewardHarvestAction__TypeInfo, v4);
    sub_B2C35C(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v5);
    sub_B2C35C(&QuestRewardHarvestAction_StateNone_TypeInfo, v6);
    sub_B2C35C(&QuestRewardHarvestAction_StatePlay_TypeInfo, v7);
    sub_B2C35C(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v8);
    byte_418AF6F = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    fsm = this->fields.fsm;
    v18 = (QuestRewardHarvestAction_StateNone_o *)sub_B2C42C(QuestRewardHarvestAction_StateNone_TypeInfo);
    QuestRewardHarvestAction_StateNone___ctor(v18, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v22 = (QuestRewardHarvestAction_StatePlay_o *)sub_B2C42C(QuestRewardHarvestAction_StatePlay_TypeInfo);
    QuestRewardHarvestAction_StatePlay___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v23 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v24 = (QuestRewardHarvestAction_StateItemLabel_o *)sub_B2C42C(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    QuestRewardHarvestAction_StateItemLabel___ctor(v24, 0LL);
    if ( !v23
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v23,
            2,
            (IState_T__o *)v24,
            (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v26 = (QuestRewardHarvestAction_StateTouchWait_o *)sub_B2C42C(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          QuestRewardHarvestAction_StateTouchWait___ctor(v26, 0LL),
          !v25) )
    {
LABEL_9:
      sub_B2C434(v19, v20);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v27);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_418AF73 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_B2C35C(&Method_CStateManager_QuestRewardHarvestAction__getState__, method);
    byte_418AF73 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B2C434(this, method);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x0
  System_Action_o *v19; // x21

  if ( (byte_418AF72 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v12);
    sub_B2C35C(&Method_QuestRewardHarvestAction__Play_b__12_0__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_418AF72 = 1;
  }
  this->fields.endAct = end_act;
  sub_B2C2F8(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v18 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v18->static_fields->DEFAULT_FADE_TIME;
  }
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B2C434(gameObject, v16);
  CommonUI__maskFadein(Instance, fade_in_time, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_418AF74 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardHarvestAction__setState__, *(_QWORD *)&state);
    byte_418AF74 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
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
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct SimpleAnimation_o *v37; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v46; // x21
  System_String_o *name; // x0
  __int64 v48; // x3
  __int64 v49; // x8
  __int64 v50; // x21
  unsigned __int64 v51; // x10
  SimpleAnimation_State_c **v52; // x11
  __int64 v53; // x0
  UnityEngine_Animation_o *v54; // x22
  UnityEngine_Animation_o *v55; // x22
  System_String_o *v56; // x0
  UnityEngine_Animation_o *v57; // x21
  System_String_o *v58; // x0
  SimpleAnimation_o *v59; // x21
  System_String_o *v60; // x0
  __int64 v61; // x3
  __int64 v62; // x8
  __int64 v63; // x21
  unsigned __int64 v64; // x10
  SimpleAnimation_State_c **v65; // x11
  __int64 v66; // x0
  struct UISprite_array *itemSprite; // x8
  __int64 v68; // x9
  __int64 v69; // x22
  __int64 v70; // x23
  UnityEngine_Object_o *v71; // x21
  struct UISprite_array *v72; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  __int64 v75; // x9
  __int64 v76; // x22
  __int64 v77; // x23
  UnityEngine_Object_o *v78; // x21
  struct UILabel_array *v79; // x8
  UnityEngine_GameObject_o *v80; // x0
  __int64 v81; // x8
  signed __int64 v82; // x27
  unsigned __int64 v83; // x26
  struct UISprite_array *v84; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v86; // x10
  QuestRewardInfo_o *v87; // x21
  UnityEngine_Object_o *v88; // x22
  struct UILabel_array *v89; // x8
  UnityEngine_Object_o *v90; // x22
  struct UISprite_array *v91; // x8
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_Object_o *Component_UIWidget; // x22
  int32_t type; // w8
  System_String_o *age; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v97; // x8
  __int64 v98; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v99; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v100; // x0
  System_String_o *v101; // x0
  struct UILabel_array *v102; // x8
  UILabel_o *v103; // x23
  System_String_o *v104; // x24
  Il2CppObject *v105; // x0
  struct UILabel_array *v106; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v108; // x9
  UnityEngine_Object_o *v109; // x22
  struct UnityEngine_GameObject_array *v110; // x8
  __int64 v111; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  AndroidBackKeyManager_c *v122; // x0
  Il2CppObject *arg1; // [xsp+8h] [xbp-78h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  WarEntity_o *v125; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *v126; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_418AF71 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, infos);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_10914/*"QUEST_CLEAR_REWARD_GET"*/, v23);
    sub_B2C35C(&StringLiteral_23705/*"×"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    sub_B2C35C(&StringLiteral_23956/*"＋"*/, v26);
    byte_418AF71 = 1;
  }
  v126 = 0LL;
  entity = 0LL;
  v125 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  v37 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v37;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v46 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v46[1].monitor;
    if ( !transform )
      goto LABEL_168;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v46, name, 0LL);
    if ( !transform )
      goto LABEL_168;
    v49 = *(_QWORD *)transform;
    v50 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v51 = 0LL;
      v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v51;
        v52 += 2;
        if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_16;
      }
      v53 = v49 + 16LL * (*(_DWORD *)v52 + 8) + 312;
    }
    else
    {
LABEL_16:
      v53 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 8LL, v48);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v53)(v50, *(_QWORD *)(v53 + 8), 0.0);
    v59 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v59[1].monitor;
    if ( !transform )
      goto LABEL_168;
    v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v59, v60, 0LL);
    if ( !transform )
      goto LABEL_168;
    v62 = *(_QWORD *)transform;
    v63 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v64 = 0LL;
      v65 = (SimpleAnimation_State_c **)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *(v65 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v64;
        v65 += 2;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_36;
      }
      v66 = v62 + 16LL * (*(_DWORD *)v65 + 6) + 312;
    }
    else
    {
LABEL_36:
      v66 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 6LL, v61);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v66)(v63, *(_QWORD *)(v66 + 8), 0.0);
  }
  else
  {
    v54 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v55 = *p_animation;
      if ( !*p_animation )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_168;
      v56 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v55, v56, 0LL);
      if ( !transform )
        goto LABEL_168;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v57 = *p_animation;
      if ( !v57 )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(v57, 0LL);
      if ( !transform )
        goto LABEL_168;
      v58 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v57, v58, 0LL);
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
                         (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_168;
  *(_BYTE *)(transform + 101) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite )
  {
    v68 = *(_QWORD *)&itemSprite->max_length;
    if ( (int)v68 >= 1 )
    {
      v69 = (int)v68;
      v70 = 4LL;
      while ( v70 - 4 < (unsigned __int64)itemSprite->max_length )
      {
        v71 = (UnityEngine_Object_o *)*((_QWORD *)&itemSprite->obj.klass + v70);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v72 = this->fields.itemSprite;
          if ( !v72 )
            goto LABEL_168;
          if ( v70 - 4 >= (unsigned __int64)v72->max_length )
            break;
          transform = *((_QWORD *)&v72->obj.klass + v70);
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
        if ( v70 - 3 >= v69 )
          goto LABEL_59;
        itemSprite = this->fields.itemSprite;
        ++v70;
        if ( !itemSprite )
          goto LABEL_168;
      }
LABEL_154:
      v111 = sub_B2C460(transform);
      sub_B2C400(v111, 0LL);
    }
  }
LABEL_59:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel )
  {
    v75 = *(_QWORD *)&itemLabel->max_length;
    if ( (int)v75 >= 1 )
    {
      v76 = (int)v75;
      v77 = 4LL;
      while ( v77 - 4 < (unsigned __int64)itemLabel->max_length )
      {
        v78 = (UnityEngine_Object_o *)*((_QWORD *)&itemLabel->obj.klass + v77);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v79 = this->fields.itemLabel;
          if ( !v79 )
            goto LABEL_168;
          if ( v77 - 4 >= (unsigned __int64)v79->max_length )
            goto LABEL_154;
          transform = *((_QWORD *)&v79->obj.klass + v77);
          if ( !transform )
            goto LABEL_168;
          v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          transform = (__int64)GameObjectExtensions__GetParent(v80, 0LL);
          if ( !transform )
            goto LABEL_168;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        if ( v77 - 3 >= v76 )
          goto LABEL_76;
        itemLabel = this->fields.itemLabel;
        ++v77;
        if ( !itemLabel )
          goto LABEL_168;
      }
      goto LABEL_154;
    }
  }
LABEL_76:
  if ( !infos )
LABEL_168:
    sub_B2C434(transform, v28);
  v81 = *(_QWORD *)&infos->max_length;
  if ( (int)v81 >= 1 )
  {
    v82 = (int)v81;
    v83 = 0LL;
    arg1 = (Il2CppObject *)StringLiteral_23705/*"×"*/;
    while ( 1 )
    {
      v84 = this->fields.itemSprite;
      if ( !v84 )
        goto LABEL_168;
      max_length = v84->max_length;
      if ( (__int64)v83 < (int)max_length )
      {
        v86 = this->fields.itemLabel;
        if ( !v86 )
          goto LABEL_168;
        if ( (__int64)v83 < (int)v86->max_length )
        {
          if ( v83 >= max_length )
            goto LABEL_154;
          v87 = infos->m_Items[v83];
          v88 = (UnityEngine_Object_o *)v84->m_Items[v83];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Equality(v88, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v89 = this->fields.itemLabel;
            if ( !v89 )
              goto LABEL_168;
            if ( v83 >= v89->max_length )
              goto LABEL_154;
            v90 = (UnityEngine_Object_o *)v89->m_Items[v83];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Equality(v90, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v91 = this->fields.itemSprite;
              if ( !v91 )
                goto LABEL_168;
              if ( v83 >= v91->max_length )
                goto LABEL_154;
              transform = (__int64)v91->m_Items[v83];
              if ( !transform )
                goto LABEL_168;
              v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_UIWidget = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                             v92,
                                                             (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
      if ( (__int64)++v83 >= v82 )
        goto LABEL_155;
      if ( v83 >= infos->max_length )
        goto LABEL_154;
    }
    if ( !v87 || !Component_UIWidget )
      goto LABEL_168;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)Component_UIWidget,
      v87->fields.type,
      v87->fields.objectId,
      v87->fields.num,
      0,
      0LL);
    type = v87->fields.type;
    age = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                &v125,
                v87->fields.objectId,
                (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_129;
        transform = (__int64)v125;
        if ( !v125 )
          goto LABEL_168;
        v99 = ServantEntity__GetName((ServantEntity_o *)v125, -1, 0, -1, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_127;
        }
        v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &v126,
                      v87->fields.objectId,
                      (const MethodInfo_24E412C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !v126 )
          goto LABEL_168;
        v99 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v126->fields.name;
        v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_127:
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v99, 0LL);
          v98 = StringLiteral_23705/*"×"*/;
          age = v101;
          goto LABEL_128;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &entity,
                      v87->fields.objectId,
                      (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !entity )
          goto LABEL_168;
        age = entity->fields.age;
        IsCountableWithPlus = ItemType__IsCountableWithPlus(entity->fields.bannerId, 0LL);
        v97 = (__int64 *)&StringLiteral_23956/*"＋"*/;
        if ( !IsCountableWithPlus )
          v97 = &StringLiteral_23705/*"×"*/;
        v98 = *v97;
LABEL_128:
        arg1 = (Il2CppObject *)v98;
LABEL_129:
        transform = System_String__IsNullOrEmpty(age, 0LL);
        if ( (transform & 1) == 0 )
        {
          v102 = this->fields.itemLabel;
          if ( !v102 )
            goto LABEL_168;
          if ( v83 >= v102->max_length )
            goto LABEL_154;
          v103 = v102->m_Items[v83];
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_10914/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
          num = v87->fields.num;
          v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          transform = (__int64)System_String__Format_44306596(v104, (Il2CppObject *)age, arg1, v105, 0LL);
          if ( !v103 )
            goto LABEL_168;
          UILabel__set_text(v103, (System_String_o *)transform, 0LL);
          v106 = this->fields.itemLabel;
          if ( !v106 )
            goto LABEL_168;
          if ( v83 >= v106->max_length )
            goto LABEL_154;
          transform = (__int64)v106->m_Items[v83];
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
          v108 = imageFrame->max_length;
          if ( (__int64)v83 < (int)v108 )
          {
            if ( v83 >= v108 )
              goto LABEL_154;
            v109 = (UnityEngine_Object_o *)imageFrame->m_Items[v83];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Inequality(v109, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v110 = this->fields.imageFrame;
              if ( !v110 )
                goto LABEL_168;
              if ( v83 >= v110->max_length )
                goto LABEL_154;
              transform = (__int64)v110->m_Items[v83];
              if ( !transform )
                goto LABEL_168;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v87->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_152;
      default:
        goto LABEL_129;
    }
    j_il2cpp_runtime_class_init_0(v100);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v116,
          v117,
          v118,
          v119,
          v120,
          v121);
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
  v122 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v122 = AndroidBackKeyManager_TypeInfo;
  }
  v122->static_fields->ToastEnabled = 1;
}


void __fastcall QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_418AF70 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestRewardHarvestAction__update__, method);
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_418AF70 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *v12; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_Fields *p_fields; // x20
  struct UILabel_array *itemLabel; // x8
  __int64 v17; // x8
  System_Action_o **p__9__1; // x21
  __int64 v19; // x25
  __int64 v20; // x26
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *v21; // x22
  struct UILabel_array *v22; // x8
  UnityEngine_Object_o *v23; // x23
  struct UILabel_array *v24; // x8
  UIWidget_o *Component_UIWidget; // x0
  float y; // s9
  float z; // s10
  ManagerConfig_c *v28; // x0
  int WIDTH; // s14
  MoveObject_o *mo; // x23
  float x; // s11
  float v32; // s12
  float v33; // s13
  System_Action_o *v34; // x24
  System_Action_o *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4185620 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_B2C35C(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    sub_B2C35C(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v10);
    sub_B2C35C(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v11);
    byte_4185620 = 1;
  }
  v12 = (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *)sub_B2C42C(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  v12->fields.that = that;
  p_fields = &v12->fields;
  sub_B2C2F8(&v12->fields, that);
  if ( !v12->fields.that )
    goto LABEL_33;
  itemLabel = v12->fields.that->fields.itemLabel;
  if ( !itemLabel )
    goto LABEL_33;
  v17 = *(_QWORD *)&itemLabel->max_length;
  if ( (int)v17 >= 1 )
  {
    p__9__1 = &v12->fields.__9__1;
    v19 = (int)v17;
    v20 = 4LL;
    while ( 1 )
    {
      v21 = (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *)sub_B2C42C(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(v21, 0LL);
      if ( !p_fields->that )
        break;
      v22 = p_fields->that->fields.itemLabel;
      if ( !v22 )
        break;
      if ( v20 - 4 >= (unsigned __int64)v22->max_length )
        goto LABEL_34;
      v23 = (UnityEngine_Object_o *)*((_QWORD *)&v22->obj.klass + v20);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !p_fields->that )
          break;
        v24 = p_fields->that->fields.itemLabel;
        if ( !v24 )
          break;
        if ( v20 - 4 >= (unsigned __int64)v24->max_length )
        {
LABEL_34:
          v37 = sub_B2C460(gameObject);
          sub_B2C400(v37, 0LL);
        }
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v24->obj.klass + v20);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v21 )
          break;
        v21->fields.tgt_obj = gameObject;
        sub_B2C2F8(&v21->fields, gameObject);
        gameObject = v21->fields.tgt_obj;
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               v21->fields.tgt_obj,
                               (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        v21->fields.mo = (struct MoveObject_o *)Component_UIWidget;
        sub_B2C2F8(&v21->fields.mo, Component_UIWidget);
        LocalPosition = GameObjectExtensions__GetLocalPosition(v21->fields.tgt_obj, 0LL);
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v28 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v28 = ManagerConfig_TypeInfo;
        }
        WIDTH = v28->static_fields->WIDTH;
        v39 = GameObjectExtensions__GetLocalPosition(v21->fields.tgt_obj, 0LL);
        mo = v21->fields.mo;
        x = v39.fields.x;
        v32 = v39.fields.y;
        v33 = v39.fields.z;
        v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v34,
          (Il2CppObject *)v21,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v35 = *p__9__1;
        if ( !*p__9__1 )
        {
          v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v35,
            (Il2CppObject *)v12,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          v12->fields.__9__1 = v35;
          sub_B2C2F8(&v12->fields.__9__1, v35);
        }
        if ( !mo )
          break;
        v40.fields.x = (float)WIDTH;
        v40.fields.y = y;
        v40.fields.z = z;
        v41.fields.x = x;
        v41.fields.y = v32;
        v41.fields.z = v33;
        MoveObject__Play(mo, v40, v41, 0.25, v34, v35, 0.0, 17, 0LL);
      }
      v36 = v20 - 3;
      ++v20;
      if ( v36 >= v19 )
        goto LABEL_29;
    }
LABEL_33:
    sub_B2C434(gameObject, v14);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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
  __int64 v4; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x3
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v14; // x20
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
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
  __int64 v29; // x3
  QuestRewardHarvestAction_StatePlay_c *v30; // x8
  QuestRewardHarvestAction_StatePlay_o *v31; // x19
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4185621 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    byte_4185621 = 1;
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
            goto LABEL_51;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_50201580(v21, v22, 0LL);
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
LABEL_51:
    sub_B2C434(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_51;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_51;
    this = (QuestRewardHarvestAction_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_51;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_16486620(v8, v9, 0LL);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_51;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v14 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v17 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v17 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 6LL, v12);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v17)(
                                                   v14,
                                                   *(_QWORD *)(v17 + 8),
                                                   0.0);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_51;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_51;
  v30 = this->klass;
  v31 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v30->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v34 = (__int64)(&v30[1]._1.namespaze + 2 * *v33);
  }
  else
  {
LABEL_48:
    v34 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 8LL, v29);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 1.0);
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

  if ( (byte_4185622 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B2C35C(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_4185622 = 1;
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
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_23;
    this = (QuestRewardHarvestAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B2C434(this, that);
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
    v9 = that->fields.animation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_23;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
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
    sub_B2C434(this, that);
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
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *v11; // x20
  UnityEngine_Component_o *screenTouchInfo; // x0
  __int64 v13; // x1
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x22

  if ( (byte_4185623 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v4);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&CTouch_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v9);
    sub_B2C35C(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v10);
    byte_4185623 = 1;
  }
  v11 = (QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B2C42C(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_24;
  v11->fields.that = that;
  p_fields = &v11->fields;
  sub_B2C2F8(&v11->fields, that);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    screenTouchInfo = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
      screenTouchInfo = (UnityEngine_Component_o *)AndroidBackKeyManager_TypeInfo;
    }
    **(_BYTE **)&screenTouchInfo[7].fields.m_CachedPtr = 0;
    if ( p_fields->that )
    {
      screenTouchInfo = (UnityEngine_Component_o *)p_fields->that->fields.screenTouchInfo;
      if ( screenTouchInfo )
      {
        screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL);
        if ( screenTouchInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v16 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
          v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v11,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
            screenTouchInfo = (UnityEngine_Component_o *)p_fields->that;
            if ( p_fields->that )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)screenTouchInfo, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_B2C434(screenTouchInfo, v13);
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
    sub_B2C434(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}
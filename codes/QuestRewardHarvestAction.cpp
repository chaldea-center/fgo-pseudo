void __fastcall QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  QuestRewardHarvestAction_StateNone_o *v21; // x22
  __int64 v22; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  QuestRewardHarvestAction_StatePlay_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  QuestRewardHarvestAction_StateItemLabel_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  QuestRewardHarvestAction_StateTouchWait_o *v34; // x21
  const MethodInfo *v35; // x2

  if ( (byte_4217CEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardHarvestAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestRewardHarvestAction__add__, v4);
    sub_B0D8A4(&CStateManager_QuestRewardHarvestAction__TypeInfo, v5);
    sub_B0D8A4(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v6);
    sub_B0D8A4(&QuestRewardHarvestAction_StateNone_TypeInfo, v7);
    sub_B0D8A4(&QuestRewardHarvestAction_StatePlay_TypeInfo, v8);
    sub_B0D8A4(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v9);
    byte_4217CEA = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v11 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_QuestRewardHarvestAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v11,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v11;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    fsm = this->fields.fsm;
    v21 = (QuestRewardHarvestAction_StateNone_o *)sub_B0D974(QuestRewardHarvestAction_StateNone_TypeInfo, v19, v20);
    QuestRewardHarvestAction_StateNone___ctor(v21, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v23 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v26 = (QuestRewardHarvestAction_StatePlay_o *)sub_B0D974(QuestRewardHarvestAction_StatePlay_TypeInfo, v24, v25);
    QuestRewardHarvestAction_StatePlay___ctor(v26, 0LL);
    if ( !v23 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v23,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v30 = (QuestRewardHarvestAction_StateItemLabel_o *)sub_B0D974(
                                                         QuestRewardHarvestAction_StateItemLabel_TypeInfo,
                                                         v28,
                                                         v29);
    QuestRewardHarvestAction_StateItemLabel___ctor(v30, 0LL);
    if ( !v27
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v27,
            2,
            (IState_T__o *)v30,
            (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v34 = (QuestRewardHarvestAction_StateTouchWait_o *)sub_B0D974(
                                                               QuestRewardHarvestAction_StateTouchWait_TypeInfo,
                                                               v32,
                                                               v33),
          QuestRewardHarvestAction_StateTouchWait___ctor(v34, 0LL),
          !v31) )
    {
LABEL_9:
      sub_B0D97C(v22);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v35);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  QuestRewardHarvestAction_o *v2; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4217CEE & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_B0D8A4(&Method_CStateManager_QuestRewardHarvestAction__getState__, method);
    byte_4217CEE = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B0D97C(this);
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
  __int64 v17; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x0
  System_Action_o *v20; // x21

  if ( (byte_4217CED & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, end_act);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v12);
    sub_B0D8A4(&Method_QuestRewardHarvestAction__Play_b__12_0__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4217CED = 1;
  }
  this->fields.endAct = end_act;
  sub_B0D840(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v19->static_fields->DEFAULT_FADE_TIME;
  }
  v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B0D97C(gameObject);
  CommonUI__maskFadein(Instance, fade_in_time, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_4217CEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardHarvestAction__setState__, *(_QWORD *)&state);
    byte_4217CEF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
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
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct SimpleAnimation_o *v36; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v45; // x21
  System_String_o *name; // x0
  __int64 v47; // x8
  __int64 v48; // x21
  unsigned __int64 v49; // x10
  SimpleAnimation_State_c **v50; // x11
  __int64 v51; // x0
  UnityEngine_Animation_o *v52; // x22
  UnityEngine_Animation_o *v53; // x22
  System_String_o *v54; // x0
  UnityEngine_Animation_o *v55; // x21
  System_String_o *v56; // x0
  SimpleAnimation_o *v57; // x21
  System_String_o *v58; // x0
  __int64 v59; // x8
  __int64 v60; // x21
  unsigned __int64 v61; // x10
  SimpleAnimation_State_c **v62; // x11
  __int64 v63; // x0
  struct UISprite_array *itemSprite; // x8
  __int64 v65; // x9
  __int64 v66; // x22
  __int64 v67; // x23
  UnityEngine_Object_o *v68; // x21
  struct UISprite_array *v69; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  __int64 v72; // x9
  __int64 v73; // x22
  __int64 v74; // x23
  UnityEngine_Object_o *v75; // x21
  struct UILabel_array *v76; // x8
  UnityEngine_GameObject_o *v77; // x0
  __int64 v78; // x8
  signed __int64 v79; // x27
  unsigned __int64 v80; // x26
  struct UISprite_array *v81; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v83; // x10
  QuestRewardInfo_o *v84; // x21
  UnityEngine_Object_o *v85; // x22
  struct UILabel_array *v86; // x8
  UnityEngine_Object_o *v87; // x22
  struct UISprite_array *v88; // x8
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_Object_o *Component_UIWidget; // x22
  int32_t type; // w8
  System_String_o *age; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v94; // x8
  __int64 v95; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v96; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v97; // x0
  System_String_o *v98; // x0
  struct UILabel_array *v99; // x8
  UILabel_o *v100; // x23
  System_String_o *v101; // x24
  Il2CppObject *v102; // x0
  struct UILabel_array *v103; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v105; // x9
  UnityEngine_Object_o *v106; // x22
  struct UnityEngine_GameObject_array *v107; // x8
  __int64 v108; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  AndroidBackKeyManager_c *v119; // x0
  Il2CppObject *arg1; // [xsp+8h] [xbp-78h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  WarEntity_o *v122; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *v123; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4217CEC & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, infos);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_10940/*"QUEST_CLEAR_REWARD_GET"*/, v23);
    sub_B0D8A4(&StringLiteral_23783/*"×"*/, v24);
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    sub_B0D8A4(&StringLiteral_24038/*"＋"*/, v26);
    byte_4217CEC = 1;
  }
  v123 = 0LL;
  entity = 0LL;
  v122 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  v36 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v36;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v45 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v45[1].monitor;
    if ( !transform )
      goto LABEL_168;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v45, name, 0LL);
    if ( !transform )
      goto LABEL_168;
    v47 = *(_QWORD *)transform;
    v48 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v49 = 0LL;
      v50 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v49;
        v50 += 2;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_16;
      }
      v51 = v47 + 16LL * (*(_DWORD *)v50 + 8) + 312;
    }
    else
    {
LABEL_16:
      v51 = sub_AA67A0(transform, SimpleAnimation_State_TypeInfo, 8LL);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v51)(v48, *(_QWORD *)(v51 + 8), 0.0);
    v57 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v57[1].monitor;
    if ( !transform )
      goto LABEL_168;
    v58 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v57, v58, 0LL);
    if ( !transform )
      goto LABEL_168;
    v59 = *(_QWORD *)transform;
    v60 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v61 = 0LL;
      v62 = (SimpleAnimation_State_c **)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *(v62 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v61;
        v62 += 2;
        if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_36;
      }
      v63 = v59 + 16LL * (*(_DWORD *)v62 + 6) + 312;
    }
    else
    {
LABEL_36:
      v63 = sub_AA67A0(transform, SimpleAnimation_State_TypeInfo, 6LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v63)(v60, *(_QWORD *)(v63 + 8), 0.0);
  }
  else
  {
    v52 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v53 = *p_animation;
      if ( !*p_animation )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_168;
      v54 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v53, v54, 0LL);
      if ( !transform )
        goto LABEL_168;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v55 = *p_animation;
      if ( !v55 )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(v55, 0LL);
      if ( !transform )
        goto LABEL_168;
      v56 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v55, v56, 0LL);
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
                         (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_168;
  *(_BYTE *)(transform + 101) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite )
  {
    v65 = *(_QWORD *)&itemSprite->max_length;
    if ( (int)v65 >= 1 )
    {
      v66 = (int)v65;
      v67 = 4LL;
      while ( v67 - 4 < (unsigned __int64)itemSprite->max_length )
      {
        v68 = (UnityEngine_Object_o *)*((_QWORD *)&itemSprite->obj.klass + v67);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v69 = this->fields.itemSprite;
          if ( !v69 )
            goto LABEL_168;
          if ( v67 - 4 >= (unsigned __int64)v69->max_length )
            break;
          transform = *((_QWORD *)&v69->obj.klass + v67);
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
        if ( v67 - 3 >= v66 )
          goto LABEL_59;
        itemSprite = this->fields.itemSprite;
        ++v67;
        if ( !itemSprite )
          goto LABEL_168;
      }
LABEL_154:
      v108 = sub_B0D9A8(transform);
      sub_B0D948(v108, 0LL);
    }
  }
LABEL_59:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel )
  {
    v72 = *(_QWORD *)&itemLabel->max_length;
    if ( (int)v72 >= 1 )
    {
      v73 = (int)v72;
      v74 = 4LL;
      while ( v74 - 4 < (unsigned __int64)itemLabel->max_length )
      {
        v75 = (UnityEngine_Object_o *)*((_QWORD *)&itemLabel->obj.klass + v74);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v76 = this->fields.itemLabel;
          if ( !v76 )
            goto LABEL_168;
          if ( v74 - 4 >= (unsigned __int64)v76->max_length )
            goto LABEL_154;
          transform = *((_QWORD *)&v76->obj.klass + v74);
          if ( !transform )
            goto LABEL_168;
          v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          transform = (__int64)GameObjectExtensions__GetParent(v77, 0LL);
          if ( !transform )
            goto LABEL_168;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        if ( v74 - 3 >= v73 )
          goto LABEL_76;
        itemLabel = this->fields.itemLabel;
        ++v74;
        if ( !itemLabel )
          goto LABEL_168;
      }
      goto LABEL_154;
    }
  }
LABEL_76:
  if ( !infos )
LABEL_168:
    sub_B0D97C(transform);
  v78 = *(_QWORD *)&infos->max_length;
  if ( (int)v78 >= 1 )
  {
    v79 = (int)v78;
    v80 = 0LL;
    arg1 = (Il2CppObject *)StringLiteral_23783/*"×"*/;
    while ( 1 )
    {
      v81 = this->fields.itemSprite;
      if ( !v81 )
        goto LABEL_168;
      max_length = v81->max_length;
      if ( (__int64)v80 < (int)max_length )
      {
        v83 = this->fields.itemLabel;
        if ( !v83 )
          goto LABEL_168;
        if ( (__int64)v80 < (int)v83->max_length )
        {
          if ( v80 >= max_length )
            goto LABEL_154;
          v84 = infos->m_Items[v80];
          v85 = (UnityEngine_Object_o *)v81->m_Items[v80];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Equality(v85, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v86 = this->fields.itemLabel;
            if ( !v86 )
              goto LABEL_168;
            if ( v80 >= v86->max_length )
              goto LABEL_154;
            v87 = (UnityEngine_Object_o *)v86->m_Items[v80];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Equality(v87, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v88 = this->fields.itemSprite;
              if ( !v88 )
                goto LABEL_168;
              if ( v80 >= v88->max_length )
                goto LABEL_154;
              transform = (__int64)v88->m_Items[v80];
              if ( !transform )
                goto LABEL_168;
              v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_UIWidget = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                             v89,
                                                             (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
      if ( (__int64)++v80 >= v79 )
        goto LABEL_155;
      if ( v80 >= infos->max_length )
        goto LABEL_154;
    }
    if ( !v84 || !Component_UIWidget )
      goto LABEL_168;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)Component_UIWidget,
      v84->fields.type,
      v84->fields.objectId,
      v84->fields.num,
      0,
      0LL);
    type = v84->fields.type;
    age = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                &v122,
                v84->fields.objectId,
                (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_129;
        transform = (__int64)v122;
        if ( !v122 )
          goto LABEL_168;
        v96 = ServantEntity__GetName((ServantEntity_o *)v122, -1, 0, -1, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_127;
        }
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &v123,
                      v84->fields.objectId,
                      (const MethodInfo_2669C30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !v123 )
          goto LABEL_168;
        v96 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v123->fields.name;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_127:
          v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v96, 0LL);
          v95 = StringLiteral_23783/*"×"*/;
          age = v98;
          goto LABEL_128;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &entity,
                      v84->fields.objectId,
                      (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !entity )
          goto LABEL_168;
        age = entity->fields.age;
        IsCountableWithPlus = ItemType__IsCountableWithPlus(entity->fields.bannerId, 0LL);
        v94 = (__int64 *)&StringLiteral_24038/*"＋"*/;
        if ( !IsCountableWithPlus )
          v94 = &StringLiteral_23783/*"×"*/;
        v95 = *v94;
LABEL_128:
        arg1 = (Il2CppObject *)v95;
LABEL_129:
        transform = System_String__IsNullOrEmpty(age, 0LL);
        if ( (transform & 1) == 0 )
        {
          v99 = this->fields.itemLabel;
          if ( !v99 )
            goto LABEL_168;
          if ( v80 >= v99->max_length )
            goto LABEL_154;
          v100 = v99->m_Items[v80];
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_10940/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
          num = v84->fields.num;
          v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          transform = (__int64)System_String__Format_43850968(v101, (Il2CppObject *)age, arg1, v102, 0LL);
          if ( !v100 )
            goto LABEL_168;
          UILabel__set_text(v100, (System_String_o *)transform, 0LL);
          v103 = this->fields.itemLabel;
          if ( !v103 )
            goto LABEL_168;
          if ( v80 >= v103->max_length )
            goto LABEL_154;
          transform = (__int64)v103->m_Items[v80];
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
          v105 = imageFrame->max_length;
          if ( (__int64)v80 < (int)v105 )
          {
            if ( v80 >= v105 )
              goto LABEL_154;
            v106 = (UnityEngine_Object_o *)imageFrame->m_Items[v80];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Inequality(v106, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v107 = this->fields.imageFrame;
              if ( !v107 )
                goto LABEL_168;
              if ( v80 >= v107->max_length )
                goto LABEL_154;
              transform = (__int64)v107->m_Items[v80];
              if ( !transform )
                goto LABEL_168;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v84->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_152;
      default:
        goto LABEL_129;
    }
    j_il2cpp_runtime_class_init_0(v97);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
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
  v119 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v119 = AndroidBackKeyManager_TypeInfo;
  }
  v119->static_fields->ToastEnabled = 1;
}


void __fastcall QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_4217CEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestRewardHarvestAction__update__, method);
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4217CEB = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_Fields *p_fields; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  struct UILabel_array *itemLabel; // x8
  __int64 v18; // x8
  System_Action_o **p__9__1; // x21
  __int64 v20; // x25
  __int64 v21; // x26
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *v22; // x22
  struct UILabel_array *v23; // x8
  UnityEngine_Object_o *v24; // x23
  struct UILabel_array *v25; // x8
  UIWidget_o *Component_UIWidget; // x0
  float y; // s9
  float z; // s10
  ManagerConfig_c *v29; // x0
  int WIDTH; // s14
  MoveObject_o *mo; // x23
  float x; // s11
  float v33; // s12
  float v34; // s13
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x22
  __int64 v41; // x8
  __int64 v42; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42124F1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v8);
    sub_B0D8A4(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v9);
    sub_B0D8A4(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v10);
    sub_B0D8A4(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v11);
    byte_42124F1 = 1;
  }
  v12 = (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *)sub_B0D974(
                                                                            QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo,
                                                                            that,
                                                                            method);
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  v12->fields.that = that;
  p_fields = &v12->fields;
  sub_B0D840(&v12->fields, that);
  if ( !v12->fields.that )
    goto LABEL_33;
  itemLabel = v12->fields.that->fields.itemLabel;
  if ( !itemLabel )
    goto LABEL_33;
  v18 = *(_QWORD *)&itemLabel->max_length;
  if ( (int)v18 >= 1 )
  {
    p__9__1 = &v12->fields.__9__1;
    v20 = (int)v18;
    v21 = 4LL;
    while ( 1 )
    {
      v22 = (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *)sub_B0D974(
                                                                                QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo,
                                                                                v15,
                                                                                v16);
      QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(v22, 0LL);
      if ( !p_fields->that )
        break;
      v23 = p_fields->that->fields.itemLabel;
      if ( !v23 )
        break;
      if ( v21 - 4 >= (unsigned __int64)v23->max_length )
        goto LABEL_34;
      v24 = (UnityEngine_Object_o *)*((_QWORD *)&v23->obj.klass + v21);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !p_fields->that )
          break;
        v25 = p_fields->that->fields.itemLabel;
        if ( !v25 )
          break;
        if ( v21 - 4 >= (unsigned __int64)v25->max_length )
        {
LABEL_34:
          v42 = sub_B0D9A8(gameObject);
          sub_B0D948(v42, 0LL);
        }
        gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v25->obj.klass + v21);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v22 )
          break;
        v22->fields.tgt_obj = gameObject;
        sub_B0D840(&v22->fields, gameObject);
        gameObject = v22->fields.tgt_obj;
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                               v22->fields.tgt_obj,
                               (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        v22->fields.mo = (struct MoveObject_o *)Component_UIWidget;
        sub_B0D840(&v22->fields.mo, Component_UIWidget);
        LocalPosition = GameObjectExtensions__GetLocalPosition(v22->fields.tgt_obj, 0LL);
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v29 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v29 = ManagerConfig_TypeInfo;
        }
        WIDTH = v29->static_fields->WIDTH;
        v44 = GameObjectExtensions__GetLocalPosition(v22->fields.tgt_obj, 0LL);
        mo = v22->fields.mo;
        x = v44.fields.x;
        v33 = v44.fields.y;
        v34 = v44.fields.z;
        v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
        System_Action___ctor(
          v37,
          (Il2CppObject *)v22,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v40 = *p__9__1;
        if ( !*p__9__1 )
        {
          v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
          System_Action___ctor(
            v40,
            (Il2CppObject *)v12,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          v12->fields.__9__1 = v40;
          sub_B0D840(&v12->fields.__9__1, v40);
        }
        if ( !mo )
          break;
        v45.fields.x = (float)WIDTH;
        v45.fields.y = y;
        v45.fields.z = z;
        v46.fields.x = x;
        v46.fields.y = v33;
        v46.fields.z = v34;
        MoveObject__Play(mo, v45, v46, 0.25, v37, v40, 0.0, 17, 0LL);
      }
      v41 = v21 - 3;
      ++v21;
      if ( v41 >= v20 )
        goto LABEL_29;
    }
LABEL_33:
    sub_B0D97C(gameObject);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
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
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_42124F2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v4);
    byte_42124F2 = 1;
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
            goto LABEL_51;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_50564840(v20, v21, 0LL);
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
LABEL_51:
    sub_B0D97C(this);
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_50482404(v8, v9, 0LL);
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
  v13 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v16 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v16 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v16)(
                                                   v13,
                                                   *(_QWORD *)(v16 + 8),
                                                   0.0);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_51;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_51;
  v28 = this->klass;
  v29 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v32 = (__int64)(&v28[1]._1.namespaze + 2 * *v31);
  }
  else
  {
LABEL_48:
    v32 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 8LL);
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

  if ( (byte_42124F3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B0D8A4(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v4);
    byte_42124F3 = 1;
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
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x22

  if ( (byte_42124F4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, v4);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&CTouch_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v9);
    sub_B0D8A4(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v10);
    byte_42124F4 = 1;
  }
  v11 = (QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B0D974(
                                                                            QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo,
                                                                            that,
                                                                            method);
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_24;
  v11->fields.that = that;
  p_fields = &v11->fields;
  sub_B0D840(&v11->fields, that);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v17 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
          v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v11,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v19, 0LL);
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
    sub_B0D97C(screenTouchInfo);
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
    sub_B0D97C(this);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}
void __fastcall QuestRewardHarvestAction___ctor(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardHarvestAction__Awake(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct CStateManager_QuestRewardHarvestAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x21
  QuestRewardHarvestAction_StateNone_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  QuestRewardHarvestAction_StatePlay_o *v36; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v37; // x21
  QuestRewardHarvestAction_StateItemLabel_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x20
  QuestRewardHarvestAction_StateTouchWait_o *v40; // x21
  const MethodInfo *v41; // x2

  if ( (byte_42E6EDD & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardHarvestAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestRewardHarvestAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestRewardHarvestAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestRewardHarvestAction_StateItemLabel_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestRewardHarvestAction_StateNone_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&QuestRewardHarvestAction_StatePlay_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&QuestRewardHarvestAction_StateTouchWait_TypeInfo, v20, v21, v22);
    byte_42E6EDD = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestRewardHarvestAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v24,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestRewardHarvestAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardHarvestAction__o *)v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    fsm = this->fields.fsm;
    v32 = (QuestRewardHarvestAction_StateNone_o *)sub_B5D694(QuestRewardHarvestAction_StateNone_TypeInfo);
    QuestRewardHarvestAction_StateNone___ctor(v32, 0LL);
    if ( !fsm )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v36 = (QuestRewardHarvestAction_StatePlay_o *)sub_B5D694(QuestRewardHarvestAction_StatePlay_TypeInfo);
    QuestRewardHarvestAction_StatePlay___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardHarvestAction__add__);
    v37 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v38 = (QuestRewardHarvestAction_StateItemLabel_o *)sub_B5D694(QuestRewardHarvestAction_StateItemLabel_TypeInfo);
    QuestRewardHarvestAction_StateItemLabel___ctor(v38, 0LL);
    if ( !v37
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v37,
            2,
            (IState_T__o *)v38,
            (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardHarvestAction__add__),
          v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v40 = (QuestRewardHarvestAction_StateTouchWait_o *)sub_B5D694(QuestRewardHarvestAction_StateTouchWait_TypeInfo),
          QuestRewardHarvestAction_StateTouchWait___ctor(v40, 0LL),
          !v39) )
    {
LABEL_9:
      sub_B5D69C(v33, v34);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      3,
      (IState_T__o *)v40,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestRewardHarvestAction__add__);
    QuestRewardHarvestAction__SetState(this, 0, v41);
  }
}


int32_t __fastcall QuestRewardHarvestAction__GetState(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRewardHarvestAction_o *v4; // x19
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x8

  v4 = this;
  if ( (byte_42E6EE1 & 1) == 0 )
  {
    this = (QuestRewardHarvestAction_o *)sub_B5D5C4(
                                           &Method_CStateManager_QuestRewardHarvestAction__getState__,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42E6EE1 = 1;
  }
  fsm = v4->fields.fsm;
  if ( !fsm )
    sub_B5D69C(this, method);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_42E6EE0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)method, v4);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_QuestRewardHarvestAction__Play_b__12_0__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    byte_42E6EE0 = 1;
  }
  this->fields.endAct = end_act;
  sub_B5D560(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_QuestRewardHarvestAction__Play_b__12_0__, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B5D69C(gameObject, v22);
  CommonUI__maskFadein(Instance, fade_in_time, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardHarvestAction__SetState(
        QuestRewardHarvestAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_42E6EE2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardHarvestAction__setState__, state, (_DWORD)method, v3);
    byte_42E6EE2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestRewardHarvestAction__setState__);
}


void __fastcall QuestRewardHarvestAction__Setup(
        QuestRewardHarvestAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  __int64 transform; // x0
  __int64 v73; // x1
  struct UnityEngine_Animation_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Animation_o **p_animation; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct SimpleAnimation_o *v82; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v91; // x21
  System_String_o *name; // x0
  __int64 v93; // x3
  __int64 v94; // x8
  __int64 v95; // x21
  unsigned __int64 v96; // x10
  SimpleAnimation_State_c **v97; // x11
  __int64 v98; // x0
  UnityEngine_Animation_o *v99; // x22
  UnityEngine_Animation_o *v100; // x22
  System_String_o *v101; // x0
  UnityEngine_Animation_o *v102; // x21
  System_String_o *v103; // x0
  SimpleAnimation_o *v104; // x21
  System_String_o *v105; // x0
  __int64 v106; // x3
  __int64 v107; // x8
  __int64 v108; // x21
  unsigned __int64 v109; // x10
  SimpleAnimation_State_c **v110; // x11
  __int64 v111; // x0
  struct UISprite_array *itemSprite; // x8
  __int64 v113; // x9
  __int64 v114; // x22
  __int64 v115; // x23
  UnityEngine_Object_o *v116; // x21
  struct UISprite_array *v117; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *itemLabel; // x8
  __int64 v120; // x9
  __int64 v121; // x22
  __int64 v122; // x23
  UnityEngine_Object_o *v123; // x21
  struct UILabel_array *v124; // x8
  UnityEngine_GameObject_o *v125; // x0
  __int64 v126; // x8
  signed __int64 v127; // x27
  unsigned __int64 v128; // x26
  struct UISprite_array *v129; // x8
  unsigned __int64 max_length; // x9
  struct UILabel_array *v131; // x10
  QuestRewardInfo_o *v132; // x21
  UnityEngine_Object_o *v133; // x22
  struct UILabel_array *v134; // x8
  UnityEngine_Object_o *v135; // x22
  struct UISprite_array *v136; // x8
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_Object_o *Component_UIWidget; // x22
  int32_t type; // w8
  System_String_o *age; // x22
  bool IsCountableWithPlus; // w0
  __int64 *v142; // x8
  __int64 v143; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v144; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v145; // x0
  System_String_o *v146; // x0
  struct UILabel_array *v147; // x8
  UILabel_o *v148; // x23
  System_String_o *v149; // x24
  Il2CppObject *v150; // x0
  struct UILabel_array *v151; // x8
  struct UnityEngine_GameObject_array *imageFrame; // x8
  unsigned __int64 v153; // x9
  UnityEngine_Object_o *v154; // x22
  struct UnityEngine_GameObject_array *v155; // x8
  __int64 v156; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  CommonUI_o *Instance; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  AndroidBackKeyManager_c *v167; // x0
  Il2CppObject *arg1; // [xsp+8h] [xbp-78h]
  int32_t num; // [xsp+14h] [xbp-6Ch] BYREF
  WarEntity_o *v170; // [xsp+18h] [xbp-68h] BYREF
  WarEntity_o *v171; // [xsp+20h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E6EDF & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)infos, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v30, v31, v32);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v36, v37, v38);
    sub_B5D5C4(&int_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_11044/*"QUEST_CLEAR_REWARD_GET"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_24017/*"×"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_1/*""*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_24279/*"＋"*/, v69, v70, v71);
    byte_42E6EDF = 1;
  }
  v171 = 0LL;
  entity = 0LL;
  v170 = 0LL;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  ComponentInChildren_UIWidget = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                     (UnityEngine_Component_o *)transform,
                                                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.animation = ComponentInChildren_UIWidget;
  p_animation = &this->fields.animation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_168;
  v82 = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = v82;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)v82,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v91 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v91[1].monitor;
    if ( !transform )
      goto LABEL_168;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v91, name, 0LL);
    if ( !transform )
      goto LABEL_168;
    v94 = *(_QWORD *)transform;
    v95 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v96 = 0LL;
      v97 = (SimpleAnimation_State_c **)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *(v97 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v96;
        v97 += 2;
        if ( v96 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_16;
      }
      v98 = v94 + 16LL * (*(_DWORD *)v97 + 8) + 312;
    }
    else
    {
LABEL_16:
      v98 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 8LL, v93);
    }
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v98)(v95, *(_QWORD *)(v98 + 8), 0.0);
    v104 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_168;
    transform = (__int64)v104[1].monitor;
    if ( !transform )
      goto LABEL_168;
    v105 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
    transform = (__int64)SimpleAnimation__get_Item(v104, v105, 0LL);
    if ( !transform )
      goto LABEL_168;
    v107 = *(_QWORD *)transform;
    v108 = transform;
    if ( *(_WORD *)(*(_QWORD *)transform + 298LL) )
    {
      v109 = 0LL;
      v110 = (SimpleAnimation_State_c **)(*(_QWORD *)(v107 + 176) + 8LL);
      while ( *(v110 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v109;
        v110 += 2;
        if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)transform + 298LL) )
          goto LABEL_36;
      }
      v111 = v107 + 16LL * (*(_DWORD *)v110 + 6) + 312;
    }
    else
    {
LABEL_36:
      v111 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 6LL, v106);
    }
    (*(void (__fastcall **)(__int64, _QWORD, float))v111)(v108, *(_QWORD *)(v111 + 8), 0.0);
  }
  else
  {
    v99 = *p_animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v99, 0LL, 0LL);
    if ( (transform & 1) != 0 )
    {
      v100 = *p_animation;
      if ( !*p_animation )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( !transform )
        goto LABEL_168;
      v101 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v100, v101, 0LL);
      if ( !transform )
        goto LABEL_168;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
      v102 = *p_animation;
      if ( !v102 )
        goto LABEL_168;
      transform = (__int64)UnityEngine_Animation__get_clip(v102, 0LL);
      if ( !transform )
        goto LABEL_168;
      v103 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
      transform = (__int64)UnityEngine_Animation__get_Item(v102, v103, 0LL);
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
                         (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_168;
  *(_BYTE *)(transform + 101) = 1;
  itemSprite = this->fields.itemSprite;
  if ( itemSprite )
  {
    v113 = *(_QWORD *)&itemSprite->max_length;
    if ( (int)v113 >= 1 )
    {
      v114 = (int)v113;
      v115 = 4LL;
      while ( v115 - 4 < (unsigned __int64)itemSprite->max_length )
      {
        v116 = (UnityEngine_Object_o *)*((_QWORD *)&itemSprite->obj.klass + v115);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v116, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v117 = this->fields.itemSprite;
          if ( !v117 )
            goto LABEL_168;
          if ( v115 - 4 >= (unsigned __int64)v117->max_length )
            break;
          transform = *((_QWORD *)&v117->obj.klass + v115);
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
        if ( v115 - 3 >= v114 )
          goto LABEL_59;
        itemSprite = this->fields.itemSprite;
        ++v115;
        if ( !itemSprite )
          goto LABEL_168;
      }
LABEL_154:
      v156 = sub_B5D6C8(transform);
      sub_B5D668(v156, 0LL);
    }
  }
LABEL_59:
  itemLabel = this->fields.itemLabel;
  if ( itemLabel )
  {
    v120 = *(_QWORD *)&itemLabel->max_length;
    if ( (int)v120 >= 1 )
    {
      v121 = (int)v120;
      v122 = 4LL;
      while ( v122 - 4 < (unsigned __int64)itemLabel->max_length )
      {
        v123 = (UnityEngine_Object_o *)*((_QWORD *)&itemLabel->obj.klass + v122);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v123, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v124 = this->fields.itemLabel;
          if ( !v124 )
            goto LABEL_168;
          if ( v122 - 4 >= (unsigned __int64)v124->max_length )
            goto LABEL_154;
          transform = *((_QWORD *)&v124->obj.klass + v122);
          if ( !transform )
            goto LABEL_168;
          v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          transform = (__int64)GameObjectExtensions__GetParent(v125, 0LL);
          if ( !transform )
            goto LABEL_168;
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_168;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
        }
        if ( v122 - 3 >= v121 )
          goto LABEL_76;
        itemLabel = this->fields.itemLabel;
        ++v122;
        if ( !itemLabel )
          goto LABEL_168;
      }
      goto LABEL_154;
    }
  }
LABEL_76:
  if ( !infos )
LABEL_168:
    sub_B5D69C(transform, v73);
  v126 = *(_QWORD *)&infos->max_length;
  if ( (int)v126 >= 1 )
  {
    v127 = (int)v126;
    v128 = 0LL;
    arg1 = (Il2CppObject *)StringLiteral_24017/*"×"*/;
    while ( 1 )
    {
      v129 = this->fields.itemSprite;
      if ( !v129 )
        goto LABEL_168;
      max_length = v129->max_length;
      if ( (__int64)v128 < (int)max_length )
      {
        v131 = this->fields.itemLabel;
        if ( !v131 )
          goto LABEL_168;
        if ( (__int64)v128 < (int)v131->max_length )
        {
          if ( v128 >= max_length )
            goto LABEL_154;
          v132 = infos->m_Items[v128];
          v133 = (UnityEngine_Object_o *)v129->m_Items[v128];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Equality(v133, 0LL, 0LL);
          if ( (transform & 1) == 0 )
          {
            v134 = this->fields.itemLabel;
            if ( !v134 )
              goto LABEL_168;
            if ( v128 >= v134->max_length )
              goto LABEL_154;
            v135 = (UnityEngine_Object_o *)v134->m_Items[v128];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Equality(v135, 0LL, 0LL);
            if ( (transform & 1) == 0 )
            {
              v136 = this->fields.itemSprite;
              if ( !v136 )
                goto LABEL_168;
              if ( v128 >= v136->max_length )
                goto LABEL_154;
              transform = (__int64)v136->m_Items[v128];
              if ( !transform )
                goto LABEL_168;
              v137 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              Component_UIWidget = (UnityEngine_Object_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                             v137,
                                                             (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
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
      if ( (__int64)++v128 >= v127 )
        goto LABEL_155;
      if ( v128 >= infos->max_length )
        goto LABEL_154;
    }
    if ( !v132 || !Component_UIWidget )
      goto LABEL_168;
    ItemIconComponent__SetGift(
      (ItemIconComponent_o *)Component_UIWidget,
      v132->fields.type,
      v132->fields.objectId,
      v132->fields.num,
      0,
      0LL);
    type = v132->fields.type;
    age = (System_String_o *)StringLiteral_1/*""*/;
    switch ( type )
    {
      case 1:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !transform )
          goto LABEL_168;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                &v170,
                v132->fields.objectId,
                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          goto LABEL_129;
        transform = (__int64)v170;
        if ( !v170 )
          goto LABEL_168;
        v144 = ServantEntity__GetName((ServantEntity_o *)v170, -1, 0, -1, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_127;
        }
        v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        break;
      case 5:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &v171,
                      v132->fields.objectId,
                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !v171 )
          goto LABEL_168;
        v144 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v171->fields.name;
        v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
          || CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
LABEL_127:
          v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v144, 0LL);
          v143 = StringLiteral_24017/*"×"*/;
          age = v146;
          goto LABEL_128;
        }
        break;
      case 2:
        transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !transform )
          goto LABEL_168;
        transform = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)transform,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !transform )
          goto LABEL_168;
        transform = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
                      &entity,
                      v132->fields.objectId,
                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (transform & 1) == 0 )
          goto LABEL_129;
        if ( !entity )
          goto LABEL_168;
        age = entity->fields.age;
        IsCountableWithPlus = ItemType__IsCountableWithPlus(entity->fields.bannerId, 0LL);
        v142 = (__int64 *)&StringLiteral_24279/*"＋"*/;
        if ( !IsCountableWithPlus )
          v142 = &StringLiteral_24017/*"×"*/;
        v143 = *v142;
LABEL_128:
        arg1 = (Il2CppObject *)v143;
LABEL_129:
        transform = System_String__IsNullOrEmpty(age, 0LL);
        if ( (transform & 1) == 0 )
        {
          v147 = this->fields.itemLabel;
          if ( !v147 )
            goto LABEL_168;
          if ( v128 >= v147->max_length )
            goto LABEL_154;
          v148 = v147->m_Items[v128];
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v149 = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"QUEST_CLEAR_REWARD_GET"*/, 0LL);
          num = v132->fields.num;
          v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num);
          transform = (__int64)System_String__Format_44578852(v149, (Il2CppObject *)age, arg1, v150, 0LL);
          if ( !v148 )
            goto LABEL_168;
          UILabel__set_text(v148, (System_String_o *)transform, 0LL);
          v151 = this->fields.itemLabel;
          if ( !v151 )
            goto LABEL_168;
          if ( v128 >= v151->max_length )
            goto LABEL_154;
          transform = (__int64)v151->m_Items[v128];
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
          v153 = imageFrame->max_length;
          if ( (__int64)v128 < (int)v153 )
          {
            if ( v128 >= v153 )
              goto LABEL_154;
            v154 = (UnityEngine_Object_o *)imageFrame->m_Items[v128];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = UnityEngine_Object__op_Inequality(v154, 0LL, 0LL);
            if ( (transform & 1) != 0 )
            {
              v155 = this->fields.imageFrame;
              if ( !v155 )
                goto LABEL_168;
              if ( v128 >= v155->max_length )
                goto LABEL_154;
              transform = (__int64)v155->m_Items[v128];
              if ( !transform )
                goto LABEL_168;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v132->fields.type == 1, 0LL);
            }
          }
        }
        goto LABEL_152;
      default:
        goto LABEL_129;
    }
    j_il2cpp_runtime_class_init_0(v145);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = (__int64)CommonUI__CreateScreeenTouchInfo(Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.screenTouchInfo,
          Component_srcLineSprite,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166);
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
  v167 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v167 = AndroidBackKeyManager_TypeInfo;
  }
  v167->static_fields->ToastEnabled = 1;
}


void __fastcall QuestRewardHarvestAction__Update(QuestRewardHarvestAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CStateManager_QuestRewardHarvestAction__o *fsm; // x0

  if ( (byte_42E6EDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestRewardHarvestAction__update__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E6EDE = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestRewardHarvestAction__update__);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x20
  __int64 v39; // x8
  __int64 v40; // x8
  System_Action_o **v41; // x21
  __int64 v42; // x25
  __int64 v43; // x26
  __int64 v44; // x22
  __int64 v45; // x8
  UnityEngine_Object_o *v46; // x23
  __int64 v47; // x8
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  float y; // s9
  float z; // s10
  ManagerConfig_c *v63; // x0
  int WIDTH; // s14
  MoveObject_o *v65; // x23
  float x; // s11
  float v67; // s12
  float v68; // s13
  System_Action_o *v69; // x24
  System_Action_o *v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x8
  __int64 v78; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7F15 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___, v5, v6, v7);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__, v17, v18, v19);
    sub_B5D5C4(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__, v23, v24, v25);
    sub_B5D5C4(&QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo, v26, v27, v28);
    byte_42E7F15 = 1;
  }
  v29 = sub_B5D694(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_TypeInfo);
  QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0___ctor(
    (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_33;
  *(_QWORD *)(v29 + 16) = that;
  v38 = v29 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v29 + 16), (System_Int32_array **)that, v32, v33, v34, v35, v36, v37);
  if ( !*(_QWORD *)(v29 + 16) )
    goto LABEL_33;
  v39 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 64LL);
  if ( !v39 )
    goto LABEL_33;
  v40 = *(_QWORD *)(v39 + 24);
  if ( (int)v40 >= 1 )
  {
    v41 = (System_Action_o **)(v29 + 24);
    v42 = (int)v40;
    v43 = 4LL;
    while ( 1 )
    {
      v44 = sub_B5D694(QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_TypeInfo);
      QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1___ctor(
        (QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1_o *)v44,
        0LL);
      if ( !*(_QWORD *)v38 )
        break;
      v45 = *(_QWORD *)(*(_QWORD *)v38 + 64LL);
      if ( !v45 )
        break;
      if ( v43 - 4 >= (unsigned __int64)*(unsigned int *)(v45 + 24) )
        goto LABEL_34;
      v46 = *(UnityEngine_Object_o **)(v45 + 8 * v43);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v46, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !*(_QWORD *)v38 )
          break;
        v47 = *(_QWORD *)(*(_QWORD *)v38 + 64LL);
        if ( !v47 )
          break;
        if ( v43 - 4 >= (unsigned __int64)*(unsigned int *)(v47 + 24) )
        {
LABEL_34:
          v78 = sub_B5D6C8(gameObject);
          sub_B5D668(v78, 0LL);
        }
        gameObject = *(UnityEngine_GameObject_o **)(v47 + 8 * v43);
        if ( !gameObject )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v44 )
          break;
        *(_QWORD *)(v44 + 16) = gameObject;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v44 + 16),
          (System_Int32_array **)gameObject,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        gameObject = *(UnityEngine_GameObject_o **)(v44 + 16);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                      *(UnityEngine_GameObject_o **)(v44 + 16),
                                                      (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
        *(_QWORD *)(v44 + 24) = Component_UIWidget;
        sub_B5D560((BattleServantConfConponent_o *)(v44 + 24), Component_UIWidget, v55, v56, v57, v58, v59, v60);
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v44 + 16), 0LL);
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        v63 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v63 = ManagerConfig_TypeInfo;
        }
        WIDTH = v63->static_fields->WIDTH;
        v80 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v44 + 16), 0LL);
        v65 = *(MoveObject_o **)(v44 + 24);
        x = v80.fields.x;
        v67 = v80.fields.y;
        v68 = v80.fields.z;
        v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v69,
          (Il2CppObject *)v44,
          Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_1__begin_b__0__,
          0LL);
        v70 = *v41;
        if ( !*v41 )
        {
          v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v70,
            (Il2CppObject *)v29,
            Method_QuestRewardHarvestAction_StateItemLabel___c__DisplayClass1_0__begin_b__1__,
            0LL);
          *(_QWORD *)(v29 + 24) = v70;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v29 + 24),
            (System_Int32_array **)v70,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
        }
        if ( !v65 )
          break;
        v81.fields.x = (float)WIDTH;
        v81.fields.y = y;
        v81.fields.z = z;
        v82.fields.x = x;
        v82.fields.y = v67;
        v82.fields.z = v68;
        MoveObject__Play(v65, v81, v82, 0.25, v69, v70, 0.0, 17, 0LL);
      }
      v77 = v43 - 3;
      ++v43;
      if ( v77 >= v42 )
        goto LABEL_29;
    }
LABEL_33:
    sub_B5D69C(gameObject, v31);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  struct SimpleAnimation_o *v13; // x20
  System_String_o *v14; // x0
  __int64 v15; // x3
  QuestRewardHarvestAction_StatePlay_c *klass; // x8
  QuestRewardHarvestAction_StatePlay_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  UnityEngine_Animation_o *v26; // x20
  System_String_o *v27; // x0
  UnityEngine_Animation_o *v28; // x19
  System_String_o *v29; // x0
  struct SimpleAnimation_o *v30; // x19
  System_String_o *v31; // x0
  __int64 v32; // x3
  QuestRewardHarvestAction_StatePlay_c *v33; // x8
  QuestRewardHarvestAction_StatePlay_o *v34; // x19
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42E7F16 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42E7F16 = 1;
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
    v22 = that->fields.animation;
    if ( v22 )
    {
      this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v22, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v24 = that->fields.animation;
          if ( !v24 )
            goto LABEL_51;
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_51;
          v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(v24, v25, 0LL);
        }
        v26 = that->fields.animation;
        if ( v26 )
        {
          this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v26, v27, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v28 = that->fields.animation;
              if ( v28 )
              {
                this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(v28, 0LL);
                if ( this )
                {
                  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_Item(v28, v29, 0LL);
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
    sub_B5D69C(this, that);
  }
  v9 = that->fields.simpleAnimation;
  if ( !v9 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v9[1].monitor;
  if ( !this )
    goto LABEL_51;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__IsPlaying(v9, v10, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = that->fields.simpleAnimation;
    if ( !v11 )
      goto LABEL_51;
    this = (QuestRewardHarvestAction_StatePlay_o *)v11[1].monitor;
    if ( !this )
      goto LABEL_51;
    v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__Play_16676044(v11, v12, 0LL);
  }
  v13 = that->fields.simpleAnimation;
  if ( !v13 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v13[1].monitor;
  if ( !this )
    goto LABEL_51;
  v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v13, v14, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  v17 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v20 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v20 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 6LL, v15);
  }
  this = (QuestRewardHarvestAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v20)(
                                                   v17,
                                                   *(_QWORD *)(v20 + 8),
                                                   0.0);
  v30 = that->fields.simpleAnimation;
  if ( !v30 )
    goto LABEL_51;
  this = (QuestRewardHarvestAction_StatePlay_o *)v30[1].monitor;
  if ( !this )
    goto LABEL_51;
  v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardHarvestAction_StatePlay_o *)SimpleAnimation__get_Item(v30, v31, 0LL);
  if ( !this )
    goto LABEL_51;
  v33 = this->klass;
  v34 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v33->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v36 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v37 = (__int64)(&v33[1]._1.namespaze + 2 * *v36);
  }
  else
  {
LABEL_48:
    v37 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 8LL, v32);
  }
  (*(void (__fastcall **)(QuestRewardHarvestAction_StatePlay_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 1.0);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v12; // x20
  System_String_o *v13; // x0

  if ( (byte_42E7F17 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestRewardHarvestAction_StatePlay_o *)sub_B5D5C4(
                                                     &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                     v5,
                                                     v6,
                                                     v7);
    byte_42E7F17 = 1;
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
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_23;
    this = (QuestRewardHarvestAction_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_23;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v9, name, 0LL) )
      return;
LABEL_19:
    this = (QuestRewardHarvestAction_StatePlay_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardHarvestAction__SetState(that, 2, 0LL);
      return;
    }
LABEL_23:
    sub_B5D69C(this, that);
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
    v12 = that->fields.animation;
    if ( !v12 )
      goto LABEL_23;
    this = (QuestRewardHarvestAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_23;
    v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v12, v13, 0LL) )
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
    sub_B5D69C(this, that);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x19
  CommonUI_o *Instance; // x21
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x22

  if ( (byte_42E7F18 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CTouch_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v20, v21, v22);
    sub_B5D5C4(&QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v23, v24, v25);
    byte_42E7F18 = 1;
  }
  v26 = sub_B5D694(QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_24;
  *(_QWORD *)(v26 + 16) = that;
  v35 = v26 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)that, v29, v30, v31, v32, v33, v34);
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
    if ( *(_QWORD *)v35 )
    {
      gameObject = *(UnityEngine_Component_o **)(*(_QWORD *)v35 + 80LL);
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v37 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v37 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
          v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v39,
            (Il2CppObject *)v26,
            Method_QuestRewardHarvestAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v39, 0LL);
            gameObject = *(UnityEngine_Component_o **)v35;
            if ( *(_QWORD *)v35 )
            {
              QuestRewardHarvestAction__SetState((QuestRewardHarvestAction_o *)gameObject, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_B5D69C(gameObject, v28);
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
    sub_B5D69C(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}